// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "K2Node.h"
#include "K2Node_AddDTRow.generated.h"


class FBlueprintActionDatabaseRegistrar;

UCLASS()
class LINCBPIEDITOR_API UK2Node_AddDTROW : public UK2Node
{
	GENERATED_BODY()
public:
	/*Style_UEdGraphNode*/
	virtual FText GetTooltipText()const override;
	virtual FText GetNodeTitle(ENodeTitleType::Type TitleType)const override;
	virtual void AllocateDefaultPins() override;
	virtual void ExpandNode(class FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph) override;
	virtual void PinDefaultValueChanged(UEdGraphPin* Pin) override;
	virtual void PostReconstructNode() override;
	/*Action_UK2Node*/
	virtual FText GetMenuCategory()const override;
	virtual void GetMenuActions(FBlueprintActionDatabaseRegistrar& ActionRegistrar)const override;
	virtual void PreloadRequiredAssets() override;
	virtual bool IsConnectionDisallowed(const UEdGraphPin* MyPin, const UEdGraphPin* OtherPin, 
		FString& OutReason) const override;
	virtual void EarlyValidation(class FCompilerResultsLog& MessageLog) const override;

private:
	/*Self+*/
	UEdGraphPin* GetThenPin() const;
	void RefreshNewRowDataPinType();
	void RefreshPinDescription();

	UScriptStruct* GetDataTableRowStructType() const;
	UEdGraphPin* GetDataTablePin(const TArray<UEdGraphPin*>* InPinsToSearch = NULL) const;
	UEdGraphPin* GetNewRowDataPin(const TArray<UEdGraphPin*>* InPinsToSearch = NULL) const;
	UEdGraphPin* GetRowNamePin() const;

	void SetPinToolTip(UEdGraphPin& MutatablePin, const FText& PinDescription) const;
	void SetNewRowDataTypeForStruct(UScriptStruct* InClass);
	UScriptStruct* GetNewRowDataTypeForStruct();
	/*Value*/
	FNodeTextCache CachedNodeTitle;
};
