//==========================================================================//
// Copyright Elhoussine Mehnik (ue4resources@gmail.com). All Rights Reserved.
//================== http://unrealengineresources.com/ =====================//

#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "WidgetBlueprint.h"
#include "EditorUserWidgetBlueprint.generated.h"


UCLASS()
class UEditorUserWidgetBlueprint : public UWidgetBlueprint
{
	GENERATED_UCLASS_BODY()

public:
	void GetReparentingRules(TSet< const UClass* >& AllowedChildrenOfClasses, TSet< const UClass* >& DisallowedChildrenOfClasses) const override;
};
