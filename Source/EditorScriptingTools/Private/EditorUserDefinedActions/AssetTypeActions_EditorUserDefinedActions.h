//==========================================================================//
// Copyright Elhoussine Mehnik (ue4resources@gmail.com). All Rights Reserved.
//================== http://unrealengineresources.com/ =====================//


#pragma once

#include "CoreMinimal.h"
#include "Toolkits/IToolkitHost.h"
#include "AssetTypeActions_Base.h"
#include "EditorScriptingAssetTypeActions_Base.h"

class UEditorUserDefinedActions;

class FAssetTypeActions_EditorUserDefinedActions : public FEditorScriptingAssetTypeActions_Base
{
public:
	// IAssetTypeActions Implementation
	virtual FText GetName() const override;
	virtual FText GetAssetDescription(const FAssetData& AssetData) const override;
	virtual FColor GetTypeColor() const override;
	virtual UClass* GetSupportedClass() const override;
	virtual void OpenAssetEditor(const TArray<UObject*>& InObjects, TSharedPtr<class IToolkitHost> EditWithinLevelEditor) override;
	// End of IAssetTypeActions interface

protected:
	// FEditorScriptingAssetTypeActions_Base interface
	virtual void GetAdditionalActions(TWeakObjectPtr<UObject> ObjectWeakPtr, FMenuBuilder& MenuBuilder) override;
	// End of IAssetTypeActions interface


};
