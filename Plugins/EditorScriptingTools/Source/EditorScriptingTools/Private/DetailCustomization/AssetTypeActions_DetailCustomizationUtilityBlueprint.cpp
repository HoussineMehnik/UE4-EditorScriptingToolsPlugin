//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#include "AssetTypeActions_DetailCustomizationUtilityBlueprint.h"
#include "Framework/MultiBox/MultiBoxBuilder.h"
#include "Misc/PackageName.h"
#include "ComponentVisualizerUtilityBlueprintFactory.h"
#include "Kismet2/KismetEditorUtilities.h"
#include "BlueprintEditorModule.h"
#include "EditorScriptingToolsModule.h"
#include "EditorScriptingToolsStyle.h"
#include "DetailCustomizationUtilityBlueprint.h"




#define LOCTEXT_NAMESPACE "AssetTypeActions_DetailCustomizationUtilityBlueprint"

FText FAssetTypeActions_DetailCustomizationUtilityBlueprint::GetName() const
{
	return LOCTEXT("AssetTypeActions_DetailCustomizationInstance", "Detail Customizations Blueprint");
}

FColor FAssetTypeActions_DetailCustomizationUtilityBlueprint::GetTypeColor() const
{
	return FEditorScriptingUtilityAssetColorsHelper::DetailCustomizationInstanceColor;
}

UClass* FAssetTypeActions_DetailCustomizationUtilityBlueprint::GetSupportedClass() const
{
	return UDetailCustomizationUtilityBlueprint::StaticClass();
}

void FAssetTypeActions_DetailCustomizationUtilityBlueprint::GetAdditionalActions(TWeakObjectPtr<UObject> ObjectWeakPtr, FMenuBuilder& MenuBuilder)
{

}

#undef LOCTEXT_NAMESPACE
