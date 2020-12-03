//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#include "AssetTypeActions_ComponentVisualizerUtilityBlueprint.h"
#include "Framework/MultiBox/MultiBoxBuilder.h"
#include "Misc/PackageName.h"
#include "ComponentVisualizerUtilityBlueprintFactory.h"
#include "Kismet2/KismetEditorUtilities.h"
#include "BlueprintEditorModule.h"
#include "EditorScriptingToolsModule.h"
#include "ComponentVisualizerUtilityBlueprint.h"
#include "EditorScriptingToolsStyle.h"




#define LOCTEXT_NAMESPACE "FAssetTypeActions_ComponentVisualizerUtilityBlueprint"

FText FAssetTypeActions_ComponentVisualizerUtilityBlueprint::GetName() const
{
	return LOCTEXT("AssetTypeActions_ComponentVisualizer", "Component Visualizer Blueprint");
}

FColor FAssetTypeActions_ComponentVisualizerUtilityBlueprint::GetTypeColor() const
{
	return FEditorScriptingUtilityAssetColorsHelper::ComponentVisualizerUtilityBlueprintColor;
}

UClass* FAssetTypeActions_ComponentVisualizerUtilityBlueprint::GetSupportedClass() const
{
	return UComponentVisualizerUtilityBlueprint::StaticClass();
}

void FAssetTypeActions_ComponentVisualizerUtilityBlueprint::GetAdditionalActions(TWeakObjectPtr<UObject> ObjectWeakPtr, FMenuBuilder& MenuBuilder)
{

}

#undef LOCTEXT_NAMESPACE
