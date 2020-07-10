#include "K2Node_AddDTRow.h"
#include "BlueprintActionDatabaseRegistrar.h"
#include "BlueprintNodeSpawner.h"
#include "K2Node_CallFunction.h"
#include "K2Node.h"
#include "KismetCompiler.h"
#include "K2Node_IfThenElse.h"

#include "lincBPIBPLibrary.h"


#define LOCTEXT_NAMESPACE "K2Node_AddDTRow"

struct UK2Node_AddDataTableRowHelper
{
	static FName DataTablePinName;
	static FName RowNamePinName;
	static FName NewRowDataPinName;
};

FName UK2Node_AddDataTableRowHelper::DataTablePinName(*LOCTEXT("DataTablePinName", "DataTable").ToString());
FName UK2Node_AddDataTableRowHelper::RowNamePinName(*LOCTEXT("RowNamePinName", "RowName").ToString());
FName UK2Node_AddDataTableRowHelper::NewRowDataPinName(*LOCTEXT("NewRowDataPimName", "NewRowData").ToString());

FText UK2Node_AddDTROW::GetTooltipText() const
{
	return FText::FromString(TEXT("Custom K2Node Add/ReSet Row Of DT"));
}

FText UK2Node_AddDTROW::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	return FText::FromString(TEXT("Add DataTable Row"));
}

void UK2Node_AddDTROW::AllocateDefaultPins()
{
	// Add execution pins
	CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Exec, UEdGraphSchema_K2::PN_Execute);
	CreatePin(EGPD_Output, UEdGraphSchema_K2::PC_Exec, UEdGraphSchema_K2::PN_Then);
	
	// Add DataTable pin
	UEdGraphPin* DataTablePin = CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Object, UDataTable::StaticClass(),
		UK2Node_AddDataTableRowHelper::DataTablePinName);
	SetPinToolTip(*DataTablePin, LOCTEXT("DataTablePinDescription", "The DataTable you want to Add/Reset a row from"));

	// Row Name pin
	UEdGraphPin* RowNamePin = CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Name, 
		UK2Node_AddDataTableRowHelper::RowNamePinName);
	SetPinToolTip(*RowNamePin, LOCTEXT("RowNamePinDescription", "The name of the row to Add/Reset from the DataTable"));

	//NewRowData pin
	UEdGraphPin* NewRowDataPin = CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Wildcard,
		UK2Node_AddDataTableRowHelper::NewRowDataPinName);
	SetPinToolTip(*NewRowDataPin, LOCTEXT("NewRowDataPinDescription", "New Row Data to Add/Reset"));

	Super::AllocateDefaultPins();
}

void UK2Node_AddDTROW::ExpandNode(class FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph)
{
	Super::ExpandNode(CompilerContext, SourceGraph);
	UEdGraphPin* DataTablePin = GetDataTablePin();
	UEdGraphPin* RowNamePin = GetRowNamePin();
	UEdGraphPin* NewRowDataPin = GetNewRowDataPin();


	const FName FunctionName = GET_FUNCTION_NAME_CHECKED(UlincBPIBPLibrary, AddDataTableRow);
	UK2Node_CallFunction* AddDataTableRowFun = CompilerContext.SpawnIntermediateNode<UK2Node_CallFunction>(this, SourceGraph);
	AddDataTableRowFun->FunctionReference.SetExternalMember(FunctionName, UlincBPIBPLibrary::StaticClass());
	AddDataTableRowFun->AllocateDefaultPins();
	CompilerContext.MovePinLinksToIntermediate(*GetExecPin(), *(AddDataTableRowFun->GetExecPin()));
	
	UEdGraphPin* TableInPin = AddDataTableRowFun->FindPinChecked(TEXT("Table"));
	CompilerContext.MovePinLinksToIntermediate(*DataTablePin, *TableInPin);
	UEdGraphPin* NameInPin = AddDataTableRowFun->FindPinChecked(TEXT("RowName"));
	CompilerContext.MovePinLinksToIntermediate(*RowNamePin, *NameInPin);
	UEdGraphPin* DataInPin = AddDataTableRowFun->FindPinChecked(TEXT("NewRowData"));
	DataInPin->PinType = NewRowDataPin->PinType;
	DataInPin->PinType.PinSubCategoryObject = NewRowDataPin->PinType.PinSubCategoryObject;
	CompilerContext.MovePinLinksToIntermediate(*NewRowDataPin, *DataInPin);

	CompilerContext.MovePinLinksToIntermediate(*GetThenPin(), *(AddDataTableRowFun->GetThenPin()));

	BreakAllNodeLinks();
}

void UK2Node_AddDTROW::PinDefaultValueChanged(UEdGraphPin* Pin)
{
	if (Pin && Pin->PinName == UK2Node_AddDataTableRowHelper::DataTablePinName)
	{
		RefreshNewRowDataPinType();
	}
	else if (Pin && Pin->PinName == UK2Node_AddDataTableRowHelper::NewRowDataPinName && Pin->LinkedTo.Num() > 0)
	{
		Pin->PinType.PinSubCategoryObject = Pin->LinkedTo[0]->PinType.PinSubCategoryObject;
		Pin->PinType.PinCategory = Pin->LinkedTo[0]->PinType.PinCategory;
	}
}

void UK2Node_AddDTROW::PostReconstructNode()
{
	Super::PostReconstructNode();
	RefreshNewRowDataPinType();
}

FText UK2Node_AddDTROW::GetMenuCategory() const
{
	return FText::FromString(TEXT("lincBPI K2Node"));
}

void UK2Node_AddDTROW::GetMenuActions(FBlueprintActionDatabaseRegistrar& ActionRegistrar) const
{
	UClass* ActionKey = GetClass();
	if (ActionRegistrar.IsOpenForRegistration(ActionKey))
	{
		UBlueprintNodeSpawner* NodeSpawner = UBlueprintNodeSpawner::Create(GetClass());
		check(NodeSpawner != nullptr);
		ActionRegistrar.AddBlueprintAction(ActionKey, NodeSpawner);
	}
}

void UK2Node_AddDTROW::PreloadRequiredAssets()
{
	if (UEdGraphPin* DataTablePin = GetDataTablePin())
	{
		if (UDataTable* DataTable = Cast<UDataTable>(DataTablePin->DefaultObject))
		{
			PreloadObject(DataTable);
		}
	}
	Super::PreloadRequiredAssets();
}

bool UK2Node_AddDTROW::IsConnectionDisallowed(const UEdGraphPin* MyPin, const UEdGraphPin* OtherPin, 
	FString& OutReason) const
{
	if (MyPin == GetNewRowDataPin())
	{
		const UEdGraphPin* DataTablePin = GetDataTablePin();
		if (DataTablePin && DataTablePin->LinkedTo.Num() == 0
			&& MyPin->PinType.PinCategory == UEdGraphSchema_K2::PC_Wildcard)
		{
			OutReason = TEXT("Make sure the DataTable not Empty");
			return true;
		}	
	}
	return false;
}

void UK2Node_AddDTROW::EarlyValidation(class FCompilerResultsLog& MessageLog) const
{
	Super::EarlyValidation(MessageLog);

	const UEdGraphPin* DataTablePin = GetDataTablePin();
	const UEdGraphPin* RowNamePin = GetRowNamePin();
	if (!DataTablePin || !RowNamePin)
	{
		MessageLog.Error(*LOCTEXT("MissingPins", "Missing pins in @@").ToString(), this);
		return;
	}

	if (DataTablePin->LinkedTo.Num() == 0)
	{
		const UDataTable* DataTable = Cast<UDataTable>(DataTablePin->DefaultObject);
		if (!DataTable)
		{
			MessageLog.Error(*LOCTEXT("NoDataTable", "No DataTable in @@").ToString(), this);
			return;
		}	
	}
	if (RowNamePin->LinkedTo.Num() == 0)
	{
		const FName CurrentName = FName(*RowNamePin->GetDefaultAsString());
		if (CurrentName.ToString().IsEmpty() || CurrentName.IsNone())
		{
			const FString Msg = LOCTEXT("WrongRowNameFmt", "row name could not be None").ToString();
			MessageLog.Error(*Msg, this);
			return;
		}
	}
}

void UK2Node_AddDTROW::SetPinToolTip(UEdGraphPin& MutatablePin, const FText& PinDescription) const
{
	MutatablePin.PinToolTip = UEdGraphSchema_K2::TypeToText(MutatablePin.PinType).ToString();

	UEdGraphSchema_K2 const* const K2Schema = Cast<const UEdGraphSchema_K2>(GetSchema());
	if (K2Schema != nullptr)
	{
		MutatablePin.PinToolTip += TEXT(" ");
		MutatablePin.PinToolTip += K2Schema->GetPinDisplayName(&MutatablePin).ToString();
	}

	MutatablePin.PinToolTip += FString(TEXT("\n")) + PinDescription.ToString();
}

void UK2Node_AddDTROW::SetNewRowDataTypeForStruct(UScriptStruct* NewRowStruct)
{
	UScriptStruct* OldRowStruct = GetNewRowDataTypeForStruct();
	if (NewRowStruct != OldRowStruct)
	{
		UEdGraphPin* NewRowDataPin = GetNewRowDataPin();

		if (NewRowDataPin->SubPins.Num() > 0)
		{
			GetSchema()->RecombinePin(NewRowDataPin);
		}
		
		NewRowDataPin->PinType.PinSubCategoryObject = NewRowStruct;
		NewRowDataPin->PinType.PinCategory = (NewRowStruct == nullptr) ? UEdGraphSchema_K2::PC_Wildcard :
			UEdGraphSchema_K2::PC_Struct;

		CachedNodeTitle.Clear();
	}	
}

UScriptStruct* UK2Node_AddDTROW::GetNewRowDataTypeForStruct()
{
	UScriptStruct* NewRowDataStructType = (UScriptStruct*)(GetNewRowDataPin()->PinType.PinSubCategoryObject.Get());

	return NewRowDataStructType;
}

UEdGraphPin* UK2Node_AddDTROW::GetThenPin() const
{
	UEdGraphPin* Pin = FindPinChecked(UEdGraphSchema_K2::PN_Then);
	check(Pin->Direction == EGPD_Output);
	return Pin;
}

void UK2Node_AddDTROW::RefreshNewRowDataPinType()
{
	UScriptStruct* NewRowDataType = GetDataTableRowStructType();
	SetNewRowDataTypeForStruct(NewRowDataType);
}

void UK2Node_AddDTROW::RefreshPinDescription()
{
	const TArray<UEdGraphPin*>* PinsToSearch = &Pins;

	for (UEdGraphPin* TestPin : *PinsToSearch)
	{
		if (TestPin && TestPin->PinName == UK2Node_AddDataTableRowHelper::DataTablePinName)
		{
			const UDataTable* DataTable = Cast<const UDataTable>(TestPin->DefaultObject);
			if (DataTable)
			{
				SetPinToolTip(*TestPin, FText::FromString(DataTable->GetName()));
			}
			else
			{
				SetPinToolTip(*TestPin, LOCTEXT("DataTablePinDescription", "The DataTable you want to Add/Reset a row from"));
			}	
		}
		else if (TestPin && TestPin->PinName == UK2Node_AddDataTableRowHelper::RowNamePinName)
		{
			FString RowName = TestPin->DefaultValue;
			if (!RowName.IsEmpty())
			{
				SetPinToolTip(*TestPin, FText::FromString(RowName));
			}
			else
			{
				SetPinToolTip(*TestPin, LOCTEXT("RowNamePinDescription", "The name of the row to Add/Reset from the DataTable"));
			}
		}
		else if (TestPin && TestPin->PinName == UK2Node_AddDataTableRowHelper::NewRowDataPinName)
		{
			UScriptStruct* RowStruct = GetNewRowDataTypeForStruct();
			if (RowStruct)
			{
				SetPinToolTip(*TestPin, RowStruct->GetDisplayNameText());
			}
			else
			{
				SetPinToolTip(*TestPin, LOCTEXT("NewRowDataPinDescription", "New Row Data to Add/Reset"));
			}
		}
	}
}

UScriptStruct* UK2Node_AddDTROW::GetDataTableRowStructType() const
{
	UScriptStruct* RowStructType = nullptr;

	UEdGraphPin* DataTablePin = GetDataTablePin();
	if (DataTablePin && DataTablePin->DefaultObject != nullptr && DataTablePin->LinkedTo.Num() == 0)
	{
		if (const UDataTable* DataTable = Cast<const UDataTable>(DataTablePin->DefaultObject))
		{
			RowStructType = DataTable->RowStruct;
		}
	}
	return RowStructType;
}

UEdGraphPin* UK2Node_AddDTROW::GetDataTablePin(const TArray<UEdGraphPin*>* InPinsToSearch /*= NULL*/) const
{
	const TArray<UEdGraphPin*>* PinsToSearch = InPinsToSearch ? InPinsToSearch : &Pins;

	UEdGraphPin* Pin = nullptr;
	for (UEdGraphPin* TestPin : *PinsToSearch)
	{
		if (TestPin && TestPin->PinName == UK2Node_AddDataTableRowHelper::DataTablePinName)
		{
			Pin = TestPin;
			break;
		}
	}
	check(Pin == nullptr || Pin->Direction == EGPD_Input);
	return Pin;
}

UEdGraphPin* UK2Node_AddDTROW::GetNewRowDataPin(const TArray<UEdGraphPin*>* InPinsToSearch /*= NULL*/) const
{
	const TArray<UEdGraphPin*>* PinsToSearch = InPinsToSearch ? InPinsToSearch : &Pins;

	UEdGraphPin* Pin = nullptr;
	for (UEdGraphPin* TestPin : *PinsToSearch)
	{
		if (TestPin && TestPin->PinName == UK2Node_AddDataTableRowHelper::NewRowDataPinName)
		{
			Pin = TestPin;
			break;
		}
	}
	check(Pin == nullptr || Pin->Direction == EGPD_Input);
	return Pin;
}

UEdGraphPin* UK2Node_AddDTROW::GetRowNamePin() const
{
	UEdGraphPin* Pin = FindPinChecked(UK2Node_AddDataTableRowHelper::RowNamePinName);
	check(Pin->Direction == EGPD_Input);
	return Pin;
}

#undef LOCTEXT_NAMESPACE