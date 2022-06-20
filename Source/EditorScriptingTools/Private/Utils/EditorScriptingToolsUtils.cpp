//==========================================================================//
// Copyright Elhoussine Mehnik (ue4resources@gmail.com). All Rights Reserved.
//================== http://unrealengineresources.com/ =====================//

#include "EditorScriptingToolsUtils.h"
#include "DetailLayoutBuilder.h"



#define LOCTEXT_NAMESPACE "EditorScriptingToolsUtils"

namespace EditorScriptingToolsUtils
{

	bool IsValidInstance(UObject* InInstance)
	{
		return IsValid(InInstance) && !InInstance->IsUnreachable();
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