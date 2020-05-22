// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "lincBPIBPLibrary.generated.h"

UCLASS()
class UlincBPIBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

//	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Execute Sample function", Keywords = "lincBPI sample test testing"), Category = "lincBPITesting")
//	static float lincBPISampleFunction(float Param);
//	
	UFUNCTION(BlueprintCallable, Category = "lincBPI")
	static bool SaveAsFile(FString filename, FString content, bool IsAppend, bool IsAutoBrAtStart);

	UFUNCTION(BlueprintCallable, Category = "lincBPI")
	static bool AddRowDT(UDataTable* DT, FName NewRowName);

};
