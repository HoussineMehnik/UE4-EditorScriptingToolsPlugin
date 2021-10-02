//==========================================================================//
// Copyright Elhoussine Mehnik (ue4resources@gmail.com). All Rights Reserved.
//================== http://unrealengineresources.com/ =====================//

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
