//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#include "SBluEdModeWidget.h"

#include "BluEdMode.h"
#include "BluEdModeTypes.h"
#include "EditorModeToolInstance.h"
#include "EditorUserWidget.h"
#include "EditorScriptingToolsUtils.h"
#include "EditorBlueprintUtils.h"
#include "EditorTypesWrapperTypes.h"
#include "EditorScriptingToolsTypes.h"
#include "EditorScriptingToolsStyle.h"
#include "SBluEdModeToolClassDropTarget.h"

#include "Modules/ModuleManager.h"
#include "PropertyEditorModule.h" 
#include "Toolkits/AssetEditorManager.h"
#include "UnrealEdGlobals.h"
#include "PropertyPath.h"
#include "DetailLayoutBuilder.h" 
#include "Subsystems/AssetEditorSubsystem.h"
#include "AssetSelection.h"
#include "DragAndDrop/ClassDragDropOp.h"
#include "DragAndDrop/AssetDragDropOp.h"
#include "Misc/FeedbackContext.h"

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
#include "Widgets/Notifications/SErrorText.h"
#include "EditorModeToolUtilityBlueprint.h"
#include "LevelEditorUtils.h"

#define LOCTEXT_NAMESPACE "SBluEdModeWidget"


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// FBluEdModeToolClassFilter


class FBluEdModeToolClassFilter : public IClassViewerFilter
{
public:
	virtual bool IsClassAllowed(const FClassViewerInitializationOptions& InInitOptions, const UClass* InClass, TSharedRef< FClassViewerFilterFuncs > InFilterFuncs) override
	{
		if (InClass != nullptr && !InClass->HasAnyClassFlags(CLASS_Abstract))
		{
			return InClass->IsChildOf(UEditorModeToolInstance::StaticClass());
		}
		return false;
	}

	virtual bool IsUnloadedClassAllowed(const FClassViewerInitializationOptions& InInitOptions, const TSharedRef< const IUnloadedBlueprintData > InUnloadedClassData, TSharedRef< FClassViewerFilterFuncs > InFilterFuncs) override
	{
		return InUnloadedClassData->IsChildOf(UEditorModeToolInstance::StaticClass());
	}
};


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// SBluEdModeWidget

uint32 SBluEdModeWidget::SectionsVisibilityFlags = EBluEdModeWidgetSectionsVisibility::AllSections;
bool SBluEdModeWidget::bIsExpanded = true;

void SBluEdModeWidget::Construct(const FArguments& InArgs)
{
	FBluEdModeEditorDelegates::OnBluEdModeChangedDelegate.AddRaw(this, &SBluEdModeWidget::OnBluEdModeChanged);

	CreateUseWidgetDetailsView();

	const auto VerticalScrollbar = SNew(SScrollBar)
		.Orientation(Orient_Vertical)
		.Thickness(FVector2D(7.0f, 7.0f));

	const auto HorizontalScrollbar = SNew(SScrollBar)
		.Orientation(Orient_Horizontal)
		.Thickness(FVector2D(7.0f, 7.0f));

	ChildSlot
		[
			SNew(SVerticalBox)
			+SVerticalBox::Slot()
			[
				SNew(SHorizontalBox)
				+SHorizontalBox::Slot()
				[
					SNew(SVerticalBox)
					+SVerticalBox::Slot()
					.AutoHeight()
					[
						SNew(SBorder)
						.BorderImage(FEditorStyle::GetBrush("DetailsView.AdvancedDropdownBorder"))
						.Padding(FMargin(0.0f, 3.0f, 16.0f, 0.0f))
						[
							SAssignNew(ExpanderButton, SButton)
							.ButtonStyle(FEditorStyle::Get(), "NoBorder")
							.HAlign(HAlign_Center)
							.ContentPadding(2)
							.VAlign(VAlign_Top)
							.OnClicked(this, &SBluEdModeWidget::OnExpandButtonClicked)
							//.ToolTipText(this, &SAdvancedDropdownRow::GetAdvancedPulldownToolTipText)
							[
								SNew(SImage)
								.Image(this, &SBluEdModeWidget::GetExpandButtonImage)
							]
						]
					]
					+ SVerticalBox::Slot()
					.AutoHeight()
					.Padding(0, 0, 0, 5)
					[
						SAssignNew(ErrorText, SErrorText)
					]
					+SVerticalBox::Slot()
					.Padding(FMargin(0,4))
					.AutoHeight()
					[
						SNew(SHorizontalBox)
						.Visibility(this, &SBluEdModeWidget::GetButtonsVisibility)
						+ SHorizontalBox::Slot()
						[
							SNew(SBorder)
							.BorderImage(FEditorStyle::GetBrush("ToolPanel.DarkGroupBorder"))
							
							[
								SNew(SVerticalBox)
								.IsEnabled(this, &SBluEdModeWidget::IsToolEditingEnabled)
								+ SVerticalBox::Slot()
								.AutoHeight()
								.Padding(FMargin(0.0f,2.0f))
								[
									SNew(SHeader)
									[
										SNew(STextBlock)
										.Text(LOCTEXT("ModeWidgetClass_Title", "Tool Class "))
										.Font(FEditorStyle::GetFontStyle(TEXT("PropertyWindow.NormalFont")))
									]
								]
								+SVerticalBox::Slot()
								[
									SNew(SHorizontalBox)
									+ SHorizontalBox::Slot()
									.Padding(2.0f)
									[
										SNew(SOverlay)
										+ SOverlay::Slot()
										[
											SNew(SThrobber)
											.Clipping(EWidgetClipping::ClipToBounds)
											.Visibility(this,&SBluEdModeWidget::GetThrobberVisibility)
											.NumPieces(10)
										]
										+ SOverlay::Slot()
										[
											SNew(SBorder)
											.Visibility(EVisibility::HitTestInvisible)
											.VAlign(VAlign_Center)
											.BorderImage(FEditorStyle::GetBrush("ToolPanel.GroupBorder"))
											.RenderOpacity(0.7f)
											.Padding(FMargin(4, 0))
											.Clipping(EWidgetClipping::ClipToBounds)
										]
										+SOverlay::Slot()
										[
											SNew(SBluEdModeToolClassDropTarget)
											.OnAllowDrop(this, &SBluEdModeWidget::OnAllowDropNewToolClass)
											.OnDrop(this, &SBluEdModeWidget::OnDropNewToolClass)
											.OnDoubleClicked(this, &SBluEdModeWidget::OnClassDropTargetDoubleClicked)
										]
										+ SOverlay::Slot()
										.VAlign(VAlign_Center)
										[
											SNew(SBox)
											.Visibility(EVisibility::HitTestInvisible)
											.Padding(FMargin(4, 0))
											[
												SNew(STextBlock)
												.TextStyle(FEditorStyle::Get(), "PropertyEditor.AssetClass")
												.Font(FEditorStyle::Get().GetFontStyle("PropertyWindow.NormalFont"))
												.Text(this, &SBluEdModeWidget::GetSelectedClassName)
											]
										]
									]
									+ SHorizontalBox::Slot()
									.Padding(FMargin(1,4))
									.HAlign(HAlign_Right)
									.AutoWidth()
									[
										SNew(SButton)
										.IsEnabled(this, &SBluEdModeWidget::HasValidToolClass)
										.ButtonStyle(FEditorStyle::Get(), "HoverHintOnly")
										.OnClicked(this,&SBluEdModeWidget::OnToggleEditorModeToolInstance)
										.ToolTipText(this, &SBluEdModeWidget::GetEditorModeToolInstanceLoadingButtonToolTipText)
										[
											SNew(STextBlock)
											.ColorAndOpacity(this , &SBluEdModeWidget::GetEditorModeToolInstanceLoadingStatusTextColor)
											.TextStyle(FEditorStyle::Get(), "ContentBrowser.TopBar.Font")
											.Font(FEditorStyle::Get().GetFontStyle("FontAwesome.10"))
											.Text(this, &SBluEdModeWidget::GetEditorModeToolInstanceLoadingStatusText)
										]
									]
									+ SHorizontalBox::Slot()
									.Padding(FMargin(1,4))
									.HAlign(HAlign_Right)
									.AutoWidth()
									[
										SNew(SButton)
										.ButtonStyle(FEditorStyle::Get(), "HoverHintOnly")
										.OnClicked(this,&SBluEdModeWidget::OpenClassPickerDialog)
										.ToolTipText(LOCTEXT("OpenClassPickerDialog_ToolTip", "Open BluEdMode widget class picker dialog."))
										[
											SNew(STextBlock)
											.ColorAndOpacity(FLinearColor(0.8f,0.8f,0.8f,1.0f))
											.TextStyle(FEditorStyle::Get(), "ContentBrowser.TopBar.Font")
											.Font(FEditorStyle::Get().GetFontStyle("FontAwesome.11"))
											.Text(FEditorFontGlyphs::List)
										]
									]
									+ SHorizontalBox::Slot()
									.Padding(FMargin(1,4))
									.HAlign(HAlign_Right)
									.AutoWidth()
									[
										SNew(SButton)
										.IsEnabled(this, &SBluEdModeWidget::HasValidToolClass)
										.ButtonStyle(FEditorStyle::Get(), "HoverHintOnly")
										.OnClicked(this,&SBluEdModeWidget::OnShowToolClassInContentBrowser)
										.ToolTipText(LOCTEXT("ShowClassInContentBrowser_Name", "Show Class In Content Browser"))
										[
											SNew(STextBlock)
											.ColorAndOpacity(FLinearColor(0.65f,0.4f,0.15f,1.0f))
											.TextStyle(FEditorStyle::Get(), "ContentBrowser.TopBar.Font")
											.Font(FEditorStyle::Get().GetFontStyle("FontAwesome.11"))
											.Text(FEditorFontGlyphs::Search)
										]
									]
									+ SHorizontalBox::Slot()
									.Padding(FMargin(1,4))
									.HAlign(HAlign_Right)
									.AutoWidth()
									[
										SNew(SButton)
										.IsEnabled(this, &SBluEdModeWidget::CanReloadEditorModeToolInstance)
										.ButtonStyle(FEditorStyle::Get(), "HoverHintOnly")
										.OnClicked(this,&SBluEdModeWidget::OnReloadEditorModeToolInstance)
										.ToolTipText(LOCTEXT("ReloadToolIntance_ToolTip", "Reloads current tool."))
										[
											SNew(STextBlock)
											.ColorAndOpacity(FLinearColor(0.2f,0.5f,1.0f,1.0f))
											.TextStyle(FEditorStyle::Get(), "ContentBrowser.TopBar.Font")
											.Font(FEditorStyle::Get().GetFontStyle("FontAwesome.11"))
											.Text(FEditorFontGlyphs::Refresh)
										]
									]
									+ SHorizontalBox::Slot()
									.Padding(FMargin(1,4))
									.HAlign(HAlign_Right)
									.AutoWidth()
									[
										SNew(SButton)
										.IsEnabled(this, &SBluEdModeWidget::HasValidToolClass)
										.ButtonStyle(FEditorStyle::Get(), "HoverHintOnly")
										.OnClicked(this,&SBluEdModeWidget::OnClearTollClass)
										.ToolTipText(LOCTEXT("ClearEditorModeToolInstance_ToolTip", "Unloads current tool and clears widget class."))
										[
											SNew(STextBlock)
											.ColorAndOpacity(FLinearColor::Red)
											.TextStyle(FEditorStyle::Get(), "ContentBrowser.TopBar.Font")
											.Font(FEditorStyle::Get().GetFontStyle("FontAwesome.11"))
											.Text(FEditorFontGlyphs::Times)
										]
									]
								]
								+ SVerticalBox::Slot()
								.VAlign(VAlign_Top)
								.HAlign(HAlign_Fill)
								.AutoHeight()
								[
									SAssignNew(SectionSwitchContainer, SBorder)
									.BorderImage(FEditorStyle::GetBrush("ToolPanel.DarkGroupBorder"))
									.Padding(2.0f)
								]
							]	
						]
					]					
					+SVerticalBox::Slot()
					[
						SNew(SOverlay)
						+ SOverlay::Slot()
						[
							SNew(SScrollBox)
							.ExternalScrollbar(VerticalScrollbar)
							.Orientation(Orient_Vertical)
							+ SScrollBox::Slot()
							[
								SNew(SVerticalBox)
								+SVerticalBox::Slot()
								.AutoHeight()
								[
									SNew(SScrollBox)
									.ExternalScrollbar(HorizontalScrollbar)
									.Orientation(Orient_Horizontal)
									+SScrollBox::Slot()
									[
										SAssignNew(ToolkitWidgetContainer, SBox)
										.Visibility(this, &SBluEdModeWidget::GetSectionWidgetVisibility, EBluEdModeWidgetSectionsVisibility::ToolkitWidget)
									]
								]
								+ SVerticalBox::Slot()
								.Padding(1.0f)
								[
									SNew(SVerticalBox)
									.Visibility(this, &SBluEdModeWidget::GetSectionWidgetVisibility,EBluEdModeWidgetSectionsVisibility::DetailsView)
									+ SVerticalBox::Slot()
									.Padding(2.0f)
									.AutoHeight()
									[
										ToolInstanceDetailsView.ToSharedRef()
									]
									+ SVerticalBox::Slot()
									.Padding(2.0f)
									.HAlign(HAlign_Right)
									.AutoHeight()
									[
										SNew(SButton)
										.ContentPadding(FMargin(4.0f,1.0f))
										.IsEnabled(this , &SBluEdModeWidget::CanApplyChangesToToolBlueprint)
										.Visibility(this, &SBluEdModeWidget::GetApplyChangesButtonVisibility)
										.ButtonColorAndOpacity(FLinearColor(0,0,0,.25f))
										.OnClicked(this,&SBluEdModeWidget::OnApplyChangesToToolBlueprint)
										[
											SNew(SImage)
											.Image(FEditorScriptingToolsStyle::Get()->GetBrush("BluEdMode.ApplyInstanceChanges"))
										]
									]
								]
							]
						]
						+ SOverlay::Slot()
						.VAlign(VAlign_Fill)
						.HAlign(HAlign_Fill)
						[
							SNew(SImage)
							.Visibility(this , &SBluEdModeWidget::GetOverlayImageVisibility)
							.ColorAndOpacity(FLinearColor(0.5f, 0.5f, 0.5f, 0.25f))
						]
					]
				]
				+SHorizontalBox::Slot()
				.AutoWidth()
				[
					VerticalScrollbar
				]
			]
			+SVerticalBox::Slot()
			.AutoHeight()
			[
				HorizontalScrollbar
			]
		];

	RefreshEdModeWidgetContent();
}

void SBluEdModeWidget::ClearEdModeWidgetContent()
{
	ToolInstanceDetailsView->SetObject(nullptr);
	ToolkitWidgetContainer->SetContent(SNullWidget::NullWidget);
	SectionSwitchContainer->ClearContent();
}

void SBluEdModeWidget::RefreshEdModeWidgetContent()
{	
	ClearEdModeWidgetContent();

	if (!ToolInstanceDetailsView.IsValid())
	{
		CreateUseWidgetDetailsView();
	}

	FBluEdMode* BluEdMode = FBluEdMode::GetPtr();

	if(BluEdMode == nullptr || !BluEdMode->HasValidToolInstance())
	{
		return;
	}

	if (IsSectionSwitcherVisible())
	{
		SectionSwitchContainer->SetContent(CreateSectionSwitcherWidget());
	}
	else
	{
		SectionsVisibilityFlags = EBluEdModeWidgetSectionsVisibility::AllSections;
	}

	if (BluEdMode)
	{
		if (BluEdMode->HasValidToolInstance())
		{
			UObject* TargetObject = nullptr;

			if (UEditorModeToolInstance* ModeTool = BluEdMode->GetActiveToolInstance())
			{
				if (BluEdMode->GetModeToolBlueprint()->bShowToolDetailsPanel)
				{
					EDITOR_SCRIPT_EXECUTION_GUARD
						TargetObject = BluEdMode->GetActiveToolInstance();
				}
			}

			if (TargetObject)
			{
				ToolInstanceDetailsView->SetObject(TargetObject);
			}
		}
	}
	ToolInstanceDetailsView->ForceRefresh();
	ToolkitWidgetContainer->SetContent(
							SNew(SScaleBox)
							.HAlign(HAlign_Fill)
							.VAlign(VAlign_Fill)
							.Stretch(EStretch::ScaleToFit)
							[
								GetToolkitSlateWidget()
							]
						);
}

SBluEdModeWidget::~SBluEdModeWidget()
{
	FBluEdModeEditorDelegates::OnBluEdModeChangedDelegate.RemoveAll(this);
}

void SBluEdModeWidget::OnBluEdModeChanged(EBluEdModeChangeMode InChangeMode)
{
	if (InChangeMode == EBluEdModeChangeMode::RefreshWidget)
	{
		RefreshEdModeWidgetContent();
	}
	else
	{
		ClearEdModeWidgetContent();
	}
}

bool SBluEdModeWidget::IsViewportOverlayWidgetVisibilityFlagSet()
{
	return (SectionsVisibilityFlags & (1 << EBluEdModeWidgetSectionsVisibility::ViewportOverlayWidget)) != 0;
}

void SBluEdModeWidget::CreateUseWidgetDetailsView()
{
	FPropertyEditorModule& PropertyEditorModule = FModuleManager::LoadModuleChecked<FPropertyEditorModule>("PropertyEditor");
	FDetailsViewArgs DetailsViewArgs;
	DetailsViewArgs.bUpdatesFromSelection = true;
	DetailsViewArgs.bLockable = true;
	DetailsViewArgs.bAllowSearch = true;
	DetailsViewArgs.NameAreaSettings = FDetailsViewArgs::ObjectsUseNameArea;
	DetailsViewArgs.bCustomNameAreaLocation = true;
	DetailsViewArgs.bCustomFilterAreaLocation = true;
	DetailsViewArgs.DefaultsOnlyVisibility = EEditDefaultsOnlyNodeVisibility::Hide;
	ToolInstanceDetailsView = PropertyEditorModule.CreateDetailView(DetailsViewArgs);
}

bool SBluEdModeWidget::IsDetailsWidgetDisplayingAnyProperty() const
{
	if (ToolInstanceDetailsView.IsValid())
	{
		return ToolInstanceDetailsView->GetPropertiesInOrderDisplayed().Num() > 0;
	}
	return false;
}

TSharedRef<SWidget> SBluEdModeWidget::CreateSectionSwitcherWidget()
{
	TSharedRef< SHorizontalBox > HorBox = SNew(SHorizontalBox);
	HorBox->AddSlot()
	.VAlign(VAlign_Center)
	.HAlign(HAlign_Fill)
	[
		SNew(SHeader)
		[
			SNew(STextBlock)
			.Text(LOCTEXT("WidgetsFilter_Title", "Tool Widgets Filter"))
			.Font(FEditorStyle::GetFontStyle(TEXT("PropertyWindow.NormalFont")))
		]
	];

	const uint8 SectionsNum = static_cast<uint8>(EBluEdModeWidgetSectionsVisibility::MAX);

	for (uint8 SectionIdx = 0; SectionIdx < SectionsNum; SectionIdx++)
	{
		const EBluEdModeWidgetSectionsVisibility Section = static_cast<EBluEdModeWidgetSectionsVisibility>(SectionIdx);


		HorBox->AddSlot()
		.VAlign(VAlign_Center)
		.HAlign(HAlign_Right)
		.AutoWidth()
		.Padding(2.f,2.f)
		[
			SNew(SButton)
			.HAlign(HAlign_Fill)
			.VAlign(VAlign_Fill)
			.ButtonColorAndOpacity(this, &SBluEdModeWidget::GetSectionButtonColorAndOpacity, Section)
			.ToolTipText(this, &SBluEdModeWidget::GetSectionButtonToolTip, Section)
			.OnClicked(this, &SBluEdModeWidget::OnToggleSectionSelection, Section)
			.IsEnabled(this, &SBluEdModeWidget::IsSectionButtonEnabled, Section)
			[
				SNew(SHorizontalBox)
				.Clipping(EWidgetClipping::ClipToBounds)
				+ SHorizontalBox::Slot()
				.HAlign(HAlign_Fill)
				.VAlign(VAlign_Fill)
				.Padding(2.f)
				.AutoWidth()
					[
						SNew(SImage)
						.Image(this, &SBluEdModeWidget::GetSectionButtonBrush, Section)
					]
			]
		];
	}
	
	return HorBox;
}

EVisibility SBluEdModeWidget::GetSectionSwitcherVisibility() const
{
	return IsSectionSwitcherVisible() ? EVisibility::Visible : EVisibility::Collapsed;
}

EVisibility SBluEdModeWidget::GetSectionWidgetVisibility(EBluEdModeWidgetSectionsVisibility InSection) const
{
	if (FBluEdMode* BluEdMode =  FBluEdMode::GetPtr())
	{
		if (BluEdMode->HasValidToolInstance())
		{
			if (IsSectionVisible(InSection))
			{
				return EVisibility::Visible;
			}
		}
	}
	return EVisibility::Collapsed;
}

FReply SBluEdModeWidget::OnToggleSectionSelection(EBluEdModeWidgetSectionsVisibility NewSection)
{
	SectionsVisibilityFlags ^= (1 << NewSection);
	RefreshEdModeWidgetContent();
	return FReply::Handled();
}

bool SBluEdModeWidget::IsSectionSwitcherVisible() const
{
	if (FBluEdMode* BluEdMode = FBluEdMode::GetPtr())
	{
		if (UEditorModeToolUtilityBlueprint* ModeToolBlueprint = BluEdMode->GetModeToolBlueprint())
		{
			if ((ModeToolBlueprint->bShowToolDetailsPanel && IsDetailsWidgetDisplayingAnyProperty()) ||
				BluEdMode->HasValidToolkitWidgetInstance() ||
				BluEdMode->HasValidViewportOverlayWidgetInstance())
			{
				return true;
			}
		}
	}
	return false;
}

bool SBluEdModeWidget::IsSectionVisible(EBluEdModeWidgetSectionsVisibility InSection) const
{
	return (SectionsVisibilityFlags & (1 << InSection)) != 0;
}

bool SBluEdModeWidget::IsSectionButtonEnabled(EBluEdModeWidgetSectionsVisibility InSection) const
{
	if (FBluEdMode* BluEdMode = FBluEdMode::GetPtr())
	{
		if (UEditorModeToolUtilityBlueprint* ModeToolBlueprint = BluEdMode->GetModeToolBlueprint())
		{
				if ((InSection == EBluEdModeWidgetSectionsVisibility::DetailsView && ModeToolBlueprint->bShowToolDetailsPanel && IsDetailsWidgetDisplayingAnyProperty()) ||
					(InSection == EBluEdModeWidgetSectionsVisibility::ToolkitWidget && BluEdMode->HasValidToolkitWidgetInstance()) ||
					(InSection == EBluEdModeWidgetSectionsVisibility::ViewportOverlayWidget && BluEdMode->HasValidViewportOverlayWidgetInstance()))
				{
					return true;
				}
		}
	}

	return false;
}

const FSlateBrush* SBluEdModeWidget::GetSectionButtonBrush(EBluEdModeWidgetSectionsVisibility InSection) const
{
	if (FEditorScriptingToolsStyle::Get().IsValid())
	{
		switch (InSection)
		{
		case EBluEdModeWidgetSectionsVisibility::ToolkitWidget:return FEditorScriptingToolsStyle::Get()->GetBrush("BluEdMode.ShowToolkitWidget");
		case EBluEdModeWidgetSectionsVisibility::ViewportOverlayWidget:return FEditorScriptingToolsStyle::Get()->GetBrush("BluEdMode.ShowOverlayWidget");
		case EBluEdModeWidgetSectionsVisibility::DetailsView:return FEditorScriptingToolsStyle::Get()->GetBrush("BluEdMode.ShowDetailsView");
		}
	}
	return FEditorStyle::GetBrush("ToolPanel.GroupBorder");
}

FSlateColor SBluEdModeWidget::GetSectionButtonColorAndOpacity(EBluEdModeWidgetSectionsVisibility InSection) const
{
	return IsSectionVisible(InSection) ? FLinearColor(1.0f, 0.33f, 0.0f, 1.0f) : FLinearColor(0, 0, 0, 0.5f);
}

FText SBluEdModeWidget::GetSectionButtonToolTip(EBluEdModeWidgetSectionsVisibility InSection) const
{
	switch (InSection)
	{
	case EBluEdModeWidgetSectionsVisibility::ToolkitWidget:
		return LOCTEXT("ToolWidgetSection_Name", "Show/Hide Toolkit Widget.");

	case EBluEdModeWidgetSectionsVisibility::ViewportOverlayWidget:
		return LOCTEXT("ViewportOverlayWidget", "Show/Hide Viewport Overlay Widget.");

	case EBluEdModeWidgetSectionsVisibility::DetailsView:
		return LOCTEXT("DetailsViewSection_Name", "Show/Hide Tool Instance Details Panel Widget.");
	}

	return LOCTEXT("InvalidSectionToolTip_Name", "Invalid");
}


const FSlateBrush* SBluEdModeWidget::GetExpandButtonImage() const
{
	if (ExpanderButton->IsHovered())
	{
		return bIsExpanded ? FEditorStyle::GetBrush("DetailsView.PulldownArrow.Up.Hovered") : FEditorStyle::GetBrush("DetailsView.PulldownArrow.Down.Hovered");
	}
	else
	{
		return bIsExpanded ? FEditorStyle::GetBrush("DetailsView.PulldownArrow.Up") : FEditorStyle::GetBrush("DetailsView.PulldownArrow.Down");
	}
}

FReply SBluEdModeWidget::OnExpandButtonClicked()
{
	bIsExpanded = !bIsExpanded;
	return FReply::Handled();
}

EVisibility SBluEdModeWidget::GetButtonsVisibility() const
{
	return bIsExpanded ? EVisibility::Visible : EVisibility::Collapsed;
}

TSharedRef<SWidget> SBluEdModeWidget::GetToolkitSlateWidget()
{
	if (FBluEdMode* BluEdMode = FBluEdMode::GetPtr())
	{
		if (UEditorUserWidget* ActiveToolkitWidget = BluEdMode->GetActiveToolkitWidgetInstance())
		{
			return ActiveToolkitWidget->TakeWidget();
		}
	}

	return SNullWidget::NullWidget;
}

FReply SBluEdModeWidget::OnReloadEditorModeToolInstance()
{
	if (FBluEdMode* BluEdMode = FBluEdMode::GetPtr())
	{
		BluEdMode->ReloadTool();
		return FReply::Handled();
	}

	return FReply::Unhandled();
}

bool SBluEdModeWidget::CanReloadEditorModeToolInstance() const
{
	if (FBluEdMode* BluEdMode = FBluEdMode::GetPtr())
	{
		return BluEdMode->HasValidToolInstance();
	}
	return false;
}

FReply SBluEdModeWidget::OnToggleEditorModeToolInstance()
{
	if (FBluEdMode* BluEdMode = FBluEdMode::GetPtr())
	{
		if (BluEdMode->HasValidToolInstance())
		{
			BluEdMode->UnloadTool();
		}
		else
		{
			BluEdMode->ReloadTool();
		}
		return FReply::Handled();
	}

	return FReply::Unhandled();
}

FReply SBluEdModeWidget::OnEditClassBlueprint()
{
	OnClassDropTargetDoubleClicked();
	return FReply::Handled();
}

FReply SBluEdModeWidget::OpenClassPickerDialog()
{
	if (FBluEdMode* BluEdMode = FBluEdMode::GetPtr())
	{

		FClassViewerInitializationOptions Options;
		Options.Mode = EClassViewerMode::ClassPicker;
		Options.InitiallySelectedClass = BluEdMode->GetModeToolClass();
		Options.DisplayMode = EClassViewerDisplayMode::ListView;
		Options.bShowNoneOption = true;

		TSharedPtr<FBluEdModeToolClassFilter> Filter = MakeShareable(new FBluEdModeToolClassFilter);
		Options.ClassFilter = Filter;

		const FText TitleText = LOCTEXT("PickBluEdModeUserWidgetClass", "Pick Ed Mode Widget Blueprint Class");
		UClass* ChosenClass = nullptr;
		const bool bPressedOk = SClassPickerDialog::PickClass(TitleText, Options, ChosenClass, UEditorModeToolInstance::StaticClass());


		if (bPressedOk)
		{
			UEditorModeToolUtilityBlueprint* ToolBlueprint = nullptr;
			if (ChosenClass != nullptr)
			{
				ToolBlueprint = Cast<UEditorModeToolUtilityBlueprint>(ChosenClass->ClassGeneratedBy);
			}
			
			BluEdMode->SetCurrentToolBlueprint(ToolBlueprint);
			return FReply::Handled();
		}
	}

	return FReply::Unhandled();
}

FReply SBluEdModeWidget::OnClearTollClass()
{
	if (FBluEdMode* BluEdMode = FBluEdMode::GetPtr())
	{
		BluEdMode->SetCurrentToolBlueprint(nullptr);
	}

	ClearEdModeWidgetContent();

	return FReply::Handled();
}

FReply SBluEdModeWidget::OnShowToolClassInContentBrowser()
{
	if (FBluEdMode* BluEdMode = FBluEdMode::GetPtr())
	{
		if (BluEdMode->HasValidToolClass())
		{
			TArray<UObject*> ObjectsToSync;
			ObjectsToSync.Add(BluEdMode->GetModeToolClass()->ClassGeneratedBy);
			GEditor->SyncBrowserToObjects(ObjectsToSync);
			return FReply::Handled();
		}
	}


	return FReply::Unhandled();
}

FReply SBluEdModeWidget::OnApplyChangesToToolBlueprint()
{
	if (FBluEdMode* BluEdMode = FBluEdMode::GetPtr())
	{
		if (UEditorModeToolInstance* EdModeWidget = BluEdMode->GetActiveToolInstance())
		{
			if (UEditorModeToolInstance* ToolInstance = BluEdMode->GetActiveToolInstance())
			{
				const EditorBlueprintUtils::EObjectPropertiesCopyOptions CopyOptions = EditorBlueprintUtils::EObjectPropertiesCopyOptions::OnlyCopyEditOrInterpProperties;
				EditorBlueprintUtils::CopyPropertiesToCDO(EdModeWidget, CopyOptions);
				return FReply::Handled();
			}
		}
	}

	return FReply::Unhandled();
}

bool SBluEdModeWidget::CanApplyChangesToToolBlueprint() const
{
	if (FBluEdMode* BluEdMode = FBluEdMode::GetPtr())
	{
		if (UEditorModeToolUtilityBlueprint* ModeToolBlueprint = BluEdMode->GetModeToolBlueprint())
		{
				if (ModeToolBlueprint->bShowToolDetailsPanel)
				{
					return IsDetailsWidgetDisplayingAnyProperty();
				}
		}
	}
	return false;
}

EVisibility SBluEdModeWidget::GetApplyChangesButtonVisibility() const
{
	return CanApplyChangesToToolBlueprint() ? EVisibility::Visible : EVisibility::Collapsed;
}

bool SBluEdModeWidget::HasValidToolClass() const
{
	if (FBluEdMode* BluEdMode = FBluEdMode::GetPtr())
	{
		if (BluEdMode->GetModeToolClass())
		{
			return true;
		}
	}
	return false;
}

bool SBluEdModeWidget::IsToolEditingEnabled() const
{
	ErrorText->SetError(GetBlueprintEditorModeErrorText());
	if (FBluEdMode* BluEdMode = FBluEdMode::GetPtr())
	{
		return BluEdMode->IsEditingEnabled();
	}

	return false;
}

EVisibility SBluEdModeWidget::GetThrobberVisibility() const
{
	if (FBluEdMode* BluEdMode = FBluEdMode::GetPtr())
	{
		if (BluEdMode->HasValidToolInstance())
		{
			return EVisibility::HitTestInvisible;
		}
	}
	return EVisibility::Hidden;
}

EVisibility SBluEdModeWidget::GetWidgetContentVisibility() const
{
	if (FBluEdMode* BluEdMode = FBluEdMode::GetPtr())
	{
		return EVisibility::Visible;
	}

	return EVisibility::Hidden;
}

EVisibility SBluEdModeWidget::GetOverlayImageVisibility() const
{
	if (FBluEdMode* BluEdMode = FBluEdMode::GetPtr())
	{
		return BluEdMode->IsEditingEnabled() ? EVisibility::Hidden : EVisibility::Visible;;
	}

	return EVisibility::Hidden;
}

EVisibility SBluEdModeWidget::GetModeWidgetVisibility() const
{
	if (FBluEdMode* BluEdMode = FBluEdMode::GetPtr())
	{
		if (BluEdMode->GetModeToolClass())
		{
			return EVisibility::Visible;
		}
	}
	return EVisibility::Collapsed;
}

FText SBluEdModeWidget::GetSelectedClassName() const
{
	if (FBluEdMode* BluEdMode = FBluEdMode::GetPtr())
	{
		if (BluEdMode->GetModeToolClass())
		{
			return BluEdMode->GetModeToolClass()->GetDisplayNameText();
		}
		else
		{
			return LOCTEXT("SelectedClassName", "None");
		}
	}


	return LOCTEXT("BluEdModeInactive_Text", "BluEdMode Inactive");
}

bool SBluEdModeWidget::OnAllowDropNewToolClass(TSharedPtr<FDragDropOperation> DragDropOperation)
{
	if (DragDropOperation.IsValid() && DragDropOperation->IsOfType<FAssetDragDropOp>())
	{
		if (FBluEdMode* BluEdMode = FBluEdMode::GetPtr())
		{
			TSharedPtr<FAssetDragDropOp> UnloadedClassOp = StaticCastSharedPtr<FAssetDragDropOp>(DragDropOperation);
			if (UnloadedClassOp.IsValid())
			{
				bool bAllAssetWereLoaded = true;

				FString AssetPath;

				// Find the class/blueprint path
				if (UnloadedClassOp->HasAssets())
				{
					AssetPath = UnloadedClassOp->GetAssets()[0].ObjectPath.ToString();
				}
				else if (UnloadedClassOp->HasAssetPaths())
				{
					AssetPath = UnloadedClassOp->GetAssetPaths()[0];
				}

				// Check to see if the asset can be found, otherwise load it.
				UObject* Object = FindObject<UObject>(nullptr, *AssetPath);
				if (Object == nullptr)
				{
					// Load the package.
					GWarn->BeginSlowTask(LOCTEXT("OnDrop_LoadPackage", "Fully Loading Package For Drop"), true, false);

					Object = LoadObject<UObject>(nullptr, *AssetPath);

					GWarn->EndSlowTask();
				}

				FString ClassPath("");
				if (UClass* Class = Cast<UClass>(Object))
				{
					// This was pointing to a class directly
					ClassPath = Class->GetPathName();
				}
				else if (UBlueprint* Blueprint = Cast<UBlueprint>(Object))
				{
					if (Blueprint->GeneratedClass)
					{
						// This was pointing to a blueprint, get generated class
						ClassPath = Blueprint->GeneratedClass->GetPathName();
					}
				}

				if (!ClassPath.IsEmpty())
				{
					UClass* NewClass = FindObject<UClass>(ANY_PACKAGE, *ClassPath);
					if (!NewClass)
					{
						NewClass = LoadObject<UClass>(nullptr, *ClassPath);
					}

					if (NewClass && NewClass->IsChildOf(UEditorModeToolInstance::StaticClass()))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

FReply SBluEdModeWidget::OnDropNewToolClass(TSharedPtr<FDragDropOperation> DragDropOperation)
{
	if (DragDropOperation.IsValid())
	{
		if (FBluEdMode* BluEdMode = FBluEdMode::GetPtr())
		{

			TSharedPtr<FAssetDragDropOp> UnloadedClassOp = StaticCastSharedPtr<FAssetDragDropOp>(DragDropOperation);

			if (UnloadedClassOp.IsValid())
			{
				bool bAllAssetWereLoaded = true;

				FString AssetPath;

				// Find the class/blueprint path
				if (UnloadedClassOp->HasAssets())
				{
					AssetPath = UnloadedClassOp->GetAssets()[0].ObjectPath.ToString();
				}
				else if (UnloadedClassOp->HasAssetPaths())
				{
					AssetPath = UnloadedClassOp->GetAssetPaths()[0];
				}

				// Check to see if the asset can be found, otherwise load it.
				UObject* Object = FindObject<UObject>(nullptr, *AssetPath);
				if (Object == nullptr)
				{
					// Load the package.
					GWarn->BeginSlowTask(LOCTEXT("OnDrop_LoadPackage", "Fully Loading Package For Drop"), true, false);

					Object = LoadObject<UObject>(nullptr, *AssetPath);

					GWarn->EndSlowTask();
				}

				if (UEditorModeToolUtilityBlueprint* Blueprint = Cast<UEditorModeToolUtilityBlueprint>(Object))
				{
					BluEdMode->SetCurrentToolBlueprint(Blueprint);
					return FReply::Handled();
				}
			}
		}
	}
	return FReply::Unhandled();
}

void SBluEdModeWidget::OnClassDropTargetDoubleClicked()
{
	if (FBluEdMode* BluEdMode = FBluEdMode::GetPtr())
	{
		if (BluEdMode->HasValidToolClass())
		{
			GEditor->GetEditorSubsystem<UAssetEditorSubsystem>()->OpenEditorForAsset(BluEdMode->GetModeToolClass()->ClassGeneratedBy);
		}
	}
}

FText SBluEdModeWidget::GetBlueprintEditorModeErrorText() const
{
	if (FBluEdMode* BluEdMode = FBluEdMode::GetPtr())
	{
		const EEditorState EditState = LevelEditorUtils::GetEditorState();
		const bool bIsEditingEnabled = BluEdMode->IsEditingEnabled();

		if (!bIsEditingEnabled)
		{
			switch (EditState)
			{
			case EEditorState::SimulatingInEditor: return LOCTEXT("IsSimulatingError_edit", "Can't edit mode while simulating!");
			case EEditorState::PlayingInEditor: return LOCTEXT("IsPIEError_edit", "Can't edit mode in PIE!");
			}
		}
	}
	return FText::GetEmpty();
}


FText SBluEdModeWidget::GetEditorModeToolInstanceLoadingStatusText() const
{
	if (FBluEdMode* BluEdMode = FBluEdMode::GetPtr())
	{
		if (BluEdMode->HasValidToolInstance())
		{
			return FEditorFontGlyphs::Stop;
		}
	}
	return  FEditorFontGlyphs::Play;
}

FSlateColor SBluEdModeWidget::GetEditorModeToolInstanceLoadingStatusTextColor() const
{
	if (FBluEdMode* BluEdMode = FBluEdMode::GetPtr())
	{
		if (BluEdMode->HasValidToolInstance())
		{
			return FLinearColor(0.85f, 0.25f, 0.15f, 1.0f);
		}
	}
	return   FLinearColor(0.25f, 0.65f, 0.25f, 1.0f);
}

FText SBluEdModeWidget::GetEditorModeToolInstanceLoadingButtonToolTipText() const
{
	if (FBluEdMode* BluEdMode = FBluEdMode::GetPtr())
	{
		if (BluEdMode->HasValidToolInstance())
		{
			return LOCTEXT("LoadEditorModeToolInstance_ToolTip", "Unload Tool");
		}
	}
	return LOCTEXT("LoadEditorModeToolInstance_ToolTip", "Load Tool");
}

FReply SBluEdModeWidget::OnSetBluEdModeActive(bool bActivate)
{
	FBluEdMode::SetActive(bActivate);
	return FReply::Handled();
}

EVisibility SBluEdModeWidget::GetBluEdModeActivateButtonVisibility(bool bActivate) const
{
	return (bActivate != FBluEdMode::IsActive()) ? EVisibility::Visible : EVisibility::Collapsed;
}

#undef LOCTEXT_NAMESPACE 