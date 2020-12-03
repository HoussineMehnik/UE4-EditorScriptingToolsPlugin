//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#pragma once

#include "EditorWidgetBase.h"
#include "AssetThumbnailWidget.generated.h"


class FAssetThumbnail;

UCLASS(meta = (DisplayName = "Asset Thumbnail"))
class  UAssetThumbnailWidget : public UEditorWidgetBase
{
	GENERATED_UCLASS_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AssetThumbnail")
		UObject* Asset;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AssetThumbnail")
		FVector2D ThumbnailSize;

public :
	UFUNCTION(BlueprintCallable, Category = "AssetThumbnail|Appearance")
		void SetThumbnail(UObject* NewAsset);

	UFUNCTION(BlueprintCallable, Category = "AssetThumbnail|Appearance")
		void RefreshThumbnail();

	UFUNCTION(BlueprintCallable, Category = "AssetThumbnail|Appearance")
		void SetThumbnailSize(FVector2D NewSize = FVector2D(256.0f, 256.0f));

public:
	void UpdateWidgetContent();

	//~ Begin UVisual Interface
	virtual void ReleaseSlateResources(bool bReleaseChildren) override;
	//~ End UVisual Interface

protected:
	// UWidget interface
	virtual TSharedRef<SWidget> RebuildWidget() override;
	virtual void SynchronizeProperties() override;
	// End of UWidget interface

	TSharedRef<SWidget> GetDefaultContent();

protected:
	TSharedPtr<FAssetThumbnail> AssetThumbnailPtr;
	TSharedPtr<SWidget> SlateWidget;

};
