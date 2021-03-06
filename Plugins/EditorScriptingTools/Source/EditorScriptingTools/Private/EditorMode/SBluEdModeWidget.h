//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#pragma once

#include "CoreMinimal.h"
#include "Widgets/SCompoundWidget.h"
#include "Widgets/DeclarativeSyntaxSupport.h"
#include "Input/Reply.h"
#include "Layout/Visibility.h"

class IDetailsView;
class FBluEdMode;
class SErrorText;
class SBorder;
class SVerticalBox;
class SBox;
class SButton;

enum class EBluEdModeChangeMode : uint8;


class SBluEdModeWidget : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SBluEdModeWidget) {}
	SLATE_END_ARGS()

		/** Slate widget construction */
	void Construct(const FArguments& InArgs);


	void ClearEdModeWidgetContent();
	void RefreshEdModeWidgetContent();


	virtual ~SBluEdModeWidget();

protected:
	void OnBluEdModeChanged(EBluEdModeChangeMode InChangeMode);

protected:

	enum EBluEdModeWidgetSectionsVisibility
	{
		ToolkitWidget = 0,
		ViewportOverlayWidget,
		DetailsView,
		MAX,
		AllSections = (1 << ToolkitWidget) | (1 << ViewportOverlayWidget) | (1 << DetailsView),
	};

	TSharedPtr<IDetailsView> ToolInstanceDetailsView;
	TSharedPtr<SBorder> SectionSwitchContainer;
	TSharedPtr<SBox> ToolkitWidgetContainer;
	TSharedPtr<SErrorText> ErrorText;
	TSharedPtr<SButton> ExpanderButton;
	static uint32 SectionsVisibilityFlags;
	static bool bIsExpanded;

public:
	static bool IsViewportOverlayWidgetVisibilityFlagSet();

private:

	// Details View
	void CreateUseWidgetDetailsView();
	bool IsDetailsWidgetDisplayingAnyProperty() const;

	// Widgets Switcher
	TSharedRef<SWidget> CreateSectionSwitcherWidget();
	EVisibility GetSectionSwitcherVisibility() const;
	EVisibility GetSectionWidgetVisibility(EBluEdModeWidgetSectionsVisibility InSection) const;
	FReply OnToggleSectionSelection(EBluEdModeWidgetSectionsVisibility NewSection);
	bool IsSectionSwitcherVisible() const;
	bool IsSectionVisible(EBluEdModeWidgetSectionsVisibility InSection) const;
	bool IsSectionButtonEnabled(EBluEdModeWidgetSectionsVisibility InSection) const;
	const FSlateBrush* GetSectionButtonBrush(EBluEdModeWidgetSectionsVisibility InSection) const;
	FSlateColor GetSectionButtonColorAndOpacity(EBluEdModeWidgetSectionsVisibility InSection) const;
	FText GetSectionButtonToolTip(EBluEdModeWidgetSectionsVisibility InSection) const;


	//Expand Button
	const FSlateBrush* GetExpandButtonImage() const;
	FReply OnExpandButtonClicked();
	EVisibility GetButtonsVisibility() const;

	// Toolkit Widget
	TSharedRef<SWidget> GetToolkitSlateWidget();

	FReply OnReloadEditorModeToolInstance();
	bool CanReloadEditorModeToolInstance() const;

	FReply OnToggleEditorModeToolInstance();
	FReply OnEditClassBlueprint();
	FReply OpenClassPickerDialog();

	FReply OnClearTollClass();
	FReply OnShowToolClassInContentBrowser();

	FReply OnApplyChangesToToolBlueprint();
	bool CanApplyChangesToToolBlueprint() const;
	EVisibility GetApplyChangesButtonVisibility() const;

	bool HasValidToolClass() const;
	bool IsToolEditingEnabled() const;

	EVisibility GetThrobberVisibility() const;
	EVisibility GetWidgetContentVisibility() const;
	EVisibility GetOverlayImageVisibility() const;
	EVisibility GetModeWidgetVisibility() const;

	FText GetSelectedClassName() const;

	bool OnAllowDropNewToolClass(TSharedPtr<FDragDropOperation> DragDropOperation);
	FReply OnDropNewToolClass(TSharedPtr<FDragDropOperation> DragDropOperation);
	void OnClassDropTargetDoubleClicked();

	FText GetBlueprintEditorModeErrorText() const;

	FText GetEditorModeToolInstanceLoadingStatusText() const;


	FSlateColor GetEditorModeToolInstanceLoadingStatusTextColor() const;
	FText GetEditorModeToolInstanceLoadingButtonToolTipText() const;
	FReply OnSetBluEdModeActive(bool bActivate);
	EVisibility GetBluEdModeActivateButtonVisibility(bool bActivate) const;
};