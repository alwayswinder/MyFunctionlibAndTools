// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyCustomAssetEditorModule/Public/MyCustomAssetExporter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyCustomAssetExporter() {}
// Cross Module References
	MYCUSTOMASSETEDITORMODULE_API UClass* Z_Construct_UClass_UMyCustomAssetExporter_NoRegister();
	MYCUSTOMASSETEDITORMODULE_API UClass* Z_Construct_UClass_UMyCustomAssetExporter();
	ENGINE_API UClass* Z_Construct_UClass_UExporter();
	UPackage* Z_Construct_UPackage__Script_MyCustomAssetEditorModule();
// End Cross Module References
	void UMyCustomAssetExporter::StaticRegisterNativesUMyCustomAssetExporter()
	{
	}
	UClass* Z_Construct_UClass_UMyCustomAssetExporter_NoRegister()
	{
		return UMyCustomAssetExporter::StaticClass();
	}
	struct Z_Construct_UClass_UMyCustomAssetExporter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyCustomAssetExporter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UExporter,
		(UObject* (*)())Z_Construct_UPackage__Script_MyCustomAssetEditorModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyCustomAssetExporter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyCustomAssetExporter.h" },
		{ "ModuleRelativePath", "Public/MyCustomAssetExporter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyCustomAssetExporter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyCustomAssetExporter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMyCustomAssetExporter_Statics::ClassParams = {
		&UMyCustomAssetExporter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMyCustomAssetExporter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyCustomAssetExporter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyCustomAssetExporter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMyCustomAssetExporter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyCustomAssetExporter, 1572124714);
	template<> MYCUSTOMASSETEDITORMODULE_API UClass* StaticClass<UMyCustomAssetExporter>()
	{
		return UMyCustomAssetExporter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyCustomAssetExporter(Z_Construct_UClass_UMyCustomAssetExporter, &UMyCustomAssetExporter::StaticClass, TEXT("/Script/MyCustomAssetEditorModule"), TEXT("UMyCustomAssetExporter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyCustomAssetExporter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
