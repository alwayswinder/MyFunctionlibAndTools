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
	LINCBPI_API UFunction* Z_Construct_UFunction_UlincBPIBPLibrary_AddDataTableRow();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	LINCBPI_API UFunction* Z_Construct_UFunction_UlincBPIBPLibrary_AddRowDT();
	LINCBPI_API UFunction* Z_Construct_UFunction_UlincBPIBPLibrary_SaveAsFile();
	LINCBPI_API UFunction* Z_Construct_UFunction_UlincBPIBPLibrary_SortUserDefinedStructArray();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	LINCBPI_API UFunction* Z_Construct_UFunction_UlincBPIBPLibrary_UStructToJsonObjectString();
// End Cross Module References
	void UlincBPIBPLibrary::StaticRegisterNativesUlincBPIBPLibrary()
	{
		UClass* Class = UlincBPIBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddDataTableRow", &UlincBPIBPLibrary::execAddDataTableRow },
			{ "AddRowDT", &UlincBPIBPLibrary::execAddRowDT },
			{ "SaveAsFile", &UlincBPIBPLibrary::execSaveAsFile },
			{ "SortUserDefinedStructArray", &UlincBPIBPLibrary::execSortUserDefinedStructArray },
			{ "UStructToJsonObjectString", &UlincBPIBPLibrary::execUStructToJsonObjectString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UlincBPIBPLibrary_AddDataTableRow_Statics
	{
		struct lincBPIBPLibrary_eventAddDataTableRow_Parms
		{
			FTableRowBase NewRowData;
			UDataTable* Table;
			FName RowName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RowName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Table;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewRowData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UlincBPIBPLibrary_AddDataTableRow_Statics::NewProp_RowName = { "RowName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(lincBPIBPLibrary_eventAddDataTableRow_Parms, RowName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UlincBPIBPLibrary_AddDataTableRow_Statics::NewProp_Table = { "Table", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(lincBPIBPLibrary_eventAddDataTableRow_Parms, Table), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UlincBPIBPLibrary_AddDataTableRow_Statics::NewProp_NewRowData = { "NewRowData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(lincBPIBPLibrary_eventAddDataTableRow_Parms, NewRowData), Z_Construct_UScriptStruct_FTableRowBase, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UlincBPIBPLibrary_AddDataTableRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlincBPIBPLibrary_AddDataTableRow_Statics::NewProp_RowName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlincBPIBPLibrary_AddDataTableRow_Statics::NewProp_Table,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlincBPIBPLibrary_AddDataTableRow_Statics::NewProp_NewRowData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlincBPIBPLibrary_AddDataTableRow_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "lincBPI" },
		{ "CustomStructureParam", "NewRowData" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Public/lincBPIBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UlincBPIBPLibrary_AddDataTableRow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UlincBPIBPLibrary, nullptr, "AddDataTableRow", nullptr, nullptr, sizeof(lincBPIBPLibrary_eventAddDataTableRow_Parms), Z_Construct_UFunction_UlincBPIBPLibrary_AddDataTableRow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UlincBPIBPLibrary_AddDataTableRow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UlincBPIBPLibrary_AddDataTableRow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UlincBPIBPLibrary_AddDataTableRow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UlincBPIBPLibrary_AddDataTableRow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UlincBPIBPLibrary_AddDataTableRow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UlincBPIBPLibrary_AddRowDT_Statics
	{
		struct lincBPIBPLibrary_eventAddRowDT_Parms
		{
			int32 CustomStruct;
			UDataTable* DT;
			FName NewRowName;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NewRowName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DT;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CustomStruct;
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UlincBPIBPLibrary_AddRowDT_Statics::NewProp_CustomStruct = { "CustomStruct", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(lincBPIBPLibrary_eventAddRowDT_Parms, CustomStruct), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UlincBPIBPLibrary_AddRowDT_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlincBPIBPLibrary_AddRowDT_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlincBPIBPLibrary_AddRowDT_Statics::NewProp_NewRowName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlincBPIBPLibrary_AddRowDT_Statics::NewProp_DT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlincBPIBPLibrary_AddRowDT_Statics::NewProp_CustomStruct,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlincBPIBPLibrary_AddRowDT_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "Object" },
		{ "Category", "lincBPI" },
		{ "Comment", "/*????Datatable?????\xde\xb8?\xd2\xbb??*/" },
		{ "CustomStructureParam", "CustomStruct" },
		{ "CustomThunk", "true" },
		{ "DefaultToSelf", "Object" },
		{ "DisplayName", "Add Datatable Row" },
		{ "ModuleRelativePath", "Public/lincBPIBPLibrary.h" },
		{ "ToolTip", "????Datatable?????\xde\xb8?\xd2\xbb??" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UlincBPIBPLibrary_AddRowDT_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UlincBPIBPLibrary, nullptr, "AddRowDT", nullptr, nullptr, sizeof(lincBPIBPLibrary_eventAddRowDT_Parms), Z_Construct_UFunction_UlincBPIBPLibrary_AddRowDT_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UlincBPIBPLibrary_AddRowDT_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UlincBPIBPLibrary_AddRowDT_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UlincBPIBPLibrary_AddRowDT_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UlincBPIBPLibrary_AddRowDT()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UlincBPIBPLibrary_AddRowDT_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UlincBPIBPLibrary_SaveAsFile_Statics
	{
		struct lincBPIBPLibrary_eventSaveAsFile_Parms
		{
			FString filename;
			FString content;
			bool IsAppend;
			bool IsAutoBrAtStart;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_IsAutoBrAtStart_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsAutoBrAtStart;
		static void NewProp_IsAppend_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsAppend;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_content;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_filename;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UlincBPIBPLibrary_SaveAsFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((lincBPIBPLibrary_eventSaveAsFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UlincBPIBPLibrary_SaveAsFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(lincBPIBPLibrary_eventSaveAsFile_Parms), &Z_Construct_UFunction_UlincBPIBPLibrary_SaveAsFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UlincBPIBPLibrary_SaveAsFile_Statics::NewProp_IsAutoBrAtStart_SetBit(void* Obj)
	{
		((lincBPIBPLibrary_eventSaveAsFile_Parms*)Obj)->IsAutoBrAtStart = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UlincBPIBPLibrary_SaveAsFile_Statics::NewProp_IsAutoBrAtStart = { "IsAutoBrAtStart", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(lincBPIBPLibrary_eventSaveAsFile_Parms), &Z_Construct_UFunction_UlincBPIBPLibrary_SaveAsFile_Statics::NewProp_IsAutoBrAtStart_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UlincBPIBPLibrary_SaveAsFile_Statics::NewProp_IsAppend_SetBit(void* Obj)
	{
		((lincBPIBPLibrary_eventSaveAsFile_Parms*)Obj)->IsAppend = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UlincBPIBPLibrary_SaveAsFile_Statics::NewProp_IsAppend = { "IsAppend", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(lincBPIBPLibrary_eventSaveAsFile_Parms), &Z_Construct_UFunction_UlincBPIBPLibrary_SaveAsFile_Statics::NewProp_IsAppend_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UlincBPIBPLibrary_SaveAsFile_Statics::NewProp_content = { "content", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(lincBPIBPLibrary_eventSaveAsFile_Parms, content), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UlincBPIBPLibrary_SaveAsFile_Statics::NewProp_filename = { "filename", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(lincBPIBPLibrary_eventSaveAsFile_Parms, filename), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UlincBPIBPLibrary_SaveAsFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlincBPIBPLibrary_SaveAsFile_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlincBPIBPLibrary_SaveAsFile_Statics::NewProp_IsAutoBrAtStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlincBPIBPLibrary_SaveAsFile_Statics::NewProp_IsAppend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlincBPIBPLibrary_SaveAsFile_Statics::NewProp_content,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlincBPIBPLibrary_SaveAsFile_Statics::NewProp_filename,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlincBPIBPLibrary_SaveAsFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "lincBPI" },
		{ "Comment", "/*?????\xc4\xbc?*/" },
		{ "ModuleRelativePath", "Public/lincBPIBPLibrary.h" },
		{ "ToolTip", "?????\xc4\xbc?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UlincBPIBPLibrary_SaveAsFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UlincBPIBPLibrary, nullptr, "SaveAsFile", nullptr, nullptr, sizeof(lincBPIBPLibrary_eventSaveAsFile_Parms), Z_Construct_UFunction_UlincBPIBPLibrary_SaveAsFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UlincBPIBPLibrary_SaveAsFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UlincBPIBPLibrary_SaveAsFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UlincBPIBPLibrary_SaveAsFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UlincBPIBPLibrary_SaveAsFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UlincBPIBPLibrary_SaveAsFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UlincBPIBPLibrary_SortUserDefinedStructArray_Statics
	{
		struct lincBPIBPLibrary_eventSortUserDefinedStructArray_Parms
		{
			TArray<int32> CustomStruct;
			UObject* Object;
			FName FunctionName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FunctionName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomStruct_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CustomStruct;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CustomStruct_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UlincBPIBPLibrary_SortUserDefinedStructArray_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(lincBPIBPLibrary_eventSortUserDefinedStructArray_Parms, FunctionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UlincBPIBPLibrary_SortUserDefinedStructArray_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(lincBPIBPLibrary_eventSortUserDefinedStructArray_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlincBPIBPLibrary_SortUserDefinedStructArray_Statics::NewProp_CustomStruct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UlincBPIBPLibrary_SortUserDefinedStructArray_Statics::NewProp_CustomStruct = { "CustomStruct", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(lincBPIBPLibrary_eventSortUserDefinedStructArray_Parms, CustomStruct), METADATA_PARAMS(Z_Construct_UFunction_UlincBPIBPLibrary_SortUserDefinedStructArray_Statics::NewProp_CustomStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UlincBPIBPLibrary_SortUserDefinedStructArray_Statics::NewProp_CustomStruct_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UlincBPIBPLibrary_SortUserDefinedStructArray_Statics::NewProp_CustomStruct_Inner = { "CustomStruct", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UlincBPIBPLibrary_SortUserDefinedStructArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlincBPIBPLibrary_SortUserDefinedStructArray_Statics::NewProp_FunctionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlincBPIBPLibrary_SortUserDefinedStructArray_Statics::NewProp_Object,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlincBPIBPLibrary_SortUserDefinedStructArray_Statics::NewProp_CustomStruct,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlincBPIBPLibrary_SortUserDefinedStructArray_Statics::NewProp_CustomStruct_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlincBPIBPLibrary_SortUserDefinedStructArray_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "Object" },
		{ "ArrayParm", "CustomStruct" },
		{ "Category", "lincBPI" },
		{ "Comment", "/*????????????*/" },
		{ "CustomThunk", "true" },
		{ "DefaultToSelf", "Object" },
		{ "DisplayName", "Sort" },
		{ "ModuleRelativePath", "Public/lincBPIBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UlincBPIBPLibrary_SortUserDefinedStructArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UlincBPIBPLibrary, nullptr, "SortUserDefinedStructArray", nullptr, nullptr, sizeof(lincBPIBPLibrary_eventSortUserDefinedStructArray_Parms), Z_Construct_UFunction_UlincBPIBPLibrary_SortUserDefinedStructArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UlincBPIBPLibrary_SortUserDefinedStructArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UlincBPIBPLibrary_SortUserDefinedStructArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UlincBPIBPLibrary_SortUserDefinedStructArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UlincBPIBPLibrary_SortUserDefinedStructArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UlincBPIBPLibrary_SortUserDefinedStructArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UlincBPIBPLibrary_UStructToJsonObjectString_Statics
	{
		struct lincBPIBPLibrary_eventUStructToJsonObjectString_Parms
		{
			int32 StructReference;
			FString JSONString;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_JSONString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StructReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StructReference;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UlincBPIBPLibrary_UStructToJsonObjectString_Statics::NewProp_JSONString = { "JSONString", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(lincBPIBPLibrary_eventUStructToJsonObjectString_Parms, JSONString), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlincBPIBPLibrary_UStructToJsonObjectString_Statics::NewProp_StructReference_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UlincBPIBPLibrary_UStructToJsonObjectString_Statics::NewProp_StructReference = { "StructReference", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(lincBPIBPLibrary_eventUStructToJsonObjectString_Parms, StructReference), METADATA_PARAMS(Z_Construct_UFunction_UlincBPIBPLibrary_UStructToJsonObjectString_Statics::NewProp_StructReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UlincBPIBPLibrary_UStructToJsonObjectString_Statics::NewProp_StructReference_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UlincBPIBPLibrary_UStructToJsonObjectString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlincBPIBPLibrary_UStructToJsonObjectString_Statics::NewProp_JSONString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlincBPIBPLibrary_UStructToJsonObjectString_Statics::NewProp_StructReference,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlincBPIBPLibrary_UStructToJsonObjectString_Statics::Function_MetaDataParams[] = {
		{ "Category", "lincBPI" },
		{ "Comment", "/*Struct to Json*/" },
		{ "CustomStructureParam", "StructReference" },
		{ "CustomThunk", "true" },
		{ "DisplayName", "Struct To Json String" },
		{ "ModuleRelativePath", "Public/lincBPIBPLibrary.h" },
		{ "ToolTip", "Struct to Json" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UlincBPIBPLibrary_UStructToJsonObjectString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UlincBPIBPLibrary, nullptr, "UStructToJsonObjectString", nullptr, nullptr, sizeof(lincBPIBPLibrary_eventUStructToJsonObjectString_Parms), Z_Construct_UFunction_UlincBPIBPLibrary_UStructToJsonObjectString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UlincBPIBPLibrary_UStructToJsonObjectString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UlincBPIBPLibrary_UStructToJsonObjectString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UlincBPIBPLibrary_UStructToJsonObjectString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UlincBPIBPLibrary_UStructToJsonObjectString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UlincBPIBPLibrary_UStructToJsonObjectString_Statics::FuncParams);
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
		{ &Z_Construct_UFunction_UlincBPIBPLibrary_AddDataTableRow, "AddDataTableRow" }, // 361530153
		{ &Z_Construct_UFunction_UlincBPIBPLibrary_AddRowDT, "AddRowDT" }, // 2540769678
		{ &Z_Construct_UFunction_UlincBPIBPLibrary_SaveAsFile, "SaveAsFile" }, // 4231883752
		{ &Z_Construct_UFunction_UlincBPIBPLibrary_SortUserDefinedStructArray, "SortUserDefinedStructArray" }, // 371911749
		{ &Z_Construct_UFunction_UlincBPIBPLibrary_UStructToJsonObjectString, "UStructToJsonObjectString" }, // 2882713447
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
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UlincBPIBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UlincBPIBPLibrary_Statics::Class_MetaDataParams))
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
	IMPLEMENT_CLASS(UlincBPIBPLibrary, 927878479);
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
