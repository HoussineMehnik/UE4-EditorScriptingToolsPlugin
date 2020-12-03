//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#pragma once

#include "EditorScriptingUtilityBlueprint.h"
#include "ComponentVisualizerUtilityBlueprint.generated.h"

class UActorComponent;

UCLASS(config = Editor)
class UComponentVisualizerUtilityBlueprint final : public UEditorScriptingUtilityBlueprint
{
	GENERATED_UCLASS_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = VisualizerSettings)
		TSubclassOf<UActorComponent> ComponentClass;


public:
	virtual bool IsValid() const override;
protected:
	virtual bool PreRenameBlueprint() override;
	virtual void PostRenameBlueprint(bool bPreRenameSuccessful, bool bRenameSuccessful) override;

public:
	/** Begin IEditorToolAssetInterface interface */
	virtual EEditorScriptingUtilityType GetUtilityType() const override { return EEditorScriptingUtilityType::ComponentVisulizer; }
	virtual FName GetUtilitySettingsCategoryName() const override;
	virtual void GetUneditablePropertiesWhenRegistered(TArray<FName>& OutProperties) const override;
	/** End IEditorToolAssetInterface interface */

#if WITH_EDITOR
	//~ UBlueprint interface
	virtual bool SupportedByDefaultBlueprintFactory() const override { return false; }
	void GetReparentingRules(TSet< const UClass* >& AllowedChildrenOfClasses, TSet< const UClass* >& DisallowedChildrenOfClasses) const override;
	//~ End of UBlueprint interface
#endif

};
