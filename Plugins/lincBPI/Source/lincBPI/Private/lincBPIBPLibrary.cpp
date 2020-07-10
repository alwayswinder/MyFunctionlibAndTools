// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "lincBPIBPLibrary.h"
#include "lincBPI.h"
#include <iostream>
#include <fstream>
#include <string>
#include "Engine\DataTable.h"
#include "DataTableEditorUtils.h"

using namespace std;


bool UlincBPIBPLibrary::SaveAsFile(FString filename, FString content, bool IsAppend, bool IsAutoBrAtStart)
{
	FString BasePath = FPaths::ProjectSavedDir();
	BasePath = BasePath + '/' + filename;
	string path = string(TCHAR_TO_UTF8(*BasePath));
	fstream file;
	if (IsAppend)
	{
		file.open(path, ios::app);
	}
	else
	{
		file.open(path, ios::out);
	}
	if (!file)
	{
		return false;
	}
	string wcontext = string(TCHAR_TO_UTF8(*content));
	if (IsAutoBrAtStart)
	{
		file << endl;
	}
	file << wcontext;
	file.close();
	return true;
}

bool UlincBPIBPLibrary::Generic_AddRowDT(void* Target, UProperty* Pro, UDataTable* DT, FName NewRowName)
{
	if (!Target || !Pro || !DT)
	{
		return false;
	}
	UStructProperty* StructPro = Cast<UStructProperty>(Pro);
	if (StructPro->Struct != DT->RowStruct)
	{
		return false;
	}
	TMap<FName, uint8*>& DTMap = const_cast<TMap<FName, uint8*>&>(DT->GetRowMap());
	UScriptStruct& EmptyUsingStruct = *DT->RowStruct;
	uint8* NewRawRowData = (uint8*)FMemory::Malloc(EmptyUsingStruct.GetStructureSize());
	EmptyUsingStruct.InitializeStruct(NewRawRowData);
	EmptyUsingStruct.CopyScriptStruct(NewRawRowData, Target);
	DTMap.Add(NewRowName, NewRawRowData);
	DT->Modify();
	FDataTableEditorUtils::BroadcastPostChange(DT, FDataTableEditorUtils::EDataTableChangeInfo::RowData);
	FDataTableEditorUtils::BroadcastPostChange(DT, FDataTableEditorUtils::EDataTableChangeInfo::RowList);
	return true;
}

void UlincBPIBPLibrary::Generic_SortUserDefinedStructArray(void* TargetArray, const UArrayProperty* ArrayProp,
	UObject* OwnerObject, UFunction* SortRuleFunc)
{
	if (!SortRuleFunc || !OwnerObject || !TargetArray)
	{
		return;
	}
	UBoolProperty* ReturnParam = Cast<UBoolProperty>(SortRuleFunc->GetReturnProperty());
	if (!ReturnParam)
	{
		return;
	}
	// Begin sort array
	FScriptArrayHelper ArrayHelper(ArrayProp, TargetArray);
	UProperty* InnerProp = ArrayProp->Inner;

	const int32 Len = ArrayHelper.Num();
	const int32 PropertySize = InnerProp->ElementSize * InnerProp->ArrayDim;

	uint8* Parameters = (uint8*)FMemory::Malloc(PropertySize * 2 + 1);

	for (int32 i = 0; i < Len; i++)
	{
		for (int32 j = 0; j < Len - i - 1; j++)
		{
			FMemory::Memzero(Parameters, PropertySize * 2 + 1);
			InnerProp->CopyCompleteValueFromScriptVM(Parameters, ArrayHelper.GetRawPtr(j));
			InnerProp->CopyCompleteValueFromScriptVM(Parameters + PropertySize, ArrayHelper.GetRawPtr(j + 1));
			OwnerObject->ProcessEvent(SortRuleFunc, Parameters);
			if (ReturnParam && ReturnParam->GetPropertyValue(Parameters + PropertySize * 2))
			{
				ArrayHelper.SwapValues(j, j + 1);
			}
		}

	}
	FMemory::Free(Parameters);
	// end sort array
}

/*
#if WITH_EDITOR
#include "IImageWrapper.h"
#include "ImageWriteQueue/Public/ImageWriteTypes.h"
#include "ImageUtils.h"
#include "GameFramework/PlayerController.h"
#include "Engine/LocalPlayer.h"
#include "IImageWrapperModule.h"
#include "Kismet/KismetRenderingLibrary.h"
#include "ObjectTools.h"
#include "FileHelpers.h"
#include "AssetRegistryModule.h"
#include "AssetToolsModule.h"
#include "Head/CONPCHeadCustomData.h"
#include "Body/CONPCBodyCustomData.h"
#include "HAL/FileManager.h"
#include "HAL/PlatformFilemanager.h"
#include "AllPluginsPublicLibrary.h"
#endif

bool UlincBPIBPLibrary::GetAssetThumbnail(UObject* Object)
{
	FAssetData AssetData = FAssetData(Object, true);
	const FString ObjectFullName = AssetData.GetFullName();
	const FString PackageName = AssetData.PackageName.ToString();

	UPackage* AssetPackage = FindObject<UPackage>(NULL, *PackageName);
	if (ensure(AssetPackage))
	{
		FName ObjectFullNameFName(*ObjectFullName);
		FObjectThumbnail* CachedThumbnail = AssetPackage->ThumbnailMap->Find(ObjectFullNameFName);
	}
	return true;
}

void UlincBPIBPLibrary::DrawAssetImage(APlayerController* CurPlayer, FString AssetName)
{
#if WITH_EDITOR
	if (!CurPlayer)
	{
		return;
	}
	ULocalPlayer* LocalPlayer = Cast<ULocalPlayer>(CurPlayer->Player);

	FViewport* Viewport = LocalPlayer->ViewportClient->Viewport;
	//遍历获取技能资源
	TArray<FAssetData> arrayAssetData;
	FAssetRegistryModule& assetRegistryModule = FModuleManager::GetModuleChecked<FAssetRegistryModule>("AssetRegistry");
	FARFilter filter;
	filter.PackagePaths.Add("/Game/Editor");
	filter.ClassNames.Add(UCONPCHeadCustomData::StaticClass()->GetFName());
	filter.ClassNames.Add(UCONPCBodyCustomData::StaticClass()->GetFName());
	filter.bRecursivePaths = true;
	filter.bRecursiveClasses = true;
	assetRegistryModule.Get().GetAssets(filter, arrayAssetData);
	//capture the thumbnail
	uint32 SrcWidth = Viewport->GetSizeXY().X;
	uint32 SrcHeight = Viewport->GetSizeXY().Y;
	// Read the contents of the viewport into an array.
	TArray<FColor> OrigBitmap;
	if (Viewport->ReadPixels(OrigBitmap))
	{
		check(OrigBitmap.Num() == SrcWidth * SrcHeight);

		//pin to smallest value
		int32 CropSize = FMath::Min<uint32>(SrcWidth, SrcHeight);
		//pin to max size
		int32 ScaledSize = FMath::Min<uint32>(ThumbnailTools::DefaultThumbnailSize, CropSize);

		//calculations for cropping
		TArray<FColor> CroppedBitmap;
		CroppedBitmap.AddUninitialized(CropSize*CropSize);
		//Crop the image
		int32 CroppedSrcTop = (SrcHeight - CropSize) / 2;
		int32 CroppedSrcLeft = (SrcWidth - CropSize) / 2;
		for (int32 Row = 0; Row < CropSize; ++Row)
		{
			//Row*Side of a row*byte per color
			int32 SrcPixelIndex = (CroppedSrcTop + Row)*SrcWidth + CroppedSrcLeft;
			const void* SrcPtr = &(OrigBitmap[SrcPixelIndex]);
			void* DstPtr = &(CroppedBitmap[Row*CropSize]);
			FMemory::Memcpy(DstPtr, SrcPtr, CropSize * 4);
		}

		//Scale image down if needed
		TArray<FColor> ScaledBitmap;
		if (ScaledSize < CropSize)
		{
			FImageUtils::ImageResize(CropSize, CropSize, CroppedBitmap, ScaledSize, ScaledSize, ScaledBitmap, true);
		}
		else
		{
			//just copy the data over. sizes are the same
			ScaledBitmap = CroppedBitmap;
		}

		//setup actual thumbnail
		FObjectThumbnail TempThumbnail;
		TempThumbnail.SetImageSize(ScaledSize, ScaledSize);
		TArray<uint8>& ThumbnailByteArray = TempThumbnail.AccessImageData();

		// Copy scaled image into destination thumb
		int32 MemorySize = ScaledSize * ScaledSize * sizeof(FColor);
		ThumbnailByteArray.AddUninitialized(MemorySize);
		FMemory::Memcpy(&(ThumbnailByteArray[0]), &(ScaledBitmap[0]), MemorySize);

		FAssetToolsModule& AssetToolsModule = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools");

		//check if each asset should receive the new thumb nail
		for (auto AssetIt : arrayAssetData)
		{
			UObject* pObject = AssetIt.GetAsset();
			FString ObjectName;
			pObject->GetName(ObjectName);
			if (!ObjectName.Equals(AssetName))
			{
				continue;
			}
			const FAssetData& CurrentAsset = AssetIt;

			//assign the thumbnail and dirty
			const FString ObjectFullName = CurrentAsset.GetFullName();

			UPackage* AssetPackage = pObject->GetOutermost();
			if (ensure(AssetPackage))
			{
				FObjectThumbnail* NewThumbnail = ThumbnailTools::CacheThumbnail(ObjectFullName, &TempThumbnail, AssetPackage);
				if (ensure(NewThumbnail))
				{
					//we need to indicate that the package needs to be resaved
					AssetPackage->MarkPackageDirty();

					// Let the content browser know that we've changed the thumbnail
					NewThumbnail->MarkAsDirty();

					// Signal that the asset was changed if it is loaded so thumbnail pools will update
					if (CurrentAsset.IsAssetLoaded())
					{
						CurrentAsset.GetAsset()->PostEditChange();
					}

					//Set that thumbnail as a valid custom thumbnail so it'll be saved out
					NewThumbnail->SetCreatedAfterCustomThumbsEnabled();
				}
				TArray<UPackage*> PackagesToSave;
				PackagesToSave.Add(AssetPackage);

				UEditorLoadingAndSavingUtils::SavePackages(PackagesToSave, false);
			}

		}
	}
#endif
}

UTexture2D* UCOAssetLibrary::GetTexture2DByAsset(UObject* CurObject)
{
#if WITH_EDITOR
	if (!CurObject)
	{
		return nullptr;
	}
	int32 _imageRes = 256;
	int32 _imageHight = 256;
	FString PackageFilename;
	FPackageName::DoesPackageExist(CurObject->GetPathName(), NULL, &PackageFilename);
	TSet<FName>ObjectFullNames;
	FThumbnailMap ThumbnailMap;
	FName ObjectFullName = FName(*CurObject->GetFullName());
	ObjectFullNames.Add(ObjectFullName);

	ThumbnailTools::LoadThumbnailsFromPackage(PackageFilename, ObjectFullNames, ThumbnailMap);
	FObjectThumbnail* _objectThumnail = ThumbnailTools::CacheThumbnail(CurObject->GetFullName(), ThumbnailMap.Find(ObjectFullName), CurObject->GetOutermost());
	if (_objectThumnail)
	{

		const TArray<uint8>& _myData = _objectThumnail->GetUncompressedImageData();

		TArray<FColor> _imageRawColor;
		for (int i = 0; i < _myData.Num(); i += 4)
		{
			_imageRawColor.Add(FColor(_myData[i + 2], _myData[i + 1], _myData[i], _myData[i + 3]));
		}
		//FString _fileName = OutputPath.ToString() + "/" + obj->GetName() + FString(".jpg");
		IImageWrapperModule& ImageWrapperModule = FModuleManager::LoadModuleChecked<IImageWrapperModule>(FName("ImageWrapper"));
		TSharedPtr<IImageWrapper> ImageWrapper = ImageWrapperModule.CreateImageWrapper(EImageFormat::JPEG);
		ImageWrapper->SetRaw(_imageRawColor.GetData(), _imageRawColor.GetAllocatedSize(), _imageRes, _imageHight, ERGBFormat::BGRA, 8);
		const TArray<uint8>& _ImageData = ImageWrapper->GetCompressed(100);
		UTexture2D*  MyTexture2D = FImageUtils::ImportBufferAsTexture2D(_ImageData);
		return MyTexture2D;
	}
#endif
	return nullptr;
}
*/
/*
bool UlincBPIBPLibrary::AddRowDT(UDataTable* DT, FName NewRowName, const UProperty* CustomStruct)
{
	if (DT)
	{

		const TArray<FName> ExisitngNames = DT->GetRowNames();
		if (ExisitngNames.Contains(NewRowName))
		{
			return false;
		}
		FDataTableEditorUtils::AddRow(DT, NewRowName);
		//DT->AddRow(NewRowName, RowData);
		return true;
	}
	return false;
}*/