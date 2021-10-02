//==========================================================================//
// Copyright Elhoussine Mehnik (ue4resources@gmail.com). All Rights Reserved.
//================== http://unrealengineresources.com/ =====================//

#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "EditorUtilityBlueprint.h"
#include "IEditorScriptingUtilityAssetInterface.h"
#include "EditorScriptingUtilityBlueprint.generated.h"



UCLASS(Abstract)
class UEditorScriptingUtilityBlueprint : public UEditorUtilityBlueprint, public IEditorScriptingUtilityAssetInterface
{
	GENERATED_UCLASS_BODY()



public:

	/** Begin UObject interface */
	virtual void BeginDestroy() final;
	virtual bool Rename(const TCHAR* NewName = nullptr, UObject* NewOuter = nullptr, ERenameFlags Flags = REN_None) final;
	/** End UObject interface */

	/** Begin IEditorToolAssetInterface interface */
	virtual EEditorScriptingUtilityType GetUtilityType() const override { return EEditorScriptingUtilityType::None; }
	virtual void OnRegisterDone() override;
	virtual void OnUnregisterDone() override;
	virtual FName GetUtilitySettingsCategoryName() const override { return NAME_None; }
	virtual void GetUneditablePropertiesWhenRegistered(TArray<FName>& OutProperties) const override {}
	virtual FEditorScriptingUtilityRegistered& OnEditorScriptingUtilityRegistered() const final { return OnEditorScriptingUtilityRegiteredDelegate; }
	/** End IEditorToolAssetInterface interface */

private:
	void OnBlueprintDeleted();

public:
	virtual bool IsValid() const { return true; }
protected:
	virtual void OnUtilityBlueprintCompiled(UBlueprint* RecompiledBlueprint){}
	virtual bool PreRenameBlueprint() { return false; }
	virtual void PostRenameBlueprint(bool bPreRenameSuccessful, bool bRenameSuccessful) {}

private:
	mutable FEditorScriptingUtilityRegistered OnEditorScriptingUtilityRegiteredDelegate;
};
