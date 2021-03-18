//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#pragma once
#include "AssetTypeActions_Base.h"
#include "Layout/Visibility.h"

class IEditorScriptingUtilityAssetInterface;



class FEditorScriptingAssetTypeActions_Base : public FAssetTypeActions_Base
{
public:

	// IAssetTypeActions interface
	virtual uint32 GetCategories() final;
	virtual bool CanLocalize() const final;
	virtual bool HasActions(const TArray<UObject*>& InObjects) const final;
	virtual TSharedPtr<class SWidget> GetThumbnailOverlay(const FAssetData& AssetData) const final;
	virtual void GetActions(const TArray<UObject*>& InObjects, FMenuBuilder& MenuBuilder) final;
	virtual void OpenAssetEditor(const TArray<UObject*>& InObjects, TSharedPtr<class IToolkitHost> EditWithinLevelEditor) override;
	// End of IAssetTypeActions interface

protected:
	// FEditorScriptingAssetTypeActions_Base interface
	virtual void GetAdditionalActions(TWeakObjectPtr<UObject> ObjectWeakPtr, FMenuBuilder& MenuBuilder) = 0;
	// End of IAssetTypeActions interface

private:
	void RegisterUtility(TWeakObjectPtr<UObject> ObjectWeakPtr);
	bool CanRegisterUtility(TWeakObjectPtr<UObject> ObjectWeakPtr) const;
	void UnregisterUtility(TWeakObjectPtr<UObject> ObjectWeakPtr);
	bool CanUnregisterUtility(TWeakObjectPtr<UObject> ObjectWeakPtr) const;
	EVisibility GetThumbnailOverlayVisibility(TWeakObjectPtr<UObject> ObjectWeakPtr) const;
};
