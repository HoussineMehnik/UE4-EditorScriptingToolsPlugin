//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#pragma once

#include "EditorWidgetBase.h"
#include "AssetData.h"
#include "AssetPickerWidget.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAssetSelectedDelegate, UObject*, SelectedAsset);

class SWidget;
struct FAssetData;
class FMenuBuilder;



UCLASS(meta = (DisplayName = "Asset Picker Menu"))
class UAssetPickerWidget : public UEditorWidgetBase
{
	GENERATED_BODY()

public:
	UAssetPickerWidget();

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

	void OpenAssetPickerMenu(FMenuBuilder& MenuBuilder);
	void OnNewAssetSelected(const FAssetData& AssetData);
	void CloseMenu();

public:

	/** Called to when an asset is selected */
	UPROPERTY(BlueprintAssignable, Category = "AssetPicker|Event")
		FOnAssetSelectedDelegate OnAssetSelected;

	/** Class that is allowed in the asset picker */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AssetPicker")
		TSubclassOf<UObject> AllowedClass;

	/** Whether the asset can be 'None' */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AssetPicker")
		bool bAllowClear;

	/** Sub-menu will open only if the sub-menu entry is clicked. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AssetPicker")
		bool bOpenSubMenuOnClick;

	/** The text that should be shown for the menu. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AssetPicker")
		FText MenuLabelText;;

	/** The tooltip that should be shown when the menu is hovered over. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AssetPicker")
		FText MenuToolTipText;

public:
	UFUNCTION(BlueprintCallable, Category = "AssetPicker")
		void SetCurrentAsset(UObject* InAsset);

	UFUNCTION(BlueprintCallable, Category = "AssetPicker")
		UObject* GetCurrentAsset() const;

private:
	UPROPERTY()
		TSoftObjectPtr<UObject> CurrentAssetPtr;

	TSharedPtr<SWidget> SlateAssetPickerWidget;

};
