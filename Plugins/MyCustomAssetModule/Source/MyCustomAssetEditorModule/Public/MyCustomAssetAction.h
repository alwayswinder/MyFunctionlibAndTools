// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "AssetTypeActions_Base.h"

class FMyCustomAssetAction : public FAssetTypeActions_Base
{
public:
	virtual uint32 GetCategories()override;
	virtual FText GetName()const override;
	virtual UClass* GetSupportedClass()const override;
	virtual FColor GetTypeColor()const override;
	/**/
	virtual bool HasActions(const TArray<UObject *>& InObjects)const override;
	virtual void GetActions(const TArray<UObject *>& InObjects, FMenuBuilder& MenuBuilder)override;

};