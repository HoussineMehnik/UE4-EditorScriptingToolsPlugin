//==========================================================================//
// Copyright Elhoussine Mehnik (ue4resources@gmail.com). All Rights Reserved.
//================== http://unrealengineresources.com/ =====================//

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
