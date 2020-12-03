//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

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