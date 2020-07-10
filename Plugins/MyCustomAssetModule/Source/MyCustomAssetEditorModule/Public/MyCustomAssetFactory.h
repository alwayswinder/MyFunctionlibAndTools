// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Factories\Factory.h"
#include "EditorReimportHandler.h"
#include "MyCustomAssetFactory.generated.h"

/**
 * 
 */
UCLASS()
class  UMyCustomAssetFactory : public UFactory , public FReimportHandler
{
	GENERATED_UCLASS_BODY()
public:
	/**/
	virtual UObject* FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags,
		UObject* Context, FFeedbackContext* Warn)override;
	virtual UObject* FactoryCreateFile(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags,
		const FString& Filename, const TCHAR* Parms, FFeedbackContext* Warn, bool& bOutOperationCanceled)override;
	virtual bool ShouldShowInNewMenu()const override;
	/*Reimport*/
	virtual bool CanReimport(UObject* Obj, TArray<FString>& OutFilenames)override;
	virtual void SetReimportPaths(UObject* Obj, const TArray<FString>& NewReimportPaths)override;
	virtual EReimportResult::Type Reimport(UObject* Obj)override;
	
};
