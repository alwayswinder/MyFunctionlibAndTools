// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyCustomAssetModule/Public/MyCustomAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyCustomAsset() {}
// Cross Module References
	MYCUSTOMASSETMODULE_API UClass* Z_Construct_UClass_UMyCustomAsset_NoRegister();
	MYCUSTOMASSETMODULE_API UClass* Z_Construct_UClass_UMyCustomAsset();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_MyCustomAssetModule();
	MYCUSTOMASSETMODULE_API UFunction* Z_Construct_UFunction_UMyCustomAsset_Inc();
// End Cross Module References
	void UMyCustomAsset::StaticRegisterNativesUMyCustomAsset()
	{
		UClass* Class = UMyCustomAsset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Inc", &UMyCustomAsset::execInc },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMyCustomAsset_Inc_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyCustomAsset_Inc_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyCustomAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyCustomAsset_Inc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyCustomAsset, nullptr, "Inc", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyCustomAsset_Inc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyCustomAsset_Inc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyCustomAsset_Inc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyCustomAsset_Inc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMyCustomAsset_NoRegister()
	{
		return UMyCustomAsset::StaticClass();
	}
	struct Z_Construct_UClass_UMyCustomAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IntValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyCustomAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MyCustomAssetModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMyCustomAsset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyCustomAsset_Inc, "Inc" }, // 2043311042
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyCustomAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MyCustomAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MyCustomAsset.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyCustomAsset_Statics::NewProp_IntValue_MetaData[] = {
		{ "Category", "MyCustomAsset" },
		{ "ModuleRelativePath", "Public/MyCustomAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMyCustomAsset_Statics::NewProp_IntValue = { "IntValue", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyCustomAsset, IntValue), METADATA_PARAMS(Z_Construct_UClass_UMyCustomAsset_Statics::NewProp_IntValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyCustomAsset_Statics::NewProp_IntValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyCustomAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyCustomAsset_Statics::NewProp_IntValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyCustomAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyCustomAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMyCustomAsset_Statics::ClassParams = {
		&UMyCustomAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMyCustomAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMyCustomAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMyCustomAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyCustomAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyCustomAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMyCustomAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyCustomAsset, 3848215844);
	template<> MYCUSTOMASSETMODULE_API UClass* StaticClass<UMyCustomAsset>()
	{
		return UMyCustomAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyCustomAsset(Z_Construct_UClass_UMyCustomAsset, &UMyCustomAsset::StaticClass, TEXT("/Script/MyCustomAssetModule"), TEXT("UMyCustomAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyCustomAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
