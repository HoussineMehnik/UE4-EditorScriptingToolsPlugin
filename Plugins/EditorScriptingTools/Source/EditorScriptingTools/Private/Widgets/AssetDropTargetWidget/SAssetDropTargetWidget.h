//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#pragma once

#include "Widgets/SCompoundWidget.h"
#include "Widgets/DeclarativeSyntaxSupport.h"
#include "Framework/SlateDelegates.h"

struct FAssetData;

DECLARE_DELEGATE_OneParam(FOnAssetDropDelegate,const TArray<UObject*>&);

class SAssetDropTargetWidget : public SCompoundWidget
{

	SLATE_BEGIN_ARGS(SAssetDropTargetWidget) {}
	SLATE_EVENT(FOnAssetDropDelegate, OnAssetDrop)
		SLATE_END_ARGS()

public:
	void Construct(const FArguments& InArgs);

	FReply OnDrop(const FGeometry& MyGeometry, const FDragDropEvent& DragDropEvent) override;
	virtual void OnDragEnter(const FGeometry& MyGeometry, const FDragDropEvent& DragDropEvent) override;
	virtual FReply OnDragOver(const FGeometry& MyGeometry, const FDragDropEvent& DragDropEvent) override;
	virtual void OnDragLeave(const FDragDropEvent& DragDropEvent) override;

private:
	FSlateColor GetBackgroundColor() const;
	EVisibility GetDropTargetVisibility() const;
	FReply HandleAssetDropped(const FGeometry& DropZoneGeometry, const FDragDropEvent& DragDropEvent);

private:
	FOnAssetDropDelegate OnAssetDropDelegate;
	bool bIsDragOn;
};
