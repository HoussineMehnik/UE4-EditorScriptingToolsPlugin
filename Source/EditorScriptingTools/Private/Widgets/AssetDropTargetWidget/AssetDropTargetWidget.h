//==========================================================================//
// Copyright Elhoussine Mehnik (ue4resources@gmail.com). All Rights Reserved.
//================== http://unrealengineresources.com/ =====================//

#pragma once

#include "EditorWidgetBase.h"
#include "AssetDropTargetWidget.generated.h"

class SWidget;
struct FAssetData;
class FMenuBuilder;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAssetDroppedDelegate, const TArray<UObject*>&, DroppedAssets);



UCLASS(meta = (DisplayName = "Asset(s) Drop Target"))
class UAssetDropTargetWidget : public UEditorWidgetBase
{
	GENERATED_BODY()

public:
	UAssetDropTargetWidget();

	//~ Begin UWidget Interface
	virtual void SynchronizeProperties() override;
	//~ End UWidget Interface

	//~ Begin UVisual Interface
	virtual void ReleaseSlateResources(bool bReleaseChildren) override;
	//~ End UVisual Interface

protected:
	//~ Begin UWidget Interface
	virtual TSharedRef<SWidget> RebuildWidget() override;
	//~ End UWidget Interface


private:
	void AssetDroppedEvent(const TArray<UObject*>& DroppedAssets);

public:
	UPROPERTY(BlueprintAssignable)
		FOnAssetDroppedDelegate OnAssetDropped;

private:
	TSharedPtr<SWidget> SlateAssetDropTargetWidget;

};
