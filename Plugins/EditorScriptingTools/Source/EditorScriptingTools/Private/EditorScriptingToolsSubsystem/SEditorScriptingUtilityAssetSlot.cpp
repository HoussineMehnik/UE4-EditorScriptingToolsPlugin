//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//


#include "SEditorScriptingUtilityAssetSlot.h"

#include "ClassViewerFilter.h"
#include "Widgets/Layout/SScrollBox.h"
#include "Widgets/SNullWidget.h"
#include "Widgets/Layout/SScaleBox.h"
#include "Kismet2/SClassPickerDialog.h"
#include "EditorFontGlyphs.h"
#include "Widgets/Text/STextBlock.h"
#include "Widgets/Layout/SBox.h"
#include "SDropTarget.h"
#include "Widgets/Layout/SHeader.h"
#include "Widgets/SBoxPanel.h"
#include "Widgets/Images/SThrobber.h"
#include "Widgets/Layout/SSpacer.h"
#include "Widgets/Layout/SSeparator.h"
#include "Widgets/Layout/SScrollBar.h"
#include "Widgets/Input/SButton.h"
#include "EditorUserDefinedSettingsUtilityBlueprint.h"
#include "IEditorScriptingToolsModule.h"
#include "EditorModeToolUtilityBlueprint.h"
#include "BluEdMode.h"
#include "ComponentVisualizerUtilityBlueprint.h"
#include "EditorUserDefinedCommands.h"
#include "Subsystems/AssetEditorSubsystem.h"



#define LOCTEXT_NAMESPACE "SEditorScriptingUtilityAssetSlot"


void SEditorScriptingUtilityAssetSlot::Construct(const FArguments& InArgs , UObject* InToolAsset, int32 InIndex)
{
	check(InToolAsset != nullptr);

	ToolAssetWeakPtr = InToolAsset;
	SlotIndex = InIndex;

	ChildSlot
		[
			SNew(SBox)
			.MinDesiredWidth(480)
			.MaxDesiredWidth(480)
			.Padding(FMargin(4.f, 1.f, 8.f, 1.f))
			[
				SNew(SVerticalBox)
				+SVerticalBox::Slot()
				.Padding(1)
				[
					SNew(SSeparator).Visibility(InIndex != 0 ? EVisibility::Visible : EVisibility::Collapsed)
					.Orientation(Orient_Horizontal)
					.Thickness(5.0f)
					.ColorAndOpacity(GetBrowseToAssetButtonColor())
				]
				+SVerticalBox::Slot()
				.AutoHeight()
				[
					SNew(SHorizontalBox)
					+ SHorizontalBox::Slot()
					.Padding(1)
					.HAlign(HAlign_Fill)
					[
						SNew(SBorder)
						.BorderImage(FEditorStyle::GetBrush("ExpandableButton.Background"))
						.VAlign(VAlign_Center)
						.ForegroundColor(FCoreStyle::Get().GetSlateColor("InvertedForeground"))
						.BorderBackgroundColor(GetBrowseToAssetButtonColor())
						[
							SNew(SBox)
							.Padding(FMargin(4.f, 1.f, 1.f, 0.f))
							[
								SNew(STextBlock)
								.Text(SEditorScriptingUtilityAssetSlot::GetDisplayName())
								.TextStyle(FEditorStyle::Get(), "ContentBrowser.TopBar.Font")
							]
						]
					]
					+ SHorizontalBox::Slot()
					.Padding(1)
					.AutoWidth()
					[
						SNew(SButton)
						.ButtonStyle(FEditorStyle::Get(), "HoverHintOnly")
						.OnClicked(this, &SEditorScriptingUtilityAssetSlot::OnShowToolAssetInContentBrowser_Clicked)
						.VAlign(VAlign_Center)
						.ToolTipText(LOCTEXT("BrowseToAssetInContentBrowser", "Browse to Asset in Content Browser"))
						[
							SNew(STextBlock)
							.ColorAndOpacity(FLinearColor(0.65f, 0.4f, 0.15f, 1.0f))
							.TextStyle(FEditorStyle::Get(), "ContentBrowser.TopBar.Font")
							.Font(FEditorStyle::Get().GetFontStyle("FontAwesome.10"))
							.Text(FEditorFontGlyphs::Search)
						]
					]
					+ SHorizontalBox::Slot()
					.Padding(1)
					.AutoWidth()
					[
						SNew(SButton)
						.ButtonStyle(FEditorStyle::Get(), "HoverHintOnly")
						.OnClicked(this, &SEditorScriptingUtilityAssetSlot::OnEdit_Clicked)
						.VAlign(VAlign_Center)
						.ToolTipText(LOCTEXT("EditAssetToolTip", "Open an editor for the specified asset."))
						[
							SNew(STextBlock)
							.ColorAndOpacity(FLinearColor::White)
							.TextStyle(FEditorStyle::Get(), "ContentBrowser.TopBar.Font")
							.Font(FEditorStyle::Get().GetFontStyle("FontAwesome.10"))
							.Text(FEditorFontGlyphs::Pencil)
						]
					]
					+ SHorizontalBox::Slot()
					.Padding(1)
					.AutoWidth()
					[
						SNew(SButton)
						.ButtonStyle(FEditorStyle::Get(), "HoverHintOnly")
						.OnClicked(this, &SEditorScriptingUtilityAssetSlot::OnRefresh_Clicked)
						.VAlign(VAlign_Center)
						.ToolTipText(SEditorScriptingUtilityAssetSlot::GetRefreshToolTipText())
						[
							SNew(STextBlock)
							.ColorAndOpacity(FLinearColor(0.2f ,0.5f, 1.0f, 1.0f))
							.TextStyle(FEditorStyle::Get(), "ContentBrowser.TopBar.Font")
							.Font(FEditorStyle::Get().GetFontStyle("FontAwesome.10"))
							.Text(FEditorFontGlyphs::Refresh)
						]
					]
					+ SHorizontalBox::Slot()
					.Padding(1)
					.AutoWidth()
					[
						SNew(SButton)
						.ButtonStyle(FEditorStyle::Get(), "HoverHintOnly")
						.OnClicked(this, &SEditorScriptingUtilityAssetSlot::OnClear_Clicked)
						.VAlign(VAlign_Center)
						.ToolTipText(SEditorScriptingUtilityAssetSlot::GetClearToolTipText())
						[
							SNew(STextBlock)
							.ColorAndOpacity(FLinearColor(1.f, 0.1f, 0.f, 1.f))
							.TextStyle(FEditorStyle::Get(), "ContentBrowser.TopBar.Font")
							.Font(FEditorStyle::Get().GetFontStyle("FontAwesome.10"))
							.Text(FEditorFontGlyphs::Times)
						]
					]
				]
			]
		];
}


SEditorScriptingUtilityAssetSlot::~SEditorScriptingUtilityAssetSlot()
{
	ToolAssetWeakPtr = nullptr;
	SlotIndex = INDEX_NONE;
}

UObject* SEditorScriptingUtilityAssetSlot::GetToolAsset()
{
	return ToolAssetWeakPtr.Get();
}

const UObject* SEditorScriptingUtilityAssetSlot::GetToolAsset() const
{
	return ToolAssetWeakPtr.Get();
}

FReply SEditorScriptingUtilityAssetSlot::OnShowToolAssetInContentBrowser_Clicked()
{
	if (UObject* ToolAsset = GetToolAsset())
	{
		TArray<UObject*> ObjectsToSync;
		ObjectsToSync.Add(ToolAsset);
		GEditor->SyncBrowserToObjects(ObjectsToSync);
		return FReply::Handled();
	}

	return FReply::Unhandled();
}

FReply SEditorScriptingUtilityAssetSlot::OnRefresh_Clicked()
{
	if (IEditorScriptingUtilityAssetInterface* ScriptingUtilityAsset = Cast< IEditorScriptingUtilityAssetInterface>(GetToolAsset()))
	{
		IEditorScriptingToolsModule* ScriptingToolsModule = IEditorScriptingToolsModule::GetPtr();
		ScriptingToolsModule->RefreshEditorScriptingUtility(ScriptingUtilityAsset);
		return FReply::Handled();
	}
	return FReply::Unhandled();
}

FReply SEditorScriptingUtilityAssetSlot::OnClear_Clicked()
{
	if (IEditorScriptingUtilityAssetInterface* ScriptingUtilityAsset = Cast< IEditorScriptingUtilityAssetInterface>(GetToolAsset()))
	{
		IEditorScriptingToolsModule* ScriptingToolsModule = IEditorScriptingToolsModule::GetPtr();
		ScriptingToolsModule->UnregisterEditorScriptingUtility(ScriptingUtilityAsset);
		return FReply::Handled();
	}
	return FReply::Unhandled();
}

FReply SEditorScriptingUtilityAssetSlot::OnEdit_Clicked()
{
	if (UObject* UtilityAsset = GetToolAsset())
	{
		GEditor->GetEditorSubsystem<UAssetEditorSubsystem>()->OpenEditorForAsset(UtilityAsset);
		return FReply::Handled();
	}
	return FReply::Unhandled();
}

FText SEditorScriptingUtilityAssetSlot::GetDisplayName() const
{
	if (const UObject* ToolAsset = GetToolAsset())
	{
		return FText::FromString(ToolAsset->GetName());
	}
	return LOCTEXT("InvalidName", "Invalid Asset");
}

FText SEditorScriptingUtilityAssetSlot::GetRefreshToolTipText() const
{
	if (const IEditorScriptingUtilityAssetInterface* ScriptingUtilityAsset = Cast<const IEditorScriptingUtilityAssetInterface>(GetToolAsset()))
	{
		IEditorScriptingToolsModule* ScriptingToolsModule = IEditorScriptingToolsModule::GetPtr();
		return ScriptingToolsModule->GetRefreshScriptingUtilityToolTipText(ScriptingUtilityAsset);
	}
	return FText::GetEmpty();
}

FText SEditorScriptingUtilityAssetSlot::GetClearToolTipText() const
{
	if (const IEditorScriptingUtilityAssetInterface* ScriptingUtilityAsset = Cast<const IEditorScriptingUtilityAssetInterface>(GetToolAsset()))
	{
		IEditorScriptingToolsModule* ScriptingToolsModule = IEditorScriptingToolsModule::GetPtr();
		return ScriptingToolsModule->GetUnregisterScriptingUtilityToolTipText(ScriptingUtilityAsset);
	}
	return FText::GetEmpty();
}

FLinearColor SEditorScriptingUtilityAssetSlot::GetBrowseToAssetButtonColor() const
{
	if (const IEditorScriptingUtilityAssetInterface* ScriptingUtilityAsset = Cast<const IEditorScriptingUtilityAssetInterface>(GetToolAsset()))
	{
		IEditorScriptingToolsModule* ScriptingToolsModule = IEditorScriptingToolsModule::GetPtr();
		return ScriptingToolsModule->GetScriptingUtilityAssetColor(ScriptingUtilityAsset).WithAlpha(128);
	}
	return FLinearColor::White;
}

#undef LOCTEXT_NAMESPACE 