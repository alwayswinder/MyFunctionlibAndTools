// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "MyCustomAssetEditorModule.h"

#define LOCTEXT_NAMESPACE "FMyCustomAssetEditorModule"

void FMyCustomAssetEditorModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	IAssetTools& AssetTools = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();
	AssetAction = MakeShareable(new FMyCustomAssetAction());
	AssetTools.RegisterAssetTypeActions(AssetAction.ToSharedRef());
}

void FMyCustomAssetEditorModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	FAssetToolsModule* Module = FModuleManager::GetModulePtr<FAssetToolsModule>("AssetTools");
	if (Module)
	{
		IAssetTools& AssetTools = Module->Get();
		if (AssetAction.IsValid())
		{
			AssetTools.UnregisterAssetTypeActions(AssetAction.ToSharedRef());
		}
	}
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FMyCustomAssetEditorModule, MyCustomAssetEditorModule)