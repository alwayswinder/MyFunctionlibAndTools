// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "MyCustomAsset.generated.h"

UCLASS(BlueprintType, Blueprintable)
class MYCUSTOMASSETMODULE_API UMyCustomAsset : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MyCustomAsset")
	int32 IntValue;

	UFUNCTION(BlueprintCallable)
	void Inc() { ++IntValue; }
};