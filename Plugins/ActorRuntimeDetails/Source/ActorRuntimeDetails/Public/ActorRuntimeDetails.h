// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FToolBarBuilder;
class FMenuBuilder;

class FActorRuntimeDetailsModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	/** This function will be bound to Command. */
	void PluginButtonClicked();
	/*+*/
	void RegisterTabSpawner();
private:
	void AddToolbarExtension(FToolBarBuilder& Builder);
	void AddMenuExtension(FMenuBuilder& Builder);
	/*+*/
	TSharedRef<class SDockTab> SpawnActorRuntimeDetailstab(const FSpawnTabArgs& Args);

	/*Value*/
	TSharedPtr<class FUICommandList> PluginCommands;
	FDelegateHandle LevelEditorTabManagerChangedHandle;
};
