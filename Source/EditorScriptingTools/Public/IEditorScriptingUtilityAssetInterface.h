//==========================================================================//
// Copyright Elhoussine Mehnik (ue4resources@gmail.com). All Rights Reserved.
//================== http://unrealengineresources.com/ =====================//

#pragma once
#include "UObject/Interface.h"
#include "IEditorScriptingUtilityAssetInterface.generated.h"

DECLARE_MULTICAST_DELEGATE_OneParam(FEditorScriptingUtilityRegistered, bool /* bRegister */);

enum class EDITORSCRIPTINGTOOLS_API EEditorScriptingUtilityType : uint8
{
	EditorMode = 0,
	DetailCustomization,
	ComponentVisulizer,
	UserDefinedSettings,
	UserDefinedActions,

	None = 255,
};

UINTERFACE(MinimalAPI)
class UEditorScriptingUtilityAssetInterface : public UInterface
{
	GENERATED_BODY()
};

class IEditorScriptingUtilityAssetInterface
{

	GENERATED_BODY()

public:

	virtual EEditorScriptingUtilityType GetUtilityType() const = 0;

	virtual void OnRegisterDone() = 0;
	virtual void OnUnregisterDone() = 0;

	virtual FName GetUtilitySettingsCategoryName() const = 0;
	virtual void GetUneditablePropertiesWhenRegistered(TArray<FName>& OutProperties) const = 0;

	virtual FEditorScriptingUtilityRegistered& OnEditorScriptingUtilityRegistered() const = 0;
};