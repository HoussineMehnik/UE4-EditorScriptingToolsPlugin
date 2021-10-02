//==========================================================================//
// Copyright Elhoussine Mehnik (ue4resources@gmail.com). All Rights Reserved.
//================== http://unrealengineresources.com/ =====================//

#pragma once

#include "CoreMinimal.h"
#include "EditorModeToolUtilityBlueprint.h"
#include "Toolkits/IToolkitHost.h"
#include "EditorScriptingAssetTypeActions_Base.h"

class FMenuBuilder;

class FAssetTypeActions_EditorModeToolUtilityBlueprint : public FEditorScriptingAssetTypeActions_Base
{
public:
	// IAssetTypeActions interface
	virtual FText GetName() const override;
	virtual FColor GetTypeColor() const override;
	virtual UClass* GetSupportedClass() const override;
	// End of IAssetTypeActions interface

protected:
	// FEditorScriptingAssetTypeActions_Base interface
	virtual void GetAdditionalActions(TWeakObjectPtr<UObject> ObjectWeakPtr, FMenuBuilder& MenuBuilder) override;
	// End of IAssetTypeActions interface
};
