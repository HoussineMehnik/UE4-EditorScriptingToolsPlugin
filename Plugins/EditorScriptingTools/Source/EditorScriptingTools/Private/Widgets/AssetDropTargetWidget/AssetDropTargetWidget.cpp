//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#include "AssetDropTargetWidget/AssetDropTargetWidget.h"
#include "AssetDropTargetWidget/SAssetDropTargetWidget.h"
#include "Components/SlateWrapperTypes.h"

#define LOCTEXT_NAMESPACE "AssetDropTargetWidget"

UAssetDropTargetWidget::UAssetDropTargetWidget()
{

}

void UAssetDropTargetWidget::SynchronizeProperties()
{
	Super::SynchronizeProperties();

}

void UAssetDropTargetWidget::ReleaseSlateResources(bool bReleaseChildren)
{
	Super::ReleaseSlateResources(bReleaseChildren);

	SlateAssetDropTargetWidget.Reset();
}

TSharedRef<SWidget> UAssetDropTargetWidget::RebuildWidget()
{
	SAssignNew(SlateAssetDropTargetWidget, SAssetDropTargetWidget)
		.OnAssetDrop(BIND_UOBJECT_DELEGATE(FOnAssetDropDelegate, AssetDroppedEvent));

	return SlateAssetDropTargetWidget.ToSharedRef();
}

void UAssetDropTargetWidget::AssetDroppedEvent(const TArray<UObject*>& DroppedAssets)
{
	OnAssetDropped.Broadcast(DroppedAssets);
}

#undef LOCTEXT_NAMESPACE