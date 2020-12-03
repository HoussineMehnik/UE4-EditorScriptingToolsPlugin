//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#include "EditorUserWidget.h"

UEditorUserWidget::UEditorUserWidget(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	
}

void UEditorUserWidget::BeginDestroy()
{
	Super::BeginDestroy();
}

