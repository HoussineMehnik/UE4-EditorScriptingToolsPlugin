//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#include "LevelEditorBlueprintLibrary.h"
#include "LevelEditorUtils.h"
#include "Editor.h"
#include "EditorModes.h"
#include "Components/SceneComponent.h"
#include "GameFramework/Actor.h"



void ULevelEditorBlueprintLibrary::PostEditChangeObject(UObject* Object)
{
	if (IsValid(Object))
	{
		Object->PostEditChange();
	}
}

void ULevelEditorBlueprintLibrary::SelectComponent(class UActorComponent* Component, bool bInSelected, bool bNotify, bool bSelectEvenIfHidden /*= false*/)
{
	{
		LevelEditorUtils::SelectComponent(Component, bInSelected, bNotify, bSelectEvenIfHidden);
	}
}

void ULevelEditorBlueprintLibrary::SelectActor(AActor* Actor, bool bInSelected, bool bNotify, bool bSelectEvenIfHidden /*= false*/, bool bForceRefresh /*= false*/)
{
	{
		LevelEditorUtils::SelectActor(Actor, bInSelected, bNotify, bSelectEvenIfHidden, bForceRefresh);
	}
}

void ULevelEditorBlueprintLibrary::SelectNone(bool bNoteSelectionChange, bool bDeselectBSPSurfs, bool WarnAboutManyActors /*= true*/)
{
	{
		LevelEditorUtils::SelectNone(bNoteSelectionChange, bDeselectBSPSurfs, WarnAboutManyActors);
	}
}

void ULevelEditorBlueprintLibrary::MarkActorComponentsRenderStateDirty(AActor* Actor)
{
	{
		LevelEditorUtils::MarkActorComponentsRenderStateDirty(Actor);
	}
}

void ULevelEditorBlueprintLibrary::RerunActorConstructionScripts(AActor* Actor)
{
	{
		LevelEditorUtils::RerunActorConstructionScripts(Actor);
	}
}

void ULevelEditorBlueprintLibrary::NotifyActorMoved(AActor* Actor)
{
	if (GEditor != nullptr)
	{
		GEditor->BroadcastOnActorMoved(Actor);
	}
}

void ULevelEditorBlueprintLibrary::NotifyComponentTransformChanged(USceneComponent* Component)
{
	if (GEditor != nullptr)
	{
		GEditor->BroadcastOnComponentTransformChanged(Component, ETeleportType::None);
	}
}

EEditorState ULevelEditorBlueprintLibrary::GetEditorState()
{
	return LevelEditorUtils::GetEditorState();
}

FName ULevelEditorBlueprintLibrary::GetEditorModeID(EBuiltinEditorModes EdMode)
{
	switch (EdMode)
	{
	case EBuiltinEditorModes::None:					return FBuiltinEditorModes::EM_None;
	case EBuiltinEditorModes::Default:				return FBuiltinEditorModes::EM_Default;
	case EBuiltinEditorModes::Placement:			return FBuiltinEditorModes::EM_Placement;
	case EBuiltinEditorModes::InterpEdit:			return FBuiltinEditorModes::EM_InterpEdit;
	case EBuiltinEditorModes::MeshPaint:			return FBuiltinEditorModes::EM_MeshPaint;
	case EBuiltinEditorModes::Landscape:			return FBuiltinEditorModes::EM_Landscape;
	case EBuiltinEditorModes::Foliage:				return FBuiltinEditorModes::EM_Foliage;
	case EBuiltinEditorModes::Level:				return FBuiltinEditorModes::EM_Level;
	case EBuiltinEditorModes::StreamingLevel:		return FBuiltinEditorModes::EM_StreamingLevel;
	case EBuiltinEditorModes::Physics:				return FBuiltinEditorModes::EM_Physics;
	case EBuiltinEditorModes::ActorPicker:			return FBuiltinEditorModes::EM_ActorPicker;
	case EBuiltinEditorModes::SceneDepthPicker:		return FBuiltinEditorModes::EM_SceneDepthPicker;
	default:										return TEXT("Unknown Editor Mode");
	}

	return TEXT("Unknown Editor Mode");
}

