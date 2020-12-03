//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#pragma once

#include "CoreMinimal.h"

class AActor;
class UActorComponent;
enum class EEditorState : uint8;

namespace LevelEditorUtils
{

	EEditorState GetEditorState();

	void SelectComponent( UActorComponent* Component, bool bInSelected, bool bNotify, bool bSelectEvenIfHidden = false);
	void SelectActor(AActor* Actor, bool bInSelected, bool bNotify, bool bSelectEvenIfHidden = false, bool bForceRefresh = false);
	void SelectNone(bool bNoteSelectionChange, bool bDeselectBSPSurfs, bool WarnAboutManyActors = true);

	void MarkActorComponentsRenderStateDirty(AActor* InActor);
	void RerunActorConstructionScripts(AActor* InActor);

	void ClearEditorUndoBuffer();
}
