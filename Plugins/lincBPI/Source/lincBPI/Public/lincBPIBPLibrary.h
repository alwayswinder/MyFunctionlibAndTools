// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Misc\ObjectThumbnail.h"
#include "JsonObjectConverter.h"
#include "lincBPIBPLibrary.generated.h"

class UDataTable;
struct FTableRowBase;
class UTexture2D;

UCLASS()
class LINCBPI_API UlincBPIBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	/*保存文件*/
	UFUNCTION(BlueprintCallable, Category = "lincBPI")
	static bool SaveAsFile(FString filename, FString content, bool IsAppend, bool IsAutoBrAtStart);
	/*任意Datatable添加修改一行*/
	UFUNCTION(BlueprintCallable, CustomThunk, meta = (DisplayName = "Add Datatable Row", DefaultToSelf = "Object", 
		CustomStructureParam = "CustomStruct", AdvancedDisplay = "Object"), Category = "lincBPI")
	static bool AddRowDT(int32 CustomStruct, UDataTable* DT, FName NewRowName);
	static bool Generic_AddRowDT(void* Target, UProperty* Pro, UDataTable* DT, FName NewRowName);
	DECLARE_FUNCTION(execAddRowDT)
	{
		Stack.MostRecentProperty = nullptr;
		Stack.StepCompiledIn<UProperty>(NULL);
		void* AAddr = Stack.MostRecentPropertyAddress;
		UProperty* Property = Cast<UProperty>(Stack.MostRecentProperty);
		P_GET_OBJECT(UDataTable, DT);
		P_GET_PROPERTY(UNameProperty, NewRowName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result = Generic_AddRowDT(AAddr, Property, DT, NewRowName);
		P_NATIVE_END;
	}
	/*任意类型排序*/
	UFUNCTION(BlueprintCallable, CustomThunk, meta = (DisplayName = "Sort", DefaultToSelf = "Object", 
		ArrayParm = "CustomStruct", AdvancedDisplay = "Object"), Category = "lincBPI")
	static void SortUserDefinedStructArray(const TArray<int32>& CustomStruct, UObject* Object, FName FunctionName);
	static void Generic_SortUserDefinedStructArray(void* TargetArray, const UArrayProperty* ArrayProp,
		UObject* OwnerObject, UFunction* SortRuleFunc);
	DECLARE_FUNCTION(execSortUserDefinedStructArray)
	{
		Stack.MostRecentProperty = nullptr;
		Stack.StepCompiledIn<UArrayProperty>(NULL);
		void* ArrayAAddr = Stack.MostRecentPropertyAddress;
		UArrayProperty* ArrayProperty = Cast<UArrayProperty>(Stack.MostRecentProperty);
		if (!ArrayProperty)
		{
			Stack.bArrayContextFailed = true;
			return;
		}

		P_GET_OBJECT(UObject, OwnerObject);
		P_GET_PROPERTY(UNameProperty, FunctionName);
		if (!OwnerObject)
		{
			return;
		}
		UFunction* const Func = OwnerObject->FindFunction(FunctionName);
		if ((!Func || (Func->NumParms != 3)))
		{
			return;
		}
		P_FINISH;

		P_NATIVE_BEGIN;
		Generic_SortUserDefinedStructArray(ArrayAAddr, ArrayProperty, OwnerObject, Func);
		P_NATIVE_END;
	}
	/*Struct to Json*/
	UFUNCTION(BlueprintPure, CustomThunk, meta = (CustomStructureParam="StructReference",
		DisplayName="Struct To Json String"), Category = "lincBPI")
	static void UStructToJsonObjectString(const int32& StructReference, FString& JSONString);
	DECLARE_FUNCTION(execUStructToJsonObjectString)
	{
		//Get input wildcard single variable
		Stack.Step(Stack.Object, NULL);
		UStructProperty* StructProperty = ExactCast<UStructProperty>(Stack.MostRecentProperty);
		void* StructPtr = Stack.MostRecentPropertyAddress;

		//Get JsonString reference
		P_GET_PROPERTY_REF(UStrProperty, JSONString);
		P_FINISH;

		P_NATIVE_BEGIN;
		FJsonObjectConverter::UStructToJsonObjectString(StructProperty->Struct, StructPtr, JSONString, 0, 0);
		P_NATIVE_END;
	}

	UFUNCTION(BlueprintCallable, CustomThunk, Category = "lincBPI", 
		meta = (CustomStructureParam = "NewRowData", BlueprintInternalUseOnly = "true"))
	static void AddDataTableRow(FTableRowBase NewRowData, UDataTable* Table, FName RowName);
	DECLARE_FUNCTION(execAddDataTableRow)
	{
		Stack.MostRecentProperty = nullptr;
		Stack.StepCompiledIn<UProperty>(NULL);
		void* AAddr = Stack.MostRecentPropertyAddress;
		UProperty* Property = Cast<UProperty>(Stack.MostRecentProperty);
		P_GET_OBJECT(UDataTable, DT);
		P_GET_PROPERTY(UNameProperty, NewRowName);
		P_FINISH;
		P_NATIVE_BEGIN;
		Generic_AddRowDT(AAddr, Property, DT, NewRowName);
		P_NATIVE_END;
	}
};
