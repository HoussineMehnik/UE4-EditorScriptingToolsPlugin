//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#include "EditorScriptingToolsModule.h"

#include "EditorScriptingToolsStyle.h"



#include "IAssetTypeActions.h"
#include "IBlutilityModule.h"
#

#include "ISettingsModule.h"
#include "EditorScriptingToolsSubsystem.h"
#include "EditorUserDefinedSettings.h"

#include "PropertyEditorModule.h"
#include "EditorScriptingToolsSubsystemDetails.h"
#include "EditorScriptingUtilityBlueprintDetails.h"


#include "LevelEditor.h"
#include "Widgets/Docking/SDockTab.h"
#include "WorkspaceMenuStructure/Public/WorkspaceMenuStructureModule.h"
#include "WorkspaceMenuStructure/Public/WorkspaceMenuStructure.h"
#include "UnrealEdGlobals.h"

#include "EditorModeManager.h"
#include "EditorModes.h"

#include "Templates/SubclassOf.h"
#include "IDetailsView.h"

#include "BluEdMode.h"
#include "BluEdModeTypes.h"


#include "EditorUserDefinedSettingsUtilityBlueprint.h"
#include "ComponentVisualizerUtilityBlueprint.h"
#include "ComponentVisualizerInstance.h"
#include <NativeComponentVisualizerInstance.h>
#include "Editor/UnrealEdEngine.h"
#include "SEditorScriptingToolsTab.h"

#include "UMGEditorModule.h"
#include "KismetCompiler.h"
#include "KismetCompilerModule.h"
#include "WidgetBlueprintCompiler.h"
#include "EditorUserWidgetBlueprint.h"
#include "NativeDetailCustomizationInstancesManager.h"

#define LOCTEXT_NAMESPACE "FEditorScriptingToolsModule"


const FName FEditorScriptingToolsModule::FEditorScriptingToolsTabs::ScriptingToolsSettingsTabID = TEXT("EditorScriptingToolsSubsystem");
const FName FEditorScriptingToolsModule::FEditorScriptingToolsTabs::PlacementBrowser = TEXT("PlacementBrowser");



IEditorScriptingToolsModule* IEditorScriptingToolsModule::GetPtr()
{
	return FEditorScriptingToolsModule::Singleton;
}

IEditorScriptingToolsModule* FEditorScriptingToolsModule::Singleton{ nullptr };

void FEditorScriptingToolsModule::StartupModule()
{
	Singleton = this;
	FEditorScriptingToolsStyle::ReloadTextures();
	FEditorScriptingToolsStyle::Initialize();
	RegisterBlueprintCompilers();
	FCoreDelegates::OnPostEngineInit.AddRaw(this, &FEditorScriptingToolsModule::OnPostEngineInit);
}

void FEditorScriptingToolsModule::OnPostEngineInit()
{
	ExtendLevelEditorMenu();
	RegisterAssetTypesActions();
	RegisterCustomClassLayouts();
	RegisterEditorSettings();
	RegisterEditorModes();
	RegisterPlacementModeExtensions();
	BindEditorDelegates();
	RegisterComponentVisualizers();
}

void FEditorScriptingToolsModule::ShutdownModule()
{
	FCoreDelegates::OnPostEngineInit.RemoveAll(this);
	if (UObjectInitialized())
	{
		UnregisterBlueprintCompilers();
		UnbindEditorDelegates();
		UnregisterEditorModes();
		UnregisterEditorSettings();
		UnregisterCustomClassLayouts();
		UnregisterCreatedAssetTypes();
		UnregisterPlacementModeExtensions();
		UnregisterComponentVisualizers();
	}
	FEditorScriptingToolsStyle::Shutdown();
	Singleton = nullptr;
}

FName FEditorScriptingToolsModule::GetEditorScriptingToolsTabName() const
{
	return FEditorScriptingToolsTabs::ScriptingToolsSettingsTabID;
}

uint32 FEditorScriptingToolsModule::GetEditorScriptingAssetCategory() const
{
	if (IBlutilityModule* BlutilityModule = FModuleManager::GetModulePtr<IBlutilityModule>("Blutility"))
	{
		return BlutilityModule->GetAssetCategory();
	}
	return EditorScriptingToolsAssetCategory;
}


void FEditorScriptingToolsModule::RegisterEditorScriptingUtility(IEditorScriptingUtilityAssetInterface* ScriptingUtilityAsset)
{
	switch (ScriptingUtilityAsset->GetUtilityType())
	{
	case EEditorScriptingUtilityType::EditorMode: RegisterEditorModeToolUtilityBlueprint(CastChecked<UEditorModeToolUtilityBlueprint>(ScriptingUtilityAsset)); break;
	case EEditorScriptingUtilityType::DetailCustomization:  RegisterDetailCustomizationUtilityBlueprint(CastChecked<UDetailCustomizationUtilityBlueprint>(ScriptingUtilityAsset)); break;
	case EEditorScriptingUtilityType::ComponentVisulizer: RegisterComponentVisualizerUtilityBlueprint(CastChecked<UComponentVisualizerUtilityBlueprint>(ScriptingUtilityAsset)); break;
	case EEditorScriptingUtilityType::UserDefinedSettings: RegisterEditorUserDefinedSettingsUtilityBlueprint(CastChecked<UEditorUserDefinedSettingsUtilityBlueprint>(ScriptingUtilityAsset)); break;
	case EEditorScriptingUtilityType::UserDefinedActions: RegisterEditorUserDefinedActions(CastChecked<UEditorUserDefinedActions>(ScriptingUtilityAsset)); break;
	default: ensureMsgf(false, TEXT("This utility type is not handled!")); break;
	}
}


void FEditorScriptingToolsModule::RefreshEditorScriptingUtility(IEditorScriptingUtilityAssetInterface* ScriptingUtilityAsset)
{
	switch (ScriptingUtilityAsset->GetUtilityType())
	{
	case EEditorScriptingUtilityType::EditorMode: RefreshEditorModeToolUtilityBlueprint(CastChecked<UEditorModeToolUtilityBlueprint>(ScriptingUtilityAsset)); break;
	case EEditorScriptingUtilityType::DetailCustomization: RefreshDetailCustomizationUtilityBlueprint(CastChecked<UDetailCustomizationUtilityBlueprint>(ScriptingUtilityAsset)); break;
	case EEditorScriptingUtilityType::ComponentVisulizer: RefreshComponentVisualizerUtilityBlueprint(CastChecked<UComponentVisualizerUtilityBlueprint>(ScriptingUtilityAsset)); break;
	case EEditorScriptingUtilityType::UserDefinedSettings: RefreshEditorUserDefinedSettingsUtilityBlueprint(CastChecked<UEditorUserDefinedSettingsUtilityBlueprint>(ScriptingUtilityAsset)); break;
	case EEditorScriptingUtilityType::UserDefinedActions: RefreshEditorUserDefinedActions(CastChecked<UEditorUserDefinedActions>(ScriptingUtilityAsset)); break;
	default: ensureMsgf(false, TEXT("This utility type is not handled!")); break;
	}
}

void FEditorScriptingToolsModule::UnregisterEditorScriptingUtility(IEditorScriptingUtilityAssetInterface* ScriptingUtilityAsset)
{
	switch (ScriptingUtilityAsset->GetUtilityType())
	{
	case EEditorScriptingUtilityType::EditorMode: UnregisterEditorModeToolUtilityBlueprint(CastChecked<UEditorModeToolUtilityBlueprint>(ScriptingUtilityAsset)); break;
	case EEditorScriptingUtilityType::DetailCustomization: UnregisterDetailCustomizationUtilityBlueprint(CastChecked<UDetailCustomizationUtilityBlueprint>(ScriptingUtilityAsset)); break;
	case EEditorScriptingUtilityType::ComponentVisulizer: UnregisterComponentVisualizerUtilityBlueprint(CastChecked<UComponentVisualizerUtilityBlueprint>(ScriptingUtilityAsset)); break;
	case EEditorScriptingUtilityType::UserDefinedSettings: UnregisterEditorUserDefinedSettingsUtilityBlueprint(CastChecked<UEditorUserDefinedSettingsUtilityBlueprint>(ScriptingUtilityAsset)); break;
	case EEditorScriptingUtilityType::UserDefinedActions: UnregisterEditorUserDefinedActions(CastChecked<UEditorUserDefinedActions>(ScriptingUtilityAsset)); break;
	default: ensureMsgf(false, TEXT("This utility type is not handled!")); break;
	}
}


bool FEditorScriptingToolsModule::CanRegisterEditorScriptingUtility(const IEditorScriptingUtilityAssetInterface* ScriptingUtilityAsset) const
{
	switch (ScriptingUtilityAsset->GetUtilityType())
	{
	case EEditorScriptingUtilityType::EditorMode: return CanRegisterEditorModeToolUtilityBlueprint(CastChecked<UEditorModeToolUtilityBlueprint>(ScriptingUtilityAsset));
	case EEditorScriptingUtilityType::DetailCustomization: return CanRegisterDetailCustomizationUtilityBlueprint(CastChecked<UDetailCustomizationUtilityBlueprint>(ScriptingUtilityAsset));
	case EEditorScriptingUtilityType::ComponentVisulizer: return CanRegisterComponentVisualizerUtilityBlueprint(CastChecked<UComponentVisualizerUtilityBlueprint>(ScriptingUtilityAsset));
	case EEditorScriptingUtilityType::UserDefinedSettings: return CanRegisterEditorUserDefinedSettingsUtilityBlueprint(CastChecked<UEditorUserDefinedSettingsUtilityBlueprint>(ScriptingUtilityAsset));
	case EEditorScriptingUtilityType::UserDefinedActions: return CanRegisterEditorUserDefinedActions(CastChecked<UEditorUserDefinedActions>(ScriptingUtilityAsset));
	default: ensureMsgf(false, TEXT("This utility type is not handled!")); return false;
	}

	return false;
}


bool FEditorScriptingToolsModule::IsEditorScriptingUtilityRegistered(const IEditorScriptingUtilityAssetInterface* ScriptingUtilityAsset) const
{
	switch (ScriptingUtilityAsset->GetUtilityType())
	{
	case EEditorScriptingUtilityType::EditorMode: return IsEditorModeToolUtilityBlueprintRegistered(CastChecked<UEditorModeToolUtilityBlueprint>(ScriptingUtilityAsset));
	case EEditorScriptingUtilityType::DetailCustomization: return IsDetailCustomizationUtilityBlueprintRegistered(CastChecked<UDetailCustomizationUtilityBlueprint>(ScriptingUtilityAsset));
	case EEditorScriptingUtilityType::ComponentVisulizer: return IsComponentVisualizerUtilityBlueprintRegistered(CastChecked<UComponentVisualizerUtilityBlueprint>(ScriptingUtilityAsset));
	case EEditorScriptingUtilityType::UserDefinedSettings: return IsEditorUserDefinedSettingsUtilityBlueprintRegistered(CastChecked<UEditorUserDefinedSettingsUtilityBlueprint>(ScriptingUtilityAsset));
	case EEditorScriptingUtilityType::UserDefinedActions: return IsEditorUserDefinedActionsRegistered(CastChecked<UEditorUserDefinedActions>(ScriptingUtilityAsset));
	default: ensureMsgf(false, TEXT("This utility type is not handled!")); break;
	}

	return false;
}


FText FEditorScriptingToolsModule::GetRegisterScriptingUtilityText(const IEditorScriptingUtilityAssetInterface* ScriptingUtilityAsset) const
{
	switch (ScriptingUtilityAsset->GetUtilityType())
	{
	case EEditorScriptingUtilityType::EditorMode: return LOCTEXT("RunToolText", "Run Tool");
	case EEditorScriptingUtilityType::DetailCustomization: return LOCTEXT("RegisterCustomClassLayoutText", "Register Custom Layout");
	case EEditorScriptingUtilityType::ComponentVisulizer: return LOCTEXT("RegisterVisualizerText", "Register Visualizer");
	case EEditorScriptingUtilityType::UserDefinedSettings: return LOCTEXT("RegisterSettingsText", "Register");
	case EEditorScriptingUtilityType::UserDefinedActions: return LOCTEXT("MapActionsText", "Map Actions");
	default: ensureMsgf(false, TEXT("This utility type is not handled!")); break;
	}

	return FText::GetEmpty();
}

FText FEditorScriptingToolsModule::GetUnregisterScriptingUtilityText(const IEditorScriptingUtilityAssetInterface* ScriptingUtilityAsset) const
{
	switch (ScriptingUtilityAsset->GetUtilityType())
	{
	case EEditorScriptingUtilityType::EditorMode: return LOCTEXT("StopToolText", "Stop Tool");
	case EEditorScriptingUtilityType::DetailCustomization: return LOCTEXT("UnregisterCustomClassLayoutText", "Unregister Custom Layout");
	case EEditorScriptingUtilityType::ComponentVisulizer: return LOCTEXT("UnregisterVisualizerText", "Unregister Visualizer");
	case EEditorScriptingUtilityType::UserDefinedSettings: return LOCTEXT("UnregisterSettingsText", "Unregister");
	case EEditorScriptingUtilityType::UserDefinedActions: return LOCTEXT("UnmapActionsText", "Unmap Actions");
	default: ensureMsgf(false, TEXT("This utility type is not handled!")); break;
	}

	return FText::GetEmpty();
}

FText FEditorScriptingToolsModule::GetRegisterScriptingUtilityToolTipText(const IEditorScriptingUtilityAssetInterface* ScriptingUtilityAsset) const
{
	switch (ScriptingUtilityAsset->GetUtilityType())
	{
	case EEditorScriptingUtilityType::EditorMode: return LOCTEXT("LoadToolToolTipText", "Loads/Runs this editor mode tool.");
	case EEditorScriptingUtilityType::DetailCustomization:  return LOCTEXT("RegisterCustomClassLayoutToolTipText", "Registers a custom detail layout for specified class.");
	case EEditorScriptingUtilityType::ComponentVisulizer: return LOCTEXT("RegisterVisualizerToolTipText", "Register a function to draw extra information when the component is selected");
	case EEditorScriptingUtilityType::UserDefinedSettings: return LOCTEXT("RegisterSettingsToolTipText", "Register settings section");
	case EEditorScriptingUtilityType::UserDefinedActions: return LOCTEXT("MapActionsToolTipText", "Map Actions");
	default: ensureMsgf(false, TEXT("This utility type is not handled!")); break;
	}

	return FText::GetEmpty();
}

FText FEditorScriptingToolsModule::GetRefreshScriptingUtilityToolTipText(const IEditorScriptingUtilityAssetInterface* ScriptingUtilityAsset) const
{
	switch (ScriptingUtilityAsset->GetUtilityType())
	{
	case EEditorScriptingUtilityType::EditorMode: return LOCTEXT("ReloadToolToolTipText", "Reloads current editor mode tool");
	case EEditorScriptingUtilityType::DetailCustomization:  return LOCTEXT("UnregisterCustomClassLayoutToolTipText", "Refreshes detail layout for registered class.");
	case EEditorScriptingUtilityType::ComponentVisulizer: return LOCTEXT("RefreshVisualizerToolTipText", "Refresh (unregister & register )component visualizer function");
	case EEditorScriptingUtilityType::UserDefinedSettings: return LOCTEXT("RefreshSettingsToolTipText", " refresh settings section");
	case EEditorScriptingUtilityType::UserDefinedActions: return LOCTEXT("MapActionsToolTipText", "Refresh current commands mappings");
	default: ensureMsgf(false, TEXT("This utility type is not handled!")); break;
	}

	return FText::GetEmpty();
}

FText FEditorScriptingToolsModule::GetUnregisterScriptingUtilityToolTipText(const IEditorScriptingUtilityAssetInterface* ScriptingUtilityAsset) const
{
	switch (ScriptingUtilityAsset->GetUtilityType())
	{
	case EEditorScriptingUtilityType::EditorMode: return LOCTEXT("UnloadToolToolTipText", "Unloads/Stops this editor mode tool.");
	case EEditorScriptingUtilityType::DetailCustomization:  return LOCTEXT("UnregisterCustomClassLayoutToolTipText", "Unregisters custom detail layout for registered class.");
	case EEditorScriptingUtilityType::ComponentVisulizer: return LOCTEXT("UnregisterVisualizerToolTipText", "Unregister component visualizer function");
	case EEditorScriptingUtilityType::UserDefinedSettings: return LOCTEXT("UnreregisterToolTipText", "Unregister Editor User Defined Settings");
	case EEditorScriptingUtilityType::UserDefinedActions: return LOCTEXT("UnmapActionToolTipText", "Unmap registered commands and unload current actions asset");
	default: ensureMsgf(false, TEXT("This utility type is not handled!")); break;
	}

	return FText::GetEmpty();
}

FColor FEditorScriptingToolsModule::GetScriptingUtilityAssetColor(const IEditorScriptingUtilityAssetInterface* ScriptingUtilityAsset) const
{
	switch (ScriptingUtilityAsset->GetUtilityType())
	{
	case EEditorScriptingUtilityType::EditorMode: return FEditorScriptingUtilityAssetColorsHelper::ModeToolBlueprintColor;
	case EEditorScriptingUtilityType::DetailCustomization: return FEditorScriptingUtilityAssetColorsHelper::DetailCustomizationInstanceColor;
	case EEditorScriptingUtilityType::ComponentVisulizer: return FEditorScriptingUtilityAssetColorsHelper::ComponentVisualizerUtilityBlueprintColor;
	case EEditorScriptingUtilityType::UserDefinedSettings: return FEditorScriptingUtilityAssetColorsHelper::EditorUserDefinedSettingsUtilityBlueprintColor;
	case EEditorScriptingUtilityType::UserDefinedActions: return FEditorScriptingUtilityAssetColorsHelper::EditorUserDefinedActionsAssetColor;
	default: ensureMsgf(false, TEXT("This utility type is not handled!")); break;
	}

	return FColor::White;
}


void FEditorScriptingToolsModule::PostEditorTick(float DeltaSeconds)
{
	//
	FNativeDetailCustomizationInstancesManager::Get()->OnPostEditorTick(DeltaSeconds);

	//
	if (bPlaceablesTabRefreshRequested)
	{
		RegeneratePlacementModeTab();
	}
}

void FEditorScriptingToolsModule::ExtendLevelEditorMenu()
{
	EditorScriptingToolsMenuGroup = WorkspaceMenu::GetMenuStructure().GetToolsCategory()->AddGroup(
		LOCTEXT("WorkspaceMenu_EditorScriptingToolsMenuGroup", "Editor Scripting Tools"),
		LOCTEXT("EditorScriptingToolsMenuGroupTooltipText", "Editor Scripting Tools"),
		FSlateIcon(FSlateIcon(FEditorScriptingToolsStyle::Get()->GetStyleSetName(), TEXT("EditorScriptingTools"))),
		false);
}


void FEditorScriptingToolsModule::RegisterBlueprintCompilers()
{
	FKismetCompilerContext::RegisterCompilerForBP(UEditorUserWidgetBlueprint::StaticClass(), &UWidgetBlueprint::GetCompilerForWidgetBP);

	IUMGEditorModule& UMGEditorModule = FModuleManager::LoadModuleChecked<IUMGEditorModule>("UMGEditor");
	IKismetCompilerInterface& KismetCompilerModule = FModuleManager::LoadModuleChecked<IKismetCompilerInterface>("KismetCompiler");
	KismetCompilerModule.GetCompilers().Add(UMGEditorModule.GetRegisteredCompiler());
}


void FEditorScriptingToolsModule::UnregisterBlueprintCompilers()
{
	IUMGEditorModule& UMGEditorModule = FModuleManager::LoadModuleChecked<IUMGEditorModule>("UMGEditor");
	IKismetCompilerInterface& KismetCompilerModule = FModuleManager::LoadModuleChecked<IKismetCompilerInterface>("KismetCompiler");
	KismetCompilerModule.GetCompilers().Remove(UMGEditorModule.GetRegisteredCompiler());

}

void FEditorScriptingToolsModule::BindEditorDelegates()
{
	{
		FLevelEditorModule& LevelEditorModule = FModuleManager::LoadModuleChecked<FLevelEditorModule>("LevelEditor");
		LevelEditorModule.OnMapChanged().AddRaw(this, &FEditorScriptingToolsModule::HandleMapChanged);
		LevelEditorModule.OnTabManagerChanged().AddRaw(this, &FEditorScriptingToolsModule::HandleTabManagerChanged);
	}

	{
		FEditorDelegates::EditorModeIDEnter.AddRaw(this, &FEditorScriptingToolsModule::HandleEditorModeEntered);
		FEditorDelegates::PreBeginPIE.AddRaw(this, &FEditorScriptingToolsModule::HandlePreBeginPIE);
		FEditorDelegates::OnAssetsPreDelete.AddRaw(this, &FEditorScriptingToolsModule::HandleAssetsPreDelete);
		FEditorDelegates::OnAssetsDeleted.AddRaw(this, &FEditorScriptingToolsModule::HandleAssetsDeleted);
	}

	if (GEditor)
	{
		GEditor->OnBlueprintPreCompile().AddRaw(this, &FEditorScriptingToolsModule::HandleAnyBlueprintPreCompiled);
		GEditor->OnBlueprintCompiled().AddRaw(this, &FEditorScriptingToolsModule::HandleAnyBlueprintCompiled);
	}

	if (GEngine)
	{
		PostEditorTickHandle = GEngine->OnPostEditorTick().AddRaw(this, &FEditorScriptingToolsModule::PostEditorTick);
	}
}


void FEditorScriptingToolsModule::UnbindEditorDelegates()
{
	if (GEngine)
	{
		GEngine->OnPostEditorTick().Remove(PostEditorTickHandle);
	}

	if (FLevelEditorModule* LevelEditorModule = FModuleManager::GetModulePtr<FLevelEditorModule>("LevelEditor"))
	{
		LevelEditorModule->OnMapChanged().RemoveAll(this);
		LevelEditorModule->OnTabManagerChanged().RemoveAll(this);
	}

	if (GEditor)
	{
		GEditor->OnBlueprintPreCompile().RemoveAll(this);
		GEditor->OnBlueprintCompiled().RemoveAll(this);
	}

	FEditorDelegates::EditorModeIDEnter.RemoveAll(this);
	FEditorDelegates::PreBeginPIE.RemoveAll(this);
	FEditorDelegates::OnAssetsPreDelete.RemoveAll(this);
	FEditorDelegates::OnAssetsDeleted.RemoveAll(this);
}


void FEditorScriptingToolsModule::HandleAnyBlueprintPreCompiled(UBlueprint* Blueprint)
{

}

void FEditorScriptingToolsModule::HandleAnyBlueprintCompiled()
{

}


void FEditorScriptingToolsModule::HandleEditorModeEntered(const FEditorModeID& ModeID)
{
	
}

void FEditorScriptingToolsModule::HandleMapChanged(UWorld* InWorld, EMapChangeType MapChangeType)
{
	if (MapChangeType == EMapChangeType::SaveMap)
	{
		return;
	}

	if (FBluEdMode* BluEdMode = FBluEdMode::GetPtr())
	{
		BluEdMode->UnloadTool(true);
	}
}


void FEditorScriptingToolsModule::HandleTabManagerChanged()
{
	FLevelEditorModule& LevelEditorModule = FModuleManager::GetModuleChecked<FLevelEditorModule>(TEXT("LevelEditor"));
	TSharedPtr<FTabManager> LevelEditorTabManager = LevelEditorModule.GetLevelEditorTabManager();
	if (LevelEditorTabManager)
	{
		if (!LevelEditorTabManager->HasTabSpawner(FEditorScriptingToolsTabs::ScriptingToolsSettingsTabID))
		{
			LevelEditorTabManager->RegisterTabSpawner(FEditorScriptingToolsTabs::ScriptingToolsSettingsTabID, FOnSpawnTab::CreateRaw(this, &FEditorScriptingToolsModule::OnSpawnScriptingToolsSettingsTab))
				.SetDisplayName(LOCTEXT("ScriptingToolsSettingsTab_Title", "Editor Scripting Tools Settings"))
				.SetGroup(EditorScriptingToolsMenuGroup.ToSharedRef())
				.SetIcon(FSlateIcon(FEditorScriptingToolsStyle::Get()->GetStyleSetName(), TEXT("EditorScriptingTools.SettingsTab")));
		}
	}
}

void FEditorScriptingToolsModule::HandlePreBeginPIE(bool bIsSimulating)
{
	if (!bIsSimulating || !UEditorScriptingToolsSubsystem::GetSubsystem()->bEnableEditingWhileSimulating)
	{
		if (FBluEdMode* BluEdMode = FBluEdMode::GetPtr())
		{
			BluEdMode->UnloadTool(true);
		}
	}
}


void FEditorScriptingToolsModule::HandleAssetsPreDelete(const TArray<UObject*>& PreDeletedAssets)
{
	
}


void FEditorScriptingToolsModule::HandleAssetsDeleted(const TArray<UClass*>& DeletedClasses)
{
	UnregisterInvalidComponentVisualizers();
	UnregisterInvalidClassesLayouts();
}


TSharedRef<SDockTab> FEditorScriptingToolsModule::OnSpawnScriptingToolsSettingsTab(const FSpawnTabArgs& SpawnTabArgs)
{
	return SNew(SEditorScriptingToolsTab);
}

IMPLEMENT_MODULE(FEditorScriptingToolsModule, EditorScriptingTools)
#undef LOCTEXT_NAMESPACE	
