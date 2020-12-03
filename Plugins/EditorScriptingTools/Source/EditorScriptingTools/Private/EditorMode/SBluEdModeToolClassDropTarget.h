//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//


#pragma once

#include "CoreMinimal.h"
#include "Styling/SlateColor.h"
#include "Input/Reply.h"
#include "Layout/Visibility.h"
#include "Widgets/DeclarativeSyntaxSupport.h"
#include "Widgets/SCompoundWidget.h"
#include "EditorStyleSet.h"

class FPaintArgs;
class FSlateWindowElementList;

/**
 * A widget that displays a hover cue and handles dropping assets of allowed types onto this widget
 */
class  SBluEdModeToolClassDropTarget : public SCompoundWidget
{
public:
	/** Called when a valid asset is dropped */
	DECLARE_DELEGATE_RetVal_OneParam(FReply, FOnDrop, TSharedPtr<FDragDropOperation>);
	DECLARE_DELEGATE_RetVal_OneParam(bool, FVerifyDrag, TSharedPtr<FDragDropOperation>);
	DECLARE_DELEGATE(FOnDoubleClick);

	SLATE_BEGIN_ARGS(SBluEdModeToolClassDropTarget)
	{ 
	}
		SLATE_DEFAULT_SLOT(FArguments, Content)
		SLATE_EVENT(FOnDrop, OnDrop)
		SLATE_EVENT(FVerifyDrag, OnAllowDrop)
		SLATE_EVENT(FOnDoubleClick, OnDoubleClicked)

	SLATE_END_ARGS()

		void Construct(const FArguments& InArgs);

protected:
	virtual bool OnAllowDrop(TSharedPtr<FDragDropOperation> DragDropOperation) const;

protected:
	// SWidget interface
	virtual FReply OnDrop(const FGeometry& MyGeometry, const FDragDropEvent& DragDropEvent) override;
	virtual void OnMouseEnter(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent) override;
	virtual void OnMouseLeave(const FPointerEvent& MouseEvent) override;
	virtual FReply OnMouseButtonDoubleClick(const FGeometry& InMyGeometry, const FPointerEvent& InMouseEvent) override;
	virtual void Tick(const FGeometry& AllottedGeometry, const double InCurrentTime, const float InDeltaTime) override;
	// End of SWidget interface

	
	EVisibility GetDragOverlayVisibility() const;
	FSlateColor GetBackgroundBrightness() const;
	FSlateColor GetForegroundImageColor() const;

private:

	FOnDrop DroppedEvent;
	FVerifyDrag AllowDropEvent;
	FSimpleDelegate OnDoubleClickEvent;


	FLinearColor ValidColor;
	FLinearColor InvalidColor;
	FLinearColor HoveredColor;
	FLinearColor BackgroundColor;
	FLinearColor BackgroundHoverColor;

	const FSlateBrush* BackgroundImage;

	bool bAllowDrop;
	bool bIsHovered;
	bool bDragOperationStarted;
};
