//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//


#include "SBluEdModeToolClassDropTarget.h"
#include "Rendering/DrawElements.h"
#include "Widgets/SOverlay.h"
#include "Framework/Application/SlateApplication.h"
#include "Widgets/Layout/SBorder.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/Images/SImage.h"


#define LOCTEXT_NAMESPACE "SBluEdModeWidgetClassDropTarget"

void SBluEdModeToolClassDropTarget::Construct(const FArguments& InArgs)
{
	DroppedEvent = InArgs._OnDrop;
	AllowDropEvent = InArgs._OnAllowDrop;
	OnDoubleClickEvent = InArgs._OnDoubleClicked;

	ValidColor = FLinearColor(0, 1, 0, 0.35f);
	InvalidColor = FLinearColor(1, 0, 0, 0.45f);
	HoveredColor = FLinearColor(0.f, 0.5f, 1.f, 0.3f);
	BackgroundColor = FLinearColor(1, 1, 1, 0.50f);
	BackgroundHoverColor = FLinearColor(1, 1, 1, 0.25f);
	BackgroundImage = FEditorStyle::GetBrush("WhiteBrush");

	bAllowDrop = false;
	bDragOperationStarted = false;
	bIsHovered = false;


	ChildSlot
		[
			SNew(SOverlay)
			+ SOverlay::Slot()
			[
				InArgs._Content.Widget
			]

			+ SOverlay::Slot()
			[
				SNew(SBox)
				.Visibility(this, &SBluEdModeToolClassDropTarget::GetDragOverlayVisibility)
				[
					SNew(SBorder)
					.BorderImage(BackgroundImage)
					.BorderBackgroundColor(this, &SBluEdModeToolClassDropTarget::GetBackgroundBrightness)
				]
			]
			+ SOverlay::Slot()
				[
					SNew(SImage)
					.ColorAndOpacity(this, &SBluEdModeToolClassDropTarget::GetForegroundImageColor)
				]
		];
}

FSlateColor SBluEdModeToolClassDropTarget::GetBackgroundBrightness() const
{
	return (!bDragOperationStarted && bIsHovered) ? BackgroundHoverColor : BackgroundColor;
}

FSlateColor SBluEdModeToolClassDropTarget::GetForegroundImageColor() const
{
	if (bDragOperationStarted)
	{
		return (bAllowDrop ? ValidColor : InvalidColor);
	}
	else if (bIsHovered)
	{
		return HoveredColor;
	}
	return FLinearColor::Transparent;
}

EVisibility SBluEdModeToolClassDropTarget::GetDragOverlayVisibility() const
{
	if (bDragOperationStarted)
	{
		return EVisibility::HitTestInvisible;
	}
	return EVisibility::Hidden;
}

bool SBluEdModeToolClassDropTarget::OnAllowDrop(TSharedPtr<FDragDropOperation> DragDropOperation) const
{
	if (AllowDropEvent.IsBound())
	{
		return AllowDropEvent.Execute(DragDropOperation);
	}

	return false;
}

FReply SBluEdModeToolClassDropTarget::OnDrop(const FGeometry& MyGeometry, const FDragDropEvent& DragDropEvent)
{
	if (bAllowDrop)
	{
		if (DroppedEvent.IsBound())
		{
			return DroppedEvent.Execute(DragDropEvent.GetOperation());
		}
	}
	return FReply::Unhandled();
}

void SBluEdModeToolClassDropTarget::OnMouseEnter(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	SCompoundWidget::OnMouseEnter(MyGeometry, MouseEvent);
	bIsHovered = true;
}

void SBluEdModeToolClassDropTarget::OnMouseLeave(const FPointerEvent& MouseEvent)
{
	SCompoundWidget::OnMouseLeave(MouseEvent);
	bIsHovered = false;
}

FReply SBluEdModeToolClassDropTarget::OnMouseButtonDoubleClick(const FGeometry& InMyGeometry, const FPointerEvent& InMouseEvent)
{
	if (OnDoubleClickEvent.IsBound())
	{
		OnDoubleClickEvent.Execute();
	}
	return FReply::Handled();
}

void SBluEdModeToolClassDropTarget::Tick(const FGeometry& AllottedGeometry, const double InCurrentTime, const float InDeltaTime)
{
	SCompoundWidget::Tick(AllottedGeometry, InCurrentTime, InDeltaTime);

	if (FSlateApplication::Get().IsDragDropping())
	{
		if (!bDragOperationStarted)
		{
			bDragOperationStarted = true;
			bAllowDrop = OnAllowDrop(FSlateApplication::Get().GetDragDroppingContent());
		}
	}
	else
	{
		bDragOperationStarted = false;
	}
}

#undef LOCTEXT_NAMESPACE
