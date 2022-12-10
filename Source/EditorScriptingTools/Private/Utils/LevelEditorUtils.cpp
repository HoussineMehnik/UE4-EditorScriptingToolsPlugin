//==========================================================================//
// Copyright Elhoussine Mehnik (ue4resources@gmail.com). All Rights Reserved.
//================== http://unrealengineresources.com/ =====================//

#include "LevelEditorUtils.h"

#include "Editor.h"
#include "EditorScriptingToolsTypes.h"
#include "Editor/Transactor.h"


#define LOCTEXT_NAMESPACE "LevelEditorUtils"

namespace LevelEditorUtils
{

	EEditorState GetEditorState()
	{

		if (GEditor != nullptr)
		{
			if (GEditor->bIsSimulatingInEditor)
			{
				return EEditorState::SimulatingInEditor;
			}
			else if (GEditor->PlayWorld != NULL)
			{
				return EEditorState::PlayingInEditor;
			}

			return EEditorState::Editor;
		}

		return EEditorState::Unknown;
	}

	void SelectComponent(UActorComponent* Component, bool bInSelected, bool bNotify, bool bSelectEvenIfHidden /*= false*/)
	{
		if (GEditor != nullptr)
		{
			GEditor->SelectComponent(Component, bInSelected, bNotify, bSelectEvenIfHidden);
		}
	}

	void SelectActor(AActor* Actor, bool bInSelected, bool bNotify, bool bSelectEvenIfHidden /*= false*/, bool bForceRefresh /*= false*/)
	{
		if (GEditor != nullptr)
		{
			GEditor->SelectActor(Actor, bInSelected, bNotify, bSelectEvenIfHidden, bForceRefresh);
		}
	}

	void SelectNone(bool bNoteSelectionChange, bool bDeselectBSPSurfs, bool WarnAboutManyActors /*= true*/)
	{
		if (GEditor != nullptr)
		{
			GEditor->SelectNone(bNoteSelectionChange, bDeselectBSPSurfs, WarnAboutManyActors);
		}
	}

	void MarkActorComponentsRenderStateDirty(AActor* InActor)
	{
		if (IsValid(InActor))
		{
			InActor->MarkComponentsRenderStateDirty();
		}
	}

	void RerunActorConstructionScripts(AActor* InActor)
	{
		if (IsValid(InActor))
		{
			InActor->RerunConstructionScripts();
		}
	}

	void ClearEditorUndoBuffer()
	{
		if ((GEditor != nullptr) && (GEditor->Trans != nullptr))
		{
			GEditor->Trans->Reset(LOCTEXT("DiscardHistoryReason", "Discard undo history."));
		}
	}
}

#undef LOCTEXT_NAMESPACE 