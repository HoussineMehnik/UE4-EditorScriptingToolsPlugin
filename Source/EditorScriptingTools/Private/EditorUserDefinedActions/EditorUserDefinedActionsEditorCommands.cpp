//==========================================================================//
// Copyright Elhoussine Mehnik (ue4resources@gmail.com). All Rights Reserved.
//================== http://unrealengineresources.com/ =====================//

#include "EditorUserDefinedActionsEditorCommands.h"



#define LOCTEXT_NAMESPACE "EditorUserDefinedActionsEditorCommands"

void FEditorUserDefinedActionsEditorCommands::RegisterCommands()
{
	UI_COMMAND(MapActions, "Map Actions", "", EUserInterfaceActionType::Button, FInputChord());
	UI_COMMAND(UnmapActions, "Unmap Actions", "", EUserInterfaceActionType::Button, FInputChord());
}

#undef LOCTEXT_NAMESPACE //"EditorUserDefinedActionsEditorCommands"