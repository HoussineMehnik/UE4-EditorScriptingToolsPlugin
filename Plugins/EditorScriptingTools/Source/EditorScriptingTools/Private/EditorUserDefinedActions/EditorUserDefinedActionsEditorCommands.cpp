//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#include "EditorUserDefinedActionsEditorCommands.h"



#define LOCTEXT_NAMESPACE "EditorUserDefinedActionsEditorCommands"

void FEditorUserDefinedActionsEditorCommands::RegisterCommands()
{
	UI_COMMAND(MapActions, "Map Actions", "", EUserInterfaceActionType::Button, FInputChord());
	UI_COMMAND(UnmapActions, "Unmap Actions", "", EUserInterfaceActionType::Button, FInputChord());
}

#undef LOCTEXT_NAMESPACE //"EditorUserDefinedActionsEditorCommands"