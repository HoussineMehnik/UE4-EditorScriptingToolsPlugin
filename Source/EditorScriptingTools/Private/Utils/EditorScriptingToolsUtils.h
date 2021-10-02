//==========================================================================//
// Copyright Elhoussine Mehnik (ue4resources@gmail.com). All Rights Reserved.
//================== http://unrealengineresources.com/ =====================//

#pragma once
#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "UObject/UObjectGlobals.h"

class IDetailLayoutBuilder;

namespace EditorScriptingToolsUtils
{

	bool IsValidInstance(UObject* InInstance);
	bool CanInstantiateClass(const UClass* InClass);
	void HideBlueprintDefaultCategories(IDetailLayoutBuilder& DetailBuilder);

	
	
	//----------------------------- Templates -------------------------------------
	template<class ObjectT>
	ObjectT* CreateTransientEditorObject(UObject* Outer, const UClass* ObjectClass)
	{
		return NewObject<ObjectT>(Outer, ObjectClass, NAME_None, RF_Transient);
	}

	template<class WidgetT>
	WidgetT* CreateTransientEditorWidget(UObject* Outer, const UClass* WidgetClass)
	{
		WidgetT* NewWidgetInstance = CreateTransientEditorObject<WidgetT>(Outer, WidgetClass);
		NewWidgetInstance->ClearFlags(RF_Transactional);
		NewWidgetInstance->Initialize();
		return NewWidgetInstance;
	}

	template<class BlueprintType>
	BlueprintType* GetObjectBlueprint(UObject* Object)
	{
		return Cast<BlueprintType>(Object->GetClass()->ClassGeneratedBy);
	}
	//--------------------------------------------------------------------------------

}



