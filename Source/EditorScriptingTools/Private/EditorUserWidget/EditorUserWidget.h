//==========================================================================//
// Copyright Elhoussine Mehnik (ue4resources@gmail.com). All Rights Reserved.
//================== http://unrealengineresources.com/ =====================//

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EditorUserWidget.generated.h"

UCLASS(Abstract)
class UEditorUserWidget : public UUserWidget
{
	GENERATED_UCLASS_BODY()

public:
	virtual void BeginDestroy() override;

};