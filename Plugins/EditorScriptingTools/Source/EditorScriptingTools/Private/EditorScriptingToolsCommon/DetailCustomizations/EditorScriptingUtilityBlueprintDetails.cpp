//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#include "EditorScriptingUtilityBlueprintDetails.h"
#include "DetailCategoryBuilder.h"
#include "DetailLayoutBuilder.h"
#include "DetailWidgetRow.h"
#include "IDetailPropertyRow.h"
#include "UnrealEngine.h"
#include "Widgets/Input/SButton.h"
#include "EditorScriptingToolsModule.h"
#include "CoreGlobals.h"
#include "Misc/FeedbackContext.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/Text/STextBlock.h"
#include "EditorFontGlyphs.h"
#include "Editor/EditorEngine.h"
#include "Editor.h"
#include "EditorUserDefinedSettings.h"
#include "EditorScriptingToolsUtils.h"
#include "EditorScriptingUtilityBlueprint.h"

#define LOCTEXT_NAMESPACE "EditorScriptingUtilityBlueprintDetails"

FEditorScriptingUtilityBlueprintDetails::FEditorScriptingUtilityBlueprintDetails() 
	: CachedDetailBuilder(nullptr)
	, EditedScriptingUtilityBlueprintWeakPtr(nullptr)
{

}

FEditorScriptingUtilityBlueprintDetails::~FEditorScriptingUtilityBlueprintDetails()
{
	if (UEditorScriptingUtilityBlueprint* UtilityBlueprint = EditedScriptingUtilityBlueprintWeakPtr.Get())
	{
		EditedScriptingUtilityBlueprintWeakPtr->OnEditorScriptingUtilityRegistered().RemoveAll(this);
	}
	EditedScriptingUtilityBlueprintWeakPtr = nullptr;
	CachedDetailBuilder = nullptr;
}

TSharedRef<IDetailCustomization> FEditorScriptingUtilityBlueprintDetails::MakeInstance()
{
	return MakeShareable(new FEditorScriptingUtilityBlueprintDetails());
}

void FEditorScriptingUtilityBlueprintDetails::CustomizeDetails(IDetailLayoutBuilder& DetailBuilder)
{
	CachedDetailBuilder = &DetailBuilder;

	TArray<TWeakObjectPtr<UObject>> WeakObjectsBeingCustomized;
	DetailBuilder.GetObjectsBeingCustomized(WeakObjectsBeingCustomized);

	if (WeakObjectsBeingCustomized.Num() == 0)
	{
		return;
	}

	EditedScriptingUtilityBlueprintWeakPtr = Cast<UEditorScriptingUtilityBlueprint>(WeakObjectsBeingCustomized[0].Get());
	
	UEditorScriptingUtilityBlueprint* EditedScriptingUtilityBlueprint = EditedScriptingUtilityBlueprintWeakPtr.Get();
	if (EditedScriptingUtilityBlueprint == nullptr)
	{
		return;
	}

	EditedScriptingUtilityBlueprint->OnEditorScriptingUtilityRegistered().AddSP(this, &FEditorScriptingUtilityBlueprintDetails::OnEditorScriptingUtilityRegistered);

	EditorScriptingToolsUtils::HideBlueprintDefaultCategories(DetailBuilder);

	IEditorScriptingToolsModule* ScriptingToolsModule = IEditorScriptingToolsModule::GetPtr();

	IDetailCategoryBuilder& SettingsCategoryBuilder = DetailBuilder.EditCategory(EditedScriptingUtilityBlueprint->GetUtilitySettingsCategoryName(),FText::GetEmpty(), ECategoryPriority::Important);
	SettingsCategoryBuilder.AddCustomRow(FText::GetEmpty(), false)
	.WholeRowContent()
	.VAlign(VAlign_Fill)
		[
			SNew(SHorizontalBox)
			+SHorizontalBox::Slot()
			.Padding(16.f, 8.f)
			[
				SNew(SButton)
				.ButtonStyle(FEditorStyle::Get(), "FlatButton.Success")
				.HAlign(HAlign_Center)
				.OnClicked(this, &FEditorScriptingUtilityBlueprintDetails::OnRegisterButton_Clicked, true)
				.IsEnabled(this, &FEditorScriptingUtilityBlueprintDetails::IsRegisterButton_Enabled, true)
				.Visibility(this, &FEditorScriptingUtilityBlueprintDetails::GetRegisterButton_Visibility, true)
				.ToolTipText(ScriptingToolsModule->GetRegisterScriptingUtilityToolTipText(EditedScriptingUtilityBlueprint))
				.ContentPadding(2)
				[
					SNew(STextBlock)
					.TextStyle(FEditorStyle::Get(), "ContentBrowser.TopBar.Font")
					.Text(ScriptingToolsModule->GetRegisterScriptingUtilityText(EditedScriptingUtilityBlueprint))
				]
			]
			+SHorizontalBox::Slot()
			.Padding(16.f, 8.f)
			[
				SNew(SButton)
				.ButtonStyle(FEditorStyle::Get(), "FlatButton.Danger")
				.HAlign(HAlign_Center)
				.OnClicked(this, &FEditorScriptingUtilityBlueprintDetails::OnRegisterButton_Clicked, false)
				.IsEnabled(this, &FEditorScriptingUtilityBlueprintDetails::IsRegisterButton_Enabled, false)
				.Visibility(this, &FEditorScriptingUtilityBlueprintDetails::GetRegisterButton_Visibility, false)
				.ToolTipText(ScriptingToolsModule->GetUnregisterScriptingUtilityToolTipText(EditedScriptingUtilityBlueprint))
				.ContentPadding(2)
				[
					SNew(STextBlock)
					.TextStyle(FEditorStyle::Get(), "ContentBrowser.TopBar.Font")
					.Text(ScriptingToolsModule->GetUnregisterScriptingUtilityText(EditedScriptingUtilityBlueprint))
				]
			]
		];

	if (ScriptingToolsModule->IsEditorScriptingUtilityRegistered(EditedScriptingUtilityBlueprint))
	{
		TArray<FName> PropertiesToHide;
		EditedScriptingUtilityBlueprint->GetUneditablePropertiesWhenRegistered(PropertiesToHide);
		for (const auto& PropertyName : PropertiesToHide)
		{
			DetailBuilder.HideProperty(PropertyName, EditedScriptingUtilityBlueprint->GetClass());
		}

		SettingsCategoryBuilder.AddCustomRow(FText::GetEmpty(), false)
			.WholeRowContent()
			.VAlign(VAlign_Fill)
			[
				 SNew(SBox)
				.Padding(FMargin(16.f, 0.f))
				[
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
						.Text(LOCTEXT("PropertiesHidden","Can't edit properties , utility already running"))
					]
				]
			];
	}
}

void FEditorScriptingUtilityBlueprintDetails::OnEditorScriptingUtilityRegistered(bool bRegister)
{
	if (CachedDetailBuilder != nullptr)
	{
		CachedDetailBuilder->ForceRefreshDetails();
	}
}

FReply FEditorScriptingUtilityBlueprintDetails::OnRegisterButton_Clicked(bool bRegister)
{
	if (UEditorScriptingUtilityBlueprint* UtilityBlueprint = EditedScriptingUtilityBlueprintWeakPtr.Get())
	{
		IEditorScriptingToolsModule* ScriptingToolsModule = IEditorScriptingToolsModule::GetPtr();
		if (bRegister)
		{
			ScriptingToolsModule->RegisterEditorScriptingUtility(UtilityBlueprint);
		}
		else
		{
			ScriptingToolsModule->UnregisterEditorScriptingUtility(UtilityBlueprint);
		}
		FReply::Handled();
	}
	return FReply::Unhandled();
}

bool FEditorScriptingUtilityBlueprintDetails::IsRegisterButton_Enabled(bool bRegister) const
{
	if (UEditorScriptingUtilityBlueprint* UtilityBlueprint = EditedScriptingUtilityBlueprintWeakPtr.Get())
	{
		IEditorScriptingToolsModule* ScriptingToolsModule = IEditorScriptingToolsModule::GetPtr();
		if (bRegister)
		{
			return ScriptingToolsModule->CanRegisterEditorScriptingUtility(UtilityBlueprint);
		}
		else
		{
			return true;
		}
	}

	return false;
}

EVisibility FEditorScriptingUtilityBlueprintDetails::GetRegisterButton_Visibility(bool bRegister) const
{
	if (UEditorScriptingUtilityBlueprint* UtilityBlueprint = EditedScriptingUtilityBlueprintWeakPtr.Get())
	{
		IEditorScriptingToolsModule* ScriptingToolsModule = IEditorScriptingToolsModule::GetPtr();
		return (ScriptingToolsModule->IsEditorScriptingUtilityRegistered(UtilityBlueprint) != bRegister) ? EVisibility::Visible : EVisibility::Collapsed;
	}
	return EVisibility::Collapsed;
}

#undef LOCTEXT_NAMESPACE
