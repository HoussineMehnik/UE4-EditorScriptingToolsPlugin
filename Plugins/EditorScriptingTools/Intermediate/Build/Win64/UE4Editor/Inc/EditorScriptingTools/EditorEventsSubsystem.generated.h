// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEditorUserDefinedActions;
struct FPointerEvent;
struct FKeyEvent;
class AActor;
class UObject;
enum class EOnPIEEventType : uint8;
struct FVector;
struct FRotator;
class UWorld;
enum class ELevelMapChangeType : uint8;
#ifdef EDITORSCRIPTINGTOOLS_EditorEventsSubsystem_generated_h
#error "EditorEventsSubsystem.generated.h already included, missing '#pragma once' in EditorEventsSubsystem.h"
#endif
#define EDITORSCRIPTINGTOOLS_EditorEventsSubsystem_generated_h

#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorEventsSubsystem_EditorEventsSubsystem_h_67_DELEGATE \
struct EditorEventsSubsystem_eventOnExecuteActionEventSignature_Parms \
{ \
	UEditorUserDefinedActions* ActionsAsset; \
	uint8 ActionAsByte; \
	bool bIsRepeated; \
}; \
static inline void FOnExecuteActionEventSignature_DelegateWrapper(const FMulticastScriptDelegate& OnExecuteActionEventSignature, UEditorUserDefinedActions* ActionsAsset, uint8 ActionAsByte, bool bIsRepeated) \
{ \
	EditorEventsSubsystem_eventOnExecuteActionEventSignature_Parms Parms; \
	Parms.ActionsAsset=ActionsAsset; \
	Parms.ActionAsByte=ActionAsByte; \
	Parms.bIsRepeated=bIsRepeated ? true : false; \
	OnExecuteActionEventSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorEventsSubsystem_EditorEventsSubsystem_h_65_DELEGATE \
struct EditorEventsSubsystem_eventOnApplicationMousePreInputButtonDownEventSignature_Parms \
{ \
	FPointerEvent MouseEvent; \
	bool bIsEditingViewportFocused; \
}; \
static inline void FOnApplicationMousePreInputButtonDownEventSignature_DelegateWrapper(const FMulticastScriptDelegate& OnApplicationMousePreInputButtonDownEventSignature, FPointerEvent const& MouseEvent, bool bIsEditingViewportFocused) \
{ \
	EditorEventsSubsystem_eventOnApplicationMousePreInputButtonDownEventSignature_Parms Parms; \
	Parms.MouseEvent=MouseEvent; \
	Parms.bIsEditingViewportFocused=bIsEditingViewportFocused ? true : false; \
	OnApplicationMousePreInputButtonDownEventSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorEventsSubsystem_EditorEventsSubsystem_h_64_DELEGATE \
struct EditorEventsSubsystem_eventOnApplicationPreInputKeyDownEventSignature_Parms \
{ \
	FKeyEvent KeyEvent; \
	bool bIsEditingViewportFocused; \
}; \
static inline void FOnApplicationPreInputKeyDownEventSignature_DelegateWrapper(const FMulticastScriptDelegate& OnApplicationPreInputKeyDownEventSignature, FKeyEvent const& KeyEvent, bool bIsEditingViewportFocused) \
{ \
	EditorEventsSubsystem_eventOnApplicationPreInputKeyDownEventSignature_Parms Parms; \
	Parms.KeyEvent=KeyEvent; \
	Parms.bIsEditingViewportFocused=bIsEditingViewportFocused ? true : false; \
	OnApplicationPreInputKeyDownEventSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorEventsSubsystem_EditorEventsSubsystem_h_62_DELEGATE \
struct EditorEventsSubsystem_eventOnActorSelectionChangedEventSignature_Parms \
{ \
	TArray<AActor*> SelectedActors; \
}; \
static inline void FOnActorSelectionChangedEventSignature_DelegateWrapper(const FMulticastScriptDelegate& OnActorSelectionChangedEventSignature, TArray<AActor*> const& SelectedActors) \
{ \
	EditorEventsSubsystem_eventOnActorSelectionChangedEventSignature_Parms Parms; \
	Parms.SelectedActors=SelectedActors; \
	OnActorSelectionChangedEventSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorEventsSubsystem_EditorEventsSubsystem_h_60_DELEGATE \
struct EditorEventsSubsystem_eventOnWorldFolderDeleteEventSignature_Parms \
{ \
	FName Path; \
}; \
static inline void FOnWorldFolderDeleteEventSignature_DelegateWrapper(const FMulticastScriptDelegate& OnWorldFolderDeleteEventSignature, FName Path) \
{ \
	EditorEventsSubsystem_eventOnWorldFolderDeleteEventSignature_Parms Parms; \
	Parms.Path=Path; \
	OnWorldFolderDeleteEventSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorEventsSubsystem_EditorEventsSubsystem_h_59_DELEGATE \
struct EditorEventsSubsystem_eventOnWorldFolderMoveEventSignature_Parms \
{ \
	FName OldPath; \
	FName NewPath; \
}; \
static inline void FOnWorldFolderMoveEventSignature_DelegateWrapper(const FMulticastScriptDelegate& OnWorldFolderMoveEventSignature, FName OldPath, FName NewPath) \
{ \
	EditorEventsSubsystem_eventOnWorldFolderMoveEventSignature_Parms Parms; \
	Parms.OldPath=OldPath; \
	Parms.NewPath=NewPath; \
	OnWorldFolderMoveEventSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorEventsSubsystem_EditorEventsSubsystem_h_58_DELEGATE \
struct EditorEventsSubsystem_eventOnWorldFolderCreateEventSignature_Parms \
{ \
	FName NewPath; \
}; \
static inline void FOnWorldFolderCreateEventSignature_DelegateWrapper(const FMulticastScriptDelegate& OnWorldFolderCreateEventSignature, FName NewPath) \
{ \
	EditorEventsSubsystem_eventOnWorldFolderCreateEventSignature_Parms Parms; \
	Parms.NewPath=NewPath; \
	OnWorldFolderCreateEventSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorEventsSubsystem_EditorEventsSubsystem_h_56_DELEGATE \
struct EditorEventsSubsystem_eventOnAssetsPreDeleteEventSignature_Parms \
{ \
	TArray<UObject*> Assets; \
}; \
static inline void FOnAssetsPreDeleteEventSignature_DelegateWrapper(const FMulticastScriptDelegate& OnAssetsPreDeleteEventSignature, TArray<UObject*> const& Assets) \
{ \
	EditorEventsSubsystem_eventOnAssetsPreDeleteEventSignature_Parms Parms; \
	Parms.Assets=Assets; \
	OnAssetsPreDeleteEventSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorEventsSubsystem_EditorEventsSubsystem_h_55_DELEGATE \
struct EditorEventsSubsystem_eventOnPlayInEditorEventSignature_Parms \
{ \
	bool bIsSimulating; \
	EOnPIEEventType EventType; \
}; \
static inline void FOnPlayInEditorEventSignature_DelegateWrapper(const FMulticastScriptDelegate& OnPlayInEditorEventSignature, bool bIsSimulating, EOnPIEEventType EventType) \
{ \
	EditorEventsSubsystem_eventOnPlayInEditorEventSignature_Parms Parms; \
	Parms.bIsSimulating=bIsSimulating ? true : false; \
	Parms.EventType=EventType; \
	OnPlayInEditorEventSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorEventsSubsystem_EditorEventsSubsystem_h_54_DELEGATE \
struct EditorEventsSubsystem_eventOnDollyPerspectiveCameraSignature_Parms \
{ \
	FVector Drag; \
}; \
static inline void FOnDollyPerspectiveCameraSignature_DelegateWrapper(const FMulticastScriptDelegate& OnDollyPerspectiveCameraSignature, FVector const& Drag) \
{ \
	EditorEventsSubsystem_eventOnDollyPerspectiveCameraSignature_Parms Parms; \
	Parms.Drag=Drag; \
	OnDollyPerspectiveCameraSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorEventsSubsystem_EditorEventsSubsystem_h_53_DELEGATE \
struct EditorEventsSubsystem_eventOnEditorCameraMovedSignature_Parms \
{ \
	FVector ViewLocation; \
	FRotator ViewRotation; \
}; \
static inline void FOnEditorCameraMovedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnEditorCameraMovedSignature, FVector const& ViewLocation, FRotator const& ViewRotation) \
{ \
	EditorEventsSubsystem_eventOnEditorCameraMovedSignature_Parms Parms; \
	Parms.ViewLocation=ViewLocation; \
	Parms.ViewRotation=ViewRotation; \
	OnEditorCameraMovedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorEventsSubsystem_EditorEventsSubsystem_h_52_DELEGATE \
struct EditorEventsSubsystem_eventOnMapChangedSignature_Parms \
{ \
	UWorld* World; \
	ELevelMapChangeType ChangeType; \
}; \
static inline void FOnMapChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnMapChangedSignature, UWorld* World, ELevelMapChangeType ChangeType) \
{ \
	EditorEventsSubsystem_eventOnMapChangedSignature_Parms Parms; \
	Parms.World=World; \
	Parms.ChangeType=ChangeType; \
	OnMapChangedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorEventsSubsystem_EditorEventsSubsystem_h_51_DELEGATE \
struct EditorEventsSubsystem_eventOnEditorModeChangedSignature_Parms \
{ \
	FName ID; \
}; \
static inline void FOnEditorModeChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnEditorModeChangedSignature, FName const& ID) \
{ \
	EditorEventsSubsystem_eventOnEditorModeChangedSignature_Parms Parms; \
	Parms.ID=ID; \
	OnEditorModeChangedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorEventsSubsystem_EditorEventsSubsystem_h_50_DELEGATE \
struct EditorEventsSubsystem_eventOnMapOpenedSignature_Parms \
{ \
	FString Filename; \
}; \
static inline void FOnMapOpenedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnMapOpenedSignature, const FString& Filename) \
{ \
	EditorEventsSubsystem_eventOnMapOpenedSignature_Parms Parms; \
	Parms.Filename=Filename; \
	OnMapOpenedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorEventsSubsystem_EditorEventsSubsystem_h_48_DELEGATE \
static inline void FSimpleEventSignature_DelegateWrapper(const FMulticastScriptDelegate& SimpleEventSignature) \
{ \
	SimpleEventSignature.ProcessMulticastDelegate<UObject>(NULL); \
}


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorEventsSubsystem_EditorEventsSubsystem_h_43_SPARSE_DATA
#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorEventsSubsystem_EditorEventsSubsystem_h_43_RPC_WRAPPERS
#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorEventsSubsystem_EditorEventsSubsystem_h_43_RPC_WRAPPERS_NO_PURE_DECLS
#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorEventsSubsystem_EditorEventsSubsystem_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorEventsSubsystem(); \
	friend struct Z_Construct_UClass_UEditorEventsSubsystem_Statics; \
public: \
	DECLARE_CLASS(UEditorEventsSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EditorScriptingTools"), NO_API) \
	DECLARE_SERIALIZER(UEditorEventsSubsystem) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorEventsSubsystem_EditorEventsSubsystem_h_43_INCLASS \
private: \
	static void StaticRegisterNativesUEditorEventsSubsystem(); \
	friend struct Z_Construct_UClass_UEditorEventsSubsystem_Statics; \
public: \
	DECLARE_CLASS(UEditorEventsSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EditorScriptingTools"), NO_API) \
	DECLARE_SERIALIZER(UEditorEventsSubsystem) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorEventsSubsystem_EditorEventsSubsystem_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorEventsSubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorEventsSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorEventsSubsystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorEventsSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditorEventsSubsystem(UEditorEventsSubsystem&&); \
	NO_API UEditorEventsSubsystem(const UEditorEventsSubsystem&); \
public:


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorEventsSubsystem_EditorEventsSubsystem_h_43_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditorEventsSubsystem(UEditorEventsSubsystem&&); \
	NO_API UEditorEventsSubsystem(const UEditorEventsSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorEventsSubsystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorEventsSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEditorEventsSubsystem)


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorEventsSubsystem_EditorEventsSubsystem_h_43_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorEventsSubsystem_EditorEventsSubsystem_h_40_PROLOG
#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorEventsSubsystem_EditorEventsSubsystem_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorEventsSubsystem_EditorEventsSubsystem_h_43_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorEventsSubsystem_EditorEventsSubsystem_h_43_SPARSE_DATA \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorEventsSubsystem_EditorEventsSubsystem_h_43_RPC_WRAPPERS \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorEventsSubsystem_EditorEventsSubsystem_h_43_INCLASS \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorEventsSubsystem_EditorEventsSubsystem_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorEventsSubsystem_EditorEventsSubsystem_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorEventsSubsystem_EditorEventsSubsystem_h_43_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorEventsSubsystem_EditorEventsSubsystem_h_43_SPARSE_DATA \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorEventsSubsystem_EditorEventsSubsystem_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorEventsSubsystem_EditorEventsSubsystem_h_43_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorEventsSubsystem_EditorEventsSubsystem_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EDITORSCRIPTINGTOOLS_API UClass* StaticClass<class UEditorEventsSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorEventsSubsystem_EditorEventsSubsystem_h


#define FOREACH_ENUM_EONPIEEVENTTYPE(op) \
	op(EOnPIEEventType::PreBeginPIE) \
	op(EOnPIEEventType::BeginPIE) \
	op(EOnPIEEventType::PostPIEStarted) \
	op(EOnPIEEventType::PrePIEEnded) \
	op(EOnPIEEventType::EndPIE) \
	op(EOnPIEEventType::PausePIE) \
	op(EOnPIEEventType::ResumePIE) \
	op(EOnPIEEventType::SingleStepPIE) \
	op(EOnPIEEventType::OnPreSwitchBeginPIEAndSIE) \
	op(EOnPIEEventType::OnSwitchBeginPIEAndSIE) 

enum class EOnPIEEventType : uint8;
template<> EDITORSCRIPTINGTOOLS_API UEnum* StaticEnum<EOnPIEEventType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
