//==========================================================================//
// Copyright Elhoussine Mehnik (ue4resources@gmail.com). All Rights Reserved.
//================== http://unrealengineresources.com/ =====================//

#include "AssetTypeActions_EditorModeToolUtilityBlueprint.h"
#include "BlueprintEditorModule.h"
#include "EditorScriptingToolsTypes.h"

#define LOCTEXT_NAMESPACE "AssetTypeActions_EditorModeToolUtilityBlueprint"

FText FAssetTypeActions_EditorModeToolUtilityBlueprint::GetName() const
{
	return LOCTEXT("AssetTypeActions_EditorModeToolInstance", "Editor Mode Tool Blueprint");
}

FColor FAssetTypeActions_EditorModeToolUtilityBlueprint::GetTypeColor() const
{
	return FEditorScriptingUtilityAssetColorsHelper::ModeToolBlueprintColor;
}

UClass* FAssetTypeActions_EditorModeToolUtilityBlueprint::GetSupportedClass() const
{
	return UEditorModeToolUtilityBlueprint::StaticClass();
}

void FAssetTypeActions_EditorModeToolUtilityBlueprint::GetAdditionalActions(TWeakObjectPtr<UObject> ObjectWeakPtr, FMenuBuilder& MenuBuilder)
{

}

#undef LOCTEXT_NAMESPACE //"AssetTypeActions_EditorModeToolUtilityBlueprint"
