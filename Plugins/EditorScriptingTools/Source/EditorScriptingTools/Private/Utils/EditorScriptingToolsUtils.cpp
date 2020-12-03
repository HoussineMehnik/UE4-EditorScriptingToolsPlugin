//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#include "EditorScriptingToolsUtils.h"
#include "DetailLayoutBuilder.h"



#define LOCTEXT_NAMESPACE "EditorScriptingToolsUtils"

namespace EditorScriptingToolsUtils
{

	bool IsValidInstance(UObject* InInstance)
	{
		return !(InInstance == nullptr || InInstance->IsPendingKillOrUnreachable());
	}

	bool CanInstantiateClass(const UClass* InClass)
	{
		return InClass != nullptr && !InClass->HasAnyClassFlags(CLASS_Abstract);
	}

	void HideBlueprintDefaultCategories(IDetailLayoutBuilder& DetailBuilder)
	{
		DetailBuilder.HideCategory("ClassOptions");
		DetailBuilder.HideCategory("Packaging");
	}

}


#undef LOCTEXT_NAMESPACE 