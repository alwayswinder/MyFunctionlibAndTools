// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "lincBPI/Public/MyDeveloperSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyDeveloperSettings() {}
// Cross Module References
	LINCBPI_API UClass* Z_Construct_UClass_UMyDeveloperSettings_NoRegister();
	LINCBPI_API UClass* Z_Construct_UClass_UMyDeveloperSettings();
	ENGINE_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_lincBPI();
// End Cross Module References
	void UMyDeveloperSettings::StaticRegisterNativesUMyDeveloperSettings()
	{
	}
	UClass* Z_Construct_UClass_UMyDeveloperSettings_NoRegister()
	{
		return UMyDeveloperSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMyDeveloperSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyHostIP_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MyHostIP;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyDeveloperSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_lincBPI,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyDeveloperSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "MyDeveloperSettings" },
		{ "IncludePath", "MyDeveloperSettings.h" },
		{ "ModuleRelativePath", "Public/MyDeveloperSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyDeveloperSettings_Statics::NewProp_MyHostIP_MetaData[] = {
		{ "Category", "CommonString" },
		{ "ModuleRelativePath", "Public/MyDeveloperSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMyDeveloperSettings_Statics::NewProp_MyHostIP = { "MyHostIP", nullptr, (EPropertyFlags)0x0010000000004015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyDeveloperSettings, MyHostIP), METADATA_PARAMS(Z_Construct_UClass_UMyDeveloperSettings_Statics::NewProp_MyHostIP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyDeveloperSettings_Statics::NewProp_MyHostIP_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyDeveloperSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyDeveloperSettings_Statics::NewProp_MyHostIP,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyDeveloperSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyDeveloperSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMyDeveloperSettings_Statics::ClassParams = {
		&UMyDeveloperSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMyDeveloperSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMyDeveloperSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UMyDeveloperSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyDeveloperSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyDeveloperSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMyDeveloperSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyDeveloperSettings, 847574258);
	template<> LINCBPI_API UClass* StaticClass<UMyDeveloperSettings>()
	{
		return UMyDeveloperSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyDeveloperSettings(Z_Construct_UClass_UMyDeveloperSettings, &UMyDeveloperSettings::StaticClass, TEXT("/Script/lincBPI"), TEXT("UMyDeveloperSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyDeveloperSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
