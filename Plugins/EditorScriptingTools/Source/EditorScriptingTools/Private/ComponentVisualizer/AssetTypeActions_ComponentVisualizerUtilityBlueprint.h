//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#pragma once

#include "CoreMinimal.h"
#include "ComponentVisualizerUtilityBlueprint.h"
#include "Toolkits/IToolkitHost.h"
#include "EditorScriptingAssetTypeActions_Base.h"

class FMenuBuilder;
class UComponentVisualizerUtilityBlueprint;

class FAssetTypeActions_ComponentVisualizerUtilityBlueprint : public FEditorScriptingAssetTypeActions_Base
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
