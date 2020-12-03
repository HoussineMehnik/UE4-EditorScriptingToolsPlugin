//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#pragma once

#include "EditorScriptingUtilityBlueprint.h"
#include "EditorUserDefinedSettingsUtilityBlueprint.generated.h"

class UClass;

UCLASS()
class UEditorUserDefinedSettingsUtilityBlueprint final : public UEditorScriptingUtilityBlueprint
{
	GENERATED_UCLASS_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SectionSettings)
		FName CategoryName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SectionSettings)
		FName SectionName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SectionSettings)
		FText DisplayName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SectionSettings)
		FText Description;

protected:
	virtual void OnUtilityBlueprintCompiled(UBlueprint* RecompiledBlueprint) override;
	virtual bool PreRenameBlueprint() override;
	virtual void PostRenameBlueprint(bool bPreRenameSuccessful, bool bRenameSuccessful) override;

public:
	/** Begin IEditorToolAssetInterface interface */
	virtual EEditorScriptingUtilityType GetUtilityType() const override { return EEditorScriptingUtilityType::UserDefinedSettings; }
	virtual FName GetUtilitySettingsCategoryName() const override;
	virtual void GetUneditablePropertiesWhenRegistered(TArray<FName>& OutProperties) const override;
	/** End IEditorToolAssetInterface interface */

public:

#if WITH_EDITOR
	// UBlueprint interface
	void GetReparentingRules(TSet<const UClass*>& AllowedChildrenOfClasses, TSet<const UClass*>& DisallowedChildrenOfClasses) const override;
	// End of UBlueprint interface
#endif
};
