// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "lincBPIBPLibrary.h"
#include "lincBPI.h"
#include <iostream>
#include <fstream>
#include <string>
#include "Misc/Paths.h"
#include "DataTableEditorUtils.h"

using namespace std;

UlincBPIBPLibrary::UlincBPIBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

bool UlincBPIBPLibrary::WriteToText_String(FString filename, FString content)
{
	FString BasePath = FPaths::ProjectSavedDir();
	BasePath = BasePath + '/' + filename + ".txt";
	string path = string(TCHAR_TO_UTF8(*BasePath));
	fstream file;
	file.open(path, ios::out);
	if (!file)
	{
		return false;
	}
	string wcontext = string(TCHAR_TO_UTF8(*content));
	file << wcontext;
	file.close();
	return true;
}

bool UlincBPIBPLibrary::AddRowDT(UDataTable* DT, FName NewRowName)
{
	if (DT)
	{
		const TArray<FName> ExisitngNames = DT->GetRowNames();
		if (ExisitngNames.Contains(NewRowName))
		{
			return false;
		}

		FDataTableEditorUtils::AddRow(DT, NewRowName);
		return true;
	}
	return false;
}

