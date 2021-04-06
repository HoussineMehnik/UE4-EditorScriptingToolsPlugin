//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Editor/UnrealEdTypes.h"
#include "EditorSubsystem.h"
#include "EditorTypesWrapperTypes.h"
#include "EditorScriptingToolsTypes.h"
#include "EditorEventsSubsystem.generated.h"


class UEditorUserDefinedActions;
class AActor;
class UWorld;
enum class EMapChangeType : uint8;


UENUM()
enum class EOnPIEEventType : uint8
{
	PreBeginPIE							UMETA(ToolTip = "Sent when a PIE session is beginning (before we decide if PIE can run - allows clients to avoid blocking PIE)."),
	BeginPIE							UMETA(ToolTip = " Sent when a PIE session is beginning (but hasn't actually started yet)."),
	PostPIEStarted						UMETA(ToolTip = "Sent when a PIE session has fully started and after BeginPlay() has been called ."),
	PrePIEEnded							UMETA(ToolTip = "Sent when a PIE session is ending, before anything else happens."),
	EndPIE								UMETA(ToolTip = "Sent when a PIE session is ending."),
	PausePIE							UMETA(ToolTip = "Sent when a PIE session is paused."),
	ResumePIE							UMETA(ToolTip = "Sent when a PIE session is resumed."),
	SingleStepPIE						UMETA(ToolTip = "Sent when a PIE session is single-stepped."),
	OnPreSwitchBeginPIEAndSIE			UMETA(ToolTip = "Sent just before the user switches between from PIE to SIE, or vice-versa.  Passes in whether we are currently in SIE."),
	OnSwitchBeginPIEAndSIE				UMETA(ToolTip = "Sent after the user switches between from PIE to SIE, or vice-versa.  Passes in whether we are currently in SIE."),
};


/**
 * 
 */
UCLASS(NotBlueprintable,config = EditorPerProjectUserSettings)
class  UEditorEventsSubsystem : public UEditorSubsystem
{
	GENERATED_BODY()


private:

	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSimpleEventSignature);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMapOpenedSignature, const FString&, Filename);
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEditorModeChangedSignature, const FName&, ID);
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMapChangedSignature, UWorld*, World, ELevelMapChangeType, ChangeType);
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnEditorCameraMovedSignature, const FVector&, ViewLocation, const FRotator&, ViewRotation);
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDollyPerspectiveCameraSignature, const FVector&, Drag);
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPlayInEditorEventSignature, bool, bIsSimulating, EOnPIEEventType, EventType);
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAssetsPreDeleteEventSignature, const TArray<UObject*>&, Assets);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWorldFolderCreateEventSignature, FName, NewPath);
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnWorldFolderMoveEventSignature, FName, OldPath, FName, NewPath);
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWorldFolderDeleteEventSignature, FName, Path);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnActorSelectionChangedEventSignature, const TArray<AActor*>&, SelectedActors);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnApplicationPreInputKeyDownEventSignature, const FKeyEvent&, KeyEvent, bool, bIsEditingViewportFocused);
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnApplicationMousePreInputButtonDownEventSignature, const FPointerEvent&, MouseEvent, bool ,bIsEditingViewportFocused);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPreSaveWorldSignature, UWorld*, World);
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPostSaveWorldSignature, UWorld*, World, bool, bSuccess);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnExecuteActionEventSignature, UEditorUserDefinedActions*, ActionsAsset, uint8, ActionAsByte, bool, bIsRepeated);

public:
	UEditorEventsSubsystem();

	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

private:

	void HandleEditorModeEntered(const FEditorModeID& ModeID);
	void HandleEditorModeExited(const FEditorModeID& ModeID);

	void HandleMapOpened(const FString& Filename, bool bAsTemplate);

	void HandleEditorCameraMoved(const FVector& ViewLocation, const FRotator& ViewRotation, ELevelViewportType ViewportType, int32 ViewIndex);
	void HandleDollyPerspectiveCamera(const FVector& Drag, int32 ViewIndex);

	void HandlePreBeginPIE(bool bIsSimulating);
	void HandleBeginPIE(bool bIsSimulating);
	void HandlePostPIEStarted(bool bIsSimulating);
	void HandlePrePIEEnded(bool bIsSimulating);
	void HandleEndPIE(bool bIsSimulating);
	void HandlePausePIE(bool bIsSimulating);
	void HandleResumePIE(bool bIsSimulating);
	void HandleSingleStepPIE(bool bIsSimulating);
	void HandlePreSwitchBeginPIEAndSIE(bool bIsSimulating);
	void HandleSwitchBeginPIEAndSIE(bool bIsSimulating);

	void HandleAssetsPreDelete(const TArray<UObject*>& Assets);

	void HandleFolderCreate(UWorld& InWorld, FName NewPath);
	void HandleFolderMove(UWorld& InWorld, FName OldPath, FName NewPath);
	void HandleFolderDelete(UWorld& InWorld, FName Path);


	void HandleActorSelectionChanged(const TArray<UObject*>& NewSelection, bool bForceRefresh = false);
	void HandleMapChanged(UWorld* InWorld, EMapChangeType MapChangeType);


	void HandleApplicationPreInputKeyDownListener(const FKeyEvent& InKeyEvent);
	void HandleApplicationMousePreInputButtonDownListener(const FPointerEvent& MouseEvent);

	void HandleWorldPreSaved(uint32 SaveFlags, UWorld* World);
	void HandleWorldPostSaved(uint32 SaveFlags, UWorld* World, bool bSuccess);

	void HandleActionExecuted(UEditorUserDefinedActions* ActionsAsset, int32 ActionIndex, bool bIsRepeated);

public:

	/** Called when an editor mode is being entered */
	UPROPERTY(BlueprintAssignable, Category = "Editor Scripting | Event Listener")
		FOnEditorModeChangedSignature OnEditorModeEnter;

	/** Called when an editor mode is being exited */
	UPROPERTY(BlueprintAssignable, Category = "Editor Scripting | Event Listener")
		FOnEditorModeChangedSignature OnEditorModeExit;

	/** Called when a map is opened. */
	UPROPERTY(BlueprintAssignable, Category = "Editor Scripting | Event Listener")
		FOnMapOpenedSignature OnMapOpened;

	/** Called when the editor camera is moved */
	UPROPERTY(BlueprintAssignable, Category = "Editor Scripting | Event Listener")
		FOnEditorCameraMovedSignature OnEditorCameraMoved;

	/** Called when the editor camera is moved */
	UPROPERTY(BlueprintAssignable, Category = "Editor Scripting | Event Listener")
		FOnDollyPerspectiveCameraSignature OnDollyPerspectiveCamera;

	/** Sent when a PIE session is beginning (before we decide if PIE can run - allows clients to avoid blocking PIE) */
	UPROPERTY(BlueprintAssignable, Category = "Editor Scripting | Event Listener")
		FOnPlayInEditorEventSignature OnPlayInEditorEvent;

	UPROPERTY(BlueprintAssignable, Category = "Editor Scripting | Event Listener")
		FOnAssetsPreDeleteEventSignature OnAssetsPreDeleted;

	UPROPERTY(BlueprintAssignable, Category = "Editor Scripting | Event Listener")
		FOnWorldFolderCreateEventSignature OnWorldFolderCreate;

	UPROPERTY(BlueprintAssignable, Category = "Editor Scripting | Event Listener")
		FOnWorldFolderMoveEventSignature OnWorldFolderMove;

	UPROPERTY(BlueprintAssignable, Category = "Editor Scripting | Event Listener")
		FOnWorldFolderDeleteEventSignature OnWorldFolderDelete;

	/** Called when actors are selected */
	UPROPERTY(BlueprintAssignable, Category = "Editor Scripting | Event Listener")
		FOnActorSelectionChangedEventSignature OnActorsSelected;

	/** Called when actors are  unselected */
	UPROPERTY(BlueprintAssignable, Category = "Editor Scripting | Event Listener")
		FSimpleEventSignature OnOnActorsUnselected;

	/** Called when the map has changed */
	UPROPERTY(BlueprintAssignable, Category = "Editor Scripting | Event Listener")
		FOnMapChangedSignature OnMapChanged;

	UPROPERTY(BlueprintAssignable, Category = "Editor Scripting | Event Listener")
		FOnApplicationPreInputKeyDownEventSignature OnInputKeyDown;

	UPROPERTY(BlueprintAssignable, Category = "Editor Scripting | Event Listener")
		FOnApplicationMousePreInputButtonDownEventSignature OnMouseButtonDown;

	UPROPERTY(BlueprintAssignable, Category = "Editor Scripting | Event Listener")
		FOnPreSaveWorldSignature OnPreSaveWorld;

	UPROPERTY(BlueprintAssignable, Category = "Editor Scripting | Event Listener")
		FOnPostSaveWorldSignature OnPostSaveWorld;

	UPROPERTY(BlueprintAssignable, Category = "Editor Scripting | Event Listener")
		FOnExecuteActionEventSignature OnExecuteUserDefinedAction;
};
