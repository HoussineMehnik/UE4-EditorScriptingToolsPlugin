//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#pragma once

#include "EditorScriptingUtilityBlueprint.h"
#include "Templates/SubclassOf.h"
#include "DetailCustomizationUtilityBlueprint.generated.h"


UCLASS(config = Editor)
class UDetailCustomizationUtilityBlueprint final : public UEditorScriptingUtilityBlueprint
{
	GENERATED_UCLASS_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = DetailCustomizationSettings)
		TSubclassOf<UObject> CustomizedClass;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = DetailCustomizationSettings)
		bool bAllowDefaultObjectCustomization;

public:
	virtual bool IsValid() const override;
protected:
	virtual bool PreRenameBlueprint() override;
	virtual void PostRenameBlueprint(bool bPreRenameSuccessful, bool bRenameSuccessful) override;

public:
	/** Begin IEditorToolAssetInterface interface */
	virtual EEditorScriptingUtilityType GetUtilityType() const override { return EEditorScriptingUtilityType::DetailCustomization; }
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