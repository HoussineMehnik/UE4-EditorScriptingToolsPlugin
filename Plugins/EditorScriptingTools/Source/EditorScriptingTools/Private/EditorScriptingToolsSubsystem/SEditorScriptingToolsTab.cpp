//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//


#include "SEditorScriptingToolsTab.h"

#include "Widgets/SBoxPanel.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/Docking/SDockTab.h"
#include "Widgets/Input/SComboBox.h"
#include "Widgets/Layout/SSpacer.h"
#include "Widgets/Text/STextBlock.h"
#include "Widgets/Layout/SScrollBox.h"
#include "Widgets/Layout/SWidgetSwitcher.h"
#include "EditorScriptingToolsSubsystem.h"
#include <EditorUserDefinedSettingsUtilityBlueprint.h>
#include "SEditorScriptingUtilityAssetSlot.h"
#include "Widgets/Layout/SHeader.h"
#include <PropertyEditorModule.h>
#include <ISinglePropertyView.h>
#include <EditorFontGlyphs.h>
#include <BluEdMode.h>
#include <EditorUserDefinedCommands.h>
#include <Framework/MultiBox/MultiBoxBuilder.h>
#include "EditorScriptingToolsStyle.h"
#include <SSingleObjectDetailsPanel.h>
#include "EditorScriptingToolsSubsystemDetails.h"
#include <IDetailsView.h>
#include "ComponentVisualizerUtilityBlueprint.h"
#include "IEditorScriptingToolsModule.h"
#include "SPropertiesBrowser.h"

#define LOCTEXT_NAMESPACE "SEditorScriptingToolsTab"


/////////////////////////////////////////////////////
// FEditorScriptingToolsSubsystemDetails

class SEditorScriptingToolsSubsystemDetailsPanel : public SSingleObjectDetailsPanel
{
public:
	SLATE_BEGIN_ARGS(SEditorScriptingToolsSubsystemDetailsPanel) {}
	SLATE_END_ARGS()


public:
	void Construct(const FArguments& InArgs, TWeakPtr<SEditorScriptingToolsTab> InToolsTabWeakPtr)
	{
		ToolsTabWeakPtr = InToolsTabWeakPtr;

		SSingleObjectDetailsPanel::Construct(SSingleObjectDetailsPanel::FArguments(), /*bAutomaticallyObserveViaGetObjectToObserve*/ true, /*bAllowSearch*/ false);

		FOnGetDetailCustomizationInstance DetailCustomizationInstance = FOnGetDetailCustomizationInstance::CreateStatic(&FEditorScriptingToolsSubsystemDetails::MakeInstanceForSettingsTab, ToolsTabWeakPtr);
		PropertyView->RegisterInstancedCustomPropertyLayout(UEditorScriptingToolsSubsystem::StaticClass(), DetailCustomizationInstance);
	}

	// SSingleObjectDetailsPanel interface
	virtual UObject* GetObjectToObserve() const override
	{
		return UEditorScriptingToolsSubsystem::GetSubsystem();
	}

	virtual TSharedRef<SWidget> PopulateSlot(TSharedRef<SWidget> PropertyEditorWidget) override
	{
		check(ToolsTabWeakPtr.IsValid());

		return SNew(SVerticalBox)
			.Visibility(this, &SEditorScriptingToolsSubsystemDetailsPanel::GetWidgetVisibility)
			+SVerticalBox::Slot()
			.AutoHeight()
			[
				SNew(SBox)
				.Padding(FMargin(1.f, 8.0f, 0.f, 8.f))
				[
					SNew(SHeader)
					[
						SNew(STextBlock)
						.Text(ToolsTabWeakPtr.Pin().Get(), &SEditorScriptingToolsTab::GetActiveSectionSettingsText)
						.TextStyle(FEditorStyle::Get(), "ContentBrowser.TopBar.Font")
					]
				]
			]
			+SVerticalBox::Slot()
			.FillHeight(1)
			[
				PropertyEditorWidget
			];
	}
	// End of SSingleObjectDetailsPanel interface

	FOnFinishedChangingProperties& OnFinishedChangingProperties()
	{
		return PropertyView->OnFinishedChangingProperties();
	}

	EVisibility GetWidgetVisibility() const
	{
		return PropertyView->GetPropertiesInOrderDisplayed().Num() > 0 ? EVisibility::Visible : EVisibility::Collapsed;
	}

private:
	TWeakPtr<SEditorScriptingToolsTab> ToolsTabWeakPtr;
};

void SEditorScriptingToolsTab::Construct(const FArguments& InArgs)
{

	CreateSettingsDetailsView();
	
	SDockTab::Construct(
		SDockTab::FArguments()
		.TabRole(ETabRole::NomadTab)
		[
			SNew(SBorder)
			.BorderImage(FEditorStyle::GetBrush("ToolPanel.GroupBorder"))
			.VAlign(VAlign_Fill)
			.HAlign(HAlign_Fill)
			[
				SNew(SVerticalBox)
				+SVerticalBox::Slot()
				.AutoHeight()
				[
					SAssignNew(ToolBarWidget, SBox)
				]
				+SVerticalBox::Slot()
				.HAlign(HAlign_Fill)
				.Padding(4.f)
				[
					SNew(SScrollBox)
					.Orientation(Orient_Vertical)
					+ SScrollBox::Slot()
					[
						SNew(SVerticalBox)
						+SVerticalBox::Slot()
						.AutoHeight()
						[
							SAssignNew(SettingsSectionWidget, SBox)
						]
						+SVerticalBox::Slot()
						.VAlign(VAlign_Fill)
						.Padding(0.f, 4.f, 0.f, 0.f)
						[
							ScriptingToolsDetailsView.ToSharedRef()
						]
					]
				]
			]
		]
	);
	
	RefreshContent(EEditorScriptingToolsTabRefreshMode::All);
}

SEditorScriptingToolsTab::~SEditorScriptingToolsTab()
{
	FEditorScriptingToolsDelegates::RefreshEditorScriptingToolsTabDelegate.RemoveAll(this);
}

int32 SEditorScriptingToolsTab::GetActiveSectionIndex() const
{
	return GetSectionIndex(ActiveSection);
}

int32 SEditorScriptingToolsTab::GetSectionNum() const
{
	return GetSectionIndex(EEditorScriptingToolsSectionType::Num);
}

int32 SEditorScriptingToolsTab::GetSectionIndex(EEditorScriptingToolsSectionType InSection) const
{
	return static_cast<int32>(InSection);
}

EEditorScriptingToolsSectionType SEditorScriptingToolsTab::GetSectionTypeByIndex(int32 InIndex) const
{
	checkSlow(InIndex > -1 && InIndex < GetSectionNum());
	return static_cast<EEditorScriptingToolsSectionType>(InIndex);
}

FText SEditorScriptingToolsTab::GetSectionNameText(EEditorScriptingToolsSectionType InSection) const
{
	switch (InSection)
	{
	case EEditorScriptingToolsSectionType::BluEdMode:						return LOCTEXT("BluEdModeName", "BluEd Mode");
	case EEditorScriptingToolsSectionType::ComponentVisualizers:			return LOCTEXT("ComponentVisualizersName", "Component Visualizers");
	case EEditorScriptingToolsSectionType::DetailCustomizations:			return LOCTEXT("DetailCustomizationsName", "Detail Customizations");
	case EEditorScriptingToolsSectionType::UserDefinedSettings:				return LOCTEXT("UserDefinedSettingsName", "User Defined Settings");
	case EEditorScriptingToolsSectionType::UserDefinedActions:				return LOCTEXT("UserDefinedActionsName", "User Defined Actions");
	case EEditorScriptingToolsSectionType::UserDefinedPlacementCategories:	return LOCTEXT("UserDefinedPlacementCategoriesName", "User Defined Placement Categories");
	case EEditorScriptingToolsSectionType::OtherUtils:						return LOCTEXT("OtherUtilsName", "Other Utils");
	case EEditorScriptingToolsSectionType::OtherSettings:					return LOCTEXT("OtherSettingsName", "Other Settings");
	}

	return LOCTEXT("InvalidSectionName", "Invalid Section");
}

FText SEditorScriptingToolsTab::GetActiveSectionSettingsText() const
{
	switch (ActiveSection)
	{
	case EEditorScriptingToolsSectionType::BluEdMode:						return LOCTEXT("BluEdModeSettings", " BluEd Mode Settings ");
	case EEditorScriptingToolsSectionType::ComponentVisualizers:			return LOCTEXT("ComponentVisualizersSettings", " Component Visualizers Settings ");
	case EEditorScriptingToolsSectionType::DetailCustomizations:			return LOCTEXT("DetailCustomizationsSettings", " Detail Customizations Settings ");
	case EEditorScriptingToolsSectionType::UserDefinedSettings:				return LOCTEXT("UserDefinedSettingsSettings", " User Defined Settings Settings ");
	case EEditorScriptingToolsSectionType::UserDefinedActions:				return LOCTEXT("UserDefinedActionsSettings", " User Defined Actions Settings ");
	case EEditorScriptingToolsSectionType::UserDefinedPlacementCategories:	return LOCTEXT("UserDefinedPlacementCategoriesSettingse", " User Defined Placement Categories Settings ");
	case EEditorScriptingToolsSectionType::OtherUtils:						return LOCTEXT("OtherUtils", "Other Utils Settings");
	case EEditorScriptingToolsSectionType::OtherSettings:					return LOCTEXT("OtherSettingsSettings", "Other Settings");
	}

	check(0);
	return LOCTEXT("InvalidName", "Invalid");
}

FName SEditorScriptingToolsTab::GetSectionIconName(EEditorScriptingToolsSectionType InSection) const
{
	switch (InSection)
	{
	case EEditorScriptingToolsSectionType::BluEdMode:						return { "BluEdMode.Icon" };
	case EEditorScriptingToolsSectionType::ComponentVisualizers:			return { "ComponentVisualizers.Icon" };
	case EEditorScriptingToolsSectionType::DetailCustomizations:			return { "DetailCustomizations.Icon" };
	case EEditorScriptingToolsSectionType::UserDefinedSettings:				return { "UserDefinedSettings.Icon" };
	case EEditorScriptingToolsSectionType::UserDefinedActions:				return { "UserDefinedActions.Icon" };
	case EEditorScriptingToolsSectionType::UserDefinedPlacementCategories:	return { "UserDefinedPlacementCategories.Icon" };
	case EEditorScriptingToolsSectionType::OtherUtils:						return { "OtherUtils.Icon" };
	case EEditorScriptingToolsSectionType::OtherSettings:					return { "OtherSettings.Icon" };
	}

	return { "Invalid Section" };
}

void SEditorScriptingToolsTab::RefreshContent(EEditorScriptingToolsTabRefreshMode::Type RefreshMode)
{
	if ((RefreshMode & EEditorScriptingToolsTabRefreshMode::ToolBar) != 0)
	{
		ToolBarWidget->SetContent(CreateToolBarWidget());
	}

	if ((RefreshMode & EEditorScriptingToolsTabRefreshMode::SettingsSection) != 0)
	{
		SettingsSectionWidget->SetContent(CreateSettingsSectionWidget());
	}
}

void SEditorScriptingToolsTab::ClearContent()
{
	ToolBarWidget->SetContent(SNullWidget::NullWidget);
	SettingsSectionWidget->SetContent(SNullWidget::NullWidget);
}

void SEditorScriptingToolsTab::CreateSettingsDetailsView()
{
	ScriptingToolsDetailsView = SNew(SEditorScriptingToolsSubsystemDetailsPanel, SharedThis(this));

	ScriptingToolsDetailsView->OnFinishedChangingProperties().AddSP(this, &SEditorScriptingToolsTab::OnSettingChanged);
	FEditorScriptingToolsDelegates::RefreshEditorScriptingToolsTabDelegate.AddSP(this, &SEditorScriptingToolsTab::OnRefreshEditorScriptingToolsTab);
}

void SEditorScriptingToolsTab::OnSettingChanged(const FPropertyChangedEvent& InPropertyChangedEvent)
{
	UEditorScriptingToolsSubsystem::GetSubsystem()->NotifySettingsModified();
}

void SEditorScriptingToolsTab::OnRefreshEditorScriptingToolsTab()
{
	if (ActiveSection != EEditorScriptingToolsSectionType::OtherSettings)
	{
		RefreshContent(EEditorScriptingToolsTabRefreshMode::SettingsSection);
	}
}

TSharedRef<SWidget> SEditorScriptingToolsTab::CreateToolBarWidget()
{
	FToolBarBuilder ToolBarBuilder{nullptr, FMultiBoxCustomization::None};

	for (uint8 SectionIdx = 0; SectionIdx < GetSectionNum(); SectionIdx++)
	{
		const EEditorScriptingToolsSectionType SectionType = GetSectionTypeByIndex(SectionIdx);

		ToolBarBuilder.AddToolBarButton(
			FUIAction(
				FExecuteAction::CreateSP(this, &SEditorScriptingToolsTab::OnSectionButton_Clicked, SectionType),
				FCanExecuteAction::CreateLambda([=] { return true; }),
				FIsActionChecked::CreateSP(this, &SEditorScriptingToolsTab::IsSectionButton_Selected, SectionType)
			),
			NAME_None,
			LOCTEXT("None"," "),
			GetSectionNameText(SectionType),
			FSlateIcon(FEditorScriptingToolsStyle::GetStyleSetName(),
				GetSectionIconName(SectionType)), EUserInterfaceActionType::RadioButton);

	}

	return ToolBarBuilder.MakeWidget();
}

void SEditorScriptingToolsTab::OnSectionButton_Clicked(EEditorScriptingToolsSectionType InSection)
{
	ActiveSection = InSection;
	RefreshContent(EEditorScriptingToolsTabRefreshMode::SettingsSection);
	SectionChanged.Broadcast();
}

bool SEditorScriptingToolsTab::IsSectionButton_Selected(EEditorScriptingToolsSectionType InSection) const
{
	return (InSection == ActiveSection);
}

TSharedRef<SWidget> SEditorScriptingToolsTab::CreateSettingsSectionWidget() 
{
	return 
		
		SNew(SWidgetSwitcher)
		.WidgetIndex(this, &SEditorScriptingToolsTab::GetActiveSectionIndex)
		+ SWidgetSwitcher::Slot()[CreateSettingsSectionWidget_BluEdMode()]
		+ SWidgetSwitcher::Slot()[CreateSettingsSectionWidget_ComponentVisualizers()]
		+ SWidgetSwitcher::Slot()[CreateSettingsSectionWidget_DetailCustomizations()]
		+ SWidgetSwitcher::Slot()[CreateSettingsSectionWidget_UserDefinedSettings()]
		+ SWidgetSwitcher::Slot()[CreateSettingsSectionWidget_UserDefinedActions()]
		+ SWidgetSwitcher::Slot()[CreateSettingsSectionWidget_UserDefinedPlacementCategories()]
		+ SWidgetSwitcher::Slot()[CreateSettingsSectionWidget_OtherUtils()]
		+ SWidgetSwitcher::Slot()[CreateSettingsSectionWidget_OtherSettings()];
}

TSharedRef<SWidget> SEditorScriptingToolsTab::CreateSettingsSectionWidget_BluEdMode()
{
	TSharedRef<SVerticalBox> SectionWidget = SNew(SVerticalBox);

	SectionWidget->AddSlot().AutoHeight()[CreateSectionHeader(LOCTEXT("ActiveEdModeTool", " Active Editor Mode Tool "))];
	if (FBluEdMode* BluEdMode = FBluEdMode::GetPtr())
	{
		if (BluEdMode->HasValidToolInstance())
		{
			SectionWidget->AddSlot().AutoHeight().HAlign(HAlign_Left)[SNew(SEditorScriptingUtilityAssetSlot, BluEdMode->GetModeToolBlueprint(), 0)];
		}
		else
		{
			SectionWidget->AddSlot()[CreateWarningMessageWidegt(LOCTEXT("BluEdModeToolNotLoaded", "BluEd Mode is active , but no tool is loaded."))];
		}
	}
	else
	{
		SectionWidget->AddSlot()[CreateWarningMessageWidegt(LOCTEXT("BluEdModeInactive", "BluEd Mode is not active."))];
	}

	return SectionWidget;
}

TSharedRef<SWidget> SEditorScriptingToolsTab::CreateSettingsSectionWidget_ComponentVisualizers()
{
	TSharedRef<SVerticalBox> SectionWidget = SNew(SVerticalBox);

	SectionWidget->AddSlot().AutoHeight()[CreateSectionHeader(LOCTEXT("ComponentVisualizers", " Registered Component Visualizers Blueprints"))];

	auto& ComponentVisualizerUtilityBlueprints = UEditorScriptingToolsSubsystem::GetSubsystem()->ComponentVisualizerUtilityBlueprints;
	if (ComponentVisualizerUtilityBlueprints.Num() == 0)
	{
		SectionWidget->AddSlot()[CreateWarningMessageWidegt(LOCTEXT("NoComponentVisualizers", "No custom component visualizers have been registered."))];
	}
	else
	{
		int32 SlotIdx = 0;
		for (auto& BlueprintObjPtr : ComponentVisualizerUtilityBlueprints)
		{
			if (UComponentVisualizerUtilityBlueprint* VisualizerBlueprint = BlueprintObjPtr.LoadSynchronous())
			{
				SectionWidget->AddSlot().AutoHeight().HAlign(HAlign_Left)[SNew(SEditorScriptingUtilityAssetSlot, VisualizerBlueprint, SlotIdx)];
				SlotIdx++;
			}
		}
	}

	return SectionWidget;
}

TSharedRef<SWidget> SEditorScriptingToolsTab::CreateSettingsSectionWidget_DetailCustomizations()
{
	TSharedRef<SVerticalBox> SectionWidget = SNew(SVerticalBox);

	SectionWidget->AddSlot().AutoHeight()[CreateSectionHeader(LOCTEXT("DetailCustomizations", " Registered Detail Customizations "))];

	SectionWidget->AddSlot()[CreateWarningMessageWidegt(LOCTEXT("NoDetailCustomizations", "No custom class layouts have been registered."))];

	return SectionWidget;
}

TSharedRef<SWidget> SEditorScriptingToolsTab::CreateSettingsSectionWidget_UserDefinedSettings()
{
	TSharedRef<SVerticalBox> SectionWidget = SNew(SVerticalBox);

	SectionWidget->AddSlot().AutoHeight()[CreateSectionHeader(LOCTEXT("RegisteredSttings", " Registered User Defined Settings Blueprints "))];
											
	auto& SettingsBlueprints = UEditorScriptingToolsSubsystem::GetSubsystem()->EditorUserDefinedSettingsUtilityBlueprints;
	if (SettingsBlueprints.Num() == 0)
	{
		SectionWidget->AddSlot()[CreateWarningMessageWidegt(LOCTEXT("NoSettingRegistered", "No settings class have been registered."))];
	}
	else
	{
		int32 SlotIdx = 0;
		for (auto& BlueprintObjPtr : SettingsBlueprints)
		{
			if (UEditorUserDefinedSettingsUtilityBlueprint* SettingsBlueprint = BlueprintObjPtr.LoadSynchronous())
			{
				SectionWidget->AddSlot().AutoHeight().HAlign(HAlign_Left)[SNew(SEditorScriptingUtilityAssetSlot, SettingsBlueprint, SlotIdx)];
				SlotIdx++;
			}
		}
	}

	return SectionWidget;
}

TSharedRef<SWidget> SEditorScriptingToolsTab::CreateSettingsSectionWidget_UserDefinedActions()
{
	TSharedRef<SVerticalBox> SectionWidget = SNew(SVerticalBox);

	SectionWidget->AddSlot().AutoHeight()[CreateSectionHeader(LOCTEXT("UserDefinedActions", " Mapped User Defined Actions "))];
											
	if (UEditorUserDefinedActions* UsedActionsAsset = FEditorUserDefinedCommands::GetCurrentActionsAsset())
	{
		SectionWidget->AddSlot().AutoHeight().HAlign(HAlign_Left)[SNew(SEditorScriptingUtilityAssetSlot, UsedActionsAsset, 0)];
	}
	else
	{
		SectionWidget->AddSlot()[CreateWarningMessageWidegt(LOCTEXT("NoAtionsMapped", "No custom actions have been mapped."))];
	}

	return SectionWidget;
}

TSharedRef<SWidget> SEditorScriptingToolsTab::CreateSettingsSectionWidget_UserDefinedPlacementCategories()
{
	TSharedRef<SVerticalBox> SectionWidget = SNew(SVerticalBox);

	SectionWidget->AddSlot().AutoHeight()[CreateSectionHeader(LOCTEXT("PlacementBrowserTabText", " Actor Placement Browser "))];

	SectionWidget->AddSlot()
				.AutoHeight()
				[
					SNew(SHorizontalBox)
					+SHorizontalBox::Slot()
					.AutoWidth()
					.Padding(2.f)
					[
						SNew(SButton)
						.VAlign(VAlign_Center)
						.ButtonStyle(FEditorStyle::Get(), "FlatButton.Primary")
						.TextStyle(FEditorStyle::Get(), "ContentBrowser.TopBar.Font")
						.ContentPadding(FMargin(64.f,4.f))
						.OnClicked_Lambda([]() -> FReply
						{
							IEditorScriptingToolsModule* ScriptingToolsModule = IEditorScriptingToolsModule::GetPtr();
							ScriptingToolsModule->RequestRefreshPlacementBrowserTab();
							return FReply::Handled();
						})
		.Text_Lambda([]() -> FText
						{
							IEditorScriptingToolsModule* ScriptingToolsModule = IEditorScriptingToolsModule::GetPtr();
							return ScriptingToolsModule->IsPlacementBrowserTabActive() ?
								LOCTEXT("RefreshPlacementTabText", "Refresh Tab") :
								LOCTEXT("SPawnPlacementTabText", "Open Tab");
						})
					]
					+SHorizontalBox::Slot()
					.AutoWidth()
					.Padding(2.f)
					[
						SNew(SButton)
						.VAlign(VAlign_Center)
						.ButtonStyle(FEditorStyle::Get(), "FlatButton.Danger")
						.TextStyle(FEditorStyle::Get(), "ContentBrowser.TopBar.Font")
						.ContentPadding(FMargin(64.f,4.f))
						.Text(LOCTEXT("ClosePlacementTabText", "Close Tab"))
						.OnClicked_Lambda([]() -> FReply
						{
							IEditorScriptingToolsModule* ScriptingToolsModule = IEditorScriptingToolsModule::GetPtr();
							ScriptingToolsModule->RequestClosePlacementBrowserTab();
							return FReply::Handled();
						})
						.IsEnabled_Lambda([]() -> bool
						{
							IEditorScriptingToolsModule* ScriptingToolsModule = IEditorScriptingToolsModule::GetPtr();
							return ScriptingToolsModule->IsPlacementBrowserTabActive();
						})
					]
					
				];

	return SectionWidget;
}

TSharedRef<SWidget> SEditorScriptingToolsTab::CreateSettingsSectionWidget_OtherUtils()
{
	TSharedRef<SVerticalBox> SectionWidget = SNew(SVerticalBox);
	SectionWidget->AddSlot().AutoHeight()[CreateSectionHeader(LOCTEXT("ClassPropertiesBrowser", " Class Properties Browser "))];
	SectionWidget->AddSlot().HAlign(HAlign_Left)[SNew(SPropertiesBrowser)];
	return SectionWidget;
}

TSharedRef<SWidget> SEditorScriptingToolsTab::CreateSettingsSectionWidget_OtherSettings()
{
	return SNullWidget::NullWidget;
}

TSharedRef<SWidget> SEditorScriptingToolsTab::CreateSectionHeader(FText InText)
{
	return 
			SNew(SBox)
			.Padding(FMargin(1.f, 8.0f, 0.f, 8.f))
			[
				SNew(SHeader)
				[
					SNew(STextBlock)
					.Text(InText)
					.TextStyle(FEditorStyle::Get(), "ContentBrowser.TopBar.Font")
				]
			];
}

TSharedRef<SWidget> SEditorScriptingToolsTab::CreateWarningMessageWidegt(FText InText)
{
	return SNew(SBox)
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
					.Text(InText)
				]
			];
}


#undef LOCTEXT_NAMESPACE