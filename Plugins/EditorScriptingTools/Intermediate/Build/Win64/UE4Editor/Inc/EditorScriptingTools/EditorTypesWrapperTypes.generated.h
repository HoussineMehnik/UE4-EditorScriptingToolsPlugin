// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EDITORSCRIPTINGTOOLS_EditorTypesWrapperTypes_generated_h
#error "EditorTypesWrapperTypes.generated.h already included, missing '#pragma once' in EditorTypesWrapperTypes.h"
#endif
#define EDITORSCRIPTINGTOOLS_EditorTypesWrapperTypes_generated_h

#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorScriptingToolsCommon_EditorTypesWrapperTypes_h_475_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSelectionFrustumVolume_Statics; \
	EDITORSCRIPTINGTOOLS_API static class UScriptStruct* StaticStruct();


template<> EDITORSCRIPTINGTOOLS_API UScriptStruct* StaticStruct<struct FSelectionFrustumVolume>();

#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorScriptingToolsCommon_EditorTypesWrapperTypes_h_426_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FActorHitProxyInfo_Statics; \
	EDITORSCRIPTINGTOOLS_API static class UScriptStruct* StaticStruct();


template<> EDITORSCRIPTINGTOOLS_API UScriptStruct* StaticStruct<struct FActorHitProxyInfo>();

#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorScriptingToolsCommon_EditorTypesWrapperTypes_h_413_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FIndexedComponentVisProxyInfo_Statics; \
	EDITORSCRIPTINGTOOLS_API static class UScriptStruct* StaticStruct(); \
	typedef FComponentVisualizerHitProxyInfo Super;


template<> EDITORSCRIPTINGTOOLS_API UScriptStruct* StaticStruct<struct FIndexedComponentVisProxyInfo>();

#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorScriptingToolsCommon_EditorTypesWrapperTypes_h_399_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FComponentVisualizerHitProxyInfo_Statics; \
	EDITORSCRIPTINGTOOLS_API static class UScriptStruct* StaticStruct();


template<> EDITORSCRIPTINGTOOLS_API UScriptStruct* StaticStruct<struct FComponentVisualizerHitProxyInfo>();

#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorScriptingToolsCommon_EditorTypesWrapperTypes_h_386_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FComponentPropertyPathHandle_Statics; \
	EDITORSCRIPTINGTOOLS_API static class UScriptStruct* StaticStruct();


template<> EDITORSCRIPTINGTOOLS_API UScriptStruct* StaticStruct<struct FComponentPropertyPathHandle>();

#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorScriptingToolsCommon_EditorTypesWrapperTypes_h_366_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FActorComponentWrapper_Statics; \
	EDITORSCRIPTINGTOOLS_API static class UScriptStruct* StaticStruct();


template<> EDITORSCRIPTINGTOOLS_API UScriptStruct* StaticStruct<struct FActorComponentWrapper>();

#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorScriptingToolsCommon_EditorTypesWrapperTypes_h_294_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLevelEditingViewportClick_Statics; \
	EDITORSCRIPTINGTOOLS_API static class UScriptStruct* StaticStruct();


template<> EDITORSCRIPTINGTOOLS_API UScriptStruct* StaticStruct<struct FLevelEditingViewportClick>();

#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorScriptingToolsCommon_EditorTypesWrapperTypes_h_256_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLevelEditingViewportCursorLocation_Statics; \
	EDITORSCRIPTINGTOOLS_API static class UScriptStruct* StaticStruct();


template<> EDITORSCRIPTINGTOOLS_API UScriptStruct* StaticStruct<struct FLevelEditingViewportCursorLocation>();

#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorScriptingToolsCommon_EditorTypesWrapperTypes_h_222_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLevelEditingViewportCameraTransform_Statics; \
	EDITORSCRIPTINGTOOLS_API static class UScriptStruct* StaticStruct();


template<> EDITORSCRIPTINGTOOLS_API UScriptStruct* StaticStruct<struct FLevelEditingViewportCameraTransform>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorScriptingToolsCommon_EditorTypesWrapperTypes_h


#define FOREACH_ENUM_EEDITORAPPRETURNTYPE(op) \
	op(EEditorAppReturnType::No) \
	op(EEditorAppReturnType::Yes) \
	op(EEditorAppReturnType::YesAll) \
	op(EEditorAppReturnType::NoAll) \
	op(EEditorAppReturnType::Cancel) \
	op(EEditorAppReturnType::Ok) \
	op(EEditorAppReturnType::Retry) \
	op(EEditorAppReturnType::Continue) 

enum class EEditorAppReturnType : uint8;
template<> EDITORSCRIPTINGTOOLS_API UEnum* StaticEnum<EEditorAppReturnType>();

#define FOREACH_ENUM_EEDITMODEACTION(op) \
	op(EEditModeAction::Skip) \
	op(EEditModeAction::Process) \
	op(EEditModeAction::Halt) 

enum class EEditModeAction : uint8;
template<> EDITORSCRIPTINGTOOLS_API UEnum* StaticEnum<EEditModeAction>();

#define FOREACH_ENUM_EINPUTKEYEVENTTYPE(op) \
	op(EInputKeyEventType::Pressed) \
	op(EInputKeyEventType::Released) \
	op(EInputKeyEventType::Repeat) \
	op(EInputKeyEventType::DoubleClick) 

enum class EInputKeyEventType : uint8;
template<> EDITORSCRIPTINGTOOLS_API UEnum* StaticEnum<EInputKeyEventType>();

#define FOREACH_ENUM_EHITPROXYPRIORITYTYPE(op) \
	op(EHitProxyPriorityType::World) \
	op(EHitProxyPriorityType::Wireframe) \
	op(EHitProxyPriorityType::Foreground) \
	op(EHitProxyPriorityType::UI) 

enum class EHitProxyPriorityType : uint8;
template<> EDITORSCRIPTINGTOOLS_API UEnum* StaticEnum<EHitProxyPriorityType>();

#define FOREACH_ENUM_EDEPTHPRIORITYGROUP(op) \
	op(EDepthPriorityGroup::World) \
	op(EDepthPriorityGroup::Foreground) 

enum class EDepthPriorityGroup : uint8;
template<> EDITORSCRIPTINGTOOLS_API UEnum* StaticEnum<EDepthPriorityGroup>();

#define FOREACH_ENUM_ELEVELEDITINGVIEWPORTTYPE(op) \
	op(ELevelEditingViewportType::Top) \
	op(ELevelEditingViewportType::Front) \
	op(ELevelEditingViewportType::Left) \
	op(ELevelEditingViewportType::Perspective) \
	op(ELevelEditingViewportType::Bottom) \
	op(ELevelEditingViewportType::Back) \
	op(ELevelEditingViewportType::Right) \
	op(ELevelEditingViewportType::Invalid) 

enum class ELevelEditingViewportType : uint8;
template<> EDITORSCRIPTINGTOOLS_API UEnum* StaticEnum<ELevelEditingViewportType>();

#define FOREACH_ENUM_ETRANSFORMGIZMOAXISLIST(op) \
	op(ETransformGizmoAxisList::None) \
	op(ETransformGizmoAxisList::X) \
	op(ETransformGizmoAxisList::Y) \
	op(ETransformGizmoAxisList::Z) \
	op(ETransformGizmoAxisList::Screen) \
	op(ETransformGizmoAxisList::XY) \
	op(ETransformGizmoAxisList::XZ) \
	op(ETransformGizmoAxisList::YZ) \
	op(ETransformGizmoAxisList::XYZ) \
	op(ETransformGizmoAxisList::All) \
	op(ETransformGizmoAxisList::ZRotation) \
	op(ETransformGizmoAxisList::Rotate2D) 
#define FOREACH_ENUM_ETRANSFORMGIZMOMODE(op) \
	op(ETransformGizmoMode::WM_None) \
	op(ETransformGizmoMode::WM_Translate) \
	op(ETransformGizmoMode::WM_TranslateRotateZ) \
	op(ETransformGizmoMode::WM_2D) \
	op(ETransformGizmoMode::WM_Rotate) \
	op(ETransformGizmoMode::WM_Scale) \
	op(ETransformGizmoMode::WM_Max) 
#define FOREACH_ENUM_ELEVELMAPCHANGETYPE(op) \
	op(ELevelMapChangeType::LoadMap) \
	op(ELevelMapChangeType::SaveMap) \
	op(ELevelMapChangeType::NewMap) \
	op(ELevelMapChangeType::TearDownWorld) 

enum class ELevelMapChangeType : uint8;
template<> EDITORSCRIPTINGTOOLS_API UEnum* StaticEnum<ELevelMapChangeType>();

#define FOREACH_ENUM_EDETAILSVIEWPROPERTYCHANGETYPE(op) \
	op(EDetailsViewPropertyChangeType::None) \
	op(EDetailsViewPropertyChangeType::Unspecified) \
	op(EDetailsViewPropertyChangeType::ArrayAdd) \
	op(EDetailsViewPropertyChangeType::ArrayRemove) \
	op(EDetailsViewPropertyChangeType::ArrayClear) \
	op(EDetailsViewPropertyChangeType::ValueSet) \
	op(EDetailsViewPropertyChangeType::Duplicate) \
	op(EDetailsViewPropertyChangeType::Interactive) \
	op(EDetailsViewPropertyChangeType::Redirected) 
#define FOREACH_ENUM_EDETAILSVIEWNAMEAREASETTINGS(op) \
	op(EDetailsViewNameAreaSettings::HideNameArea) \
	op(EDetailsViewNameAreaSettings::ObjectsUseNameArea) \
	op(EDetailsViewNameAreaSettings::ActorsUseNameArea) \
	op(EDetailsViewNameAreaSettings::ComponentsAndActorsUseNameArea) 

enum class EDetailsViewNameAreaSettings : uint8;
template<> EDITORSCRIPTINGTOOLS_API UEnum* StaticEnum<EDetailsViewNameAreaSettings>();

#define FOREACH_ENUM_EDETAILPROPERTYLOCATION(op) \
	op(EDetailPropertyLocation::Common) \
	op(EDetailPropertyLocation::Advanced) \
	op(EDetailPropertyLocation::Default) 

enum class EDetailPropertyLocation : uint8;
template<> EDITORSCRIPTINGTOOLS_API UEnum* StaticEnum<EDetailPropertyLocation>();

#define FOREACH_ENUM_EDETAILCATEGORYPRIORITY(op) \
	op(EDetailCategoryPriority::Variable) \
	op(EDetailCategoryPriority::Transform) \
	op(EDetailCategoryPriority::Important) \
	op(EDetailCategoryPriority::TypeSpecific) \
	op(EDetailCategoryPriority::Default) \
	op(EDetailCategoryPriority::Uncommon) 

enum class EDetailCategoryPriority : uint8;
template<> EDITORSCRIPTINGTOOLS_API UEnum* StaticEnum<EDetailCategoryPriority>();

#define FOREACH_ENUM_EBUILTINEDITORMODES(op) \
	op(EBuiltinEditorModes::None) \
	op(EBuiltinEditorModes::Default) \
	op(EBuiltinEditorModes::Placement) \
	op(EBuiltinEditorModes::InterpEdit) \
	op(EBuiltinEditorModes::MeshPaint) \
	op(EBuiltinEditorModes::Landscape) \
	op(EBuiltinEditorModes::Foliage) \
	op(EBuiltinEditorModes::Level) \
	op(EBuiltinEditorModes::StreamingLevel) \
	op(EBuiltinEditorModes::Physics) \
	op(EBuiltinEditorModes::ActorPicker) \
	op(EBuiltinEditorModes::SceneDepthPicker) 

enum class EBuiltinEditorModes : uint8;
template<> EDITORSCRIPTINGTOOLS_API UEnum* StaticEnum<EBuiltinEditorModes>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
