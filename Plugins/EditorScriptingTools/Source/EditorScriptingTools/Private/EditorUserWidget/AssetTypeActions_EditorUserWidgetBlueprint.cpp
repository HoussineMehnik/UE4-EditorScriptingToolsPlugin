//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//


#include "AssetTypeActions_EditorUserWidgetBlueprint.h"
#include "Misc/MessageDialog.h"
#include "Engine/Blueprint.h"
#include "WidgetBlueprint.h"
#include "SBlueprintDiff.h"
#include "WidgetBlueprintEditor.h"
#include "IEditorScriptingToolsModule.h"
#include "EditorUserWidgetBlueprint.h"
#include "EditorScriptingToolsTypes.h"

#define LOCTEXT_NAMESPACE "FAssetTypeActions_EditorUserWidgetBlueprint"


FText FAssetTypeActions_EditorUserWidgetBlueprint::GetName() const
{
	return LOCTEXT("AssetTypeActions_EditorUserWidgetBlueprint", "Editor User Widget Blueprint");
}


FColor FAssetTypeActions_EditorUserWidgetBlueprint::GetTypeColor() const
{
	return FEditorScriptingUtilityAssetColorsHelper::EditorUserWidgetBlueprintColor;
}

uint32 FAssetTypeActions_EditorUserWidgetBlueprint::GetCategories()
{
	if (IEditorScriptingToolsModule* EditorScriptingToolsModulePtr = IEditorScriptingToolsModule::GetPtr())
	{
		return EditorScriptingToolsModulePtr->GetEditorScriptingAssetCategory();
	}
	return EAssetTypeCategories::UI;
}

void FAssetTypeActions_EditorUserWidgetBlueprint::OpenAssetEditor(const TArray<UObject*>& InObjects, TSharedPtr<IToolkitHost> EditWithinLevelEditor)
{
	EToolkitMode::Type Mode = EditWithinLevelEditor.IsValid() ? EToolkitMode::WorldCentric : EToolkitMode::Standalone;

	for (auto ObjIt = InObjects.CreateConstIterator(); ObjIt; ++ObjIt)
	{
		auto Blueprint = Cast<UBlueprint>(*ObjIt);
		if (Blueprint && Blueprint->SkeletonGeneratedClass && Blueprint->GeneratedClass)
		{
			TSharedRef< FWidgetBlueprintEditor > NewBlueprintEditor(new FWidgetBlueprintEditor());

			TArray<UBlueprint*> Blueprints;
			Blueprints.Add(Blueprint);
			NewBlueprintEditor->InitWidgetBlueprintEditor(Mode, EditWithinLevelEditor, Blueprints, true);
		}
		else
		{
			FMessageDialog::Open(EAppMsgType::Ok, LOCTEXT("FailedToLoadWidgetBlueprint", "Widget Blueprint could not be loaded because it derives from an invalid class.\nCheck to make sure the parent class for this blueprint hasn't been removed!"));
		}
	}
}

UClass* FAssetTypeActions_EditorUserWidgetBlueprint::GetSupportedClass() const
{
	return UEditorUserWidgetBlueprint::StaticClass();
}

FText FAssetTypeActions_EditorUserWidgetBlueprint::GetAssetDescription(const FAssetData& AssetData) const
{
	FString Description = AssetData.GetTagValueRef<FString>(GET_MEMBER_NAME_CHECKED(UBlueprint, BlueprintDescription));
	if (!Description.IsEmpty())
	{
		Description.ReplaceInline(TEXT("\\n"), TEXT("\n"));
		return FText::FromString(MoveTemp(Description));
	}

	return FText::GetEmpty();
}

void FAssetTypeActions_EditorUserWidgetBlueprint::PerformAssetDiff(UObject* Asset1, UObject* Asset2, const struct FRevisionInfo& OldRevision, const struct FRevisionInfo& NewRevision) const
{
	UBlueprint* OldBlueprint = CastChecked<UBlueprint>(Asset1);
	UBlueprint* NewBlueprint = CastChecked<UBlueprint>(Asset2);

	// sometimes we're comparing different revisions of one single asset (other 
	// times we're comparing two completely separate assets altogether)
	bool bIsSingleAsset = (NewBlueprint->GetName() == OldBlueprint->GetName());

	FText WindowTitle = LOCTEXT("NamelessWidgetBlueprintDiff", "Widget Blueprint Diff");
	// if we're diffing one asset against itself 
	if (bIsSingleAsset)
	{
		// identify the assumed single asset in the window's title
		WindowTitle = FText::Format(LOCTEXT("WidgetBlueprintDiff", "{0} - Widget Blueprint Diff"), FText::FromString(NewBlueprint->GetName()));
	}

	SBlueprintDiff::CreateDiffWindow(WindowTitle, OldBlueprint, NewBlueprint, OldRevision, NewRevision);
}

#undef LOCTEXT_NAMESPACE
