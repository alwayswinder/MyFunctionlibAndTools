// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "lincBPI/Public/lincBPIBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodelincBPIBPLibrary() {}
// Cross Module References
	LINCBPI_API UClass* Z_Construct_UClass_UlincBPIBPLibrary_NoRegister();
	LINCBPI_API UClass* Z_Construct_UClass_UlincBPIBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_lincBPI();
	LINCBPI_API UFunction* Z_Construct_UFunction_UlincBPIBPLibrary_AddRowDT();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	LINCBPI_API UFunction* Z_Construct_UFunction_UlincBPIBPLibrary_WriteToText_String();
// End Cross Module References
	void UlincBPIBPLibrary::StaticRegisterNativesUlincBPIBPLibrary()
	{
		UClass* Class = UlincBPIBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddRowDT", &UlincBPIBPLibrary::execAddRowDT },
			{ "WriteToText_String", &UlincBPIBPLibrary::execWriteToText_String },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UlincBPIBPLibrary_AddRowDT_Statics
	{
		struct lincBPIBPLibrary_eventAddRowDT_Parms
		{
			UDataTable* DT;
			FName NewRowName;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NewRowName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DT;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UlincBPIBPLibrary_AddRowDT_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((lincBPIBPLibrary_eventAddRowDT_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UlincBPIBPLibrary_AddRowDT_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(lincBPIBPLibrary_eventAddRowDT_Parms), &Z_Construct_UFunction_UlincBPIBPLibrary_AddRowDT_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UlincBPIBPLibrary_AddRowDT_Statics::NewProp_NewRowName = { "NewRowName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(lincBPIBPLibrary_eventAddRowDT_Parms, NewRowName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UlincBPIBPLibrary_AddRowDT_Statics::NewProp_DT = { "DT", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(lincBPIBPLibrary_eventAddRowDT_Parms, DT), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UlincBPIBPLibrary_AddRowDT_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlincBPIBPLibrary_AddRowDT_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlincBPIBPLibrary_AddRowDT_Statics::NewProp_NewRowName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlincBPIBPLibrary_AddRowDT_Statics::NewProp_DT,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlincBPIBPLibrary_AddRowDT_Statics::Function_MetaDataParams[] = {
		{ "Category", "lincBPI" },
		{ "ModuleRelativePath", "Public/lincBPIBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UlincBPIBPLibrary_AddRowDT_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UlincBPIBPLibrary, nullptr, "AddRowDT", sizeof(lincBPIBPLibrary_eventAddRowDT_Parms), Z_Construct_UFunction_UlincBPIBPLibrary_AddRowDT_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UlincBPIBPLibrary_AddRowDT_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UlincBPIBPLibrary_AddRowDT_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UlincBPIBPLibrary_AddRowDT_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UlincBPIBPLibrary_AddRowDT()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UlincBPIBPLibrary_AddRowDT_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UlincBPIBPLibrary_WriteToText_String_Statics
	{
		struct lincBPIBPLibrary_eventWriteToText_String_Parms
		{
			FString filename;
			FString content;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_content;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_filename;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UlincBPIBPLibrary_WriteToText_String_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((lincBPIBPLibrary_eventWriteToText_String_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UlincBPIBPLibrary_WriteToText_String_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(lincBPIBPLibrary_eventWriteToText_String_Parms), &Z_Construct_UFunction_UlincBPIBPLibrary_WriteToText_String_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UlincBPIBPLibrary_WriteToText_String_Statics::NewProp_content = { "content", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(lincBPIBPLibrary_eventWriteToText_String_Parms, content), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UlincBPIBPLibrary_WriteToText_String_Statics::NewProp_filename = { "filename", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(lincBPIBPLibrary_eventWriteToText_String_Parms, filename), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UlincBPIBPLibrary_WriteToText_String_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlincBPIBPLibrary_WriteToText_String_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlincBPIBPLibrary_WriteToText_String_Statics::NewProp_content,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlincBPIBPLibrary_WriteToText_String_Statics::NewProp_filename,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlincBPIBPLibrary_WriteToText_String_Statics::Function_MetaDataParams[] = {
		{ "Category", "lincBPI" },
		{ "ModuleRelativePath", "Public/lincBPIBPLibrary.h" },
		{ "ToolTip", "UFUNCTION(BlueprintCallable, meta = (DisplayName = \"Execute Sample function\", Keywords = \"lincBPI sample test testing\"), Category = \"lincBPITesting\")\nstatic float lincBPISampleFunction(float Param);" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UlincBPIBPLibrary_WriteToText_String_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UlincBPIBPLibrary, nullptr, "WriteToText_String", sizeof(lincBPIBPLibrary_eventWriteToText_String_Parms), Z_Construct_UFunction_UlincBPIBPLibrary_WriteToText_String_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UlincBPIBPLibrary_WriteToText_String_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UlincBPIBPLibrary_WriteToText_String_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UlincBPIBPLibrary_WriteToText_String_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UlincBPIBPLibrary_WriteToText_String()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UlincBPIBPLibrary_WriteToText_String_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UlincBPIBPLibrary_NoRegister()
	{
		return UlincBPIBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UlincBPIBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UlincBPIBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_lincBPI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UlincBPIBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UlincBPIBPLibrary_AddRowDT, "AddRowDT" }, // 2601539389
		{ &Z_Construct_UFunction_UlincBPIBPLibrary_WriteToText_String, "WriteToText_String" }, // 4168117751
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UlincBPIBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "lincBPIBPLibrary.h" },
		{ "ModuleRelativePath", "Public/lincBPIBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UlincBPIBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UlincBPIBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UlincBPIBPLibrary_Statics::ClassParams = {
		&UlincBPIBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UlincBPIBPLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UlincBPIBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UlincBPIBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UlincBPIBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UlincBPIBPLibrary, 2920060281);
	template<> LINCBPI_API UClass* StaticClass<UlincBPIBPLibrary>()
	{
		return UlincBPIBPLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UlincBPIBPLibrary(Z_Construct_UClass_UlincBPIBPLibrary, &UlincBPIBPLibrary::StaticClass, TEXT("/Script/lincBPI"), TEXT("UlincBPIBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UlincBPIBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
