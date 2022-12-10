//==========================================================================//
// Copyright Elhoussine Mehnik (ue4resources@gmail.com). All Rights Reserved.
//================== http://unrealengineresources.com/ =====================//

#include "AssetDropTargetWidget/SAssetDropTargetWidget.h"
#include "Widgets/Images/SImage.h"
#include "EditorStyleSet.h"
#include "AssetRegistry/AssetData.h"
#include "AssetSelection.h"

#define LOCTEXT_NAMESPACE "SAssetDropTargetWidget"

void SAssetDropTargetWidget::Construct(const FArguments& InArgs)
{
	bIsDragOn = false;
	OnAssetDropDelegate = InArgs._OnAssetDrop;

	this->ChildSlot
		[
			SNew(SImage)
			.Visibility(this, &SAssetDropTargetWidget::GetDropTargetVisibility)
			.ColorAndOpacity(this, &SAssetDropTargetWidget::GetBackgroundColor)
		];
}

FReply SAssetDropTargetWidget::OnDrop(const FGeometry& MyGeometry, const FDragDropEvent& DragDropEvent)
{
	bIsDragOn = false;
	HandleAssetDropped(MyGeometry, DragDropEvent);
	return FReply::Handled();
}

void SAssetDropTargetWidget::OnDragEnter(const FGeometry& MyGeometry, const FDragDropEvent& DragDropEvent)
{
	bIsDragOn = true;
}

FReply SAssetDropTargetWidget::OnDragOver(const FGeometry& MyGeometry, const FDragDropEvent& DragDropEvent)
{
	if (DragDropEvent.GetOperation().IsValid())
	{
		DragDropEvent.GetOperation()->SetCursorOverride(EMouseCursor::Hand);
	}
	return FReply::Handled();
}

void SAssetDropTargetWidget::OnDragLeave(const FDragDropEvent& DragDropEvent)
{
	bIsDragOn = false;
}

FSlateColor SAssetDropTargetWidget::GetBackgroundColor() const
{
	return bIsDragOn ? FLinearColor(1.0f, 1.0f, 1.0f, 0.15f) : FLinearColor::Transparent;
}

EVisibility SAssetDropTargetWidget::GetDropTargetVisibility() const
{
	return bIsDragOn ? EVisibility::Visible : EVisibility::Hidden;
}

FReply SAssetDropTargetWidget::HandleAssetDropped(const FGeometry& DropZoneGeometry, const FDragDropEvent& DragDropEvent)
{
	TArray<FAssetData> DroppedAssetData = AssetUtil::ExtractAssetDataFromDrag(DragDropEvent);
	const int32 NumAssets = DroppedAssetData.Num();
	if (NumAssets > 0)
	{
		TArray<UObject*> DroppedAssets;
		DroppedAssets.SetNumUninitialized(NumAssets);
		for (int32 Index = 0; Index < NumAssets; Index++)
		{
			DroppedAssets[Index] = DroppedAssetData[Index].GetAsset();
		}
		OnAssetDropDelegate.Execute(DroppedAssets);
	}

	return FReply::Handled();
}

#undef LOCTEXT_NAMESPACE