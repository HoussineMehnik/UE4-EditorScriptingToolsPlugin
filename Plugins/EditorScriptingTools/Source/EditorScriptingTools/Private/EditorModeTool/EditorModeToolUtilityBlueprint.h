//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#pragma once

#include "EditorScriptingUtilityBlueprint.h"
#include "EditorModeToolUtilityBlueprint.generated.h"

class UEditorModeToolInstance;
class UEditorUserWidget;

UCLASS()
class UEditorModeToolUtilityBlueprint : public UEditorScriptingUtilityBlueprint
{
	GENERATED_UCLASS_BODY()


public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = ToolSettings)
		TSubclassOf<UEditorUserWidget> ToolkitWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = ToolSettings)
		TSubclassOf<UEditorUserWidget> ViewportOverlayWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = ToolSettings)
		bool bShowToolDetailsPanel;

protected:

	/** Begin UEditorScriptingUtilityBlueprint interface */
	virtual bool PreRenameBlueprint() override;
	virtual void PostRenameBlueprint(bool bPreRenameSuccessful, bool bRenameSuccessful) override;
	/** End UEditorScriptingUtilityBlueprint interface */

public:
	/** Begin IEditorToolAssetInterface interface */
	virtual EEditorScriptingUtilityType GetUtilityType() const override { return EEditorScriptingUtilityType::EditorMode; }
	virtual FName GetUtilitySettingsCategoryName() const override;
	virtual void GetUneditablePropertiesWhenRegistered(TArray<FName>& OutProperties) const override;
	/** End IEditorToolAssetInterface interface */

public:

#if WITH_EDITOR
	//~ UBlueprint interface
	void GetReparentingRules(TSet< const UClass* >& AllowedChildrenOfClasses, TSet< const UClass* >& DisallowedChildrenOfClasses) const override;
	//~ End of UBlueprint interface
#endif //#if WITH_EDITOR

};
