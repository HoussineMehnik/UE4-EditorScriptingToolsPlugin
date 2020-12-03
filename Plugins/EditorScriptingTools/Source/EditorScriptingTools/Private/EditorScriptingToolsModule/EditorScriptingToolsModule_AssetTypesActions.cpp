//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#include "EditorScriptingToolsModule.h"

#include "EditorScriptingToolsSubsystem.h"
#include "AssetTypeActions_EditorUserWidgetBlueprint.h"
#include "AssetTypeActions_EditorUserDefinedActions.h"
#include "AssetTypeActions_EditorModeToolUtilityBlueprint.h"
#include "AssetTypeActions_EditorUserDefinedSettingsUtilityBlueprint.h"
#include "AssetTypeActions_ComponentVisualizerUtilityBlueprint.h"
#include "AssetTypeActions_DetailCustomizationUtilityBlueprint.h"

#include "WidgetBlueprint.h"
#include "AssetToolsModule.h"
#include "IAssetTypeActions.h"



#define LOCTEXT_NAMESPACE "EditorScriptingToolsModule_AssetTypesActions"


void FEditorScriptingToolsModule::RegisterAssetTypesActions()
{
	IAssetTools& AssetTools = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();
	EditorScriptingToolsAssetCategory = AssetTools.RegisterAdvancedAssetCategory(FName(TEXT("Editor Scripting Tools")), LOCTEXT("EditorScriptingAssetCategory", "Editor Scripting Tools"));
	RegisterAssetTypeAction(AssetTools, MakeShareable(new FAssetTypeActions_EditorUserWidgetBlueprint));
	RegisterAssetTypeAction(AssetTools, MakeShareable(new FAssetTypeActions_EditorModeToolUtilityBlueprint));
	RegisterAssetTypeAction(AssetTools, MakeShareable(new FAssetTypeActions_ComponentVisualizerUtilityBlueprint));
	RegisterAssetTypeAction(AssetTools, MakeShareable(new FAssetTypeActions_DetailCustomizationUtilityBlueprint));
	RegisterAssetTypeAction(AssetTools, MakeShareable(new FAssetTypeActions_EditorUserDefinedActions));
	RegisterAssetTypeAction(AssetTools, MakeShareable(new FAssetTypeActions_EditorUserDefinedSettingsUtilityBlueprint));

}


void FEditorScriptingToolsModule::RegisterAssetTypeAction(IAssetTools& AssetTools, TSharedRef<IAssetTypeActions> Action)
{
	AssetTools.RegisterAssetTypeActions(Action);
	CreatedAssetTypeActions.Add(Action);
}


void FEditorScriptingToolsModule::UnregisterCreatedAssetTypes()
{
	if (FModuleManager::Get().IsModuleLoaded("AssetTools"))
	{
		IAssetTools& AssetTools = FModuleManager::GetModuleChecked<FAssetToolsModule>("AssetTools").Get();
		for (int32 Index = 0; Index < CreatedAssetTypeActions.Num(); ++Index)
		{
			AssetTools.UnregisterAssetTypeActions(CreatedAssetTypeActions[Index].ToSharedRef());
		}
	}
	CreatedAssetTypeActions.Empty();
}



#undef LOCTEXT_NAMESPACE	