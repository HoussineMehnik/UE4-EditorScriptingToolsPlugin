//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#include "EditorScriptingAssetTypeActions_Base.h"
#include "Framework/MultiBox/MultiBoxBuilder.h"
#include "Misc/PackageName.h"
#include "Misc/MessageDialog.h"

#include "Kismet2/KismetEditorUtilities.h"
#include "BlueprintEditorModule.h"
#include "IContentBrowserSingleton.h"
#include "ContentBrowserModule.h"
#include "Widgets/Layout/SBorder.h"
#include "Widgets/Images/SThrobber.h"
#include "EditorScriptingToolsModule.h"
#include "EditorScriptingToolsSubsystem.h"
#include "BluEdMode.h"
#include "EditorModeToolInstance.h"

#include "EditorTypesWrapperTypes.h"
#include "EditorScriptingToolsStyle.h"
#include "EditorFontGlyphs.h"
#include "IEditorScriptingUtilityAssetInterface.h"
#include "EditorScriptingUtilityBlueprint.h"


#define LOCTEXT_NAMESPACE "AssetTypeActions"


uint32 FEditorScriptingAssetTypeActions_Base::GetCategories()
{
	if (IEditorScriptingToolsModule* EditorScriptingToolsModulePtr = IEditorScriptingToolsModule::GetPtr())
	{
		return EditorScriptingToolsModulePtr->GetEditorScriptingAssetCategory();
	}
	return EAssetTypeCategories::Blueprint;
}

bool FEditorScriptingAssetTypeActions_Base::CanLocalize() const
{
	return false;
}


bool FEditorScriptingAssetTypeActions_Base::HasActions(const TArray<UObject*>& InObjects) const
{
	return InObjects.Num() > 0;
}

TSharedPtr<class SWidget> FEditorScriptingAssetTypeActions_Base::GetThumbnailOverlay(const FAssetData& AssetData) const
{
	TWeakObjectPtr<UObject> ObjectWeakPtr = AssetData.GetAsset();

	return SNew(SImage)
		.Visibility(this, &FEditorScriptingAssetTypeActions_Base::GetThumbnailOverlayVisibility, ObjectWeakPtr)
		.ColorAndOpacity(FLinearColor(1.0f, 1.0f, 1.0f, .25f));
}


void FEditorScriptingAssetTypeActions_Base::GetActions(const TArray<UObject*>& InObjects, FMenuBuilder& MenuBuilder)
{
	if (InObjects.Num() == 1)
	{
		IEditorScriptingToolsModule* ScriptingToolsModule = IEditorScriptingToolsModule::GetPtr();

		TWeakObjectPtr<UObject> ObjectWeakPtr = InObjects[0];
		IEditorScriptingUtilityAssetInterface* ScriptingUtilityAsset = Cast<IEditorScriptingUtilityAssetInterface>(ObjectWeakPtr.Get());
		check(ScriptingUtilityAsset != nullptr);

		MenuBuilder.AddMenuEntry(
			ScriptingToolsModule->GetRegisterScriptingUtilityText(ScriptingUtilityAsset),
			ScriptingToolsModule->GetRegisterScriptingUtilityToolTipText(ScriptingUtilityAsset),
			FSlateIcon(FEditorScriptingToolsStyle::Get()->GetStyleSetName(), TEXT("EditorScriptingUtility.Register")),
			FUIAction(
				FExecuteAction::CreateSP(this, &FEditorScriptingAssetTypeActions_Base::RegisterUtility, ObjectWeakPtr),
				FCanExecuteAction::CreateSP(this, &FEditorScriptingAssetTypeActions_Base::CanRegisterUtility, ObjectWeakPtr),
				FIsActionChecked(),
				FIsActionButtonVisible::CreateSP(this, &FEditorScriptingAssetTypeActions_Base::CanRegisterUtility, ObjectWeakPtr)
			)
		);

		MenuBuilder.AddMenuEntry(
			ScriptingToolsModule->GetUnregisterScriptingUtilityText(ScriptingUtilityAsset),
			ScriptingToolsModule->GetUnregisterScriptingUtilityToolTipText(ScriptingUtilityAsset),
			FSlateIcon(FEditorScriptingToolsStyle::Get()->GetStyleSetName(), TEXT("EditorScriptingUtility.Unregister")),
			FUIAction(
				FExecuteAction::CreateSP(this, &FEditorScriptingAssetTypeActions_Base::UnregisterUtility, ObjectWeakPtr),
				FCanExecuteAction::CreateSP(this, &FEditorScriptingAssetTypeActions_Base::CanUnregisterUtility, ObjectWeakPtr),
				FIsActionChecked(),
				FIsActionButtonVisible::CreateSP(this, &FEditorScriptingAssetTypeActions_Base::CanUnregisterUtility, ObjectWeakPtr)
			)
		);

		GetAdditionalActions(ObjectWeakPtr, MenuBuilder);
	}
	else
	{
		MenuBuilder.AddWidget
		(
			SNew(SHorizontalBox)
				+SHorizontalBox::Slot()
				.AutoWidth()
				[
					SNew(STextBlock)
					.ColorAndOpacity(FLinearColor(0.65f, 0.4f, 0.15f, 1.0f))
					.TextStyle(FEditorStyle::Get(), "ContentBrowser.TopBar.Font")
					.Font(FEditorStyle::Get().GetFontStyle("FontAwesome.11"))
					.Text(FEditorFontGlyphs::Exclamation_Triangle)
				]
				+SHorizontalBox::Slot()
				.Padding(8.f, 0.f)
				.AutoWidth()
				[
					SNew(STextBlock)
					.ColorAndOpacity(FLinearColor(0.65f, 0.4f, 0.15f, 1.0f))
					.Text(LOCTEXT("WarningMsg", "Select a single asset to see utility actions"))
				],
				FText::GetEmpty()
		);
	}
}


void FEditorScriptingAssetTypeActions_Base::OpenAssetEditor(const TArray<UObject*>& InObjects, TSharedPtr<class IToolkitHost> EditWithinLevelEditor)
{
	EToolkitMode::Type Mode = EditWithinLevelEditor.IsValid() ? EToolkitMode::WorldCentric : EToolkitMode::Standalone;

	for (auto ObjIt = InObjects.CreateConstIterator(); ObjIt; ++ObjIt)
	{
		if (UEditorScriptingUtilityBlueprint* ScriptingUtilityBlueprint = Cast<UEditorScriptingUtilityBlueprint>(*ObjIt))
		{
			FBlueprintEditorModule& BlueprintEditorModule = FModuleManager::LoadModuleChecked<FBlueprintEditorModule>("Kismet");
			TSharedRef<IBlueprintEditor> NewBlueprintEditor = BlueprintEditorModule.CreateBlueprintEditor(Mode, EditWithinLevelEditor, ScriptingUtilityBlueprint, false);
		}
	}
}

void FEditorScriptingAssetTypeActions_Base::RegisterUtility(TWeakObjectPtr<UObject> ObjectWeakPtr)
{
	if (IEditorScriptingUtilityAssetInterface* ScriptingUtilityAsset = Cast<IEditorScriptingUtilityAssetInterface>(ObjectWeakPtr.Get()))
	{
		IEditorScriptingToolsModule* ScriptingToolsModule = IEditorScriptingToolsModule::GetPtr();
		ScriptingToolsModule->RegisterEditorScriptingUtility(ScriptingUtilityAsset);
	}
}


bool FEditorScriptingAssetTypeActions_Base::CanRegisterUtility(TWeakObjectPtr<UObject> ObjectWeakPtr) const
{
	if (IEditorScriptingUtilityAssetInterface* ScriptingUtilityAsset = Cast<IEditorScriptingUtilityAssetInterface>(ObjectWeakPtr.Get()))
	{
		IEditorScriptingToolsModule* ScriptingToolsModule = IEditorScriptingToolsModule::GetPtr();
		return ScriptingToolsModule->CanRegisterEditorScriptingUtility(ScriptingUtilityAsset);
	}
	return false;
}


void FEditorScriptingAssetTypeActions_Base::UnregisterUtility(TWeakObjectPtr<UObject> ObjectWeakPtr)
{
	if (IEditorScriptingUtilityAssetInterface* ScriptingUtilityAsset = Cast<IEditorScriptingUtilityAssetInterface>(ObjectWeakPtr.Get()))
	{
		IEditorScriptingToolsModule* ScriptingToolsModule = IEditorScriptingToolsModule::GetPtr();
		ScriptingToolsModule->UnregisterEditorScriptingUtility(ScriptingUtilityAsset);
	}
}


bool FEditorScriptingAssetTypeActions_Base::CanUnregisterUtility(TWeakObjectPtr<UObject> ObjectWeakPtr) const
{
	if (IEditorScriptingUtilityAssetInterface* ScriptingUtilityAsset = Cast<IEditorScriptingUtilityAssetInterface>(ObjectWeakPtr.Get()))
	{
		IEditorScriptingToolsModule* ScriptingToolsModule = IEditorScriptingToolsModule::GetPtr();
		return ScriptingToolsModule->IsEditorScriptingUtilityRegistered(ScriptingUtilityAsset);
	}
	return false;
}

EVisibility FEditorScriptingAssetTypeActions_Base::GetThumbnailOverlayVisibility(TWeakObjectPtr<UObject> ObjectWeakPtr) const
{
	if (UEditorScriptingToolsSubsystem::GetSubsystem()->bEnableThumbnailOverlayOnRegisteredUtilities)
	{
		if (IEditorScriptingUtilityAssetInterface* ScriptingUtilityAsset = Cast<IEditorScriptingUtilityAssetInterface>(ObjectWeakPtr.Get()))
		{
			IEditorScriptingToolsModule* ScriptingToolsModule = IEditorScriptingToolsModule::GetPtr();
			if (ScriptingToolsModule->IsEditorScriptingUtilityRegistered(ScriptingUtilityAsset))
			{
				return EVisibility::Visible;
			}
		}
	}
	return EVisibility::Collapsed;
}

#undef LOCTEXT_NAMESPACE

