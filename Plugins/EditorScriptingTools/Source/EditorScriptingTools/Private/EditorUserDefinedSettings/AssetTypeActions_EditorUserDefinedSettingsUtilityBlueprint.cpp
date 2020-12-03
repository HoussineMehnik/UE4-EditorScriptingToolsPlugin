//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#include "AssetTypeActions_EditorUserDefinedSettingsUtilityBlueprint.h"
#include "BlueprintEditorModule.h"
#include "EditorUserDefinedSettingsUtilityBlueprint.h"
#include "EditorScriptingToolsStyle.h"
#include "EditorScriptingToolsModule.h"


#define LOCTEXT_NAMESPACE "AssetTypeActions_EditorUserDefinedSettingsUtilityBlueprint"

FText FAssetTypeActions_EditorUserDefinedSettingsUtilityBlueprint::GetName() const
{
	return LOCTEXT("EditorUserDefinedSettings", "Editor User Defined Settings Blueprint");
}

FColor FAssetTypeActions_EditorUserDefinedSettingsUtilityBlueprint::GetTypeColor() const
{
	return FEditorScriptingUtilityAssetColorsHelper::EditorUserDefinedSettingsUtilityBlueprintColor;
}

UClass* FAssetTypeActions_EditorUserDefinedSettingsUtilityBlueprint::GetSupportedClass() const
{
	return UEditorUserDefinedSettingsUtilityBlueprint::StaticClass();
}

void FAssetTypeActions_EditorUserDefinedSettingsUtilityBlueprint::GetAdditionalActions(TWeakObjectPtr<UObject> ObjectWeakPtr, FMenuBuilder& MenuBuilder)
{

}

#undef LOCTEXT_NAMESPACE
