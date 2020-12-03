// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorScriptingTools/Private/EditorModeTool/EditorModeToolInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorModeToolInstance() {}
// Cross Module References
	EDITORSCRIPTINGTOOLS_API UClass* Z_Construct_UClass_UEditorModeToolInstance_NoRegister();
	EDITORSCRIPTINGTOOLS_API UClass* Z_Construct_UClass_UEditorModeToolInstance();
	EDITORSCRIPTINGTOOLS_API UClass* Z_Construct_UClass_ULevelEditorToolBase();
	UPackage* Z_Construct_UPackage__Script_EditorScriptingTools();
	EDITORSCRIPTINGTOOLS_API UEnum* Z_Construct_UEnum_EditorScriptingTools_ETransformGizmoMode();
	EDITORSCRIPTINGTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FDummyStruct();
	EDITORSCRIPTINGTOOLS_API UEnum* Z_Construct_UEnum_EditorScriptingTools_EHitProxyPriorityType();
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EMouseCursor();
	EDITORSCRIPTINGTOOLS_API UEnum* Z_Construct_UEnum_EditorScriptingTools_ETransformGizmoAxisList();
	EDITORSCRIPTINGTOOLS_API UClass* Z_Construct_UClass_UEditorUserWidget_NoRegister();
	EDITORSCRIPTINGTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FHitProxyHandle();
	EDITORSCRIPTINGTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FLevelEditingViewportClick();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	EDITORSCRIPTINGTOOLS_API UEnum* Z_Construct_UEnum_EditorScriptingTools_EInputKeyEventType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	EDITORSCRIPTINGTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FSelectionFrustumVolume();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	EDITORSCRIPTINGTOOLS_API UClass* Z_Construct_UClass_UEditorUserDefinedActions_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	EDITORSCRIPTINGTOOLS_API UEnum* Z_Construct_UEnum_EditorScriptingTools_EEditModeAction();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
	DEFINE_FUNCTION(UEditorModeToolInstance::execGetActiveViewportOverlayWidgetInstance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEditorUserWidget**)Z_Param__Result=P_THIS->GetActiveViewportOverlayWidgetInstance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorModeToolInstance::execGetActiveToolkitWidgetInstance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEditorUserWidget**)Z_Param__Result=P_THIS->GetActiveToolkitWidgetInstance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorModeToolInstance::execClearActiveHitProxy)
	{
		P_GET_STRUCT(FDummyStruct,Z_Param_DrawPrimitivesContext);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearActiveHitProxy(Z_Param_DrawPrimitivesContext);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorModeToolInstance::execCreateNewHitProxyByIndex)
	{
		P_GET_STRUCT(FDummyStruct,Z_Param_DrawPrimitivesContext);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_ENUM(EHitProxyPriorityType,Z_Param_Priority);
		P_GET_PROPERTY(FByteProperty,Z_Param_CursorType);
		P_GET_UBOOL(Z_Param_bAllowsTranslucentPrimitives);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateNewHitProxyByIndex(Z_Param_DrawPrimitivesContext,Z_Param_Index,EHitProxyPriorityType(Z_Param_Priority),EMouseCursor::Type(Z_Param_CursorType),Z_Param_bAllowsTranslucentPrimitives);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorModeToolInstance::execOverrideTransformGizmoCoordinateSystem)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_NewTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OverrideTransformGizmoCoordinateSystem_Implementation(Z_Param_Out_NewTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorModeToolInstance::execHandleSelectionFrustum)
	{
		P_GET_STRUCT_REF(FSelectionFrustumVolume,Z_Param_Out_InFrustum);
		P_GET_UBOOL(Z_Param_InSelect);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HandleSelectionFrustum_Implementation(Z_Param_Out_InFrustum,Z_Param_InSelect);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorModeToolInstance::execHandleSelectionBox)
	{
		P_GET_STRUCT_REF(FBox,Z_Param_Out_InBox);
		P_GET_UBOOL(Z_Param_InSelect);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HandleSelectionBox_Implementation(Z_Param_Out_InBox,Z_Param_InSelect);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorModeToolInstance::execCanUseTransformGizmoByMode)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_CheckMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanUseTransformGizmoByMode_Implementation(ETransformGizmoMode::Type(Z_Param_CheckMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorModeToolInstance::execCanUseTransformGizmo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanUseTransformGizmo_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorModeToolInstance::execOverrideTransformGizmoLocation)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NewLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OverrideTransformGizmoLocation_Implementation(Z_Param_Out_NewLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorModeToolInstance::execCanDrawTransformGizmo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanDrawTransformGizmo_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorModeToolInstance::execOverrideMouseCursor)
	{
		P_GET_UBOOL_REF(Z_Param_Out_bOverrideCursor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<EMouseCursor::Type>*)Z_Param__Result=P_THIS->OverrideMouseCursor_Implementation(Z_Param_Out_bOverrideCursor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorModeToolInstance::execAllowPropertyWidgetsEditings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AllowPropertyWidgetsEditings_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorModeToolInstance::execOverrideCameraPivotForOrbit)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutPivot);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OverrideCameraPivotForOrbit_Implementation(Z_Param_Out_OutPivot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorModeToolInstance::execDisallowMouseDeltaTracking)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DisallowMouseDeltaTracking_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorModeToolInstance::execAllowTransformGizmoMove)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AllowTransformGizmoMove_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorModeToolInstance::execCustomizeTransformGizmoAxis)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_CurrentWidgetMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<ETransformGizmoAxisList::Type>*)Z_Param__Result=P_THIS->CustomizeTransformGizmoAxis_Implementation(ETransformGizmoMode::Type(Z_Param_CurrentWidgetMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorModeToolInstance::execCanUseViewportDragTool)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanUseViewportDragTool_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorModeToolInstance::execSelectionAllowed)
	{
		P_GET_OBJECT(AActor,Z_Param_InActor);
		P_GET_UBOOL(Z_Param_bSelection);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SelectionAllowed_Implementation(Z_Param_InActor,Z_Param_bSelection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorModeToolInstance::execSelectActor)
	{
		P_GET_OBJECT(AActor,Z_Param_InActor);
		P_GET_UBOOL(Z_Param_bIsSelected);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SelectActor_Implementation(Z_Param_InActor,Z_Param_bIsSelected);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorModeToolInstance::execProcessEditPaste)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ProcessEditPaste_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorModeToolInstance::execProcessEditCopy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ProcessEditCopy_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorModeToolInstance::execProcessEditCut)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ProcessEditCut_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorModeToolInstance::execProcessEditDelete)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ProcessEditDelete_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorModeToolInstance::execProcessEditDuplicate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ProcessEditDuplicate_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorModeToolInstance::execOverrideActionEditPasteStatus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EEditModeAction*)Z_Param__Result=P_THIS->OverrideActionEditPasteStatus_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorModeToolInstance::execOverrideActionEditCopyStatus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EEditModeAction*)Z_Param__Result=P_THIS->OverrideActionEditCopyStatus_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorModeToolInstance::execOverrideActionEditCutStatus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EEditModeAction*)Z_Param__Result=P_THIS->OverrideActionEditCutStatus_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorModeToolInstance::execOverrideActionEditDeleteStatus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EEditModeAction*)Z_Param__Result=P_THIS->OverrideActionEditDeleteStatus_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorModeToolInstance::execOverrideActionEditDuplicateStatus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EEditModeAction*)Z_Param__Result=P_THIS->OverrideActionEditDuplicateStatus_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorModeToolInstance::execHandleClickHitProxy)
	{
		P_GET_STRUCT_REF(FHitProxyHandle,Z_Param_Out_HitProxyHandle);
		P_GET_STRUCT_REF(FLevelEditingViewportClick,Z_Param_Out_ViewportClick);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HandleClickHitProxy_Implementation(Z_Param_Out_HitProxyHandle,Z_Param_Out_ViewportClick);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorModeToolInstance::execHandleMouseTrackingEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HandleMouseTrackingEnd_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorModeToolInstance::execHandleMouseTrackingStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HandleMouseTrackingStart_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorModeToolInstance::execHandleWidgetMove)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Drag);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_DeltaRotation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_DeltaScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HandleWidgetMove_Implementation(Z_Param_Out_Drag,Z_Param_Out_DeltaRotation,Z_Param_Out_DeltaScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorModeToolInstance::execHandleInputAxis)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ControllerId);
		P_GET_STRUCT(FKey,Z_Param_Key);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delta);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HandleInputAxis_Implementation(Z_Param_ControllerId,Z_Param_Key,Z_Param_Delta,Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorModeToolInstance::execHandleInputKey)
	{
		P_GET_STRUCT(FKey,Z_Param_Key);
		P_GET_ENUM(EInputKeyEventType,Z_Param_Event);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HandleInputKey_Implementation(Z_Param_Key,EInputKeyEventType(Z_Param_Event));
		P_NATIVE_END;
	}
	static FName NAME_UEditorModeToolInstance_AllowPropertyWidgetsEditings = FName(TEXT("AllowPropertyWidgetsEditings"));
	bool UEditorModeToolInstance::AllowPropertyWidgetsEditings() const
	{
		EditorModeToolInstance_eventAllowPropertyWidgetsEditings_Parms Parms;
		const_cast<UEditorModeToolInstance*>(this)->ProcessEvent(FindFunctionChecked(NAME_UEditorModeToolInstance_AllowPropertyWidgetsEditings),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UEditorModeToolInstance_AllowTransformGizmoMove = FName(TEXT("AllowTransformGizmoMove"));
	bool UEditorModeToolInstance::AllowTransformGizmoMove()
	{
		EditorModeToolInstance_eventAllowTransformGizmoMove_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UEditorModeToolInstance_AllowTransformGizmoMove),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UEditorModeToolInstance_CanDrawTransformGizmo = FName(TEXT("CanDrawTransformGizmo"));
	bool UEditorModeToolInstance::CanDrawTransformGizmo() const
	{
		EditorModeToolInstance_eventCanDrawTransformGizmo_Parms Parms;
		const_cast<UEditorModeToolInstance*>(this)->ProcessEvent(FindFunctionChecked(NAME_UEditorModeToolInstance_CanDrawTransformGizmo),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UEditorModeToolInstance_CanUseTransformGizmo = FName(TEXT("CanUseTransformGizmo"));
	bool UEditorModeToolInstance::CanUseTransformGizmo() const
	{
		EditorModeToolInstance_eventCanUseTransformGizmo_Parms Parms;
		const_cast<UEditorModeToolInstance*>(this)->ProcessEvent(FindFunctionChecked(NAME_UEditorModeToolInstance_CanUseTransformGizmo),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UEditorModeToolInstance_CanUseTransformGizmoByMode = FName(TEXT("CanUseTransformGizmoByMode"));
	bool UEditorModeToolInstance::CanUseTransformGizmoByMode(ETransformGizmoMode::Type CheckMode) const
	{
		EditorModeToolInstance_eventCanUseTransformGizmoByMode_Parms Parms;
		Parms.CheckMode=CheckMode;
		const_cast<UEditorModeToolInstance*>(this)->ProcessEvent(FindFunctionChecked(NAME_UEditorModeToolInstance_CanUseTransformGizmoByMode),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UEditorModeToolInstance_CanUseViewportDragTool = FName(TEXT("CanUseViewportDragTool"));
	bool UEditorModeToolInstance::CanUseViewportDragTool() const
	{
		EditorModeToolInstance_eventCanUseViewportDragTool_Parms Parms;
		const_cast<UEditorModeToolInstance*>(this)->ProcessEvent(FindFunctionChecked(NAME_UEditorModeToolInstance_CanUseViewportDragTool),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UEditorModeToolInstance_CustomizeTransformGizmoAxis = FName(TEXT("CustomizeTransformGizmoAxis"));
	ETransformGizmoAxisList::Type UEditorModeToolInstance::CustomizeTransformGizmoAxis(ETransformGizmoMode::Type CurrentWidgetMode)
	{
		EditorModeToolInstance_eventCustomizeTransformGizmoAxis_Parms Parms;
		Parms.CurrentWidgetMode=CurrentWidgetMode;
		ProcessEvent(FindFunctionChecked(NAME_UEditorModeToolInstance_CustomizeTransformGizmoAxis),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UEditorModeToolInstance_DisallowMouseDeltaTracking = FName(TEXT("DisallowMouseDeltaTracking"));
	bool UEditorModeToolInstance::DisallowMouseDeltaTracking() const
	{
		EditorModeToolInstance_eventDisallowMouseDeltaTracking_Parms Parms;
		const_cast<UEditorModeToolInstance*>(this)->ProcessEvent(FindFunctionChecked(NAME_UEditorModeToolInstance_DisallowMouseDeltaTracking),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UEditorModeToolInstance_HandleClickHitProxy = FName(TEXT("HandleClickHitProxy"));
	bool UEditorModeToolInstance::HandleClickHitProxy(FHitProxyHandle& HitProxyHandle, FLevelEditingViewportClick const& ViewportClick)
	{
		EditorModeToolInstance_eventHandleClickHitProxy_Parms Parms;
		Parms.HitProxyHandle=HitProxyHandle;
		Parms.ViewportClick=ViewportClick;
		ProcessEvent(FindFunctionChecked(NAME_UEditorModeToolInstance_HandleClickHitProxy),&Parms);
		HitProxyHandle=Parms.HitProxyHandle;
		return !!Parms.ReturnValue;
	}
	static FName NAME_UEditorModeToolInstance_HandleInputAxis = FName(TEXT("HandleInputAxis"));
	bool UEditorModeToolInstance::HandleInputAxis(int32 ControllerId, FKey Key, float Delta, float DeltaTime)
	{
		EditorModeToolInstance_eventHandleInputAxis_Parms Parms;
		Parms.ControllerId=ControllerId;
		Parms.Key=Key;
		Parms.Delta=Delta;
		Parms.DeltaTime=DeltaTime;
		ProcessEvent(FindFunctionChecked(NAME_UEditorModeToolInstance_HandleInputAxis),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UEditorModeToolInstance_HandleInputKey = FName(TEXT("HandleInputKey"));
	bool UEditorModeToolInstance::HandleInputKey(FKey Key, EInputKeyEventType Event)
	{
		EditorModeToolInstance_eventHandleInputKey_Parms Parms;
		Parms.Key=Key;
		Parms.Event=Event;
		ProcessEvent(FindFunctionChecked(NAME_UEditorModeToolInstance_HandleInputKey),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UEditorModeToolInstance_HandleMouseTrackingEnd = FName(TEXT("HandleMouseTrackingEnd"));
	bool UEditorModeToolInstance::HandleMouseTrackingEnd()
	{
		EditorModeToolInstance_eventHandleMouseTrackingEnd_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UEditorModeToolInstance_HandleMouseTrackingEnd),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UEditorModeToolInstance_HandleMouseTrackingStart = FName(TEXT("HandleMouseTrackingStart"));
	bool UEditorModeToolInstance::HandleMouseTrackingStart()
	{
		EditorModeToolInstance_eventHandleMouseTrackingStart_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UEditorModeToolInstance_HandleMouseTrackingStart),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UEditorModeToolInstance_HandleSelectionBox = FName(TEXT("HandleSelectionBox"));
	bool UEditorModeToolInstance::HandleSelectionBox(FBox& InBox, bool InSelect)
	{
		EditorModeToolInstance_eventHandleSelectionBox_Parms Parms;
		Parms.InBox=InBox;
		Parms.InSelect=InSelect ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UEditorModeToolInstance_HandleSelectionBox),&Parms);
		InBox=Parms.InBox;
		return !!Parms.ReturnValue;
	}
	static FName NAME_UEditorModeToolInstance_HandleSelectionFrustum = FName(TEXT("HandleSelectionFrustum"));
	bool UEditorModeToolInstance::HandleSelectionFrustum(FSelectionFrustumVolume const& InFrustum, bool InSelect)
	{
		EditorModeToolInstance_eventHandleSelectionFrustum_Parms Parms;
		Parms.InFrustum=InFrustum;
		Parms.InSelect=InSelect ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UEditorModeToolInstance_HandleSelectionFrustum),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UEditorModeToolInstance_HandleWidgetMove = FName(TEXT("HandleWidgetMove"));
	bool UEditorModeToolInstance::HandleWidgetMove(FVector& Drag, FRotator& DeltaRotation, FVector& DeltaScale)
	{
		EditorModeToolInstance_eventHandleWidgetMove_Parms Parms;
		Parms.Drag=Drag;
		Parms.DeltaRotation=DeltaRotation;
		Parms.DeltaScale=DeltaScale;
		ProcessEvent(FindFunctionChecked(NAME_UEditorModeToolInstance_HandleWidgetMove),&Parms);
		Drag=Parms.Drag;
		DeltaRotation=Parms.DeltaRotation;
		DeltaScale=Parms.DeltaScale;
		return !!Parms.ReturnValue;
	}
	static FName NAME_UEditorModeToolInstance_NotifyActorMoved = FName(TEXT("NotifyActorMoved"));
	void UEditorModeToolInstance::NotifyActorMoved()
	{
		ProcessEvent(FindFunctionChecked(NAME_UEditorModeToolInstance_NotifyActorMoved),NULL);
	}
	static FName NAME_UEditorModeToolInstance_NotifyActorPropertyChanged = FName(TEXT("NotifyActorPropertyChanged"));
	void UEditorModeToolInstance::NotifyActorPropertyChanged()
	{
		ProcessEvent(FindFunctionChecked(NAME_UEditorModeToolInstance_NotifyActorPropertyChanged),NULL);
	}
	static FName NAME_UEditorModeToolInstance_NotifyActorsDuplicated = FName(TEXT("NotifyActorsDuplicated"));
	void UEditorModeToolInstance::NotifyActorsDuplicated(TArray<AActor*>& PreDuplicateSelection, TArray<AActor*>& PostDuplicateSelection, bool bOffsetLocations)
	{
		EditorModeToolInstance_eventNotifyActorsDuplicated_Parms Parms;
		Parms.PreDuplicateSelection=PreDuplicateSelection;
		Parms.PostDuplicateSelection=PostDuplicateSelection;
		Parms.bOffsetLocations=bOffsetLocations ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UEditorModeToolInstance_NotifyActorsDuplicated),&Parms);
		PreDuplicateSelection=Parms.PreDuplicateSelection;
		PostDuplicateSelection=Parms.PostDuplicateSelection;
	}
	static FName NAME_UEditorModeToolInstance_NotifyActorSelectionChanged = FName(TEXT("NotifyActorSelectionChanged"));
	void UEditorModeToolInstance::NotifyActorSelectionChanged()
	{
		ProcessEvent(FindFunctionChecked(NAME_UEditorModeToolInstance_NotifyActorSelectionChanged),NULL);
	}
	static FName NAME_UEditorModeToolInstance_OnEditingViewportChanged = FName(TEXT("OnEditingViewportChanged"));
	void UEditorModeToolInstance::OnEditingViewportChanged()
	{
		ProcessEvent(FindFunctionChecked(NAME_UEditorModeToolInstance_OnEditingViewportChanged),NULL);
	}
	static FName NAME_UEditorModeToolInstance_OnExecuteUserDefinedAction = FName(TEXT("OnExecuteUserDefinedAction"));
	void UEditorModeToolInstance::OnExecuteUserDefinedAction(UEditorUserDefinedActions* ActionsAsset, uint8 ActionAsByte, bool bIsRepeated)
	{
		EditorModeToolInstance_eventOnExecuteUserDefinedAction_Parms Parms;
		Parms.ActionsAsset=ActionsAsset;
		Parms.ActionAsByte=ActionAsByte;
		Parms.bIsRepeated=bIsRepeated ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UEditorModeToolInstance_OnExecuteUserDefinedAction),&Parms);
	}
	static FName NAME_UEditorModeToolInstance_OnFocusLost = FName(TEXT("OnFocusLost"));
	void UEditorModeToolInstance::OnFocusLost()
	{
		ProcessEvent(FindFunctionChecked(NAME_UEditorModeToolInstance_OnFocusLost),NULL);
	}
	static FName NAME_UEditorModeToolInstance_OnFocusReceived = FName(TEXT("OnFocusReceived"));
	void UEditorModeToolInstance::OnFocusReceived()
	{
		ProcessEvent(FindFunctionChecked(NAME_UEditorModeToolInstance_OnFocusReceived),NULL);
	}
	static FName NAME_UEditorModeToolInstance_OnMouseEnter = FName(TEXT("OnMouseEnter"));
	void UEditorModeToolInstance::OnMouseEnter(int32 MouseX, int32 MouseY)
	{
		EditorModeToolInstance_eventOnMouseEnter_Parms Parms;
		Parms.MouseX=MouseX;
		Parms.MouseY=MouseY;
		ProcessEvent(FindFunctionChecked(NAME_UEditorModeToolInstance_OnMouseEnter),&Parms);
	}
	static FName NAME_UEditorModeToolInstance_OnMouseLeave = FName(TEXT("OnMouseLeave"));
	void UEditorModeToolInstance::OnMouseLeave()
	{
		ProcessEvent(FindFunctionChecked(NAME_UEditorModeToolInstance_OnMouseLeave),NULL);
	}
	static FName NAME_UEditorModeToolInstance_OnMouseMove = FName(TEXT("OnMouseMove"));
	void UEditorModeToolInstance::OnMouseMove(int32 MouseX, int32 MouseY)
	{
		EditorModeToolInstance_eventOnMouseMove_Parms Parms;
		Parms.MouseX=MouseX;
		Parms.MouseY=MouseY;
		ProcessEvent(FindFunctionChecked(NAME_UEditorModeToolInstance_OnMouseMove),&Parms);
	}
	static FName NAME_UEditorModeToolInstance_OnMouseMoveCaptured = FName(TEXT("OnMouseMoveCaptured"));
	void UEditorModeToolInstance::OnMouseMoveCaptured(int32 MouseX, int32 MouseY)
	{
		EditorModeToolInstance_eventOnMouseMoveCaptured_Parms Parms;
		Parms.MouseX=MouseX;
		Parms.MouseY=MouseY;
		ProcessEvent(FindFunctionChecked(NAME_UEditorModeToolInstance_OnMouseMoveCaptured),&Parms);
	}
	static FName NAME_UEditorModeToolInstance_OnMouseMovesCaptured = FName(TEXT("OnMouseMovesCaptured"));
	void UEditorModeToolInstance::OnMouseMovesCaptured(TArray<FIntPoint> const& MouseMoves)
	{
		EditorModeToolInstance_eventOnMouseMovesCaptured_Parms Parms;
		Parms.MouseMoves=MouseMoves;
		ProcessEvent(FindFunctionChecked(NAME_UEditorModeToolInstance_OnMouseMovesCaptured),&Parms);
	}
	static FName NAME_UEditorModeToolInstance_OnPostUndo = FName(TEXT("OnPostUndo"));
	void UEditorModeToolInstance::OnPostUndo()
	{
		ProcessEvent(FindFunctionChecked(NAME_UEditorModeToolInstance_OnPostUndo),NULL);
	}
	static FName NAME_UEditorModeToolInstance_OnToolEnded = FName(TEXT("OnToolEnded"));
	void UEditorModeToolInstance::OnToolEnded()
	{
		ProcessEvent(FindFunctionChecked(NAME_UEditorModeToolInstance_OnToolEnded),NULL);
	}
	static FName NAME_UEditorModeToolInstance_OnToolStarted = FName(TEXT("OnToolStarted"));
	void UEditorModeToolInstance::OnToolStarted()
	{
		ProcessEvent(FindFunctionChecked(NAME_UEditorModeToolInstance_OnToolStarted),NULL);
	}
	static FName NAME_UEditorModeToolInstance_OverrideActionEditCopyStatus = FName(TEXT("OverrideActionEditCopyStatus"));
	EEditModeAction UEditorModeToolInstance::OverrideActionEditCopyStatus()
	{
		EditorModeToolInstance_eventOverrideActionEditCopyStatus_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UEditorModeToolInstance_OverrideActionEditCopyStatus),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UEditorModeToolInstance_OverrideActionEditCutStatus = FName(TEXT("OverrideActionEditCutStatus"));
	EEditModeAction UEditorModeToolInstance::OverrideActionEditCutStatus()
	{
		EditorModeToolInstance_eventOverrideActionEditCutStatus_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UEditorModeToolInstance_OverrideActionEditCutStatus),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UEditorModeToolInstance_OverrideActionEditDeleteStatus = FName(TEXT("OverrideActionEditDeleteStatus"));
	EEditModeAction UEditorModeToolInstance::OverrideActionEditDeleteStatus()
	{
		EditorModeToolInstance_eventOverrideActionEditDeleteStatus_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UEditorModeToolInstance_OverrideActionEditDeleteStatus),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UEditorModeToolInstance_OverrideActionEditDuplicateStatus = FName(TEXT("OverrideActionEditDuplicateStatus"));
	EEditModeAction UEditorModeToolInstance::OverrideActionEditDuplicateStatus()
	{
		EditorModeToolInstance_eventOverrideActionEditDuplicateStatus_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UEditorModeToolInstance_OverrideActionEditDuplicateStatus),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UEditorModeToolInstance_OverrideActionEditPasteStatus = FName(TEXT("OverrideActionEditPasteStatus"));
	EEditModeAction UEditorModeToolInstance::OverrideActionEditPasteStatus()
	{
		EditorModeToolInstance_eventOverrideActionEditPasteStatus_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UEditorModeToolInstance_OverrideActionEditPasteStatus),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UEditorModeToolInstance_OverrideCameraPivotForOrbit = FName(TEXT("OverrideCameraPivotForOrbit"));
	bool UEditorModeToolInstance::OverrideCameraPivotForOrbit(FVector& OutPivot) const
	{
		EditorModeToolInstance_eventOverrideCameraPivotForOrbit_Parms Parms;
		Parms.OutPivot=OutPivot;
		const_cast<UEditorModeToolInstance*>(this)->ProcessEvent(FindFunctionChecked(NAME_UEditorModeToolInstance_OverrideCameraPivotForOrbit),&Parms);
		OutPivot=Parms.OutPivot;
		return !!Parms.ReturnValue;
	}
	static FName NAME_UEditorModeToolInstance_OverrideMouseCursor = FName(TEXT("OverrideMouseCursor"));
	EMouseCursor::Type UEditorModeToolInstance::OverrideMouseCursor(bool& bOverrideCursor) const
	{
		EditorModeToolInstance_eventOverrideMouseCursor_Parms Parms;
		Parms.bOverrideCursor=bOverrideCursor ? true : false;
		const_cast<UEditorModeToolInstance*>(this)->ProcessEvent(FindFunctionChecked(NAME_UEditorModeToolInstance_OverrideMouseCursor),&Parms);
		bOverrideCursor=Parms.bOverrideCursor;
		return Parms.ReturnValue;
	}
	static FName NAME_UEditorModeToolInstance_OverrideTransformGizmoCoordinateSystem = FName(TEXT("OverrideTransformGizmoCoordinateSystem"));
	bool UEditorModeToolInstance::OverrideTransformGizmoCoordinateSystem(FTransform& NewTransform)
	{
		EditorModeToolInstance_eventOverrideTransformGizmoCoordinateSystem_Parms Parms;
		Parms.NewTransform=NewTransform;
		ProcessEvent(FindFunctionChecked(NAME_UEditorModeToolInstance_OverrideTransformGizmoCoordinateSystem),&Parms);
		NewTransform=Parms.NewTransform;
		return !!Parms.ReturnValue;
	}
	static FName NAME_UEditorModeToolInstance_OverrideTransformGizmoLocation = FName(TEXT("OverrideTransformGizmoLocation"));
	bool UEditorModeToolInstance::OverrideTransformGizmoLocation(FVector& NewLocation) const
	{
		EditorModeToolInstance_eventOverrideTransformGizmoLocation_Parms Parms;
		Parms.NewLocation=NewLocation;
		const_cast<UEditorModeToolInstance*>(this)->ProcessEvent(FindFunctionChecked(NAME_UEditorModeToolInstance_OverrideTransformGizmoLocation),&Parms);
		NewLocation=Parms.NewLocation;
		return !!Parms.ReturnValue;
	}
	static FName NAME_UEditorModeToolInstance_ProcessEditCopy = FName(TEXT("ProcessEditCopy"));
	bool UEditorModeToolInstance::ProcessEditCopy()
	{
		EditorModeToolInstance_eventProcessEditCopy_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UEditorModeToolInstance_ProcessEditCopy),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UEditorModeToolInstance_ProcessEditCut = FName(TEXT("ProcessEditCut"));
	bool UEditorModeToolInstance::ProcessEditCut()
	{
		EditorModeToolInstance_eventProcessEditCut_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UEditorModeToolInstance_ProcessEditCut),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UEditorModeToolInstance_ProcessEditDelete = FName(TEXT("ProcessEditDelete"));
	bool UEditorModeToolInstance::ProcessEditDelete()
	{
		EditorModeToolInstance_eventProcessEditDelete_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UEditorModeToolInstance_ProcessEditDelete),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UEditorModeToolInstance_ProcessEditDuplicate = FName(TEXT("ProcessEditDuplicate"));
	bool UEditorModeToolInstance::ProcessEditDuplicate()
	{
		EditorModeToolInstance_eventProcessEditDuplicate_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UEditorModeToolInstance_ProcessEditDuplicate),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UEditorModeToolInstance_ProcessEditPaste = FName(TEXT("ProcessEditPaste"));
	bool UEditorModeToolInstance::ProcessEditPaste()
	{
		EditorModeToolInstance_eventProcessEditPaste_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UEditorModeToolInstance_ProcessEditPaste),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UEditorModeToolInstance_ReceiveDrawHUD = FName(TEXT("ReceiveDrawHUD"));
	void UEditorModeToolInstance::ReceiveDrawHUD()
	{
		ProcessEvent(FindFunctionChecked(NAME_UEditorModeToolInstance_ReceiveDrawHUD),NULL);
	}
	static FName NAME_UEditorModeToolInstance_ReceiveDrawPrimitives = FName(TEXT("ReceiveDrawPrimitives"));
	void UEditorModeToolInstance::ReceiveDrawPrimitives()
	{
		ProcessEvent(FindFunctionChecked(NAME_UEditorModeToolInstance_ReceiveDrawPrimitives),NULL);
	}
	static FName NAME_UEditorModeToolInstance_ReceiveTick = FName(TEXT("ReceiveTick"));
	void UEditorModeToolInstance::ReceiveTick(float DeltaTime)
	{
		EditorModeToolInstance_eventReceiveTick_Parms Parms;
		Parms.DeltaTime=DeltaTime;
		ProcessEvent(FindFunctionChecked(NAME_UEditorModeToolInstance_ReceiveTick),&Parms);
	}
	static FName NAME_UEditorModeToolInstance_SelectActor = FName(TEXT("SelectActor"));
	bool UEditorModeToolInstance::SelectActor(AActor* InActor, bool bIsSelected)
	{
		EditorModeToolInstance_eventSelectActor_Parms Parms;
		Parms.InActor=InActor;
		Parms.bIsSelected=bIsSelected ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UEditorModeToolInstance_SelectActor),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UEditorModeToolInstance_SelectionAllowed = FName(TEXT("SelectionAllowed"));
	bool UEditorModeToolInstance::SelectionAllowed(AActor* InActor, bool bSelection) const
	{
		EditorModeToolInstance_eventSelectionAllowed_Parms Parms;
		Parms.InActor=InActor;
		Parms.bSelection=bSelection ? true : false;
		const_cast<UEditorModeToolInstance*>(this)->ProcessEvent(FindFunctionChecked(NAME_UEditorModeToolInstance_SelectionAllowed),&Parms);
		return !!Parms.ReturnValue;
	}
	void UEditorModeToolInstance::StaticRegisterNativesUEditorModeToolInstance()
	{
		UClass* Class = UEditorModeToolInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AllowPropertyWidgetsEditings", &UEditorModeToolInstance::execAllowPropertyWidgetsEditings },
			{ "AllowTransformGizmoMove", &UEditorModeToolInstance::execAllowTransformGizmoMove },
			{ "CanDrawTransformGizmo", &UEditorModeToolInstance::execCanDrawTransformGizmo },
			{ "CanUseTransformGizmo", &UEditorModeToolInstance::execCanUseTransformGizmo },
			{ "CanUseTransformGizmoByMode", &UEditorModeToolInstance::execCanUseTransformGizmoByMode },
			{ "CanUseViewportDragTool", &UEditorModeToolInstance::execCanUseViewportDragTool },
			{ "ClearActiveHitProxy", &UEditorModeToolInstance::execClearActiveHitProxy },
			{ "CreateNewHitProxyByIndex", &UEditorModeToolInstance::execCreateNewHitProxyByIndex },
			{ "CustomizeTransformGizmoAxis", &UEditorModeToolInstance::execCustomizeTransformGizmoAxis },
			{ "DisallowMouseDeltaTracking", &UEditorModeToolInstance::execDisallowMouseDeltaTracking },
			{ "GetActiveToolkitWidgetInstance", &UEditorModeToolInstance::execGetActiveToolkitWidgetInstance },
			{ "GetActiveViewportOverlayWidgetInstance", &UEditorModeToolInstance::execGetActiveViewportOverlayWidgetInstance },
			{ "HandleClickHitProxy", &UEditorModeToolInstance::execHandleClickHitProxy },
			{ "HandleInputAxis", &UEditorModeToolInstance::execHandleInputAxis },
			{ "HandleInputKey", &UEditorModeToolInstance::execHandleInputKey },
			{ "HandleMouseTrackingEnd", &UEditorModeToolInstance::execHandleMouseTrackingEnd },
			{ "HandleMouseTrackingStart", &UEditorModeToolInstance::execHandleMouseTrackingStart },
			{ "HandleSelectionBox", &UEditorModeToolInstance::execHandleSelectionBox },
			{ "HandleSelectionFrustum", &UEditorModeToolInstance::execHandleSelectionFrustum },
			{ "HandleWidgetMove", &UEditorModeToolInstance::execHandleWidgetMove },
			{ "OverrideActionEditCopyStatus", &UEditorModeToolInstance::execOverrideActionEditCopyStatus },
			{ "OverrideActionEditCutStatus", &UEditorModeToolInstance::execOverrideActionEditCutStatus },
			{ "OverrideActionEditDeleteStatus", &UEditorModeToolInstance::execOverrideActionEditDeleteStatus },
			{ "OverrideActionEditDuplicateStatus", &UEditorModeToolInstance::execOverrideActionEditDuplicateStatus },
			{ "OverrideActionEditPasteStatus", &UEditorModeToolInstance::execOverrideActionEditPasteStatus },
			{ "OverrideCameraPivotForOrbit", &UEditorModeToolInstance::execOverrideCameraPivotForOrbit },
			{ "OverrideMouseCursor", &UEditorModeToolInstance::execOverrideMouseCursor },
			{ "OverrideTransformGizmoCoordinateSystem", &UEditorModeToolInstance::execOverrideTransformGizmoCoordinateSystem },
			{ "OverrideTransformGizmoLocation", &UEditorModeToolInstance::execOverrideTransformGizmoLocation },
			{ "ProcessEditCopy", &UEditorModeToolInstance::execProcessEditCopy },
			{ "ProcessEditCut", &UEditorModeToolInstance::execProcessEditCut },
			{ "ProcessEditDelete", &UEditorModeToolInstance::execProcessEditDelete },
			{ "ProcessEditDuplicate", &UEditorModeToolInstance::execProcessEditDuplicate },
			{ "ProcessEditPaste", &UEditorModeToolInstance::execProcessEditPaste },
			{ "SelectActor", &UEditorModeToolInstance::execSelectActor },
			{ "SelectionAllowed", &UEditorModeToolInstance::execSelectionAllowed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEditorModeToolInstance_AllowPropertyWidgetsEditings_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorModeToolInstance_AllowPropertyWidgetsEditings_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorModeToolInstance_eventAllowPropertyWidgetsEditings_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorModeToolInstance_AllowPropertyWidgetsEditings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorModeToolInstance_eventAllowPropertyWidgetsEditings_Parms), &Z_Construct_UFunction_UEditorModeToolInstance_AllowPropertyWidgetsEditings_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorModeToolInstance_AllowPropertyWidgetsEditings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_AllowPropertyWidgetsEditings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorModeToolInstance_AllowPropertyWidgetsEditings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Mode" },
		{ "Comment", "/**\n\x09 * Lets each mode selectively enable widgets for editing properties tagged with 'Show 3D Widget' metadata.\n\x09 */" },
		{ "DisplayName", "Allow Property Widgets Editings" },
		{ "ModuleRelativePath", "Private/EditorModeTool/EditorModeToolInstance.h" },
		{ "ToolTip", "Lets each mode selectively enable widgets for editing properties tagged with 'Show 3D Widget' metadata." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorModeToolInstance_AllowPropertyWidgetsEditings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorModeToolInstance, nullptr, "AllowPropertyWidgetsEditings", nullptr, nullptr, sizeof(EditorModeToolInstance_eventAllowPropertyWidgetsEditings_Parms), Z_Construct_UFunction_UEditorModeToolInstance_AllowPropertyWidgetsEditings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_AllowPropertyWidgetsEditings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorModeToolInstance_AllowPropertyWidgetsEditings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_AllowPropertyWidgetsEditings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorModeToolInstance_AllowPropertyWidgetsEditings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorModeToolInstance_AllowPropertyWidgetsEditings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorModeToolInstance_AllowTransformGizmoMove_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorModeToolInstance_AllowTransformGizmoMove_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorModeToolInstance_eventAllowTransformGizmoMove_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorModeToolInstance_AllowTransformGizmoMove_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorModeToolInstance_eventAllowTransformGizmoMove_Parms), &Z_Construct_UFunction_UEditorModeToolInstance_AllowTransformGizmoMove_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorModeToolInstance_AllowTransformGizmoMove_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_AllowTransformGizmoMove_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorModeToolInstance_AllowTransformGizmoMove_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Mode" },
		{ "Comment", "/** If the EdMode is handling InputDelta (i.e., returning true from it), this allows a mode to indicated whether or not the Widget should also move. */" },
		{ "DisplayName", "Allow Transform Gizmo Move" },
		{ "ModuleRelativePath", "Private/EditorModeTool/EditorModeToolInstance.h" },
		{ "ToolTip", "If the EdMode is handling InputDelta (i.e., returning true from it), this allows a mode to indicated whether or not the Widget should also move." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorModeToolInstance_AllowTransformGizmoMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorModeToolInstance, nullptr, "AllowTransformGizmoMove", nullptr, nullptr, sizeof(EditorModeToolInstance_eventAllowTransformGizmoMove_Parms), Z_Construct_UFunction_UEditorModeToolInstance_AllowTransformGizmoMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_AllowTransformGizmoMove_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorModeToolInstance_AllowTransformGizmoMove_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_AllowTransformGizmoMove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorModeToolInstance_AllowTransformGizmoMove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorModeToolInstance_AllowTransformGizmoMove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorModeToolInstance_CanDrawTransformGizmo_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorModeToolInstance_CanDrawTransformGizmo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorModeToolInstance_eventCanDrawTransformGizmo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorModeToolInstance_CanDrawTransformGizmo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorModeToolInstance_eventCanDrawTransformGizmo_Parms), &Z_Construct_UFunction_UEditorModeToolInstance_CanDrawTransformGizmo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorModeToolInstance_CanDrawTransformGizmo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_CanDrawTransformGizmo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorModeToolInstance_CanDrawTransformGizmo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Mode" },
		{ "Comment", "/**\n\x09 * Lets the mode determine if it wants to draw the transform widget or not.\n\x09 */" },
		{ "DisplayName", "Can Draw Transform Gizmo" },
		{ "ModuleRelativePath", "Private/EditorModeTool/EditorModeToolInstance.h" },
		{ "ToolTip", "Lets the mode determine if it wants to draw the transform widget or not." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorModeToolInstance_CanDrawTransformGizmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorModeToolInstance, nullptr, "CanDrawTransformGizmo", nullptr, nullptr, sizeof(EditorModeToolInstance_eventCanDrawTransformGizmo_Parms), Z_Construct_UFunction_UEditorModeToolInstance_CanDrawTransformGizmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_CanDrawTransformGizmo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorModeToolInstance_CanDrawTransformGizmo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_CanDrawTransformGizmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorModeToolInstance_CanDrawTransformGizmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorModeToolInstance_CanDrawTransformGizmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorModeToolInstance_CanUseTransformGizmo_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorModeToolInstance_CanUseTransformGizmo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorModeToolInstance_eventCanUseTransformGizmo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorModeToolInstance_CanUseTransformGizmo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorModeToolInstance_eventCanUseTransformGizmo_Parms), &Z_Construct_UFunction_UEditorModeToolInstance_CanUseTransformGizmo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorModeToolInstance_CanUseTransformGizmo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_CanUseTransformGizmo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorModeToolInstance_CanUseTransformGizmo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Mode" },
		{ "Comment", "/**\n\x09 * Lets each tool determine if it wants to use the editor widget or not.  If the tool doesn't want to use it,\n\x09 * it will be fed raw mouse delta information (not snapped or altered in any way).\n\x09 */" },
		{ "DisplayName", "Can Use Transform Gizmo" },
		{ "ModuleRelativePath", "Private/EditorModeTool/EditorModeToolInstance.h" },
		{ "ToolTip", "Lets each tool determine if it wants to use the editor widget or not.  If the tool doesn't want to use it,\nit will be fed raw mouse delta information (not snapped or altered in any way)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorModeToolInstance_CanUseTransformGizmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorModeToolInstance, nullptr, "CanUseTransformGizmo", nullptr, nullptr, sizeof(EditorModeToolInstance_eventCanUseTransformGizmo_Parms), Z_Construct_UFunction_UEditorModeToolInstance_CanUseTransformGizmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_CanUseTransformGizmo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorModeToolInstance_CanUseTransformGizmo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_CanUseTransformGizmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorModeToolInstance_CanUseTransformGizmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorModeToolInstance_CanUseTransformGizmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorModeToolInstance_CanUseTransformGizmoByMode_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CheckMode;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEditorModeToolInstance_CanUseTransformGizmoByMode_Statics::NewProp_CheckMode = { "CheckMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorModeToolInstance_eventCanUseTransformGizmoByMode_Parms, CheckMode), Z_Construct_UEnum_EditorScriptingTools_ETransformGizmoMode, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorModeToolInstance_CanUseTransformGizmoByMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorModeToolInstance_eventCanUseTransformGizmoByMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorModeToolInstance_CanUseTransformGizmoByMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorModeToolInstance_eventCanUseTransformGizmoByMode_Parms), &Z_Construct_UFunction_UEditorModeToolInstance_CanUseTransformGizmoByMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorModeToolInstance_CanUseTransformGizmoByMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_CanUseTransformGizmoByMode_Statics::NewProp_CheckMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_CanUseTransformGizmoByMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorModeToolInstance_CanUseTransformGizmoByMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Mode" },
		{ "Comment", "/**\n\x09 * Lets each mode selectively exclude certain widget types.\n\x09 */" },
		{ "DisplayName", "Can Use Transform Gizmo By Mode" },
		{ "ModuleRelativePath", "Private/EditorModeTool/EditorModeToolInstance.h" },
		{ "ToolTip", "Lets each mode selectively exclude certain widget types." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorModeToolInstance_CanUseTransformGizmoByMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorModeToolInstance, nullptr, "CanUseTransformGizmoByMode", nullptr, nullptr, sizeof(EditorModeToolInstance_eventCanUseTransformGizmoByMode_Parms), Z_Construct_UFunction_UEditorModeToolInstance_CanUseTransformGizmoByMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_CanUseTransformGizmoByMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorModeToolInstance_CanUseTransformGizmoByMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_CanUseTransformGizmoByMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorModeToolInstance_CanUseTransformGizmoByMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorModeToolInstance_CanUseTransformGizmoByMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorModeToolInstance_CanUseViewportDragTool_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorModeToolInstance_CanUseViewportDragTool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorModeToolInstance_eventCanUseViewportDragTool_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorModeToolInstance_CanUseViewportDragTool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorModeToolInstance_eventCanUseViewportDragTool_Parms), &Z_Construct_UFunction_UEditorModeToolInstance_CanUseViewportDragTool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorModeToolInstance_CanUseViewportDragTool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_CanUseViewportDragTool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorModeToolInstance_CanUseViewportDragTool_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Mode" },
		{ "Comment", "/**\n\x09*  Allow or Disallow viewport drag tool for ViewportChange,BoxSelect,Measure and FrustumSelect operations\n\x09*  @return True if this mode allows the viewport to use a drag tool\n\x09*/" },
		{ "DisplayName", "Can Use Viewport Drag Tool" },
		{ "ModuleRelativePath", "Private/EditorModeTool/EditorModeToolInstance.h" },
		{ "ToolTip", "Allow or Disallow viewport drag tool for ViewportChange,BoxSelect,Measure and FrustumSelect operations\n@return True if this mode allows the viewport to use a drag tool" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorModeToolInstance_CanUseViewportDragTool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorModeToolInstance, nullptr, "CanUseViewportDragTool", nullptr, nullptr, sizeof(EditorModeToolInstance_eventCanUseViewportDragTool_Parms), Z_Construct_UFunction_UEditorModeToolInstance_CanUseViewportDragTool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_CanUseViewportDragTool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorModeToolInstance_CanUseViewportDragTool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_CanUseViewportDragTool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorModeToolInstance_CanUseViewportDragTool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorModeToolInstance_CanUseViewportDragTool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorModeToolInstance_ClearActiveHitProxy_Statics
	{
		struct EditorModeToolInstance_eventClearActiveHitProxy_Parms
		{
			FDummyStruct DrawPrimitivesContext;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DrawPrimitivesContext;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditorModeToolInstance_ClearActiveHitProxy_Statics::NewProp_DrawPrimitivesContext = { "DrawPrimitivesContext", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorModeToolInstance_eventClearActiveHitProxy_Parms, DrawPrimitivesContext), Z_Construct_UScriptStruct_FDummyStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorModeToolInstance_ClearActiveHitProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_ClearActiveHitProxy_Statics::NewProp_DrawPrimitivesContext,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorModeToolInstance_ClearActiveHitProxy_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Mode Tool | Level Viewport Scripting | Interaction" },
		{ "HideSelfPin", "true" },
		{ "ModuleRelativePath", "Private/EditorModeTool/EditorModeToolInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorModeToolInstance_ClearActiveHitProxy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorModeToolInstance, nullptr, "ClearActiveHitProxy", nullptr, nullptr, sizeof(EditorModeToolInstance_eventClearActiveHitProxy_Parms), Z_Construct_UFunction_UEditorModeToolInstance_ClearActiveHitProxy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_ClearActiveHitProxy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorModeToolInstance_ClearActiveHitProxy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_ClearActiveHitProxy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorModeToolInstance_ClearActiveHitProxy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorModeToolInstance_ClearActiveHitProxy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorModeToolInstance_CreateNewHitProxyByIndex_Statics
	{
		struct EditorModeToolInstance_eventCreateNewHitProxyByIndex_Parms
		{
			FDummyStruct DrawPrimitivesContext;
			int32 Index;
			EHitProxyPriorityType Priority;
			TEnumAsByte<EMouseCursor::Type> CursorType;
			bool bAllowsTranslucentPrimitives;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DrawPrimitivesContext;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Priority_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Priority;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CursorType;
		static void NewProp_bAllowsTranslucentPrimitives_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowsTranslucentPrimitives;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditorModeToolInstance_CreateNewHitProxyByIndex_Statics::NewProp_DrawPrimitivesContext = { "DrawPrimitivesContext", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorModeToolInstance_eventCreateNewHitProxyByIndex_Parms, DrawPrimitivesContext), Z_Construct_UScriptStruct_FDummyStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditorModeToolInstance_CreateNewHitProxyByIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorModeToolInstance_eventCreateNewHitProxyByIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEditorModeToolInstance_CreateNewHitProxyByIndex_Statics::NewProp_Priority_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEditorModeToolInstance_CreateNewHitProxyByIndex_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorModeToolInstance_eventCreateNewHitProxyByIndex_Parms, Priority), Z_Construct_UEnum_EditorScriptingTools_EHitProxyPriorityType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEditorModeToolInstance_CreateNewHitProxyByIndex_Statics::NewProp_CursorType = { "CursorType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorModeToolInstance_eventCreateNewHitProxyByIndex_Parms, CursorType), Z_Construct_UEnum_CoreUObject_EMouseCursor, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorModeToolInstance_CreateNewHitProxyByIndex_Statics::NewProp_bAllowsTranslucentPrimitives_SetBit(void* Obj)
	{
		((EditorModeToolInstance_eventCreateNewHitProxyByIndex_Parms*)Obj)->bAllowsTranslucentPrimitives = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorModeToolInstance_CreateNewHitProxyByIndex_Statics::NewProp_bAllowsTranslucentPrimitives = { "bAllowsTranslucentPrimitives", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorModeToolInstance_eventCreateNewHitProxyByIndex_Parms), &Z_Construct_UFunction_UEditorModeToolInstance_CreateNewHitProxyByIndex_Statics::NewProp_bAllowsTranslucentPrimitives_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorModeToolInstance_CreateNewHitProxyByIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_CreateNewHitProxyByIndex_Statics::NewProp_DrawPrimitivesContext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_CreateNewHitProxyByIndex_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_CreateNewHitProxyByIndex_Statics::NewProp_Priority_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_CreateNewHitProxyByIndex_Statics::NewProp_Priority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_CreateNewHitProxyByIndex_Statics::NewProp_CursorType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_CreateNewHitProxyByIndex_Statics::NewProp_bAllowsTranslucentPrimitives,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorModeToolInstance_CreateNewHitProxyByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Mode Tool | Level Viewport Scripting | Interaction" },
		{ "Comment", "/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n//~ Level Viewport Interaction\n" },
		{ "CPP_Default_bAllowsTranslucentPrimitives", "false" },
		{ "CPP_Default_CursorType", "Default" },
		{ "CPP_Default_Priority", "World" },
		{ "HideSelfPin", "true" },
		{ "ModuleRelativePath", "Private/EditorModeTool/EditorModeToolInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorModeToolInstance_CreateNewHitProxyByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorModeToolInstance, nullptr, "CreateNewHitProxyByIndex", nullptr, nullptr, sizeof(EditorModeToolInstance_eventCreateNewHitProxyByIndex_Parms), Z_Construct_UFunction_UEditorModeToolInstance_CreateNewHitProxyByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_CreateNewHitProxyByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorModeToolInstance_CreateNewHitProxyByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_CreateNewHitProxyByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorModeToolInstance_CreateNewHitProxyByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorModeToolInstance_CreateNewHitProxyByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorModeToolInstance_CustomizeTransformGizmoAxis_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentWidgetMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEditorModeToolInstance_CustomizeTransformGizmoAxis_Statics::NewProp_CurrentWidgetMode = { "CurrentWidgetMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorModeToolInstance_eventCustomizeTransformGizmoAxis_Parms, CurrentWidgetMode), Z_Construct_UEnum_EditorScriptingTools_ETransformGizmoMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEditorModeToolInstance_CustomizeTransformGizmoAxis_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorModeToolInstance_eventCustomizeTransformGizmoAxis_Parms, ReturnValue), Z_Construct_UEnum_EditorScriptingTools_ETransformGizmoAxisList, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorModeToolInstance_CustomizeTransformGizmoAxis_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_CustomizeTransformGizmoAxis_Statics::NewProp_CurrentWidgetMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_CustomizeTransformGizmoAxis_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorModeToolInstance_CustomizeTransformGizmoAxis_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Mode" },
		{ "Comment", "/**\n\x09 * Allows each mode to customize the axis pieces of the widget they want drawn.\n\x09 *\n\x09 * @param\x09InwidgetMode\x09The current widget mode\n\x09 *\n\x09 * @return\x09\x09\x09\x09\x09""A bitfield comprised of AXIS_* values\n\x09 */" },
		{ "DisplayName", "Customize Transform Gizmo Axis" },
		{ "ModuleRelativePath", "Private/EditorModeTool/EditorModeToolInstance.h" },
		{ "ToolTip", "Allows each mode to customize the axis pieces of the widget they want drawn.\n\n@param       InwidgetMode    The current widget mode\n\n@return                                      A bitfield comprised of AXIS_* values" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorModeToolInstance_CustomizeTransformGizmoAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorModeToolInstance, nullptr, "CustomizeTransformGizmoAxis", nullptr, nullptr, sizeof(EditorModeToolInstance_eventCustomizeTransformGizmoAxis_Parms), Z_Construct_UFunction_UEditorModeToolInstance_CustomizeTransformGizmoAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_CustomizeTransformGizmoAxis_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorModeToolInstance_CustomizeTransformGizmoAxis_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_CustomizeTransformGizmoAxis_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorModeToolInstance_CustomizeTransformGizmoAxis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorModeToolInstance_CustomizeTransformGizmoAxis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorModeToolInstance_DisallowMouseDeltaTracking_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorModeToolInstance_DisallowMouseDeltaTracking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorModeToolInstance_eventDisallowMouseDeltaTracking_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorModeToolInstance_DisallowMouseDeltaTracking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorModeToolInstance_eventDisallowMouseDeltaTracking_Parms), &Z_Construct_UFunction_UEditorModeToolInstance_DisallowMouseDeltaTracking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorModeToolInstance_DisallowMouseDeltaTracking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_DisallowMouseDeltaTracking_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorModeToolInstance_DisallowMouseDeltaTracking_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Mode" },
		{ "Comment", "/** If the Edmode is handling its own mouse deltas, it can disable the MouseDeltaTacker */" },
		{ "DisplayName", "Disallow Mouse Delta Tracking" },
		{ "ModuleRelativePath", "Private/EditorModeTool/EditorModeToolInstance.h" },
		{ "ToolTip", "If the Edmode is handling its own mouse deltas, it can disable the MouseDeltaTacker" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorModeToolInstance_DisallowMouseDeltaTracking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorModeToolInstance, nullptr, "DisallowMouseDeltaTracking", nullptr, nullptr, sizeof(EditorModeToolInstance_eventDisallowMouseDeltaTracking_Parms), Z_Construct_UFunction_UEditorModeToolInstance_DisallowMouseDeltaTracking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_DisallowMouseDeltaTracking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorModeToolInstance_DisallowMouseDeltaTracking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_DisallowMouseDeltaTracking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorModeToolInstance_DisallowMouseDeltaTracking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorModeToolInstance_DisallowMouseDeltaTracking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorModeToolInstance_GetActiveToolkitWidgetInstance_Statics
	{
		struct EditorModeToolInstance_eventGetActiveToolkitWidgetInstance_Parms
		{
			UEditorUserWidget* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorModeToolInstance_GetActiveToolkitWidgetInstance_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorModeToolInstance_GetActiveToolkitWidgetInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorModeToolInstance_eventGetActiveToolkitWidgetInstance_Parms, ReturnValue), Z_Construct_UClass_UEditorUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UEditorModeToolInstance_GetActiveToolkitWidgetInstance_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_GetActiveToolkitWidgetInstance_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorModeToolInstance_GetActiveToolkitWidgetInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_GetActiveToolkitWidgetInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorModeToolInstance_GetActiveToolkitWidgetInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Mode Tool | Widgets" },
		{ "Comment", "//*\n" },
		{ "HideSelfPin", "true" },
		{ "ModuleRelativePath", "Private/EditorModeTool/EditorModeToolInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorModeToolInstance_GetActiveToolkitWidgetInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorModeToolInstance, nullptr, "GetActiveToolkitWidgetInstance", nullptr, nullptr, sizeof(EditorModeToolInstance_eventGetActiveToolkitWidgetInstance_Parms), Z_Construct_UFunction_UEditorModeToolInstance_GetActiveToolkitWidgetInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_GetActiveToolkitWidgetInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorModeToolInstance_GetActiveToolkitWidgetInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_GetActiveToolkitWidgetInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorModeToolInstance_GetActiveToolkitWidgetInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorModeToolInstance_GetActiveToolkitWidgetInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorModeToolInstance_GetActiveViewportOverlayWidgetInstance_Statics
	{
		struct EditorModeToolInstance_eventGetActiveViewportOverlayWidgetInstance_Parms
		{
			UEditorUserWidget* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorModeToolInstance_GetActiveViewportOverlayWidgetInstance_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorModeToolInstance_GetActiveViewportOverlayWidgetInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorModeToolInstance_eventGetActiveViewportOverlayWidgetInstance_Parms, ReturnValue), Z_Construct_UClass_UEditorUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UEditorModeToolInstance_GetActiveViewportOverlayWidgetInstance_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_GetActiveViewportOverlayWidgetInstance_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorModeToolInstance_GetActiveViewportOverlayWidgetInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_GetActiveViewportOverlayWidgetInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorModeToolInstance_GetActiveViewportOverlayWidgetInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Mode Tool | Widgets" },
		{ "HideSelfPin", "true" },
		{ "ModuleRelativePath", "Private/EditorModeTool/EditorModeToolInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorModeToolInstance_GetActiveViewportOverlayWidgetInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorModeToolInstance, nullptr, "GetActiveViewportOverlayWidgetInstance", nullptr, nullptr, sizeof(EditorModeToolInstance_eventGetActiveViewportOverlayWidgetInstance_Parms), Z_Construct_UFunction_UEditorModeToolInstance_GetActiveViewportOverlayWidgetInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_GetActiveViewportOverlayWidgetInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorModeToolInstance_GetActiveViewportOverlayWidgetInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_GetActiveViewportOverlayWidgetInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorModeToolInstance_GetActiveViewportOverlayWidgetInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorModeToolInstance_GetActiveViewportOverlayWidgetInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorModeToolInstance_HandleClickHitProxy_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitProxyHandle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewportClick_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ViewportClick;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditorModeToolInstance_HandleClickHitProxy_Statics::NewProp_HitProxyHandle = { "HitProxyHandle", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorModeToolInstance_eventHandleClickHitProxy_Parms, HitProxyHandle), Z_Construct_UScriptStruct_FHitProxyHandle, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorModeToolInstance_HandleClickHitProxy_Statics::NewProp_ViewportClick_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditorModeToolInstance_HandleClickHitProxy_Statics::NewProp_ViewportClick = { "ViewportClick", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorModeToolInstance_eventHandleClickHitProxy_Parms, ViewportClick), Z_Construct_UScriptStruct_FLevelEditingViewportClick, METADATA_PARAMS(Z_Construct_UFunction_UEditorModeToolInstance_HandleClickHitProxy_Statics::NewProp_ViewportClick_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_HandleClickHitProxy_Statics::NewProp_ViewportClick_MetaData)) };
	void Z_Construct_UFunction_UEditorModeToolInstance_HandleClickHitProxy_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorModeToolInstance_eventHandleClickHitProxy_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorModeToolInstance_HandleClickHitProxy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorModeToolInstance_eventHandleClickHitProxy_Parms), &Z_Construct_UFunction_UEditorModeToolInstance_HandleClickHitProxy_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorModeToolInstance_HandleClickHitProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_HandleClickHitProxy_Statics::NewProp_HitProxyHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_HandleClickHitProxy_Statics::NewProp_ViewportClick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_HandleClickHitProxy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorModeToolInstance_HandleClickHitProxy_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Mode | Input" },
		{ "DisplayName", "Handle Indexed Hit Proxy Click" },
		{ "ModuleRelativePath", "Private/EditorModeTool/EditorModeToolInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorModeToolInstance_HandleClickHitProxy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorModeToolInstance, nullptr, "HandleClickHitProxy", nullptr, nullptr, sizeof(EditorModeToolInstance_eventHandleClickHitProxy_Parms), Z_Construct_UFunction_UEditorModeToolInstance_HandleClickHitProxy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_HandleClickHitProxy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorModeToolInstance_HandleClickHitProxy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_HandleClickHitProxy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorModeToolInstance_HandleClickHitProxy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorModeToolInstance_HandleClickHitProxy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorModeToolInstance_HandleInputAxis_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ControllerId;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Delta;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditorModeToolInstance_HandleInputAxis_Statics::NewProp_ControllerId = { "ControllerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorModeToolInstance_eventHandleInputAxis_Parms, ControllerId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditorModeToolInstance_HandleInputAxis_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorModeToolInstance_eventHandleInputAxis_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEditorModeToolInstance_HandleInputAxis_Statics::NewProp_Delta = { "Delta", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorModeToolInstance_eventHandleInputAxis_Parms, Delta), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEditorModeToolInstance_HandleInputAxis_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorModeToolInstance_eventHandleInputAxis_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorModeToolInstance_HandleInputAxis_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorModeToolInstance_eventHandleInputAxis_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorModeToolInstance_HandleInputAxis_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorModeToolInstance_eventHandleInputAxis_Parms), &Z_Construct_UFunction_UEditorModeToolInstance_HandleInputAxis_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorModeToolInstance_HandleInputAxis_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_HandleInputAxis_Statics::NewProp_ControllerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_HandleInputAxis_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_HandleInputAxis_Statics::NewProp_Delta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_HandleInputAxis_Statics::NewProp_DeltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_HandleInputAxis_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorModeToolInstance_HandleInputAxis_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Mode | Input" },
		{ "Comment", "/**\n\x09* Check an axis movement received by the viewport.\n\x09* If the viewport client uses the movement, it should return true to consume it.\n\x09*\n\x09* @param\x09""ControllerId  The controller which the axis movement is from.\n\x09* @param\x09Key  The name of the axis which moved.\n\x09* @param\x09""Delta  The axis movement delta.\n\x09* @param\x09""DeltaTime  The time since the last axis update.\n\x09* @return\x09True to consume the axis movement, false to pass it on.\n\x09*/" },
		{ "DisplayName", "Handle Input Axis" },
		{ "ModuleRelativePath", "Private/EditorModeTool/EditorModeToolInstance.h" },
		{ "ToolTip", "Check an axis movement received by the viewport.\nIf the viewport client uses the movement, it should return true to consume it.\n\n@param        ControllerId  The controller which the axis movement is from.\n@param        Key  The name of the axis which moved.\n@param        Delta  The axis movement delta.\n@param        DeltaTime  The time since the last axis update.\n@return       True to consume the axis movement, false to pass it on." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorModeToolInstance_HandleInputAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorModeToolInstance, nullptr, "HandleInputAxis", nullptr, nullptr, sizeof(EditorModeToolInstance_eventHandleInputAxis_Parms), Z_Construct_UFunction_UEditorModeToolInstance_HandleInputAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_HandleInputAxis_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorModeToolInstance_HandleInputAxis_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_HandleInputAxis_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorModeToolInstance_HandleInputAxis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorModeToolInstance_HandleInputAxis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorModeToolInstance_HandleInputKey_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Event_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Event;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditorModeToolInstance_HandleInputKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorModeToolInstance_eventHandleInputKey_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEditorModeToolInstance_HandleInputKey_Statics::NewProp_Event_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEditorModeToolInstance_HandleInputKey_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorModeToolInstance_eventHandleInputKey_Parms, Event), Z_Construct_UEnum_EditorScriptingTools_EInputKeyEventType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorModeToolInstance_HandleInputKey_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorModeToolInstance_eventHandleInputKey_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorModeToolInstance_HandleInputKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorModeToolInstance_eventHandleInputKey_Parms), &Z_Construct_UFunction_UEditorModeToolInstance_HandleInputKey_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorModeToolInstance_HandleInputKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_HandleInputKey_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_HandleInputKey_Statics::NewProp_Event_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_HandleInputKey_Statics::NewProp_Event,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_HandleInputKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorModeToolInstance_HandleInputKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Mode | Input" },
		{ "Comment", "/**\n\x09 * Check a key event received by the viewport.\n\x09 * If the viewport client uses the event, it should return true to consume it.\n\x09 *\n\x09 * @param\x09Key  The name of the pressed/released key.\n\x09 * @param\x09""Event  The Input event.\n\x09 * @return\x09True to consume the key event, false to pass it on.\n\x09 */" },
		{ "DisplayName", "Handle Input Key" },
		{ "ModuleRelativePath", "Private/EditorModeTool/EditorModeToolInstance.h" },
		{ "ToolTip", "Check a key event received by the viewport.\nIf the viewport client uses the event, it should return true to consume it.\n\n@param       Key  The name of the pressed/released key.\n@param       Event  The Input event.\n@return      True to consume the key event, false to pass it on." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorModeToolInstance_HandleInputKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorModeToolInstance, nullptr, "HandleInputKey", nullptr, nullptr, sizeof(EditorModeToolInstance_eventHandleInputKey_Parms), Z_Construct_UFunction_UEditorModeToolInstance_HandleInputKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_HandleInputKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorModeToolInstance_HandleInputKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_HandleInputKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorModeToolInstance_HandleInputKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorModeToolInstance_HandleInputKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorModeToolInstance_HandleMouseTrackingEnd_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorModeToolInstance_HandleMouseTrackingEnd_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorModeToolInstance_eventHandleMouseTrackingEnd_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorModeToolInstance_HandleMouseTrackingEnd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorModeToolInstance_eventHandleMouseTrackingEnd_Parms), &Z_Construct_UFunction_UEditorModeToolInstance_HandleMouseTrackingEnd_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorModeToolInstance_HandleMouseTrackingEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_HandleMouseTrackingEnd_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorModeToolInstance_HandleMouseTrackingEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Mode | Input" },
		{ "Comment", "/** Called when a mouse button is released. */" },
		{ "DisplayName", "Handle Mouse Tracking End" },
		{ "ModuleRelativePath", "Private/EditorModeTool/EditorModeToolInstance.h" },
		{ "ToolTip", "Called when a mouse button is released." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorModeToolInstance_HandleMouseTrackingEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorModeToolInstance, nullptr, "HandleMouseTrackingEnd", nullptr, nullptr, sizeof(EditorModeToolInstance_eventHandleMouseTrackingEnd_Parms), Z_Construct_UFunction_UEditorModeToolInstance_HandleMouseTrackingEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_HandleMouseTrackingEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorModeToolInstance_HandleMouseTrackingEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_HandleMouseTrackingEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorModeToolInstance_HandleMouseTrackingEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorModeToolInstance_HandleMouseTrackingEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorModeToolInstance_HandleMouseTrackingStart_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorModeToolInstance_HandleMouseTrackingStart_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorModeToolInstance_eventHandleMouseTrackingStart_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorModeToolInstance_HandleMouseTrackingStart_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorModeToolInstance_eventHandleMouseTrackingStart_Parms), &Z_Construct_UFunction_UEditorModeToolInstance_HandleMouseTrackingStart_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorModeToolInstance_HandleMouseTrackingStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_HandleMouseTrackingStart_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorModeToolInstance_HandleMouseTrackingStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Mode | Input" },
		{ "Comment", "/** Called when a mouse button is pressed. */" },
		{ "DisplayName", "Handle Mouse Tracking Start" },
		{ "ModuleRelativePath", "Private/EditorModeTool/EditorModeToolInstance.h" },
		{ "ToolTip", "Called when a mouse button is pressed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorModeToolInstance_HandleMouseTrackingStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorModeToolInstance, nullptr, "HandleMouseTrackingStart", nullptr, nullptr, sizeof(EditorModeToolInstance_eventHandleMouseTrackingStart_Parms), Z_Construct_UFunction_UEditorModeToolInstance_HandleMouseTrackingStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_HandleMouseTrackingStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorModeToolInstance_HandleMouseTrackingStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_HandleMouseTrackingStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorModeToolInstance_HandleMouseTrackingStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorModeToolInstance_HandleMouseTrackingStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorModeToolInstance_HandleSelectionBox_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InBox;
		static void NewProp_InSelect_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InSelect;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditorModeToolInstance_HandleSelectionBox_Statics::NewProp_InBox = { "InBox", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorModeToolInstance_eventHandleSelectionBox_Parms, InBox), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorModeToolInstance_HandleSelectionBox_Statics::NewProp_InSelect_SetBit(void* Obj)
	{
		((EditorModeToolInstance_eventHandleSelectionBox_Parms*)Obj)->InSelect = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorModeToolInstance_HandleSelectionBox_Statics::NewProp_InSelect = { "InSelect", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorModeToolInstance_eventHandleSelectionBox_Parms), &Z_Construct_UFunction_UEditorModeToolInstance_HandleSelectionBox_Statics::NewProp_InSelect_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorModeToolInstance_HandleSelectionBox_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorModeToolInstance_eventHandleSelectionBox_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorModeToolInstance_HandleSelectionBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorModeToolInstance_eventHandleSelectionBox_Parms), &Z_Construct_UFunction_UEditorModeToolInstance_HandleSelectionBox_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorModeToolInstance_HandleSelectionBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_HandleSelectionBox_Statics::NewProp_InBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_HandleSelectionBox_Statics::NewProp_InSelect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_HandleSelectionBox_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorModeToolInstance_HandleSelectionBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Mode" },
		{ "Comment", "/**\n\x09 * Lets each mode/tool handle box selection in its own way.\n\x09 *\n\x09 * @param\x09InBox\x09The selection box to use, in worldspace coordinates.\n\x09 * @return\x09\x09true if something was selected/deselected, false otherwise.\n\x09 */" },
		{ "DisplayName", "Handle Selection Box" },
		{ "ModuleRelativePath", "Private/EditorModeTool/EditorModeToolInstance.h" },
		{ "ToolTip", "Lets each mode/tool handle box selection in its own way.\n\n@param       InBox   The selection box to use, in worldspace coordinates.\n@return              true if something was selected/deselected, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorModeToolInstance_HandleSelectionBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorModeToolInstance, nullptr, "HandleSelectionBox", nullptr, nullptr, sizeof(EditorModeToolInstance_eventHandleSelectionBox_Parms), Z_Construct_UFunction_UEditorModeToolInstance_HandleSelectionBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_HandleSelectionBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorModeToolInstance_HandleSelectionBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_HandleSelectionBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorModeToolInstance_HandleSelectionBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorModeToolInstance_HandleSelectionBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorModeToolInstance_HandleSelectionFrustum_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InFrustum_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InFrustum;
		static void NewProp_InSelect_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InSelect;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorModeToolInstance_HandleSelectionFrustum_Statics::NewProp_InFrustum_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditorModeToolInstance_HandleSelectionFrustum_Statics::NewProp_InFrustum = { "InFrustum", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorModeToolInstance_eventHandleSelectionFrustum_Parms, InFrustum), Z_Construct_UScriptStruct_FSelectionFrustumVolume, METADATA_PARAMS(Z_Construct_UFunction_UEditorModeToolInstance_HandleSelectionFrustum_Statics::NewProp_InFrustum_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_HandleSelectionFrustum_Statics::NewProp_InFrustum_MetaData)) };
	void Z_Construct_UFunction_UEditorModeToolInstance_HandleSelectionFrustum_Statics::NewProp_InSelect_SetBit(void* Obj)
	{
		((EditorModeToolInstance_eventHandleSelectionFrustum_Parms*)Obj)->InSelect = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorModeToolInstance_HandleSelectionFrustum_Statics::NewProp_InSelect = { "InSelect", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorModeToolInstance_eventHandleSelectionFrustum_Parms), &Z_Construct_UFunction_UEditorModeToolInstance_HandleSelectionFrustum_Statics::NewProp_InSelect_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorModeToolInstance_HandleSelectionFrustum_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorModeToolInstance_eventHandleSelectionFrustum_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorModeToolInstance_HandleSelectionFrustum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorModeToolInstance_eventHandleSelectionFrustum_Parms), &Z_Construct_UFunction_UEditorModeToolInstance_HandleSelectionFrustum_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorModeToolInstance_HandleSelectionFrustum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_HandleSelectionFrustum_Statics::NewProp_InFrustum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_HandleSelectionFrustum_Statics::NewProp_InSelect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_HandleSelectionFrustum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorModeToolInstance_HandleSelectionFrustum_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Mode" },
		{ "Comment", "/**\n\x09 * Lets each mode/tool handle frustum selection in its own way.\n\x09 *\n\x09 * @param\x09InFrustum\x09The selection box to use, in worldspace coordinates.\n\x09 * @return\x09true if something was selected/deselected, false otherwise.\n\x09 */" },
		{ "DisplayName", "Handle Selection Frustum" },
		{ "ModuleRelativePath", "Private/EditorModeTool/EditorModeToolInstance.h" },
		{ "ToolTip", "Lets each mode/tool handle frustum selection in its own way.\n\n@param       InFrustum       The selection box to use, in worldspace coordinates.\n@return      true if something was selected/deselected, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorModeToolInstance_HandleSelectionFrustum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorModeToolInstance, nullptr, "HandleSelectionFrustum", nullptr, nullptr, sizeof(EditorModeToolInstance_eventHandleSelectionFrustum_Parms), Z_Construct_UFunction_UEditorModeToolInstance_HandleSelectionFrustum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_HandleSelectionFrustum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorModeToolInstance_HandleSelectionFrustum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_HandleSelectionFrustum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorModeToolInstance_HandleSelectionFrustum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorModeToolInstance_HandleSelectionFrustum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorModeToolInstance_HandleWidgetMove_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Drag;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DeltaRotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DeltaScale;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditorModeToolInstance_HandleWidgetMove_Statics::NewProp_Drag = { "Drag", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorModeToolInstance_eventHandleWidgetMove_Parms, Drag), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditorModeToolInstance_HandleWidgetMove_Statics::NewProp_DeltaRotation = { "DeltaRotation", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorModeToolInstance_eventHandleWidgetMove_Parms, DeltaRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditorModeToolInstance_HandleWidgetMove_Statics::NewProp_DeltaScale = { "DeltaScale", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorModeToolInstance_eventHandleWidgetMove_Parms, DeltaScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorModeToolInstance_HandleWidgetMove_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorModeToolInstance_eventHandleWidgetMove_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorModeToolInstance_HandleWidgetMove_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorModeToolInstance_eventHandleWidgetMove_Parms), &Z_Construct_UFunction_UEditorModeToolInstance_HandleWidgetMove_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorModeToolInstance_HandleWidgetMove_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_HandleWidgetMove_Statics::NewProp_Drag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_HandleWidgetMove_Statics::NewProp_DeltaRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_HandleWidgetMove_Statics::NewProp_DeltaScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_HandleWidgetMove_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorModeToolInstance_HandleWidgetMove_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Mode | Input" },
		{ "Comment", "/**\n\x09 * Called to give the viewport client a chance to handle widgets being moved\n\x09 *\n\x09 * @param Drag\x09\x09\x09\x09\x09The amount the widget was translated (the value depends on the coordinate system of the widget.  See GetGizmoCustomCoordinateSystem )\n\x09 * @param DeltaRotation\x09\x09\x09The amount the widget was rotated  (the value depends on the coordinate system of the widget.  See GetGizmoCustomCoordinateSystem )\n\x09 * @param DeltaScale\x09\x09\x09The amount the widget was scaled (the value depends on the coordinate system of the widget.  See GetGizmoCustomCoordinateSystem )\n\x09 * @return\x09True to consume the widget movement, false to pass it on.\n\x09 */" },
		{ "DisplayName", "Handle Widget Move" },
		{ "ModuleRelativePath", "Private/EditorModeTool/EditorModeToolInstance.h" },
		{ "ToolTip", "Called to give the viewport client a chance to handle widgets being moved\n\n@param Drag                                  The amount the widget was translated (the value depends on the coordinate system of the widget.  See GetGizmoCustomCoordinateSystem )\n@param DeltaRotation                 The amount the widget was rotated  (the value depends on the coordinate system of the widget.  See GetGizmoCustomCoordinateSystem )\n@param DeltaScale                    The amount the widget was scaled (the value depends on the coordinate system of the widget.  See GetGizmoCustomCoordinateSystem )\n@return      True to consume the widget movement, false to pass it on." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorModeToolInstance_HandleWidgetMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorModeToolInstance, nullptr, "HandleWidgetMove", nullptr, nullptr, sizeof(EditorModeToolInstance_eventHandleWidgetMove_Parms), Z_Construct_UFunction_UEditorModeToolInstance_HandleWidgetMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_HandleWidgetMove_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorModeToolInstance_HandleWidgetMove_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_HandleWidgetMove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorModeToolInstance_HandleWidgetMove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorModeToolInstance_HandleWidgetMove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorModeToolInstance_NotifyActorMoved_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorModeToolInstance_NotifyActorMoved_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Mode" },
		{ "Comment", "/** Called when the currently selected actor has been moved , rotated or scaled */" },
		{ "DisplayName", "Notify Actor Moved" },
		{ "ModuleRelativePath", "Private/EditorModeTool/EditorModeToolInstance.h" },
		{ "ToolTip", "Called when the currently selected actor has been moved , rotated or scaled" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorModeToolInstance_NotifyActorMoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorModeToolInstance, nullptr, "NotifyActorMoved", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorModeToolInstance_NotifyActorMoved_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_NotifyActorMoved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorModeToolInstance_NotifyActorMoved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorModeToolInstance_NotifyActorMoved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorModeToolInstance_NotifyActorPropertyChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorModeToolInstance_NotifyActorPropertyChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Mode" },
		{ "DisplayName", "Notify Actor Property Changed" },
		{ "ModuleRelativePath", "Private/EditorModeTool/EditorModeToolInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorModeToolInstance_NotifyActorPropertyChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorModeToolInstance, nullptr, "NotifyActorPropertyChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorModeToolInstance_NotifyActorPropertyChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_NotifyActorPropertyChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorModeToolInstance_NotifyActorPropertyChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorModeToolInstance_NotifyActorPropertyChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorModeToolInstance_NotifyActorsDuplicated_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreDuplicateSelection_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PreDuplicateSelection;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PostDuplicateSelection_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PostDuplicateSelection;
		static void NewProp_bOffsetLocations_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOffsetLocations;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorModeToolInstance_NotifyActorsDuplicated_Statics::NewProp_PreDuplicateSelection_Inner = { "PreDuplicateSelection", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorModeToolInstance_NotifyActorsDuplicated_Statics::NewProp_PreDuplicateSelection = { "PreDuplicateSelection", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorModeToolInstance_eventNotifyActorsDuplicated_Parms, PreDuplicateSelection), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorModeToolInstance_NotifyActorsDuplicated_Statics::NewProp_PostDuplicateSelection_Inner = { "PostDuplicateSelection", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorModeToolInstance_NotifyActorsDuplicated_Statics::NewProp_PostDuplicateSelection = { "PostDuplicateSelection", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorModeToolInstance_eventNotifyActorsDuplicated_Parms, PostDuplicateSelection), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorModeToolInstance_NotifyActorsDuplicated_Statics::NewProp_bOffsetLocations_SetBit(void* Obj)
	{
		((EditorModeToolInstance_eventNotifyActorsDuplicated_Parms*)Obj)->bOffsetLocations = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorModeToolInstance_NotifyActorsDuplicated_Statics::NewProp_bOffsetLocations = { "bOffsetLocations", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorModeToolInstance_eventNotifyActorsDuplicated_Parms), &Z_Construct_UFunction_UEditorModeToolInstance_NotifyActorsDuplicated_Statics::NewProp_bOffsetLocations_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorModeToolInstance_NotifyActorsDuplicated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_NotifyActorsDuplicated_Statics::NewProp_PreDuplicateSelection_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_NotifyActorsDuplicated_Statics::NewProp_PreDuplicateSelection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_NotifyActorsDuplicated_Statics::NewProp_PostDuplicateSelection_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_NotifyActorsDuplicated_Statics::NewProp_PostDuplicateSelection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_NotifyActorsDuplicated_Statics::NewProp_bOffsetLocations,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorModeToolInstance_NotifyActorsDuplicated_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Mode" },
		{ "Comment", "/** Called when the currently selected actors have been duplicated */" },
		{ "DisplayName", "Notify Actors Duplicated" },
		{ "ModuleRelativePath", "Private/EditorModeTool/EditorModeToolInstance.h" },
		{ "ToolTip", "Called when the currently selected actors have been duplicated" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorModeToolInstance_NotifyActorsDuplicated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorModeToolInstance, nullptr, "NotifyActorsDuplicated", nullptr, nullptr, sizeof(EditorModeToolInstance_eventNotifyActorsDuplicated_Parms), Z_Construct_UFunction_UEditorModeToolInstance_NotifyActorsDuplicated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_NotifyActorsDuplicated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorModeToolInstance_NotifyActorsDuplicated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_NotifyActorsDuplicated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorModeToolInstance_NotifyActorsDuplicated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorModeToolInstance_NotifyActorsDuplicated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorModeToolInstance_NotifyActorSelectionChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorModeToolInstance_NotifyActorSelectionChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Mode" },
		{ "DisplayName", "Notify Actor Selection Changed" },
		{ "ModuleRelativePath", "Private/EditorModeTool/EditorModeToolInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorModeToolInstance_NotifyActorSelectionChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorModeToolInstance, nullptr, "NotifyActorSelectionChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorModeToolInstance_NotifyActorSelectionChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_NotifyActorSelectionChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorModeToolInstance_NotifyActorSelectionChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorModeToolInstance_NotifyActorSelectionChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorModeToolInstance_OnEditingViewportChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorModeToolInstance_OnEditingViewportChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Mode" },
		{ "DisplayName", "On Editing Viewport Changed" },
		{ "ModuleRelativePath", "Private/EditorModeTool/EditorModeToolInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorModeToolInstance_OnEditingViewportChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorModeToolInstance, nullptr, "OnEditingViewportChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorModeToolInstance_OnEditingViewportChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_OnEditingViewportChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorModeToolInstance_OnEditingViewportChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorModeToolInstance_OnEditingViewportChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorModeToolInstance_OnExecuteUserDefinedAction_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActionsAsset;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ActionAsByte;
		static void NewProp_bIsRepeated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsRepeated;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorModeToolInstance_OnExecuteUserDefinedAction_Statics::NewProp_ActionsAsset = { "ActionsAsset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorModeToolInstance_eventOnExecuteUserDefinedAction_Parms, ActionsAsset), Z_Construct_UClass_UEditorUserDefinedActions_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEditorModeToolInstance_OnExecuteUserDefinedAction_Statics::NewProp_ActionAsByte = { "ActionAsByte", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorModeToolInstance_eventOnExecuteUserDefinedAction_Parms, ActionAsByte), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorModeToolInstance_OnExecuteUserDefinedAction_Statics::NewProp_bIsRepeated_SetBit(void* Obj)
	{
		((EditorModeToolInstance_eventOnExecuteUserDefinedAction_Parms*)Obj)->bIsRepeated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorModeToolInstance_OnExecuteUserDefinedAction_Statics::NewProp_bIsRepeated = { "bIsRepeated", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorModeToolInstance_eventOnExecuteUserDefinedAction_Parms), &Z_Construct_UFunction_UEditorModeToolInstance_OnExecuteUserDefinedAction_Statics::NewProp_bIsRepeated_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorModeToolInstance_OnExecuteUserDefinedAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_OnExecuteUserDefinedAction_Statics::NewProp_ActionsAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_OnExecuteUserDefinedAction_Statics::NewProp_ActionAsByte,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_OnExecuteUserDefinedAction_Statics::NewProp_bIsRepeated,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorModeToolInstance_OnExecuteUserDefinedAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Mode | Input" },
		{ "DisplayName", "On Execute User Defined Action" },
		{ "ModuleRelativePath", "Private/EditorModeTool/EditorModeToolInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorModeToolInstance_OnExecuteUserDefinedAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorModeToolInstance, nullptr, "OnExecuteUserDefinedAction", nullptr, nullptr, sizeof(EditorModeToolInstance_eventOnExecuteUserDefinedAction_Parms), Z_Construct_UFunction_UEditorModeToolInstance_OnExecuteUserDefinedAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_OnExecuteUserDefinedAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorModeToolInstance_OnExecuteUserDefinedAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_OnExecuteUserDefinedAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorModeToolInstance_OnExecuteUserDefinedAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorModeToolInstance_OnExecuteUserDefinedAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorModeToolInstance_OnFocusLost_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorModeToolInstance_OnFocusLost_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Mode | Input" },
		{ "Comment", "/** Called when the viewport loses keyboard focus.*/" },
		{ "DisplayName", "On Focus Lost" },
		{ "ModuleRelativePath", "Private/EditorModeTool/EditorModeToolInstance.h" },
		{ "ToolTip", "Called when the viewport loses keyboard focus." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorModeToolInstance_OnFocusLost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorModeToolInstance, nullptr, "OnFocusLost", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorModeToolInstance_OnFocusLost_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_OnFocusLost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorModeToolInstance_OnFocusLost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorModeToolInstance_OnFocusLost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorModeToolInstance_OnFocusReceived_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorModeToolInstance_OnFocusReceived_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Mode | Input" },
		{ "Comment", "/** Called when the viewport gains keyboard focus. */" },
		{ "DisplayName", "On Focus Received" },
		{ "ModuleRelativePath", "Private/EditorModeTool/EditorModeToolInstance.h" },
		{ "ToolTip", "Called when the viewport gains keyboard focus." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorModeToolInstance_OnFocusReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorModeToolInstance, nullptr, "OnFocusReceived", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorModeToolInstance_OnFocusReceived_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_OnFocusReceived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorModeToolInstance_OnFocusReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorModeToolInstance_OnFocusReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorModeToolInstance_OnMouseEnter_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MouseX;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MouseY;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditorModeToolInstance_OnMouseEnter_Statics::NewProp_MouseX = { "MouseX", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorModeToolInstance_eventOnMouseEnter_Parms, MouseX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditorModeToolInstance_OnMouseEnter_Statics::NewProp_MouseY = { "MouseY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorModeToolInstance_eventOnMouseEnter_Parms, MouseY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorModeToolInstance_OnMouseEnter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_OnMouseEnter_Statics::NewProp_MouseX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_OnMouseEnter_Statics::NewProp_MouseY,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorModeToolInstance_OnMouseEnter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Mode | Input | Mouse" },
		{ "Comment", "/* Called when the cursor has entered the level editor viewport.*/" },
		{ "DisplayName", "On Mouse Enter" },
		{ "ModuleRelativePath", "Private/EditorModeTool/EditorModeToolInstance.h" },
		{ "ToolTip", "Called when the cursor has entered the level editor viewport." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorModeToolInstance_OnMouseEnter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorModeToolInstance, nullptr, "OnMouseEnter", nullptr, nullptr, sizeof(EditorModeToolInstance_eventOnMouseEnter_Parms), Z_Construct_UFunction_UEditorModeToolInstance_OnMouseEnter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_OnMouseEnter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorModeToolInstance_OnMouseEnter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_OnMouseEnter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorModeToolInstance_OnMouseEnter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorModeToolInstance_OnMouseEnter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorModeToolInstance_OnMouseLeave_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorModeToolInstance_OnMouseLeave_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Mode | Input | Mouse" },
		{ "Comment", "/* Called when the cursor has left the level editor viewport.*/" },
		{ "DisplayName", "On Mouse Leave" },
		{ "ModuleRelativePath", "Private/EditorModeTool/EditorModeToolInstance.h" },
		{ "ToolTip", "Called when the cursor has left the level editor viewport." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorModeToolInstance_OnMouseLeave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorModeToolInstance, nullptr, "OnMouseLeave", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorModeToolInstance_OnMouseLeave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_OnMouseLeave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorModeToolInstance_OnMouseLeave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorModeToolInstance_OnMouseLeave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorModeToolInstance_OnMouseMove_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MouseX;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MouseY;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditorModeToolInstance_OnMouseMove_Statics::NewProp_MouseX = { "MouseX", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorModeToolInstance_eventOnMouseMove_Parms, MouseX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditorModeToolInstance_OnMouseMove_Statics::NewProp_MouseY = { "MouseY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorModeToolInstance_eventOnMouseMove_Parms, MouseY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorModeToolInstance_OnMouseMove_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_OnMouseMove_Statics::NewProp_MouseX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_OnMouseMove_Statics::NewProp_MouseY,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorModeToolInstance_OnMouseMove_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Mode | Input | Mouse" },
		{ "Comment", "/* Called when the cursor is moved within the level editor viewport.*/" },
		{ "DisplayName", "On Mouse Move" },
		{ "ModuleRelativePath", "Private/EditorModeTool/EditorModeToolInstance.h" },
		{ "ToolTip", "Called when the cursor is moved within the level editor viewport." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorModeToolInstance_OnMouseMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorModeToolInstance, nullptr, "OnMouseMove", nullptr, nullptr, sizeof(EditorModeToolInstance_eventOnMouseMove_Parms), Z_Construct_UFunction_UEditorModeToolInstance_OnMouseMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_OnMouseMove_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorModeToolInstance_OnMouseMove_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_OnMouseMove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorModeToolInstance_OnMouseMove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorModeToolInstance_OnMouseMove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorModeToolInstance_OnMouseMoveCaptured_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MouseX;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MouseY;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditorModeToolInstance_OnMouseMoveCaptured_Statics::NewProp_MouseX = { "MouseX", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorModeToolInstance_eventOnMouseMoveCaptured_Parms, MouseX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditorModeToolInstance_OnMouseMoveCaptured_Statics::NewProp_MouseY = { "MouseY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorModeToolInstance_eventOnMouseMoveCaptured_Parms, MouseY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorModeToolInstance_OnMouseMoveCaptured_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_OnMouseMoveCaptured_Statics::NewProp_MouseX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_OnMouseMoveCaptured_Statics::NewProp_MouseY,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorModeToolInstance_OnMouseMoveCaptured_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Mode | Input | Mouse" },
		{ "Comment", "/**\n\x09* Called when the mouse is moved while a window input capture is in effect\n\x09*\n\x09* @param  MouseX  New mouse cursor X coordinate\n\x09* @param  MouseY  New mouse cursor Y coordinate\n\x09* @return  true if input was handled\n\x09*/" },
		{ "DisplayName", "On Mouse Move Captured" },
		{ "ModuleRelativePath", "Private/EditorModeTool/EditorModeToolInstance.h" },
		{ "ToolTip", "Called when the mouse is moved while a window input capture is in effect\n\n@param  MouseX  New mouse cursor X coordinate\n@param  MouseY  New mouse cursor Y coordinate\n@return  true if input was handled" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorModeToolInstance_OnMouseMoveCaptured_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorModeToolInstance, nullptr, "OnMouseMoveCaptured", nullptr, nullptr, sizeof(EditorModeToolInstance_eventOnMouseMoveCaptured_Parms), Z_Construct_UFunction_UEditorModeToolInstance_OnMouseMoveCaptured_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_OnMouseMoveCaptured_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorModeToolInstance_OnMouseMoveCaptured_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_OnMouseMoveCaptured_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorModeToolInstance_OnMouseMoveCaptured()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorModeToolInstance_OnMouseMoveCaptured_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorModeToolInstance_OnMouseMovesCaptured_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MouseMoves_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MouseMoves_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MouseMoves;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditorModeToolInstance_OnMouseMovesCaptured_Statics::NewProp_MouseMoves_Inner = { "MouseMoves", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorModeToolInstance_OnMouseMovesCaptured_Statics::NewProp_MouseMoves_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorModeToolInstance_OnMouseMovesCaptured_Statics::NewProp_MouseMoves = { "MouseMoves", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorModeToolInstance_eventOnMouseMovesCaptured_Parms, MouseMoves), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UEditorModeToolInstance_OnMouseMovesCaptured_Statics::NewProp_MouseMoves_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_OnMouseMovesCaptured_Statics::NewProp_MouseMoves_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorModeToolInstance_OnMouseMovesCaptured_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_OnMouseMovesCaptured_Statics::NewProp_MouseMoves_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_OnMouseMovesCaptured_Statics::NewProp_MouseMoves,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorModeToolInstance_OnMouseMovesCaptured_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Mode | Input | Mouse" },
		{ "Comment", "/** Process all captured mouse moves that occurred during the current frame */" },
		{ "DisplayName", "On Mouse Moves Captured" },
		{ "ModuleRelativePath", "Private/EditorModeTool/EditorModeToolInstance.h" },
		{ "ToolTip", "Process all captured mouse moves that occurred during the current frame" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorModeToolInstance_OnMouseMovesCaptured_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorModeToolInstance, nullptr, "OnMouseMovesCaptured", nullptr, nullptr, sizeof(EditorModeToolInstance_eventOnMouseMovesCaptured_Parms), Z_Construct_UFunction_UEditorModeToolInstance_OnMouseMovesCaptured_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_OnMouseMovesCaptured_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorModeToolInstance_OnMouseMovesCaptured_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_OnMouseMovesCaptured_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorModeToolInstance_OnMouseMovesCaptured()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorModeToolInstance_OnMouseMovesCaptured_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorModeToolInstance_OnPostUndo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorModeToolInstance_OnPostUndo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Mode" },
		{ "Comment", "/** Called after an Undo operation */" },
		{ "DisplayName", "On Post Undo" },
		{ "ModuleRelativePath", "Private/EditorModeTool/EditorModeToolInstance.h" },
		{ "ToolTip", "Called after an Undo operation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorModeToolInstance_OnPostUndo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorModeToolInstance, nullptr, "OnPostUndo", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorModeToolInstance_OnPostUndo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_OnPostUndo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorModeToolInstance_OnPostUndo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorModeToolInstance_OnPostUndo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorModeToolInstance_OnToolEnded_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorModeToolInstance_OnToolEnded_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Mode" },
		{ "Comment", "/** Called when the tool is closed */" },
		{ "DisplayName", "On Tool Ended" },
		{ "ModuleRelativePath", "Private/EditorModeTool/EditorModeToolInstance.h" },
		{ "ToolTip", "Called when the tool is closed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorModeToolInstance_OnToolEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorModeToolInstance, nullptr, "OnToolEnded", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorModeToolInstance_OnToolEnded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_OnToolEnded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorModeToolInstance_OnToolEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorModeToolInstance_OnToolEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorModeToolInstance_OnToolStarted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorModeToolInstance_OnToolStarted_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Mode" },
		{ "Comment", "/** Called when the tool is started */" },
		{ "DisplayName", "On Tool Started" },
		{ "ModuleRelativePath", "Private/EditorModeTool/EditorModeToolInstance.h" },
		{ "ToolTip", "Called when the tool is started" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorModeToolInstance_OnToolStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorModeToolInstance, nullptr, "OnToolStarted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorModeToolInstance_OnToolStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_OnToolStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorModeToolInstance_OnToolStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorModeToolInstance_OnToolStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorModeToolInstance_OverrideActionEditCopyStatus_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEditorModeToolInstance_OverrideActionEditCopyStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEditorModeToolInstance_OverrideActionEditCopyStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorModeToolInstance_eventOverrideActionEditCopyStatus_Parms, ReturnValue), Z_Construct_UEnum_EditorScriptingTools_EEditModeAction, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorModeToolInstance_OverrideActionEditCopyStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_OverrideActionEditCopyStatus_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_OverrideActionEditCopyStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorModeToolInstance_OverrideActionEditCopyStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Mode | Input" },
		{ "DisplayName", "Override Action Edit Copy Status" },
		{ "ModuleRelativePath", "Private/EditorModeTool/EditorModeToolInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorModeToolInstance_OverrideActionEditCopyStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorModeToolInstance, nullptr, "OverrideActionEditCopyStatus", nullptr, nullptr, sizeof(EditorModeToolInstance_eventOverrideActionEditCopyStatus_Parms), Z_Construct_UFunction_UEditorModeToolInstance_OverrideActionEditCopyStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_OverrideActionEditCopyStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorModeToolInstance_OverrideActionEditCopyStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_OverrideActionEditCopyStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorModeToolInstance_OverrideActionEditCopyStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorModeToolInstance_OverrideActionEditCopyStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorModeToolInstance_OverrideActionEditCutStatus_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEditorModeToolInstance_OverrideActionEditCutStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEditorModeToolInstance_OverrideActionEditCutStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorModeToolInstance_eventOverrideActionEditCutStatus_Parms, ReturnValue), Z_Construct_UEnum_EditorScriptingTools_EEditModeAction, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorModeToolInstance_OverrideActionEditCutStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_OverrideActionEditCutStatus_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_OverrideActionEditCutStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorModeToolInstance_OverrideActionEditCutStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Mode | Input" },
		{ "DisplayName", "Override Action Edit Cut Status" },
		{ "ModuleRelativePath", "Private/EditorModeTool/EditorModeToolInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorModeToolInstance_OverrideActionEditCutStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorModeToolInstance, nullptr, "OverrideActionEditCutStatus", nullptr, nullptr, sizeof(EditorModeToolInstance_eventOverrideActionEditCutStatus_Parms), Z_Construct_UFunction_UEditorModeToolInstance_OverrideActionEditCutStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_OverrideActionEditCutStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorModeToolInstance_OverrideActionEditCutStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_OverrideActionEditCutStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorModeToolInstance_OverrideActionEditCutStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorModeToolInstance_OverrideActionEditCutStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorModeToolInstance_OverrideActionEditDeleteStatus_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEditorModeToolInstance_OverrideActionEditDeleteStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEditorModeToolInstance_OverrideActionEditDeleteStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorModeToolInstance_eventOverrideActionEditDeleteStatus_Parms, ReturnValue), Z_Construct_UEnum_EditorScriptingTools_EEditModeAction, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorModeToolInstance_OverrideActionEditDeleteStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_OverrideActionEditDeleteStatus_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_OverrideActionEditDeleteStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorModeToolInstance_OverrideActionEditDeleteStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Mode | Input" },
		{ "DisplayName", "Override Action Edit Delete Status" },
		{ "ModuleRelativePath", "Private/EditorModeTool/EditorModeToolInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorModeToolInstance_OverrideActionEditDeleteStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorModeToolInstance, nullptr, "OverrideActionEditDeleteStatus", nullptr, nullptr, sizeof(EditorModeToolInstance_eventOverrideActionEditDeleteStatus_Parms), Z_Construct_UFunction_UEditorModeToolInstance_OverrideActionEditDeleteStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_OverrideActionEditDeleteStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorModeToolInstance_OverrideActionEditDeleteStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_OverrideActionEditDeleteStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorModeToolInstance_OverrideActionEditDeleteStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorModeToolInstance_OverrideActionEditDeleteStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorModeToolInstance_OverrideActionEditDuplicateStatus_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEditorModeToolInstance_OverrideActionEditDuplicateStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEditorModeToolInstance_OverrideActionEditDuplicateStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorModeToolInstance_eventOverrideActionEditDuplicateStatus_Parms, ReturnValue), Z_Construct_UEnum_EditorScriptingTools_EEditModeAction, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorModeToolInstance_OverrideActionEditDuplicateStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_OverrideActionEditDuplicateStatus_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_OverrideActionEditDuplicateStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorModeToolInstance_OverrideActionEditDuplicateStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Mode | Input" },
		{ "DisplayName", "Override Action Edit Duplicate Status" },
		{ "ModuleRelativePath", "Private/EditorModeTool/EditorModeToolInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorModeToolInstance_OverrideActionEditDuplicateStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorModeToolInstance, nullptr, "OverrideActionEditDuplicateStatus", nullptr, nullptr, sizeof(EditorModeToolInstance_eventOverrideActionEditDuplicateStatus_Parms), Z_Construct_UFunction_UEditorModeToolInstance_OverrideActionEditDuplicateStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_OverrideActionEditDuplicateStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorModeToolInstance_OverrideActionEditDuplicateStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_OverrideActionEditDuplicateStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorModeToolInstance_OverrideActionEditDuplicateStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorModeToolInstance_OverrideActionEditDuplicateStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorModeToolInstance_OverrideActionEditPasteStatus_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEditorModeToolInstance_OverrideActionEditPasteStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEditorModeToolInstance_OverrideActionEditPasteStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorModeToolInstance_eventOverrideActionEditPasteStatus_Parms, ReturnValue), Z_Construct_UEnum_EditorScriptingTools_EEditModeAction, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorModeToolInstance_OverrideActionEditPasteStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_OverrideActionEditPasteStatus_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_OverrideActionEditPasteStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorModeToolInstance_OverrideActionEditPasteStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Mode | Input" },
		{ "DisplayName", "Override Action Edit Paste Status" },
		{ "ModuleRelativePath", "Private/EditorModeTool/EditorModeToolInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorModeToolInstance_OverrideActionEditPasteStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorModeToolInstance, nullptr, "OverrideActionEditPasteStatus", nullptr, nullptr, sizeof(EditorModeToolInstance_eventOverrideActionEditPasteStatus_Parms), Z_Construct_UFunction_UEditorModeToolInstance_OverrideActionEditPasteStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_OverrideActionEditPasteStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorModeToolInstance_OverrideActionEditPasteStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_OverrideActionEditPasteStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorModeToolInstance_OverrideActionEditPasteStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorModeToolInstance_OverrideActionEditPasteStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorModeToolInstance_OverrideCameraPivotForOrbit_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutPivot;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditorModeToolInstance_OverrideCameraPivotForOrbit_Statics::NewProp_OutPivot = { "OutPivot", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorModeToolInstance_eventOverrideCameraPivotForOrbit_Parms, OutPivot), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorModeToolInstance_OverrideCameraPivotForOrbit_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorModeToolInstance_eventOverrideCameraPivotForOrbit_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorModeToolInstance_OverrideCameraPivotForOrbit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorModeToolInstance_eventOverrideCameraPivotForOrbit_Parms), &Z_Construct_UFunction_UEditorModeToolInstance_OverrideCameraPivotForOrbit_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorModeToolInstance_OverrideCameraPivotForOrbit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_OverrideCameraPivotForOrbit_Statics::NewProp_OutPivot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_OverrideCameraPivotForOrbit_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorModeToolInstance_OverrideCameraPivotForOrbit_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Mode" },
		{ "Comment", "/**\n\x09 * Lets each mode/tool specify a pivot point around which the camera should orbit\n\x09 * @param\x09OutPivot\x09The custom pivot point returned by the mode/tool\n\x09 * @return\x09true if a custom pivot point was specified, false otherwise.\n\x09 */" },
		{ "DisplayName", "Override Camera Pivot For Orbit" },
		{ "ModuleRelativePath", "Private/EditorModeTool/EditorModeToolInstance.h" },
		{ "ToolTip", "Lets each mode/tool specify a pivot point around which the camera should orbit\n@param       OutPivot        The custom pivot point returned by the mode/tool\n@return      true if a custom pivot point was specified, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorModeToolInstance_OverrideCameraPivotForOrbit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorModeToolInstance, nullptr, "OverrideCameraPivotForOrbit", nullptr, nullptr, sizeof(EditorModeToolInstance_eventOverrideCameraPivotForOrbit_Parms), Z_Construct_UFunction_UEditorModeToolInstance_OverrideCameraPivotForOrbit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_OverrideCameraPivotForOrbit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48C20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorModeToolInstance_OverrideCameraPivotForOrbit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_OverrideCameraPivotForOrbit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorModeToolInstance_OverrideCameraPivotForOrbit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorModeToolInstance_OverrideCameraPivotForOrbit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorModeToolInstance_OverrideMouseCursor_Statics
	{
		static void NewProp_bOverrideCursor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideCursor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorModeToolInstance_OverrideMouseCursor_Statics::NewProp_bOverrideCursor_SetBit(void* Obj)
	{
		((EditorModeToolInstance_eventOverrideMouseCursor_Parms*)Obj)->bOverrideCursor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorModeToolInstance_OverrideMouseCursor_Statics::NewProp_bOverrideCursor = { "bOverrideCursor", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorModeToolInstance_eventOverrideMouseCursor_Parms), &Z_Construct_UFunction_UEditorModeToolInstance_OverrideMouseCursor_Statics::NewProp_bOverrideCursor_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEditorModeToolInstance_OverrideMouseCursor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorModeToolInstance_eventOverrideMouseCursor_Parms, ReturnValue), Z_Construct_UEnum_CoreUObject_EMouseCursor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorModeToolInstance_OverrideMouseCursor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_OverrideMouseCursor_Statics::NewProp_bOverrideCursor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_OverrideMouseCursor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorModeToolInstance_OverrideMouseCursor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Mode" },
		{ "Comment", "/**\n\x09 * Get a cursor to override the default with, if any.\n\x09 * @return true if the cursor was overridden.\n\x09 */" },
		{ "DisplayName", "Override Mouse Cursor" },
		{ "ModuleRelativePath", "Private/EditorModeTool/EditorModeToolInstance.h" },
		{ "ToolTip", "Get a cursor to override the default with, if any.\n@return true if the cursor was overridden." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorModeToolInstance_OverrideMouseCursor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorModeToolInstance, nullptr, "OverrideMouseCursor", nullptr, nullptr, sizeof(EditorModeToolInstance_eventOverrideMouseCursor_Parms), Z_Construct_UFunction_UEditorModeToolInstance_OverrideMouseCursor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_OverrideMouseCursor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorModeToolInstance_OverrideMouseCursor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_OverrideMouseCursor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorModeToolInstance_OverrideMouseCursor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorModeToolInstance_OverrideMouseCursor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorModeToolInstance_OverrideTransformGizmoCoordinateSystem_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewTransform;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditorModeToolInstance_OverrideTransformGizmoCoordinateSystem_Statics::NewProp_NewTransform = { "NewTransform", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorModeToolInstance_eventOverrideTransformGizmoCoordinateSystem_Parms, NewTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorModeToolInstance_OverrideTransformGizmoCoordinateSystem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorModeToolInstance_eventOverrideTransformGizmoCoordinateSystem_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorModeToolInstance_OverrideTransformGizmoCoordinateSystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorModeToolInstance_eventOverrideTransformGizmoCoordinateSystem_Parms), &Z_Construct_UFunction_UEditorModeToolInstance_OverrideTransformGizmoCoordinateSystem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorModeToolInstance_OverrideTransformGizmoCoordinateSystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_OverrideTransformGizmoCoordinateSystem_Statics::NewProp_NewTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_OverrideTransformGizmoCoordinateSystem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorModeToolInstance_OverrideTransformGizmoCoordinateSystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Mode" },
		{ "Comment", "/**\n\x09 * @return The current coordinate system for drawing and input of the transform widget.\n\x09 * For world coordinate system return the identity matrix\n\x09 */" },
		{ "DisplayName", "Override Transform Gizmo Coordinate System" },
		{ "ModuleRelativePath", "Private/EditorModeTool/EditorModeToolInstance.h" },
		{ "ToolTip", "@return The current coordinate system for drawing and input of the transform widget.\nFor world coordinate system return the identity matrix" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorModeToolInstance_OverrideTransformGizmoCoordinateSystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorModeToolInstance, nullptr, "OverrideTransformGizmoCoordinateSystem", nullptr, nullptr, sizeof(EditorModeToolInstance_eventOverrideTransformGizmoCoordinateSystem_Parms), Z_Construct_UFunction_UEditorModeToolInstance_OverrideTransformGizmoCoordinateSystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_OverrideTransformGizmoCoordinateSystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorModeToolInstance_OverrideTransformGizmoCoordinateSystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_OverrideTransformGizmoCoordinateSystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorModeToolInstance_OverrideTransformGizmoCoordinateSystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorModeToolInstance_OverrideTransformGizmoCoordinateSystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorModeToolInstance_OverrideTransformGizmoLocation_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewLocation;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditorModeToolInstance_OverrideTransformGizmoLocation_Statics::NewProp_NewLocation = { "NewLocation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorModeToolInstance_eventOverrideTransformGizmoLocation_Parms, NewLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorModeToolInstance_OverrideTransformGizmoLocation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorModeToolInstance_eventOverrideTransformGizmoLocation_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorModeToolInstance_OverrideTransformGizmoLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorModeToolInstance_eventOverrideTransformGizmoLocation_Parms), &Z_Construct_UFunction_UEditorModeToolInstance_OverrideTransformGizmoLocation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorModeToolInstance_OverrideTransformGizmoLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_OverrideTransformGizmoLocation_Statics::NewProp_NewLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_OverrideTransformGizmoLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorModeToolInstance_OverrideTransformGizmoLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Mode" },
		{ "Comment", "/**\n\x09 * Allows each mode/tool to determine a good location for the transform widget to be drawn at.\n\x09 */" },
		{ "DisplayName", "Override Transform Gizmo Location" },
		{ "ModuleRelativePath", "Private/EditorModeTool/EditorModeToolInstance.h" },
		{ "ToolTip", "Allows each mode/tool to determine a good location for the transform widget to be drawn at." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorModeToolInstance_OverrideTransformGizmoLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorModeToolInstance, nullptr, "OverrideTransformGizmoLocation", nullptr, nullptr, sizeof(EditorModeToolInstance_eventOverrideTransformGizmoLocation_Parms), Z_Construct_UFunction_UEditorModeToolInstance_OverrideTransformGizmoLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_OverrideTransformGizmoLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48C20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorModeToolInstance_OverrideTransformGizmoLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_OverrideTransformGizmoLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorModeToolInstance_OverrideTransformGizmoLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorModeToolInstance_OverrideTransformGizmoLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorModeToolInstance_ProcessEditCopy_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorModeToolInstance_ProcessEditCopy_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorModeToolInstance_eventProcessEditCopy_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorModeToolInstance_ProcessEditCopy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorModeToolInstance_eventProcessEditCopy_Parms), &Z_Construct_UFunction_UEditorModeToolInstance_ProcessEditCopy_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorModeToolInstance_ProcessEditCopy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_ProcessEditCopy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorModeToolInstance_ProcessEditCopy_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Mode | Input" },
		{ "DisplayName", "Process Edit Copy" },
		{ "ModuleRelativePath", "Private/EditorModeTool/EditorModeToolInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorModeToolInstance_ProcessEditCopy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorModeToolInstance, nullptr, "ProcessEditCopy", nullptr, nullptr, sizeof(EditorModeToolInstance_eventProcessEditCopy_Parms), Z_Construct_UFunction_UEditorModeToolInstance_ProcessEditCopy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_ProcessEditCopy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorModeToolInstance_ProcessEditCopy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_ProcessEditCopy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorModeToolInstance_ProcessEditCopy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorModeToolInstance_ProcessEditCopy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorModeToolInstance_ProcessEditCut_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorModeToolInstance_ProcessEditCut_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorModeToolInstance_eventProcessEditCut_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorModeToolInstance_ProcessEditCut_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorModeToolInstance_eventProcessEditCut_Parms), &Z_Construct_UFunction_UEditorModeToolInstance_ProcessEditCut_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorModeToolInstance_ProcessEditCut_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_ProcessEditCut_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorModeToolInstance_ProcessEditCut_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Mode | Input" },
		{ "DisplayName", "Process Edit Cut" },
		{ "ModuleRelativePath", "Private/EditorModeTool/EditorModeToolInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorModeToolInstance_ProcessEditCut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorModeToolInstance, nullptr, "ProcessEditCut", nullptr, nullptr, sizeof(EditorModeToolInstance_eventProcessEditCut_Parms), Z_Construct_UFunction_UEditorModeToolInstance_ProcessEditCut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_ProcessEditCut_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorModeToolInstance_ProcessEditCut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_ProcessEditCut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorModeToolInstance_ProcessEditCut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorModeToolInstance_ProcessEditCut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorModeToolInstance_ProcessEditDelete_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorModeToolInstance_ProcessEditDelete_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorModeToolInstance_eventProcessEditDelete_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorModeToolInstance_ProcessEditDelete_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorModeToolInstance_eventProcessEditDelete_Parms), &Z_Construct_UFunction_UEditorModeToolInstance_ProcessEditDelete_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorModeToolInstance_ProcessEditDelete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_ProcessEditDelete_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorModeToolInstance_ProcessEditDelete_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Mode | Input" },
		{ "DisplayName", "Process Edit Delete" },
		{ "ModuleRelativePath", "Private/EditorModeTool/EditorModeToolInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorModeToolInstance_ProcessEditDelete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorModeToolInstance, nullptr, "ProcessEditDelete", nullptr, nullptr, sizeof(EditorModeToolInstance_eventProcessEditDelete_Parms), Z_Construct_UFunction_UEditorModeToolInstance_ProcessEditDelete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_ProcessEditDelete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorModeToolInstance_ProcessEditDelete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_ProcessEditDelete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorModeToolInstance_ProcessEditDelete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorModeToolInstance_ProcessEditDelete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorModeToolInstance_ProcessEditDuplicate_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorModeToolInstance_ProcessEditDuplicate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorModeToolInstance_eventProcessEditDuplicate_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorModeToolInstance_ProcessEditDuplicate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorModeToolInstance_eventProcessEditDuplicate_Parms), &Z_Construct_UFunction_UEditorModeToolInstance_ProcessEditDuplicate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorModeToolInstance_ProcessEditDuplicate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_ProcessEditDuplicate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorModeToolInstance_ProcessEditDuplicate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Mode | Input" },
		{ "DisplayName", "Process Edit Duplicate" },
		{ "ModuleRelativePath", "Private/EditorModeTool/EditorModeToolInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorModeToolInstance_ProcessEditDuplicate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorModeToolInstance, nullptr, "ProcessEditDuplicate", nullptr, nullptr, sizeof(EditorModeToolInstance_eventProcessEditDuplicate_Parms), Z_Construct_UFunction_UEditorModeToolInstance_ProcessEditDuplicate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_ProcessEditDuplicate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorModeToolInstance_ProcessEditDuplicate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_ProcessEditDuplicate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorModeToolInstance_ProcessEditDuplicate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorModeToolInstance_ProcessEditDuplicate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorModeToolInstance_ProcessEditPaste_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorModeToolInstance_ProcessEditPaste_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorModeToolInstance_eventProcessEditPaste_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorModeToolInstance_ProcessEditPaste_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorModeToolInstance_eventProcessEditPaste_Parms), &Z_Construct_UFunction_UEditorModeToolInstance_ProcessEditPaste_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorModeToolInstance_ProcessEditPaste_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_ProcessEditPaste_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorModeToolInstance_ProcessEditPaste_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Mode | Input" },
		{ "DisplayName", "Process Edit Paste" },
		{ "ModuleRelativePath", "Private/EditorModeTool/EditorModeToolInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorModeToolInstance_ProcessEditPaste_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorModeToolInstance, nullptr, "ProcessEditPaste", nullptr, nullptr, sizeof(EditorModeToolInstance_eventProcessEditPaste_Parms), Z_Construct_UFunction_UEditorModeToolInstance_ProcessEditPaste_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_ProcessEditPaste_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorModeToolInstance_ProcessEditPaste_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_ProcessEditPaste_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorModeToolInstance_ProcessEditPaste()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorModeToolInstance_ProcessEditPaste_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorModeToolInstance_ReceiveDrawHUD_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorModeToolInstance_ReceiveDrawHUD_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Mode" },
		{ "Comment", "/** Overlays the editor hud (brushes, drag tools, static mesh vertices, etc*. */" },
		{ "DisplayName", "Receive Draw HUD" },
		{ "ModuleRelativePath", "Private/EditorModeTool/EditorModeToolInstance.h" },
		{ "ToolTip", "Overlays the editor hud (brushes, drag tools, static mesh vertices, etc*." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorModeToolInstance_ReceiveDrawHUD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorModeToolInstance, nullptr, "ReceiveDrawHUD", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorModeToolInstance_ReceiveDrawHUD_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_ReceiveDrawHUD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorModeToolInstance_ReceiveDrawHUD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorModeToolInstance_ReceiveDrawHUD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorModeToolInstance_ReceiveDrawPrimitives_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorModeToolInstance_ReceiveDrawPrimitives_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Mode" },
		{ "Comment", "/** Draws translucent polygons on brushes and volumes. */" },
		{ "DisplayName", "Receive Draw Primitives" },
		{ "ModuleRelativePath", "Private/EditorModeTool/EditorModeToolInstance.h" },
		{ "ToolTip", "Draws translucent polygons on brushes and volumes." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorModeToolInstance_ReceiveDrawPrimitives_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorModeToolInstance, nullptr, "ReceiveDrawPrimitives", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorModeToolInstance_ReceiveDrawPrimitives_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_ReceiveDrawPrimitives_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorModeToolInstance_ReceiveDrawPrimitives()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorModeToolInstance_ReceiveDrawPrimitives_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorModeToolInstance_ReceiveTick_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEditorModeToolInstance_ReceiveTick_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorModeToolInstance_eventReceiveTick_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorModeToolInstance_ReceiveTick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_ReceiveTick_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorModeToolInstance_ReceiveTick_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Mode" },
		{ "Comment", "/**\n\x09* Called once per frame\n\x09*\n\x09* @param  DeltaTime  Real time passed since last tick\n\x09*/" },
		{ "DisplayName", "Receive Tick" },
		{ "ModuleRelativePath", "Private/EditorModeTool/EditorModeToolInstance.h" },
		{ "ToolTip", "Called once per frame\n\n@param  DeltaTime  Real time passed since last tick" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorModeToolInstance_ReceiveTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorModeToolInstance, nullptr, "ReceiveTick", nullptr, nullptr, sizeof(EditorModeToolInstance_eventReceiveTick_Parms), Z_Construct_UFunction_UEditorModeToolInstance_ReceiveTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_ReceiveTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorModeToolInstance_ReceiveTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_ReceiveTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorModeToolInstance_ReceiveTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorModeToolInstance_ReceiveTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorModeToolInstance_SelectActor_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InActor;
		static void NewProp_bIsSelected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSelected;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorModeToolInstance_SelectActor_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorModeToolInstance_eventSelectActor_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorModeToolInstance_SelectActor_Statics::NewProp_bIsSelected_SetBit(void* Obj)
	{
		((EditorModeToolInstance_eventSelectActor_Parms*)Obj)->bIsSelected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorModeToolInstance_SelectActor_Statics::NewProp_bIsSelected = { "bIsSelected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorModeToolInstance_eventSelectActor_Parms), &Z_Construct_UFunction_UEditorModeToolInstance_SelectActor_Statics::NewProp_bIsSelected_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorModeToolInstance_SelectActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorModeToolInstance_eventSelectActor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorModeToolInstance_SelectActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorModeToolInstance_eventSelectActor_Parms), &Z_Construct_UFunction_UEditorModeToolInstance_SelectActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorModeToolInstance_SelectActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_SelectActor_Statics::NewProp_InActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_SelectActor_Statics::NewProp_bIsSelected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_SelectActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorModeToolInstance_SelectActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Mode | Selection" },
		{ "Comment", "/**\n\x09 * Lets each mode/tool handle frustum selection in its own way.\n\x09 * False means \"we haven't handled the selection\", which allows the editor to perform the selection\n\x09 * So false means \"allow\"\n\x09 * true means \"we have handled the selection\", which effectively blocks the selection from happening\n\x09 * so true means \"block\"\n\x09 *\n\x09 * @param InActor Target Actor.\n\x09 * @param bIsSelected Are we selecting or un-selecting this actor.\n\x09 * @return See description above.\n\x09 */" },
		{ "DisplayName", "Handle Actor Selection" },
		{ "ModuleRelativePath", "Private/EditorModeTool/EditorModeToolInstance.h" },
		{ "ToolTip", "Lets each mode/tool handle frustum selection in its own way.\nFalse means \"we haven't handled the selection\", which allows the editor to perform the selection\nSo false means \"allow\"\ntrue means \"we have handled the selection\", which effectively blocks the selection from happening\nso true means \"block\"\n\n@param InActor Target Actor.\n@param bIsSelected Are we selecting or un-selecting this actor.\n@return See description above." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorModeToolInstance_SelectActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorModeToolInstance, nullptr, "SelectActor", nullptr, nullptr, sizeof(EditorModeToolInstance_eventSelectActor_Parms), Z_Construct_UFunction_UEditorModeToolInstance_SelectActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_SelectActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorModeToolInstance_SelectActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_SelectActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorModeToolInstance_SelectActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorModeToolInstance_SelectActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorModeToolInstance_SelectionAllowed_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InActor;
		static void NewProp_bSelection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSelection;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorModeToolInstance_SelectionAllowed_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorModeToolInstance_eventSelectionAllowed_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorModeToolInstance_SelectionAllowed_Statics::NewProp_bSelection_SetBit(void* Obj)
	{
		((EditorModeToolInstance_eventSelectionAllowed_Parms*)Obj)->bSelection = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorModeToolInstance_SelectionAllowed_Statics::NewProp_bSelection = { "bSelection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorModeToolInstance_eventSelectionAllowed_Parms), &Z_Construct_UFunction_UEditorModeToolInstance_SelectionAllowed_Statics::NewProp_bSelection_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorModeToolInstance_SelectionAllowed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorModeToolInstance_eventSelectionAllowed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorModeToolInstance_SelectionAllowed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorModeToolInstance_eventSelectionAllowed_Parms), &Z_Construct_UFunction_UEditorModeToolInstance_SelectionAllowed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorModeToolInstance_SelectionAllowed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_SelectionAllowed_Statics::NewProp_InActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_SelectionAllowed_Statics::NewProp_bSelection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorModeToolInstance_SelectionAllowed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorModeToolInstance_SelectionAllowed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Mode | Selection" },
		{ "Comment", "/** Check to see if an actor can be selected in this mode - no side effects */" },
		{ "DisplayName", "Is Actor Selection Allowed" },
		{ "ModuleRelativePath", "Private/EditorModeTool/EditorModeToolInstance.h" },
		{ "ToolTip", "Check to see if an actor can be selected in this mode - no side effects" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorModeToolInstance_SelectionAllowed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorModeToolInstance, nullptr, "SelectionAllowed", nullptr, nullptr, sizeof(EditorModeToolInstance_eventSelectionAllowed_Parms), Z_Construct_UFunction_UEditorModeToolInstance_SelectionAllowed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_SelectionAllowed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorModeToolInstance_SelectionAllowed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorModeToolInstance_SelectionAllowed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorModeToolInstance_SelectionAllowed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorModeToolInstance_SelectionAllowed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEditorModeToolInstance_NoRegister()
	{
		return UEditorModeToolInstance::StaticClass();
	}
	struct Z_Construct_UClass_UEditorModeToolInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorModeToolInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULevelEditorToolBase,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorScriptingTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEditorModeToolInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEditorModeToolInstance_AllowPropertyWidgetsEditings, "AllowPropertyWidgetsEditings" }, // 1054198627
		{ &Z_Construct_UFunction_UEditorModeToolInstance_AllowTransformGizmoMove, "AllowTransformGizmoMove" }, // 951712632
		{ &Z_Construct_UFunction_UEditorModeToolInstance_CanDrawTransformGizmo, "CanDrawTransformGizmo" }, // 649967786
		{ &Z_Construct_UFunction_UEditorModeToolInstance_CanUseTransformGizmo, "CanUseTransformGizmo" }, // 2218267647
		{ &Z_Construct_UFunction_UEditorModeToolInstance_CanUseTransformGizmoByMode, "CanUseTransformGizmoByMode" }, // 2809405204
		{ &Z_Construct_UFunction_UEditorModeToolInstance_CanUseViewportDragTool, "CanUseViewportDragTool" }, // 2487940470
		{ &Z_Construct_UFunction_UEditorModeToolInstance_ClearActiveHitProxy, "ClearActiveHitProxy" }, // 4047944068
		{ &Z_Construct_UFunction_UEditorModeToolInstance_CreateNewHitProxyByIndex, "CreateNewHitProxyByIndex" }, // 75707212
		{ &Z_Construct_UFunction_UEditorModeToolInstance_CustomizeTransformGizmoAxis, "CustomizeTransformGizmoAxis" }, // 3636244773
		{ &Z_Construct_UFunction_UEditorModeToolInstance_DisallowMouseDeltaTracking, "DisallowMouseDeltaTracking" }, // 3262138627
		{ &Z_Construct_UFunction_UEditorModeToolInstance_GetActiveToolkitWidgetInstance, "GetActiveToolkitWidgetInstance" }, // 811164654
		{ &Z_Construct_UFunction_UEditorModeToolInstance_GetActiveViewportOverlayWidgetInstance, "GetActiveViewportOverlayWidgetInstance" }, // 1083003847
		{ &Z_Construct_UFunction_UEditorModeToolInstance_HandleClickHitProxy, "HandleClickHitProxy" }, // 1387548804
		{ &Z_Construct_UFunction_UEditorModeToolInstance_HandleInputAxis, "HandleInputAxis" }, // 1852570293
		{ &Z_Construct_UFunction_UEditorModeToolInstance_HandleInputKey, "HandleInputKey" }, // 2444900858
		{ &Z_Construct_UFunction_UEditorModeToolInstance_HandleMouseTrackingEnd, "HandleMouseTrackingEnd" }, // 689400708
		{ &Z_Construct_UFunction_UEditorModeToolInstance_HandleMouseTrackingStart, "HandleMouseTrackingStart" }, // 947804887
		{ &Z_Construct_UFunction_UEditorModeToolInstance_HandleSelectionBox, "HandleSelectionBox" }, // 3887090526
		{ &Z_Construct_UFunction_UEditorModeToolInstance_HandleSelectionFrustum, "HandleSelectionFrustum" }, // 3783863409
		{ &Z_Construct_UFunction_UEditorModeToolInstance_HandleWidgetMove, "HandleWidgetMove" }, // 3830460648
		{ &Z_Construct_UFunction_UEditorModeToolInstance_NotifyActorMoved, "NotifyActorMoved" }, // 2808887580
		{ &Z_Construct_UFunction_UEditorModeToolInstance_NotifyActorPropertyChanged, "NotifyActorPropertyChanged" }, // 3401955093
		{ &Z_Construct_UFunction_UEditorModeToolInstance_NotifyActorsDuplicated, "NotifyActorsDuplicated" }, // 2167088366
		{ &Z_Construct_UFunction_UEditorModeToolInstance_NotifyActorSelectionChanged, "NotifyActorSelectionChanged" }, // 4259914125
		{ &Z_Construct_UFunction_UEditorModeToolInstance_OnEditingViewportChanged, "OnEditingViewportChanged" }, // 3671559113
		{ &Z_Construct_UFunction_UEditorModeToolInstance_OnExecuteUserDefinedAction, "OnExecuteUserDefinedAction" }, // 1313729950
		{ &Z_Construct_UFunction_UEditorModeToolInstance_OnFocusLost, "OnFocusLost" }, // 1373954091
		{ &Z_Construct_UFunction_UEditorModeToolInstance_OnFocusReceived, "OnFocusReceived" }, // 3614686537
		{ &Z_Construct_UFunction_UEditorModeToolInstance_OnMouseEnter, "OnMouseEnter" }, // 47900905
		{ &Z_Construct_UFunction_UEditorModeToolInstance_OnMouseLeave, "OnMouseLeave" }, // 1411373187
		{ &Z_Construct_UFunction_UEditorModeToolInstance_OnMouseMove, "OnMouseMove" }, // 1733784764
		{ &Z_Construct_UFunction_UEditorModeToolInstance_OnMouseMoveCaptured, "OnMouseMoveCaptured" }, // 1010334787
		{ &Z_Construct_UFunction_UEditorModeToolInstance_OnMouseMovesCaptured, "OnMouseMovesCaptured" }, // 4028546094
		{ &Z_Construct_UFunction_UEditorModeToolInstance_OnPostUndo, "OnPostUndo" }, // 680669221
		{ &Z_Construct_UFunction_UEditorModeToolInstance_OnToolEnded, "OnToolEnded" }, // 1164607843
		{ &Z_Construct_UFunction_UEditorModeToolInstance_OnToolStarted, "OnToolStarted" }, // 1932738938
		{ &Z_Construct_UFunction_UEditorModeToolInstance_OverrideActionEditCopyStatus, "OverrideActionEditCopyStatus" }, // 1597720671
		{ &Z_Construct_UFunction_UEditorModeToolInstance_OverrideActionEditCutStatus, "OverrideActionEditCutStatus" }, // 2932321807
		{ &Z_Construct_UFunction_UEditorModeToolInstance_OverrideActionEditDeleteStatus, "OverrideActionEditDeleteStatus" }, // 2672369456
		{ &Z_Construct_UFunction_UEditorModeToolInstance_OverrideActionEditDuplicateStatus, "OverrideActionEditDuplicateStatus" }, // 60459684
		{ &Z_Construct_UFunction_UEditorModeToolInstance_OverrideActionEditPasteStatus, "OverrideActionEditPasteStatus" }, // 3034598315
		{ &Z_Construct_UFunction_UEditorModeToolInstance_OverrideCameraPivotForOrbit, "OverrideCameraPivotForOrbit" }, // 1888279596
		{ &Z_Construct_UFunction_UEditorModeToolInstance_OverrideMouseCursor, "OverrideMouseCursor" }, // 1740264933
		{ &Z_Construct_UFunction_UEditorModeToolInstance_OverrideTransformGizmoCoordinateSystem, "OverrideTransformGizmoCoordinateSystem" }, // 1119520269
		{ &Z_Construct_UFunction_UEditorModeToolInstance_OverrideTransformGizmoLocation, "OverrideTransformGizmoLocation" }, // 1027814633
		{ &Z_Construct_UFunction_UEditorModeToolInstance_ProcessEditCopy, "ProcessEditCopy" }, // 4035792654
		{ &Z_Construct_UFunction_UEditorModeToolInstance_ProcessEditCut, "ProcessEditCut" }, // 1594119657
		{ &Z_Construct_UFunction_UEditorModeToolInstance_ProcessEditDelete, "ProcessEditDelete" }, // 1113472906
		{ &Z_Construct_UFunction_UEditorModeToolInstance_ProcessEditDuplicate, "ProcessEditDuplicate" }, // 2748283213
		{ &Z_Construct_UFunction_UEditorModeToolInstance_ProcessEditPaste, "ProcessEditPaste" }, // 2330845337
		{ &Z_Construct_UFunction_UEditorModeToolInstance_ReceiveDrawHUD, "ReceiveDrawHUD" }, // 3083558842
		{ &Z_Construct_UFunction_UEditorModeToolInstance_ReceiveDrawPrimitives, "ReceiveDrawPrimitives" }, // 4030414105
		{ &Z_Construct_UFunction_UEditorModeToolInstance_ReceiveTick, "ReceiveTick" }, // 1410402161
		{ &Z_Construct_UFunction_UEditorModeToolInstance_SelectActor, "SelectActor" }, // 4249734808
		{ &Z_Construct_UFunction_UEditorModeToolInstance_SelectionAllowed, "SelectionAllowed" }, // 2685638549
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorModeToolInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EditorModeTool/EditorModeToolInstance.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/EditorModeTool/EditorModeToolInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorModeToolInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorModeToolInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEditorModeToolInstance_Statics::ClassParams = {
		&UEditorModeToolInstance::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorModeToolInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorModeToolInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorModeToolInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEditorModeToolInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEditorModeToolInstance, 3362598245);
	template<> EDITORSCRIPTINGTOOLS_API UClass* StaticClass<UEditorModeToolInstance>()
	{
		return UEditorModeToolInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditorModeToolInstance(Z_Construct_UClass_UEditorModeToolInstance, &UEditorModeToolInstance::StaticClass, TEXT("/Script/EditorScriptingTools"), TEXT("UEditorModeToolInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorModeToolInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
