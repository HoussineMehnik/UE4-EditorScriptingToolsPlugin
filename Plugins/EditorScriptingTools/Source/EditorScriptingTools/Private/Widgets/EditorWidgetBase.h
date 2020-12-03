//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Widgets/SWidget.h"
#include "Components/Widget.h"
#include "EditorWidgetBase.generated.h"


UCLASS(Abstract)
class  UEditorWidgetBase : public UWidget
{
	GENERATED_UCLASS_BODY()

public:
#if WITH_EDITOR
	virtual const FText GetPaletteCategory() override;
#endif

};
