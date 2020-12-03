//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

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
