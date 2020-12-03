//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#pragma once
#include "EditorScriptingToolsTypes.h"
#include "UObject/Interface.h"
#include "IEditorScriptingUtilityAssetInterface.generated.h"


DECLARE_MULTICAST_DELEGATE_OneParam(FEditorScriptingUtilityRegistered, bool /* bRegister */);

UINTERFACE()
class  UEditorScriptingUtilityAssetInterface : public UInterface
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