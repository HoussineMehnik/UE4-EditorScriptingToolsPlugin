//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//


#include "EditorEventsSubsystem.h"

#include "Editor.h"
#include "LevelEditor.h"
#include "Modules/ModuleManager.h"
#include "EdMode.h"
#include "EditorModeRegistry.h"
#include "Editor/EditorEngine.h"
#include "EditorActorFolders.h"
#include "Framework/Application/SlateApplication.h"

#include "EditorUserDefinedActions.h"
#include "EditorUserDefinedCommands.h"
#include "EditorScriptingToolsUtils.h"
#include "LevelEditingViewportUtils.h"



UEditorEventsSubsystem::UEditorEventsSubsystem()
{

}


void UEditorEventsSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	//
	{
		FEditorDelegates::EditorModeIDEnter.AddUObject(this, &UEditorEventsSubsystem::HandleEditorModeEntered);
		FEditorDelegates::EditorModeIDExit.AddUObject(this, &UEditorEventsSubsystem::HandleEditorModeExited);
		FEditorDelegates::OnMapOpened.AddUObject(this, &UEditorEventsSubsystem::HandleMapOpened);
		FEditorDelegates::OnEditorCameraMoved.AddUObject(this, &UEditorEventsSubsystem::HandleEditorCameraMoved);
		FEditorDelegates::OnDollyPerspectiveCamera.AddUObject(this, &UEditorEventsSubsystem::HandleDollyPerspectiveCamera);
		FEditorDelegates::PreBeginPIE.AddUObject(this, &UEditorEventsSubsystem::HandlePreBeginPIE);
		FEditorDelegates::BeginPIE.AddUObject(this, &UEditorEventsSubsystem::HandleBeginPIE);
		FEditorDelegates::PostPIEStarted.AddUObject(this, &UEditorEventsSubsystem::HandlePostPIEStarted);
		FEditorDelegates::PrePIEEnded.AddUObject(this, &UEditorEventsSubsystem::HandlePrePIEEnded);
		FEditorDelegates::EndPIE.AddUObject(this, &UEditorEventsSubsystem::HandleEndPIE);
		FEditorDelegates::PausePIE.AddUObject(this, &UEditorEventsSubsystem::HandlePausePIE);
		FEditorDelegates::ResumePIE.AddUObject(this, &UEditorEventsSubsystem::HandleResumePIE);
		FEditorDelegates::SingleStepPIE.AddUObject(this, &UEditorEventsSubsystem::HandleSingleStepPIE);
		FEditorDelegates::OnPreSwitchBeginPIEAndSIE.AddUObject(this, &UEditorEventsSubsystem::HandlePreSwitchBeginPIEAndSIE);
		FEditorDelegates::OnSwitchBeginPIEAndSIE.AddUObject(this, &UEditorEventsSubsystem::HandleSwitchBeginPIEAndSIE);
		FEditorDelegates::OnAssetsPreDelete.AddUObject(this, &UEditorEventsSubsystem::HandleAssetsPreDelete);
		FEditorDelegates::PreSaveWorld.AddUObject(this, &UEditorEventsSubsystem::HandleWorldPreSaved);
		FEditorDelegates::PostSaveWorld.AddUObject(this, &UEditorEventsSubsystem::HandleWorldPostSaved);
	}

	{
		FActorFolders::OnFolderCreate.AddUObject(this, &UEditorEventsSubsystem::HandleFolderCreate);
		FActorFolders::OnFolderMove.AddUObject(this, &UEditorEventsSubsystem::HandleFolderMove);
		FActorFolders::OnFolderDelete.AddUObject(this, &UEditorEventsSubsystem::HandleFolderDelete);
	}


	{
		FLevelEditorModule& LevelEditorModule = FModuleManager::LoadModuleChecked<FLevelEditorModule>("LevelEditor");
		LevelEditorModule.OnActorSelectionChanged().AddUObject(this, &UEditorEventsSubsystem::HandleActorSelectionChanged);
		LevelEditorModule.OnMapChanged().AddUObject(this, &UEditorEventsSubsystem::HandleMapChanged);
	}

	if (FSlateApplication::IsInitialized())
	{
		FSlateApplication::Get().OnApplicationPreInputKeyDownListener().AddUObject(this, &UEditorEventsSubsystem::HandleApplicationPreInputKeyDownListener);
		FSlateApplication::Get().OnApplicationMousePreInputButtonDownListener().AddUObject(this, &UEditorEventsSubsystem::HandleApplicationMousePreInputButtonDownListener);
	}

	{
		FEditorUserDefinedCommands::OnExecuteActionDelegate.AddUObject(this, &UEditorEventsSubsystem::HandleActionExecuted);
	}
}

void UEditorEventsSubsystem::Deinitialize()
{
	//
	{
		FEditorDelegates::EditorModeIDEnter.RemoveAll(this);
		FEditorDelegates::EditorModeIDExit.RemoveAll(this);
		FEditorDelegates::OnMapOpened.RemoveAll(this);
		FEditorDelegates::OnEditorCameraMoved.RemoveAll(this);
		FEditorDelegates::OnDollyPerspectiveCamera.RemoveAll(this);
		FEditorDelegates::PreBeginPIE.RemoveAll(this);
		FEditorDelegates::BeginPIE.RemoveAll(this);
		FEditorDelegates::PostPIEStarted.RemoveAll(this);
		FEditorDelegates::PrePIEEnded.RemoveAll(this);
		FEditorDelegates::EndPIE.RemoveAll(this);
		FEditorDelegates::PausePIE.RemoveAll(this);
		FEditorDelegates::ResumePIE.RemoveAll(this);
		FEditorDelegates::SingleStepPIE.RemoveAll(this);
		FEditorDelegates::OnPreSwitchBeginPIEAndSIE.RemoveAll(this);
		FEditorDelegates::OnSwitchBeginPIEAndSIE.RemoveAll(this);
		FEditorDelegates::OnAssetsPreDelete.RemoveAll(this);
		FEditorDelegates::PreSaveWorld.RemoveAll(this);
		FEditorDelegates::PostSaveWorld.RemoveAll(this);
	}

	{
		FActorFolders::OnFolderCreate.RemoveAll(this);
		FActorFolders::OnFolderMove.RemoveAll(this);
		FActorFolders::OnFolderDelete.RemoveAll(this);
	}

	if (FLevelEditorModule* LevelEditorModulePtr = FModuleManager::GetModulePtr<FLevelEditorModule>("LevelEditor"))
	{
		LevelEditorModulePtr->OnActorSelectionChanged().RemoveAll(this);
	}

	if (FSlateApplication::IsInitialized())
	{
		FSlateApplication::Get().OnApplicationPreInputKeyDownListener().RemoveAll(this);
		FSlateApplication::Get().OnApplicationMousePreInputButtonDownListener().RemoveAll(this);
	}

	{
		FEditorUserDefinedCommands::OnExecuteActionDelegate.RemoveAll(this);
	}
}

void UEditorEventsSubsystem::HandleMapOpened(const FString& Filename, bool bAsTemplate)
{
	OnMapOpened.Broadcast(Filename);
}

void UEditorEventsSubsystem::HandleEditorModeEntered(const FEditorModeID& ModeID)
{
	OnEditorModeEnter.Broadcast(ModeID);
}

void UEditorEventsSubsystem::HandleEditorModeExited(const FEditorModeID& ModeID)
{
	OnEditorModeExit.Broadcast(ModeID);
}

void UEditorEventsSubsystem::HandleEditorCameraMoved(const FVector& ViewLocation, const FRotator& ViewRotation, ELevelViewportType ViewportType, int32 ViewIndex)
{
	OnEditorCameraMoved.Broadcast(ViewLocation, ViewRotation);
}

void UEditorEventsSubsystem::HandleDollyPerspectiveCamera(const FVector& Drag, int32 ViewIndex)
{
	OnDollyPerspectiveCamera.Broadcast(Drag);
}

void UEditorEventsSubsystem::HandlePreBeginPIE(bool bIsSimulating)
{
	OnPlayInEditorEvent.Broadcast(bIsSimulating, EOnPIEEventType::PreBeginPIE);
}

void UEditorEventsSubsystem::HandleBeginPIE(bool bIsSimulating)
{
	OnPlayInEditorEvent.Broadcast(bIsSimulating, EOnPIEEventType::BeginPIE);
}

void UEditorEventsSubsystem::HandlePostPIEStarted(bool bIsSimulating)
{
	OnPlayInEditorEvent.Broadcast(bIsSimulating, EOnPIEEventType::PostPIEStarted);
}

void UEditorEventsSubsystem::HandlePrePIEEnded(bool bIsSimulating)
{
	OnPlayInEditorEvent.Broadcast(bIsSimulating, EOnPIEEventType::PrePIEEnded);
}

void UEditorEventsSubsystem::HandleEndPIE(bool bIsSimulating)
{
	OnPlayInEditorEvent.Broadcast(bIsSimulating, EOnPIEEventType::EndPIE);
}

void UEditorEventsSubsystem::HandlePausePIE(bool bIsSimulating)
{
	OnPlayInEditorEvent.Broadcast(bIsSimulating, EOnPIEEventType::PausePIE);
}

void UEditorEventsSubsystem::HandleResumePIE(bool bIsSimulating)
{
	OnPlayInEditorEvent.Broadcast(bIsSimulating, EOnPIEEventType::ResumePIE);
}

void UEditorEventsSubsystem::HandleSingleStepPIE(bool bIsSimulating)
{
	OnPlayInEditorEvent.Broadcast(bIsSimulating, EOnPIEEventType::SingleStepPIE);
}

void UEditorEventsSubsystem::HandlePreSwitchBeginPIEAndSIE(bool bIsSimulating)
{
	OnPlayInEditorEvent.Broadcast(bIsSimulating, EOnPIEEventType::OnPreSwitchBeginPIEAndSIE);
}

void UEditorEventsSubsystem::HandleSwitchBeginPIEAndSIE(bool bIsSimulating)
{
	OnPlayInEditorEvent.Broadcast(bIsSimulating, EOnPIEEventType::OnSwitchBeginPIEAndSIE);
}

void UEditorEventsSubsystem::HandleAssetsPreDelete(const TArray<UObject*>& Assets)
{
	OnAssetsPreDeleted.Broadcast(Assets);
}


void UEditorEventsSubsystem::HandleFolderCreate(UWorld& InWorld, FName NewPath)
{
	OnWorldFolderCreate.Broadcast(NewPath);
}

void UEditorEventsSubsystem::HandleFolderMove(UWorld& InWorld, FName OldPath, FName NewPath)
{
	OnWorldFolderMove.Broadcast(OldPath, NewPath);
}

void UEditorEventsSubsystem::HandleFolderDelete(UWorld& InWorld, FName Path)
{
	OnWorldFolderDelete.Broadcast(Path);
}

void UEditorEventsSubsystem::HandleActorSelectionChanged(const TArray<UObject*>& NewSelection, bool bForceRefresh /*= false*/)
{
	TArray<AActor*> SelectedActors;
	if (NewSelection.Num() > 0)
	{
		for (UObject* SelectedObject : NewSelection)
		{
			if (AActor* Actor = Cast<AActor>(SelectedObject))
			{
				SelectedActors.Add(Actor);
			}
		}
	}

	if (SelectedActors.Num() > 0)
	{
		OnActorsSelected.Broadcast(SelectedActors);
	}
	else
	{
		OnOnActorsUnselected.Broadcast();
	}
}

void UEditorEventsSubsystem::HandleMapChanged(UWorld* InWorld, EMapChangeType MapChangeType)
{
	OnMapChanged.Broadcast(InWorld, static_cast<ELevelMapChangeType>(MapChangeType));
}

void UEditorEventsSubsystem::HandleApplicationPreInputKeyDownListener(const FKeyEvent& InKeyEvent)
{
	OnInputKeyDown.Broadcast(InKeyEvent, LevelEditingViewportUtils::IsEditingViewportFocused());
}

void UEditorEventsSubsystem::HandleApplicationMousePreInputButtonDownListener(const FPointerEvent& MouseEvent)
{
	OnMouseButtonDown.Broadcast(MouseEvent, LevelEditingViewportUtils::IsEditingViewportFocused());
}

void UEditorEventsSubsystem::HandleWorldPreSaved(uint32 SaveFlags, UWorld* World)
{
	OnPreSaveWorld.Broadcast(World);
}

void UEditorEventsSubsystem::HandleWorldPostSaved(uint32 SaveFlags, UWorld* World, bool bSuccess)
{
	OnPostSaveWorld.Broadcast(World, bSuccess);
}

void UEditorEventsSubsystem::HandleActionExecuted(UEditorUserDefinedActions* ActionsAsset, int32 ActionIndex , bool bIsRepeated)
{
	OnExecuteUserDefinedAction.Broadcast(ActionsAsset, static_cast<uint8>(ActionIndex), bIsRepeated);
}
