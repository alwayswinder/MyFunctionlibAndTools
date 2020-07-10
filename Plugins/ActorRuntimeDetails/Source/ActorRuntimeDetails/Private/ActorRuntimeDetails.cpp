// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "ActorRuntimeDetails.h"
#include "ActorRuntimeDetailsStyle.h"
#include "ActorRuntimeDetailsCommands.h"
#include "Misc/MessageDialog.h"
#include "Framework/MultiBox/MultiBoxBuilder.h"
/*+*/
#include "WorkspaceMenuStructure.h"
#include "WorkspaceMenuStructureModule.h"
#include "IDocumentation.h"
#include "TutorialMetaData.h"
#include "EditorStyleSet.h"

#include "LevelEditor.h"

static const FName ActorRuntimeDetailsTabName("ActorRuntimeDetails");

#define LOCTEXT_NAMESPACE "FActorRuntimeDetailsModule"

void FActorRuntimeDetailsModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	
	FActorRuntimeDetailsStyle::Initialize();
	FActorRuntimeDetailsStyle::ReloadTextures();

	FActorRuntimeDetailsCommands::Register();
	
	PluginCommands = MakeShareable(new FUICommandList);

	PluginCommands->MapAction(
		FActorRuntimeDetailsCommands::Get().PluginAction,
		FExecuteAction::CreateRaw(this, &FActorRuntimeDetailsModule::PluginButtonClicked),
		FCanExecuteAction());
		
	FLevelEditorModule& LevelEditorModule = FModuleManager::LoadModuleChecked<FLevelEditorModule>("LevelEditor");
	/*{
		TSharedPtr<FExtender> MenuExtender = MakeShareable(new FExtender());
		MenuExtender->AddMenuExtension("WindowLayout", EExtensionHook::After, PluginCommands, FMenuExtensionDelegate::CreateRaw(this, &FActorRuntimeDetailsModule::AddMenuExtension));

		LevelEditorModule.GetMenuExtensibilityManager()->AddExtender(MenuExtender);
	}

	{
		TSharedPtr<FExtender> ToolbarExtender = MakeShareable(new FExtender);
		ToolbarExtender->AddToolBarExtension("Settings", EExtensionHook::After, PluginCommands, FToolBarExtensionDelegate::CreateRaw(this, &FActorRuntimeDetailsModule::AddToolbarExtension));

		LevelEditorModule.GetToolBarExtensibilityManager()->AddExtender(ToolbarExtender);
	}*/
	TSharedPtr<FTabManager> LevelEditorTabManager = LevelEditorModule.GetLevelEditorTabManager();
	if (LevelEditorTabManager)
	{
		RegisterTabSpawner();	
	}
	else
	{
		LevelEditorTabManagerChangedHandle = LevelEditorModule.OnTabManagerChanged().AddRaw(this,
			&FActorRuntimeDetailsModule::RegisterTabSpawner);
	}
}

void FActorRuntimeDetailsModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	FActorRuntimeDetailsStyle::Shutdown();

	FActorRuntimeDetailsCommands::Unregister();
}

void FActorRuntimeDetailsModule::PluginButtonClicked()
{
	// Put your "OnButtonClicked" stuff here
	FText DialogText = FText::Format(
							LOCTEXT("PluginButtonDialogText", "Add code to {0} in {1} to override this button's actions"),
							FText::FromString(TEXT("FActorRuntimeDetailsModule::PluginButtonClicked()")),
							FText::FromString(TEXT("ActorRuntimeDetails.cpp"))
					   );
	FMessageDialog::Open(EAppMsgType::Ok, DialogText);
}

void FActorRuntimeDetailsModule::RegisterTabSpawner()
{
	FLevelEditorModule& LevelEditorModule = FModuleManager::LoadModuleChecked<FLevelEditorModule>("LevelEditor");
	const IWorkspaceMenuStructure& MenuStructure = WorkspaceMenu::GetMenuStructure();
	TSharedPtr<FTabManager> LevelEditorTabManager = LevelEditorModule.GetLevelEditorTabManager();
	if (LevelEditorTabManager)
	{
		const FText DetailsTooltip = NSLOCTEXT("LevelEditorTabs", "LevelEditorSelectionDetailsTooltip",
			"Open a Runtime Details tab. Use this to view and editor properties of the selected object(s).");
		const FSlateIcon DetailsIcon(FEditorStyle::GetStyleSetName(), "LevelEditor.Tab.Details");
		LevelEditorTabManager->RegisterTabSpawner(
			"LevelEditorRuntimeSelectionDetails",
			FOnSpawnTab::CreateRaw(this, &FActorRuntimeDetailsModule::SpawnActorRuntimeDetailstab))
			.SetDisplayName(NSLOCTEXT("LevelEditorTabs", "LevelEditorRuntimeSelectionDetails", "Runtime Details 1"))
			.SetTooltipText(DetailsTooltip)
			.SetGroup(MenuStructure.GetLevelEditorDetailsCategory())
			.SetIcon(DetailsIcon);
	}
}

void FActorRuntimeDetailsModule::AddMenuExtension(FMenuBuilder& Builder)
{
	Builder.AddMenuEntry(FActorRuntimeDetailsCommands::Get().PluginAction);
}

TSharedRef<class SDockTab> FActorRuntimeDetailsModule::SpawnActorRuntimeDetailstab(const FSpawnTabArgs& Args)
{
	//TSharedRef<SActorRuntimeDetails> ActorRuntimeDetails = StaticCastSharedRef<SActorRuntimeDetails>(
	//	CreateActorRuntimeDetails("LevelEditorRuntimeSelectionDetails"));
	const FText Label = NSLOCTEXT("LevelEditor", "RuntimeDetailsTabTitle", "Runtime Details 1");
	TSharedRef<SDockTab> DocTab = SNew(SDockTab)
		.Icon(FEditorStyle::GetBrush("LevelEditor.Tabs.Details"))
		.Label(Label)
		.ToolTip(IDocumentation::Get()->CreateToolTip(Label, nullptr, "Shared/LevelEditor", "DetailsTab"))
		[
			SNew(SBox)
			.AddMetaData<FTutorialMetaData>(FTutorialMetaData(TEXT("ActorRuntimeDetails"),
				TEXT("LevelEditorSelectionDetails")))
			[
				//ActorRuntimeDetails
				SNew(SImage)
			]
		];
	return DocTab;
}

void FActorRuntimeDetailsModule::AddToolbarExtension(FToolBarBuilder& Builder)
{
	Builder.AddToolBarButton(FActorRuntimeDetailsCommands::Get().PluginAction);
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FActorRuntimeDetailsModule, ActorRuntimeDetails)