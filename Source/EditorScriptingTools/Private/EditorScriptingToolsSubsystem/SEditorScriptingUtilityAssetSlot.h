//==========================================================================//
// Copyright Elhoussine Mehnik (ue4resources@gmail.com). All Rights Reserved.
//================== http://unrealengineresources.com/ =====================//


#pragma once

#include "CoreMinimal.h"
#include "Widgets/SCompoundWidget.h"
#include "Widgets/DeclarativeSyntaxSupport.h"
#include "Input/Reply.h"


class UObject;

class SEditorScriptingUtilityAssetSlot : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SEditorScriptingUtilityAssetSlot) {}
	SLATE_END_ARGS();

	/** Slate widget construction */
	void Construct(const FArguments& InArgs, UObject* InToolAsset, int32 InIndex);

	virtual ~SEditorScriptingUtilityAssetSlot();
protected:
	UObject* GetToolAsset();
	const UObject* GetToolAsset() const;

private:
	FReply OnShowToolAssetInContentBrowser_Clicked();
	FReply OnRefresh_Clicked();
	FReply OnClear_Clicked();
	FReply OnEdit_Clicked();


	FText GetDisplayName() const;
	FText GetRefreshToolTipText() const;
	FText GetClearToolTipText() const;

	FLinearColor GetBrowseToAssetButtonColor() const;
private:
	TWeakObjectPtr<UObject> ToolAssetWeakPtr{};
	int32 SlotIndex{ INDEX_NONE };
};