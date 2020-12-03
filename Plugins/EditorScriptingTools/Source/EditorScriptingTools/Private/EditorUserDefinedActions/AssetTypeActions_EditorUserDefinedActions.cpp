//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//


#include "AssetTypeActions_EditorUserDefinedActions.h"

#include "BlueprintEditorModule.h"
#include "AssetData.h"
#include "Framework/MultiBox/MultiBoxBuilder.h"

#include "EditorTypesWrapperTypes.h"
#include "EditorUserDefinedActionsEditor.h"
#include "EditorUserDefinedActions.h"
#include "EditorUserDefinedCommands.h"
#include "EditorScriptingToolsStyle.h"

#define LOCTEXT_NAMESPACE "AssetTypeActions_EditorUserDefinedActions"

FText FAssetTypeActions_EditorUserDefinedActions::GetName() const
{
	return LOCTEXT("AssetTypeActions_EditorUserDefinedActions", "Editor User Defined Actions");
}

FText FAssetTypeActions_EditorUserDefinedActions::GetAssetDescription(const FAssetData& AssetData) const
{
	return AssetData.GetTagValueRef<FText>(GET_MEMBER_NAME_CHECKED(UEditorUserDefinedActions, EnumDescription));
}

FColor FAssetTypeActions_EditorUserDefinedActions::GetTypeColor() const
{
	return FEditorScriptingUtilityAssetColorsHelper::EditorUserDefinedActionsAssetColor;
}

UClass* FAssetTypeActions_EditorUserDefinedActions::GetSupportedClass() const
{
	return UEditorUserDefinedActions::StaticClass();
}

void FAssetTypeActions_EditorUserDefinedActions::OpenAssetEditor(const TArray<UObject*>& InObjects, TSharedPtr<class IToolkitHost> EditWithinLevelEditor)
{
	const EToolkitMode::Type Mode = EditWithinLevelEditor.IsValid() ? EToolkitMode::WorldCentric : EToolkitMode::Standalone;

	FBlueprintEditorModule& BlueprintEditorModule = FModuleManager::LoadModuleChecked<FBlueprintEditorModule>("Kismet");

	for (auto ObjIt = InObjects.CreateConstIterator(); ObjIt; ++ObjIt)
	{
		if (UEditorUserDefinedActions* EditorUserDefinedActions = Cast<UEditorUserDefinedActions>(*ObjIt))
		{
			TSharedRef<FEditorUserDefinedActionsEditor> EditorUserDefinedActionsEditor(new FEditorUserDefinedActionsEditor());
			EditorUserDefinedActionsEditor->InitEditor(Mode, EditWithinLevelEditor, EditorUserDefinedActions);
		}
	}
}

void FAssetTypeActions_EditorUserDefinedActions::GetAdditionalActions(TWeakObjectPtr<UObject> ObjectWeakPtr, FMenuBuilder& MenuBuilder)
{

}

#undef LOCTEXT_NAMESPACE
