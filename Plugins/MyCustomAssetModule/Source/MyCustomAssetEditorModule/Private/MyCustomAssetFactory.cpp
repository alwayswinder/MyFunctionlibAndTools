// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCustomAssetFactory.h"
#include "MyCustomAsset.h"
#include "Misc\FileHelper.h"

UMyCustomAssetFactory::UMyCustomAssetFactory(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	Formats.Add(FString(TEXT("myfile;")));                                               
	SupportedClass = UMyCustomAsset::StaticClass();
	bCreateNew = false;
	bEditAfterNew = true;
	bEditorImport = true;
}

UObject* UMyCustomAssetFactory::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags,
	UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<UMyCustomAsset>(InParent, InClass, InName, Flags);
}

UObject* UMyCustomAssetFactory::FactoryCreateFile(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags,
	const FString& Filename, const TCHAR* Parms, FFeedbackContext* Warn, bool& bOutOperationCanceled)
{
	UMyCustomAsset* CustomAsset = nullptr;
	TArray<uint8> Bytes;

	if (FFileHelper::LoadFileToArray(Bytes, *Filename) && Bytes.Num() >= sizeof(int32))
	{
		CustomAsset = NewObject<UMyCustomAsset>(InParent, InClass, InName, Flags);
		for (uint32 i = 0; i < sizeof(int32); ++i)
		{
			CustomAsset->IntValue |= Bytes[i] << (i * 8);
		}
	}
	bOutOperationCanceled = false;

	return CustomAsset;
}

bool UMyCustomAssetFactory::ShouldShowInNewMenu() const
{
	return true;
}

bool UMyCustomAssetFactory::CanReimport(UObject* Obj, TArray<FString>& OutFilenames)
{
	return true;
}

void UMyCustomAssetFactory::SetReimportPaths(UObject* Obj, const TArray<FString>& NewReimportPaths)
{

}

EReimportResult::Type UMyCustomAssetFactory::Reimport(UObject* Obj)
{
	if (IsValid(Obj))
	{
		UMyCustomAsset* MyAsset = Cast<UMyCustomAsset>(Obj);
		if (MyAsset)
		{
			UE_LOG(LogTemp, Warning, TEXT(__FUNCTION__"[%d]"), MyAsset->IntValue);
		}
		bool OutCancel = false;
		UObject* NewObject = ImportObject(Obj->GetClass(), Obj->GetOuter(), Obj->GetFName(), Obj->GetFlags(),
			PreferredReimportPath, nullptr, OutCancel);
		if (!OutCancel)
		{
			UMyCustomAsset* NewAsset = Cast<UMyCustomAsset>(NewObject);
			if (NewAsset)
			{
				UE_LOG(LogTemp, Warning, TEXT(__FUNCTION__"[%d]"), NewAsset->IntValue);
			}
			return EReimportResult::Succeeded;
		}
	}
	return EReimportResult::Failed;
}
