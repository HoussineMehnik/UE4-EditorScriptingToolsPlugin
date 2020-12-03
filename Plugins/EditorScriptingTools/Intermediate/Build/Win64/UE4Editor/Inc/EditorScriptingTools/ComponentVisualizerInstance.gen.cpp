// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorScriptingTools/Private/ComponentVisualizer/ComponentVisualizerInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComponentVisualizerInstance() {}
// Cross Module References
	EDITORSCRIPTINGTOOLS_API UClass* Z_Construct_UClass_UComponentVisualizerInstance_NoRegister();
	EDITORSCRIPTINGTOOLS_API UClass* Z_Construct_UClass_UComponentVisualizerInstance();
	EDITORSCRIPTINGTOOLS_API UClass* Z_Construct_UClass_ULevelEditorToolBase();
	UPackage* Z_Construct_UPackage__Script_EditorScriptingTools();
	EDITORSCRIPTINGTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FDummyStruct();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	EDITORSCRIPTINGTOOLS_API UEnum* Z_Construct_UEnum_EditorScriptingTools_EHitProxyPriorityType();
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EMouseCursor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	EDITORSCRIPTINGTOOLS_API UClass* Z_Construct_UClass_UEditorUserWidget_NoRegister();
	EDITORSCRIPTINGTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FIndexedComponentVisProxyInfo();
	EDITORSCRIPTINGTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FLevelEditingViewportClick();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	EDITORSCRIPTINGTOOLS_API UEnum* Z_Construct_UEnum_EditorScriptingTools_EInputKeyEventType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	EDITORSCRIPTINGTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FSelectionFrustumVolume();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	EDITORSCRIPTINGTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FActorComponentWrapper();
// End Cross Module References
	DEFINE_FUNCTION(UComponentVisualizerInstance::execNotifyPropertyModifiedByName)
	{
		P_GET_OBJECT(UActorComponent,Z_Param_Component);
		P_GET_PROPERTY(FNameProperty,Z_Param_PropertyName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->NotifyPropertyModifiedByName(Z_Param_Component,Z_Param_PropertyName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComponentVisualizerInstance::execClearActiveWorldHitProxy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearActiveWorldHitProxy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComponentVisualizerInstance::execCreateWorldHitProxyByIndex)
	{
		P_GET_STRUCT(FDummyStruct,Z_Param_OnlyWithDrawPrimitives);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_OBJECT(UActorComponent,Z_Param_Component);
		P_GET_ENUM(EHitProxyPriorityType,Z_Param_Priority);
		P_GET_PROPERTY(FByteProperty,Z_Param_CursorType);
		P_GET_UBOOL(Z_Param_bAllowsTranslucentPrimitives);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateWorldHitProxyByIndex(Z_Param_OnlyWithDrawPrimitives,Z_Param_Index,Z_Param_Component,EHitProxyPriorityType(Z_Param_Priority),EMouseCursor::Type(Z_Param_CursorType),Z_Param_bAllowsTranslucentPrimitives);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComponentVisualizerInstance::execGetContextMenuUserWidgetClass)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSubclassOf<UEditorUserWidget> *)Z_Param__Result=P_THIS->GetContextMenuUserWidgetClass_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComponentVisualizerInstance::execHandleSnapTo)
	{
		P_GET_UBOOL(Z_Param_bInAlign);
		P_GET_UBOOL(Z_Param_bInUseLineTrace);
		P_GET_UBOOL(Z_Param_bInUseBounds);
		P_GET_UBOOL(Z_Param_bInUsePivot);
		P_GET_OBJECT(AActor,Z_Param_InDestination);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HandleSnapTo_Implementation(Z_Param_bInAlign,Z_Param_bInUseLineTrace,Z_Param_bInUseBounds,Z_Param_bInUsePivot,Z_Param_InDestination);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComponentVisualizerInstance::execHasFocusOnSelectionBoundingBox)
	{
		P_GET_STRUCT_REF(FBox,Z_Param_Out_OutBoundingBox);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasFocusOnSelectionBoundingBox_Implementation(Z_Param_Out_OutBoundingBox);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComponentVisualizerInstance::execHandleSelectionFrustum)
	{
		P_GET_STRUCT_REF(FSelectionFrustumVolume,Z_Param_Out_InFrustum);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HandleSelectionFrustum_Implementation(Z_Param_Out_InFrustum);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComponentVisualizerInstance::execHandleSelectionBox)
	{
		P_GET_STRUCT_REF(FBox,Z_Param_Out_InBox);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HandleSelectionBox_Implementation(Z_Param_Out_InBox);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComponentVisualizerInstance::execHandleInputKey)
	{
		P_GET_STRUCT(FKey,Z_Param_Key);
		P_GET_ENUM(EInputKeyEventType,Z_Param_Event);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HandleInputKey_Implementation(Z_Param_Key,EInputKeyEventType(Z_Param_Event));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComponentVisualizerInstance::execOverrideTransformGizmoCoordinateSystem)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_NewTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OverrideTransformGizmoCoordinateSystem_Implementation(Z_Param_Out_NewTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComponentVisualizerInstance::execHandleTransformGizmoMove)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Drag);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_DeltaRotation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_DeltaScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HandleTransformGizmoMove_Implementation(Z_Param_Out_Drag,Z_Param_Out_DeltaRotation,Z_Param_Out_DeltaScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComponentVisualizerInstance::execOverrideTransformGizmoLocation)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NewLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OverrideTransformGizmoLocation_Implementation(Z_Param_Out_NewLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComponentVisualizerInstance::execHandleClickVisualizerHitProxy)
	{
		P_GET_STRUCT_REF(FIndexedComponentVisProxyInfo,Z_Param_Out_HitInfo);
		P_GET_STRUCT_REF(FLevelEditingViewportClick,Z_Param_Out_ViewportClick);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HandleClickVisualizerHitProxy_Implementation(Z_Param_Out_HitInfo,Z_Param_Out_ViewportClick);
		P_NATIVE_END;
	}
	static FName NAME_UComponentVisualizerInstance_Construct = FName(TEXT("Construct"));
	void UComponentVisualizerInstance::Construct()
	{
		ProcessEvent(FindFunctionChecked(NAME_UComponentVisualizerInstance_Construct),NULL);
	}
	static FName NAME_UComponentVisualizerInstance_Destruct = FName(TEXT("Destruct"));
	void UComponentVisualizerInstance::Destruct()
	{
		ProcessEvent(FindFunctionChecked(NAME_UComponentVisualizerInstance_Destruct),NULL);
	}
	static FName NAME_UComponentVisualizerInstance_GetContextMenuUserWidgetClass = FName(TEXT("GetContextMenuUserWidgetClass"));
	TSubclassOf<UEditorUserWidget>  UComponentVisualizerInstance::GetContextMenuUserWidgetClass()
	{
		ComponentVisualizerInstance_eventGetContextMenuUserWidgetClass_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UComponentVisualizerInstance_GetContextMenuUserWidgetClass),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UComponentVisualizerInstance_HandleClickVisualizerHitProxy = FName(TEXT("HandleClickVisualizerHitProxy"));
	bool UComponentVisualizerInstance::HandleClickVisualizerHitProxy(FIndexedComponentVisProxyInfo const& HitInfo, FLevelEditingViewportClick const& ViewportClick)
	{
		ComponentVisualizerInstance_eventHandleClickVisualizerHitProxy_Parms Parms;
		Parms.HitInfo=HitInfo;
		Parms.ViewportClick=ViewportClick;
		ProcessEvent(FindFunctionChecked(NAME_UComponentVisualizerInstance_HandleClickVisualizerHitProxy),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UComponentVisualizerInstance_HandleInputKey = FName(TEXT("HandleInputKey"));
	bool UComponentVisualizerInstance::HandleInputKey(FKey Key, EInputKeyEventType Event)
	{
		ComponentVisualizerInstance_eventHandleInputKey_Parms Parms;
		Parms.Key=Key;
		Parms.Event=Event;
		ProcessEvent(FindFunctionChecked(NAME_UComponentVisualizerInstance_HandleInputKey),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UComponentVisualizerInstance_HandleSelectionBox = FName(TEXT("HandleSelectionBox"));
	bool UComponentVisualizerInstance::HandleSelectionBox(FBox const& InBox)
	{
		ComponentVisualizerInstance_eventHandleSelectionBox_Parms Parms;
		Parms.InBox=InBox;
		ProcessEvent(FindFunctionChecked(NAME_UComponentVisualizerInstance_HandleSelectionBox),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UComponentVisualizerInstance_HandleSelectionFrustum = FName(TEXT("HandleSelectionFrustum"));
	bool UComponentVisualizerInstance::HandleSelectionFrustum(FSelectionFrustumVolume const& InFrustum)
	{
		ComponentVisualizerInstance_eventHandleSelectionFrustum_Parms Parms;
		Parms.InFrustum=InFrustum;
		ProcessEvent(FindFunctionChecked(NAME_UComponentVisualizerInstance_HandleSelectionFrustum),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UComponentVisualizerInstance_HandleSnapTo = FName(TEXT("HandleSnapTo"));
	bool UComponentVisualizerInstance::HandleSnapTo(bool bInAlign, bool bInUseLineTrace, bool bInUseBounds, bool bInUsePivot, AActor* InDestination)
	{
		ComponentVisualizerInstance_eventHandleSnapTo_Parms Parms;
		Parms.bInAlign=bInAlign ? true : false;
		Parms.bInUseLineTrace=bInUseLineTrace ? true : false;
		Parms.bInUseBounds=bInUseBounds ? true : false;
		Parms.bInUsePivot=bInUsePivot ? true : false;
		Parms.InDestination=InDestination;
		ProcessEvent(FindFunctionChecked(NAME_UComponentVisualizerInstance_HandleSnapTo),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UComponentVisualizerInstance_HandleTransformGizmoMove = FName(TEXT("HandleTransformGizmoMove"));
	bool UComponentVisualizerInstance::HandleTransformGizmoMove(FVector& Drag, FRotator& DeltaRotation, FVector& DeltaScale)
	{
		ComponentVisualizerInstance_eventHandleTransformGizmoMove_Parms Parms;
		Parms.Drag=Drag;
		Parms.DeltaRotation=DeltaRotation;
		Parms.DeltaScale=DeltaScale;
		ProcessEvent(FindFunctionChecked(NAME_UComponentVisualizerInstance_HandleTransformGizmoMove),&Parms);
		Drag=Parms.Drag;
		DeltaRotation=Parms.DeltaRotation;
		DeltaScale=Parms.DeltaScale;
		return !!Parms.ReturnValue;
	}
	static FName NAME_UComponentVisualizerInstance_HasFocusOnSelectionBoundingBox = FName(TEXT("HasFocusOnSelectionBoundingBox"));
	bool UComponentVisualizerInstance::HasFocusOnSelectionBoundingBox(FBox& OutBoundingBox)
	{
		ComponentVisualizerInstance_eventHasFocusOnSelectionBoundingBox_Parms Parms;
		Parms.OutBoundingBox=OutBoundingBox;
		ProcessEvent(FindFunctionChecked(NAME_UComponentVisualizerInstance_HasFocusOnSelectionBoundingBox),&Parms);
		OutBoundingBox=Parms.OutBoundingBox;
		return !!Parms.ReturnValue;
	}
	static FName NAME_UComponentVisualizerInstance_OnContextMenuConstruct = FName(TEXT("OnContextMenuConstruct"));
	void UComponentVisualizerInstance::OnContextMenuConstruct(UEditorUserWidget* Widget)
	{
		ComponentVisualizerInstance_eventOnContextMenuConstruct_Parms Parms;
		Parms.Widget=Widget;
		ProcessEvent(FindFunctionChecked(NAME_UComponentVisualizerInstance_OnContextMenuConstruct),&Parms);
	}
	static FName NAME_UComponentVisualizerInstance_OnEndEditing = FName(TEXT("OnEndEditing"));
	void UComponentVisualizerInstance::OnEndEditing()
	{
		ProcessEvent(FindFunctionChecked(NAME_UComponentVisualizerInstance_OnEndEditing),NULL);
	}
	static FName NAME_UComponentVisualizerInstance_OverrideTransformGizmoCoordinateSystem = FName(TEXT("OverrideTransformGizmoCoordinateSystem"));
	bool UComponentVisualizerInstance::OverrideTransformGizmoCoordinateSystem(FTransform& NewTransform)
	{
		ComponentVisualizerInstance_eventOverrideTransformGizmoCoordinateSystem_Parms Parms;
		Parms.NewTransform=NewTransform;
		ProcessEvent(FindFunctionChecked(NAME_UComponentVisualizerInstance_OverrideTransformGizmoCoordinateSystem),&Parms);
		NewTransform=Parms.NewTransform;
		return !!Parms.ReturnValue;
	}
	static FName NAME_UComponentVisualizerInstance_OverrideTransformGizmoLocation = FName(TEXT("OverrideTransformGizmoLocation"));
	bool UComponentVisualizerInstance::OverrideTransformGizmoLocation(FVector& NewLocation)
	{
		ComponentVisualizerInstance_eventOverrideTransformGizmoLocation_Parms Parms;
		Parms.NewLocation=NewLocation;
		ProcessEvent(FindFunctionChecked(NAME_UComponentVisualizerInstance_OverrideTransformGizmoLocation),&Parms);
		NewLocation=Parms.NewLocation;
		return !!Parms.ReturnValue;
	}
	static FName NAME_UComponentVisualizerInstance_ReceiveDrawHUD = FName(TEXT("ReceiveDrawHUD"));
	void UComponentVisualizerInstance::ReceiveDrawHUD(FActorComponentWrapper const& ComponentInfo)
	{
		ComponentVisualizerInstance_eventReceiveDrawHUD_Parms Parms;
		Parms.ComponentInfo=ComponentInfo;
		ProcessEvent(FindFunctionChecked(NAME_UComponentVisualizerInstance_ReceiveDrawHUD),&Parms);
	}
	static FName NAME_UComponentVisualizerInstance_ReceiveDrawPrimitives = FName(TEXT("ReceiveDrawPrimitives"));
	void UComponentVisualizerInstance::ReceiveDrawPrimitives(FActorComponentWrapper const& ComponentInfo)
	{
		ComponentVisualizerInstance_eventReceiveDrawPrimitives_Parms Parms;
		Parms.ComponentInfo=ComponentInfo;
		ProcessEvent(FindFunctionChecked(NAME_UComponentVisualizerInstance_ReceiveDrawPrimitives),&Parms);
	}
	void UComponentVisualizerInstance::StaticRegisterNativesUComponentVisualizerInstance()
	{
		UClass* Class = UComponentVisualizerInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearActiveWorldHitProxy", &UComponentVisualizerInstance::execClearActiveWorldHitProxy },
			{ "CreateWorldHitProxyByIndex", &UComponentVisualizerInstance::execCreateWorldHitProxyByIndex },
			{ "GetContextMenuUserWidgetClass", &UComponentVisualizerInstance::execGetContextMenuUserWidgetClass },
			{ "HandleClickVisualizerHitProxy", &UComponentVisualizerInstance::execHandleClickVisualizerHitProxy },
			{ "HandleInputKey", &UComponentVisualizerInstance::execHandleInputKey },
			{ "HandleSelectionBox", &UComponentVisualizerInstance::execHandleSelectionBox },
			{ "HandleSelectionFrustum", &UComponentVisualizerInstance::execHandleSelectionFrustum },
			{ "HandleSnapTo", &UComponentVisualizerInstance::execHandleSnapTo },
			{ "HandleTransformGizmoMove", &UComponentVisualizerInstance::execHandleTransformGizmoMove },
			{ "HasFocusOnSelectionBoundingBox", &UComponentVisualizerInstance::execHasFocusOnSelectionBoundingBox },
			{ "NotifyPropertyModifiedByName", &UComponentVisualizerInstance::execNotifyPropertyModifiedByName },
			{ "OverrideTransformGizmoCoordinateSystem", &UComponentVisualizerInstance::execOverrideTransformGizmoCoordinateSystem },
			{ "OverrideTransformGizmoLocation", &UComponentVisualizerInstance::execOverrideTransformGizmoLocation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UComponentVisualizerInstance_ClearActiveWorldHitProxy_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComponentVisualizerInstance_ClearActiveWorldHitProxy_Statics::Function_MetaDataParams[] = {
		{ "Category", "ComponentVisualizer|LevelViewport|Interaction" },
		{ "HideSelfPin", "true" },
		{ "ModuleRelativePath", "Private/ComponentVisualizer/ComponentVisualizerInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UComponentVisualizerInstance_ClearActiveWorldHitProxy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComponentVisualizerInstance, nullptr, "ClearActiveWorldHitProxy", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComponentVisualizerInstance_ClearActiveWorldHitProxy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComponentVisualizerInstance_ClearActiveWorldHitProxy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComponentVisualizerInstance_ClearActiveWorldHitProxy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UComponentVisualizerInstance_ClearActiveWorldHitProxy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComponentVisualizerInstance_Construct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComponentVisualizerInstance_Construct_Statics::Function_MetaDataParams[] = {
		{ "Category", "ComponentVisualizer" },
		{ "Comment", "/** can be called multiple times. */" },
		{ "DisplayName", "Construct" },
		{ "ModuleRelativePath", "Private/ComponentVisualizer/ComponentVisualizerInstance.h" },
		{ "ToolTip", "can be called multiple times." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UComponentVisualizerInstance_Construct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComponentVisualizerInstance, nullptr, "Construct", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComponentVisualizerInstance_Construct_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComponentVisualizerInstance_Construct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComponentVisualizerInstance_Construct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UComponentVisualizerInstance_Construct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComponentVisualizerInstance_CreateWorldHitProxyByIndex_Statics
	{
		struct ComponentVisualizerInstance_eventCreateWorldHitProxyByIndex_Parms
		{
			FDummyStruct OnlyWithDrawPrimitives;
			int32 Index;
			UActorComponent* Component;
			EHitProxyPriorityType Priority;
			TEnumAsByte<EMouseCursor::Type> CursorType;
			bool bAllowsTranslucentPrimitives;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OnlyWithDrawPrimitives;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComponentVisualizerInstance_CreateWorldHitProxyByIndex_Statics::NewProp_OnlyWithDrawPrimitives = { "OnlyWithDrawPrimitives", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ComponentVisualizerInstance_eventCreateWorldHitProxyByIndex_Parms, OnlyWithDrawPrimitives), Z_Construct_UScriptStruct_FDummyStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UComponentVisualizerInstance_CreateWorldHitProxyByIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ComponentVisualizerInstance_eventCreateWorldHitProxyByIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComponentVisualizerInstance_CreateWorldHitProxyByIndex_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComponentVisualizerInstance_CreateWorldHitProxyByIndex_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ComponentVisualizerInstance_eventCreateWorldHitProxyByIndex_Parms, Component), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UComponentVisualizerInstance_CreateWorldHitProxyByIndex_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UComponentVisualizerInstance_CreateWorldHitProxyByIndex_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UComponentVisualizerInstance_CreateWorldHitProxyByIndex_Statics::NewProp_Priority_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UComponentVisualizerInstance_CreateWorldHitProxyByIndex_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ComponentVisualizerInstance_eventCreateWorldHitProxyByIndex_Parms, Priority), Z_Construct_UEnum_EditorScriptingTools_EHitProxyPriorityType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UComponentVisualizerInstance_CreateWorldHitProxyByIndex_Statics::NewProp_CursorType = { "CursorType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ComponentVisualizerInstance_eventCreateWorldHitProxyByIndex_Parms, CursorType), Z_Construct_UEnum_CoreUObject_EMouseCursor, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UComponentVisualizerInstance_CreateWorldHitProxyByIndex_Statics::NewProp_bAllowsTranslucentPrimitives_SetBit(void* Obj)
	{
		((ComponentVisualizerInstance_eventCreateWorldHitProxyByIndex_Parms*)Obj)->bAllowsTranslucentPrimitives = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UComponentVisualizerInstance_CreateWorldHitProxyByIndex_Statics::NewProp_bAllowsTranslucentPrimitives = { "bAllowsTranslucentPrimitives", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ComponentVisualizerInstance_eventCreateWorldHitProxyByIndex_Parms), &Z_Construct_UFunction_UComponentVisualizerInstance_CreateWorldHitProxyByIndex_Statics::NewProp_bAllowsTranslucentPrimitives_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComponentVisualizerInstance_CreateWorldHitProxyByIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComponentVisualizerInstance_CreateWorldHitProxyByIndex_Statics::NewProp_OnlyWithDrawPrimitives,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComponentVisualizerInstance_CreateWorldHitProxyByIndex_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComponentVisualizerInstance_CreateWorldHitProxyByIndex_Statics::NewProp_Component,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComponentVisualizerInstance_CreateWorldHitProxyByIndex_Statics::NewProp_Priority_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComponentVisualizerInstance_CreateWorldHitProxyByIndex_Statics::NewProp_Priority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComponentVisualizerInstance_CreateWorldHitProxyByIndex_Statics::NewProp_CursorType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComponentVisualizerInstance_CreateWorldHitProxyByIndex_Statics::NewProp_bAllowsTranslucentPrimitives,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComponentVisualizerInstance_CreateWorldHitProxyByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "ComponentVisualizer|LevelViewport|Interaction" },
		{ "CPP_Default_bAllowsTranslucentPrimitives", "false" },
		{ "CPP_Default_CursorType", "Default" },
		{ "CPP_Default_Priority", "World" },
		{ "HideSelfPin", "true" },
		{ "ModuleRelativePath", "Private/ComponentVisualizer/ComponentVisualizerInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UComponentVisualizerInstance_CreateWorldHitProxyByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComponentVisualizerInstance, nullptr, "CreateWorldHitProxyByIndex", nullptr, nullptr, sizeof(ComponentVisualizerInstance_eventCreateWorldHitProxyByIndex_Parms), Z_Construct_UFunction_UComponentVisualizerInstance_CreateWorldHitProxyByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComponentVisualizerInstance_CreateWorldHitProxyByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComponentVisualizerInstance_CreateWorldHitProxyByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComponentVisualizerInstance_CreateWorldHitProxyByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComponentVisualizerInstance_CreateWorldHitProxyByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UComponentVisualizerInstance_CreateWorldHitProxyByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComponentVisualizerInstance_Destruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComponentVisualizerInstance_Destruct_Statics::Function_MetaDataParams[] = {
		{ "Category", "ComponentVisualizer" },
		{ "Comment", "/** can be called multiple times. */" },
		{ "DisplayName", "Destruct" },
		{ "ModuleRelativePath", "Private/ComponentVisualizer/ComponentVisualizerInstance.h" },
		{ "ToolTip", "can be called multiple times." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UComponentVisualizerInstance_Destruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComponentVisualizerInstance, nullptr, "Destruct", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComponentVisualizerInstance_Destruct_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComponentVisualizerInstance_Destruct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComponentVisualizerInstance_Destruct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UComponentVisualizerInstance_Destruct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComponentVisualizerInstance_GetContextMenuUserWidgetClass_Statics
	{
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UComponentVisualizerInstance_GetContextMenuUserWidgetClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ComponentVisualizerInstance_eventGetContextMenuUserWidgetClass_Parms, ReturnValue), Z_Construct_UClass_UEditorUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComponentVisualizerInstance_GetContextMenuUserWidgetClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComponentVisualizerInstance_GetContextMenuUserWidgetClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComponentVisualizerInstance_GetContextMenuUserWidgetClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "ComponentVisualizer|Selection" },
		{ "DisplayName", "Get Context Menu User Widget Class" },
		{ "ModuleRelativePath", "Private/ComponentVisualizer/ComponentVisualizerInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UComponentVisualizerInstance_GetContextMenuUserWidgetClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComponentVisualizerInstance, nullptr, "GetContextMenuUserWidgetClass", nullptr, nullptr, sizeof(ComponentVisualizerInstance_eventGetContextMenuUserWidgetClass_Parms), Z_Construct_UFunction_UComponentVisualizerInstance_GetContextMenuUserWidgetClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComponentVisualizerInstance_GetContextMenuUserWidgetClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComponentVisualizerInstance_GetContextMenuUserWidgetClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComponentVisualizerInstance_GetContextMenuUserWidgetClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComponentVisualizerInstance_GetContextMenuUserWidgetClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UComponentVisualizerInstance_GetContextMenuUserWidgetClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComponentVisualizerInstance_HandleClickVisualizerHitProxy_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitInfo;
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComponentVisualizerInstance_HandleClickVisualizerHitProxy_Statics::NewProp_HitInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComponentVisualizerInstance_HandleClickVisualizerHitProxy_Statics::NewProp_HitInfo = { "HitInfo", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ComponentVisualizerInstance_eventHandleClickVisualizerHitProxy_Parms, HitInfo), Z_Construct_UScriptStruct_FIndexedComponentVisProxyInfo, METADATA_PARAMS(Z_Construct_UFunction_UComponentVisualizerInstance_HandleClickVisualizerHitProxy_Statics::NewProp_HitInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UComponentVisualizerInstance_HandleClickVisualizerHitProxy_Statics::NewProp_HitInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComponentVisualizerInstance_HandleClickVisualizerHitProxy_Statics::NewProp_ViewportClick_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComponentVisualizerInstance_HandleClickVisualizerHitProxy_Statics::NewProp_ViewportClick = { "ViewportClick", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ComponentVisualizerInstance_eventHandleClickVisualizerHitProxy_Parms, ViewportClick), Z_Construct_UScriptStruct_FLevelEditingViewportClick, METADATA_PARAMS(Z_Construct_UFunction_UComponentVisualizerInstance_HandleClickVisualizerHitProxy_Statics::NewProp_ViewportClick_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UComponentVisualizerInstance_HandleClickVisualizerHitProxy_Statics::NewProp_ViewportClick_MetaData)) };
	void Z_Construct_UFunction_UComponentVisualizerInstance_HandleClickVisualizerHitProxy_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ComponentVisualizerInstance_eventHandleClickVisualizerHitProxy_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UComponentVisualizerInstance_HandleClickVisualizerHitProxy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ComponentVisualizerInstance_eventHandleClickVisualizerHitProxy_Parms), &Z_Construct_UFunction_UComponentVisualizerInstance_HandleClickVisualizerHitProxy_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComponentVisualizerInstance_HandleClickVisualizerHitProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComponentVisualizerInstance_HandleClickVisualizerHitProxy_Statics::NewProp_HitInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComponentVisualizerInstance_HandleClickVisualizerHitProxy_Statics::NewProp_ViewportClick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComponentVisualizerInstance_HandleClickVisualizerHitProxy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComponentVisualizerInstance_HandleClickVisualizerHitProxy_Statics::Function_MetaDataParams[] = {
		{ "Category", "ComponentVisualizer|Input" },
		{ "Comment", "/** Handle click on a HitProxy */" },
		{ "DisplayName", "Handle Indexed Hit Proxy Click" },
		{ "ModuleRelativePath", "Private/ComponentVisualizer/ComponentVisualizerInstance.h" },
		{ "ToolTip", "Handle click on a HitProxy" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UComponentVisualizerInstance_HandleClickVisualizerHitProxy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComponentVisualizerInstance, nullptr, "HandleClickVisualizerHitProxy", nullptr, nullptr, sizeof(ComponentVisualizerInstance_eventHandleClickVisualizerHitProxy_Parms), Z_Construct_UFunction_UComponentVisualizerInstance_HandleClickVisualizerHitProxy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComponentVisualizerInstance_HandleClickVisualizerHitProxy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComponentVisualizerInstance_HandleClickVisualizerHitProxy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComponentVisualizerInstance_HandleClickVisualizerHitProxy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComponentVisualizerInstance_HandleClickVisualizerHitProxy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UComponentVisualizerInstance_HandleClickVisualizerHitProxy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComponentVisualizerInstance_HandleInputKey_Statics
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComponentVisualizerInstance_HandleInputKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ComponentVisualizerInstance_eventHandleInputKey_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UComponentVisualizerInstance_HandleInputKey_Statics::NewProp_Event_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UComponentVisualizerInstance_HandleInputKey_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ComponentVisualizerInstance_eventHandleInputKey_Parms, Event), Z_Construct_UEnum_EditorScriptingTools_EInputKeyEventType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UComponentVisualizerInstance_HandleInputKey_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ComponentVisualizerInstance_eventHandleInputKey_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UComponentVisualizerInstance_HandleInputKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ComponentVisualizerInstance_eventHandleInputKey_Parms), &Z_Construct_UFunction_UComponentVisualizerInstance_HandleInputKey_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComponentVisualizerInstance_HandleInputKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComponentVisualizerInstance_HandleInputKey_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComponentVisualizerInstance_HandleInputKey_Statics::NewProp_Event_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComponentVisualizerInstance_HandleInputKey_Statics::NewProp_Event,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComponentVisualizerInstance_HandleInputKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComponentVisualizerInstance_HandleInputKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "ComponentVisualizer|Input" },
		{ "DisplayName", "Handle Input Key" },
		{ "ModuleRelativePath", "Private/ComponentVisualizer/ComponentVisualizerInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UComponentVisualizerInstance_HandleInputKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComponentVisualizerInstance, nullptr, "HandleInputKey", nullptr, nullptr, sizeof(ComponentVisualizerInstance_eventHandleInputKey_Parms), Z_Construct_UFunction_UComponentVisualizerInstance_HandleInputKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComponentVisualizerInstance_HandleInputKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComponentVisualizerInstance_HandleInputKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComponentVisualizerInstance_HandleInputKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComponentVisualizerInstance_HandleInputKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UComponentVisualizerInstance_HandleInputKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComponentVisualizerInstance_HandleSelectionBox_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InBox;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComponentVisualizerInstance_HandleSelectionBox_Statics::NewProp_InBox_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComponentVisualizerInstance_HandleSelectionBox_Statics::NewProp_InBox = { "InBox", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ComponentVisualizerInstance_eventHandleSelectionBox_Parms, InBox), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UFunction_UComponentVisualizerInstance_HandleSelectionBox_Statics::NewProp_InBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UComponentVisualizerInstance_HandleSelectionBox_Statics::NewProp_InBox_MetaData)) };
	void Z_Construct_UFunction_UComponentVisualizerInstance_HandleSelectionBox_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ComponentVisualizerInstance_eventHandleSelectionBox_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UComponentVisualizerInstance_HandleSelectionBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ComponentVisualizerInstance_eventHandleSelectionBox_Parms), &Z_Construct_UFunction_UComponentVisualizerInstance_HandleSelectionBox_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComponentVisualizerInstance_HandleSelectionBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComponentVisualizerInstance_HandleSelectionBox_Statics::NewProp_InBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComponentVisualizerInstance_HandleSelectionBox_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComponentVisualizerInstance_HandleSelectionBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "ComponentVisualizer|Selection" },
		{ "DisplayName", "Handle Box Select" },
		{ "ModuleRelativePath", "Private/ComponentVisualizer/ComponentVisualizerInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UComponentVisualizerInstance_HandleSelectionBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComponentVisualizerInstance, nullptr, "HandleSelectionBox", nullptr, nullptr, sizeof(ComponentVisualizerInstance_eventHandleSelectionBox_Parms), Z_Construct_UFunction_UComponentVisualizerInstance_HandleSelectionBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComponentVisualizerInstance_HandleSelectionBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComponentVisualizerInstance_HandleSelectionBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComponentVisualizerInstance_HandleSelectionBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComponentVisualizerInstance_HandleSelectionBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UComponentVisualizerInstance_HandleSelectionBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComponentVisualizerInstance_HandleSelectionFrustum_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InFrustum_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InFrustum;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComponentVisualizerInstance_HandleSelectionFrustum_Statics::NewProp_InFrustum_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComponentVisualizerInstance_HandleSelectionFrustum_Statics::NewProp_InFrustum = { "InFrustum", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ComponentVisualizerInstance_eventHandleSelectionFrustum_Parms, InFrustum), Z_Construct_UScriptStruct_FSelectionFrustumVolume, METADATA_PARAMS(Z_Construct_UFunction_UComponentVisualizerInstance_HandleSelectionFrustum_Statics::NewProp_InFrustum_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UComponentVisualizerInstance_HandleSelectionFrustum_Statics::NewProp_InFrustum_MetaData)) };
	void Z_Construct_UFunction_UComponentVisualizerInstance_HandleSelectionFrustum_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ComponentVisualizerInstance_eventHandleSelectionFrustum_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UComponentVisualizerInstance_HandleSelectionFrustum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ComponentVisualizerInstance_eventHandleSelectionFrustum_Parms), &Z_Construct_UFunction_UComponentVisualizerInstance_HandleSelectionFrustum_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComponentVisualizerInstance_HandleSelectionFrustum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComponentVisualizerInstance_HandleSelectionFrustum_Statics::NewProp_InFrustum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComponentVisualizerInstance_HandleSelectionFrustum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComponentVisualizerInstance_HandleSelectionFrustum_Statics::Function_MetaDataParams[] = {
		{ "Category", "ComponentVisualizer|Selection" },
		{ "DisplayName", "Handle Selection Frustum" },
		{ "ModuleRelativePath", "Private/ComponentVisualizer/ComponentVisualizerInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UComponentVisualizerInstance_HandleSelectionFrustum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComponentVisualizerInstance, nullptr, "HandleSelectionFrustum", nullptr, nullptr, sizeof(ComponentVisualizerInstance_eventHandleSelectionFrustum_Parms), Z_Construct_UFunction_UComponentVisualizerInstance_HandleSelectionFrustum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComponentVisualizerInstance_HandleSelectionFrustum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComponentVisualizerInstance_HandleSelectionFrustum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComponentVisualizerInstance_HandleSelectionFrustum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComponentVisualizerInstance_HandleSelectionFrustum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UComponentVisualizerInstance_HandleSelectionFrustum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComponentVisualizerInstance_HandleSnapTo_Statics
	{
		static void NewProp_bInAlign_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInAlign;
		static void NewProp_bInUseLineTrace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInUseLineTrace;
		static void NewProp_bInUseBounds_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInUseBounds;
		static void NewProp_bInUsePivot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInUsePivot;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InDestination;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UComponentVisualizerInstance_HandleSnapTo_Statics::NewProp_bInAlign_SetBit(void* Obj)
	{
		((ComponentVisualizerInstance_eventHandleSnapTo_Parms*)Obj)->bInAlign = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UComponentVisualizerInstance_HandleSnapTo_Statics::NewProp_bInAlign = { "bInAlign", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ComponentVisualizerInstance_eventHandleSnapTo_Parms), &Z_Construct_UFunction_UComponentVisualizerInstance_HandleSnapTo_Statics::NewProp_bInAlign_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UComponentVisualizerInstance_HandleSnapTo_Statics::NewProp_bInUseLineTrace_SetBit(void* Obj)
	{
		((ComponentVisualizerInstance_eventHandleSnapTo_Parms*)Obj)->bInUseLineTrace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UComponentVisualizerInstance_HandleSnapTo_Statics::NewProp_bInUseLineTrace = { "bInUseLineTrace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ComponentVisualizerInstance_eventHandleSnapTo_Parms), &Z_Construct_UFunction_UComponentVisualizerInstance_HandleSnapTo_Statics::NewProp_bInUseLineTrace_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UComponentVisualizerInstance_HandleSnapTo_Statics::NewProp_bInUseBounds_SetBit(void* Obj)
	{
		((ComponentVisualizerInstance_eventHandleSnapTo_Parms*)Obj)->bInUseBounds = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UComponentVisualizerInstance_HandleSnapTo_Statics::NewProp_bInUseBounds = { "bInUseBounds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ComponentVisualizerInstance_eventHandleSnapTo_Parms), &Z_Construct_UFunction_UComponentVisualizerInstance_HandleSnapTo_Statics::NewProp_bInUseBounds_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UComponentVisualizerInstance_HandleSnapTo_Statics::NewProp_bInUsePivot_SetBit(void* Obj)
	{
		((ComponentVisualizerInstance_eventHandleSnapTo_Parms*)Obj)->bInUsePivot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UComponentVisualizerInstance_HandleSnapTo_Statics::NewProp_bInUsePivot = { "bInUsePivot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ComponentVisualizerInstance_eventHandleSnapTo_Parms), &Z_Construct_UFunction_UComponentVisualizerInstance_HandleSnapTo_Statics::NewProp_bInUsePivot_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComponentVisualizerInstance_HandleSnapTo_Statics::NewProp_InDestination = { "InDestination", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ComponentVisualizerInstance_eventHandleSnapTo_Parms, InDestination), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UComponentVisualizerInstance_HandleSnapTo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ComponentVisualizerInstance_eventHandleSnapTo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UComponentVisualizerInstance_HandleSnapTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ComponentVisualizerInstance_eventHandleSnapTo_Parms), &Z_Construct_UFunction_UComponentVisualizerInstance_HandleSnapTo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComponentVisualizerInstance_HandleSnapTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComponentVisualizerInstance_HandleSnapTo_Statics::NewProp_bInAlign,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComponentVisualizerInstance_HandleSnapTo_Statics::NewProp_bInUseLineTrace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComponentVisualizerInstance_HandleSnapTo_Statics::NewProp_bInUseBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComponentVisualizerInstance_HandleSnapTo_Statics::NewProp_bInUsePivot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComponentVisualizerInstance_HandleSnapTo_Statics::NewProp_InDestination,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComponentVisualizerInstance_HandleSnapTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComponentVisualizerInstance_HandleSnapTo_Statics::Function_MetaDataParams[] = {
		{ "Category", "ComponentVisualizer|Selection" },
		{ "DisplayName", "Handle Snap To" },
		{ "ModuleRelativePath", "Private/ComponentVisualizer/ComponentVisualizerInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UComponentVisualizerInstance_HandleSnapTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComponentVisualizerInstance, nullptr, "HandleSnapTo", nullptr, nullptr, sizeof(ComponentVisualizerInstance_eventHandleSnapTo_Parms), Z_Construct_UFunction_UComponentVisualizerInstance_HandleSnapTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComponentVisualizerInstance_HandleSnapTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComponentVisualizerInstance_HandleSnapTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComponentVisualizerInstance_HandleSnapTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComponentVisualizerInstance_HandleSnapTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UComponentVisualizerInstance_HandleSnapTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComponentVisualizerInstance_HandleTransformGizmoMove_Statics
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComponentVisualizerInstance_HandleTransformGizmoMove_Statics::NewProp_Drag = { "Drag", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ComponentVisualizerInstance_eventHandleTransformGizmoMove_Parms, Drag), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComponentVisualizerInstance_HandleTransformGizmoMove_Statics::NewProp_DeltaRotation = { "DeltaRotation", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ComponentVisualizerInstance_eventHandleTransformGizmoMove_Parms, DeltaRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComponentVisualizerInstance_HandleTransformGizmoMove_Statics::NewProp_DeltaScale = { "DeltaScale", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ComponentVisualizerInstance_eventHandleTransformGizmoMove_Parms, DeltaScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UComponentVisualizerInstance_HandleTransformGizmoMove_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ComponentVisualizerInstance_eventHandleTransformGizmoMove_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UComponentVisualizerInstance_HandleTransformGizmoMove_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ComponentVisualizerInstance_eventHandleTransformGizmoMove_Parms), &Z_Construct_UFunction_UComponentVisualizerInstance_HandleTransformGizmoMove_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComponentVisualizerInstance_HandleTransformGizmoMove_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComponentVisualizerInstance_HandleTransformGizmoMove_Statics::NewProp_Drag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComponentVisualizerInstance_HandleTransformGizmoMove_Statics::NewProp_DeltaRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComponentVisualizerInstance_HandleTransformGizmoMove_Statics::NewProp_DeltaScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComponentVisualizerInstance_HandleTransformGizmoMove_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComponentVisualizerInstance_HandleTransformGizmoMove_Statics::Function_MetaDataParams[] = {
		{ "Category", "ComponentVisualizer|Input" },
		{ "DisplayName", "Handle Transform Gizmo Move" },
		{ "ModuleRelativePath", "Private/ComponentVisualizer/ComponentVisualizerInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UComponentVisualizerInstance_HandleTransformGizmoMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComponentVisualizerInstance, nullptr, "HandleTransformGizmoMove", nullptr, nullptr, sizeof(ComponentVisualizerInstance_eventHandleTransformGizmoMove_Parms), Z_Construct_UFunction_UComponentVisualizerInstance_HandleTransformGizmoMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComponentVisualizerInstance_HandleTransformGizmoMove_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComponentVisualizerInstance_HandleTransformGizmoMove_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComponentVisualizerInstance_HandleTransformGizmoMove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComponentVisualizerInstance_HandleTransformGizmoMove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UComponentVisualizerInstance_HandleTransformGizmoMove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComponentVisualizerInstance_HasFocusOnSelectionBoundingBox_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutBoundingBox;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComponentVisualizerInstance_HasFocusOnSelectionBoundingBox_Statics::NewProp_OutBoundingBox = { "OutBoundingBox", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ComponentVisualizerInstance_eventHasFocusOnSelectionBoundingBox_Parms, OutBoundingBox), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UComponentVisualizerInstance_HasFocusOnSelectionBoundingBox_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ComponentVisualizerInstance_eventHasFocusOnSelectionBoundingBox_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UComponentVisualizerInstance_HasFocusOnSelectionBoundingBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ComponentVisualizerInstance_eventHasFocusOnSelectionBoundingBox_Parms), &Z_Construct_UFunction_UComponentVisualizerInstance_HasFocusOnSelectionBoundingBox_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComponentVisualizerInstance_HasFocusOnSelectionBoundingBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComponentVisualizerInstance_HasFocusOnSelectionBoundingBox_Statics::NewProp_OutBoundingBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComponentVisualizerInstance_HasFocusOnSelectionBoundingBox_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComponentVisualizerInstance_HasFocusOnSelectionBoundingBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "ComponentVisualizer|Selection" },
		{ "DisplayName", "Has Focus On Selection Bounding Box" },
		{ "ModuleRelativePath", "Private/ComponentVisualizer/ComponentVisualizerInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UComponentVisualizerInstance_HasFocusOnSelectionBoundingBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComponentVisualizerInstance, nullptr, "HasFocusOnSelectionBoundingBox", nullptr, nullptr, sizeof(ComponentVisualizerInstance_eventHasFocusOnSelectionBoundingBox_Parms), Z_Construct_UFunction_UComponentVisualizerInstance_HasFocusOnSelectionBoundingBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComponentVisualizerInstance_HasFocusOnSelectionBoundingBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComponentVisualizerInstance_HasFocusOnSelectionBoundingBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComponentVisualizerInstance_HasFocusOnSelectionBoundingBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComponentVisualizerInstance_HasFocusOnSelectionBoundingBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UComponentVisualizerInstance_HasFocusOnSelectionBoundingBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComponentVisualizerInstance_NotifyPropertyModifiedByName_Statics
	{
		struct ComponentVisualizerInstance_eventNotifyPropertyModifiedByName_Parms
		{
			UActorComponent* Component;
			FName PropertyName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PropertyName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComponentVisualizerInstance_NotifyPropertyModifiedByName_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComponentVisualizerInstance_NotifyPropertyModifiedByName_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ComponentVisualizerInstance_eventNotifyPropertyModifiedByName_Parms, Component), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UComponentVisualizerInstance_NotifyPropertyModifiedByName_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UComponentVisualizerInstance_NotifyPropertyModifiedByName_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UComponentVisualizerInstance_NotifyPropertyModifiedByName_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ComponentVisualizerInstance_eventNotifyPropertyModifiedByName_Parms, PropertyName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UComponentVisualizerInstance_NotifyPropertyModifiedByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ComponentVisualizerInstance_eventNotifyPropertyModifiedByName_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UComponentVisualizerInstance_NotifyPropertyModifiedByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ComponentVisualizerInstance_eventNotifyPropertyModifiedByName_Parms), &Z_Construct_UFunction_UComponentVisualizerInstance_NotifyPropertyModifiedByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComponentVisualizerInstance_NotifyPropertyModifiedByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComponentVisualizerInstance_NotifyPropertyModifiedByName_Statics::NewProp_Component,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComponentVisualizerInstance_NotifyPropertyModifiedByName_Statics::NewProp_PropertyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComponentVisualizerInstance_NotifyPropertyModifiedByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComponentVisualizerInstance_NotifyPropertyModifiedByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "ComponentVisualizer" },
		{ "HideSelfPin", "true" },
		{ "ModuleRelativePath", "Private/ComponentVisualizer/ComponentVisualizerInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UComponentVisualizerInstance_NotifyPropertyModifiedByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComponentVisualizerInstance, nullptr, "NotifyPropertyModifiedByName", nullptr, nullptr, sizeof(ComponentVisualizerInstance_eventNotifyPropertyModifiedByName_Parms), Z_Construct_UFunction_UComponentVisualizerInstance_NotifyPropertyModifiedByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComponentVisualizerInstance_NotifyPropertyModifiedByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComponentVisualizerInstance_NotifyPropertyModifiedByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComponentVisualizerInstance_NotifyPropertyModifiedByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComponentVisualizerInstance_NotifyPropertyModifiedByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UComponentVisualizerInstance_NotifyPropertyModifiedByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComponentVisualizerInstance_OnContextMenuConstruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComponentVisualizerInstance_OnContextMenuConstruct_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComponentVisualizerInstance_OnContextMenuConstruct_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ComponentVisualizerInstance_eventOnContextMenuConstruct_Parms, Widget), Z_Construct_UClass_UEditorUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UComponentVisualizerInstance_OnContextMenuConstruct_Statics::NewProp_Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UComponentVisualizerInstance_OnContextMenuConstruct_Statics::NewProp_Widget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComponentVisualizerInstance_OnContextMenuConstruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComponentVisualizerInstance_OnContextMenuConstruct_Statics::NewProp_Widget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComponentVisualizerInstance_OnContextMenuConstruct_Statics::Function_MetaDataParams[] = {
		{ "Category", "ComponentVisualizer|Drawing" },
		{ "DisplayName", "On Context Menu Construct" },
		{ "ModuleRelativePath", "Private/ComponentVisualizer/ComponentVisualizerInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UComponentVisualizerInstance_OnContextMenuConstruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComponentVisualizerInstance, nullptr, "OnContextMenuConstruct", nullptr, nullptr, sizeof(ComponentVisualizerInstance_eventOnContextMenuConstruct_Parms), Z_Construct_UFunction_UComponentVisualizerInstance_OnContextMenuConstruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComponentVisualizerInstance_OnContextMenuConstruct_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComponentVisualizerInstance_OnContextMenuConstruct_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComponentVisualizerInstance_OnContextMenuConstruct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComponentVisualizerInstance_OnContextMenuConstruct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UComponentVisualizerInstance_OnContextMenuConstruct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComponentVisualizerInstance_OnEndEditing_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComponentVisualizerInstance_OnEndEditing_Statics::Function_MetaDataParams[] = {
		{ "Category", "ComponentVisualizer" },
		{ "DisplayName", "On End Editing" },
		{ "ModuleRelativePath", "Private/ComponentVisualizer/ComponentVisualizerInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UComponentVisualizerInstance_OnEndEditing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComponentVisualizerInstance, nullptr, "OnEndEditing", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComponentVisualizerInstance_OnEndEditing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComponentVisualizerInstance_OnEndEditing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComponentVisualizerInstance_OnEndEditing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UComponentVisualizerInstance_OnEndEditing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComponentVisualizerInstance_OverrideTransformGizmoCoordinateSystem_Statics
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComponentVisualizerInstance_OverrideTransformGizmoCoordinateSystem_Statics::NewProp_NewTransform = { "NewTransform", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ComponentVisualizerInstance_eventOverrideTransformGizmoCoordinateSystem_Parms, NewTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UComponentVisualizerInstance_OverrideTransformGizmoCoordinateSystem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ComponentVisualizerInstance_eventOverrideTransformGizmoCoordinateSystem_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UComponentVisualizerInstance_OverrideTransformGizmoCoordinateSystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ComponentVisualizerInstance_eventOverrideTransformGizmoCoordinateSystem_Parms), &Z_Construct_UFunction_UComponentVisualizerInstance_OverrideTransformGizmoCoordinateSystem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComponentVisualizerInstance_OverrideTransformGizmoCoordinateSystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComponentVisualizerInstance_OverrideTransformGizmoCoordinateSystem_Statics::NewProp_NewTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComponentVisualizerInstance_OverrideTransformGizmoCoordinateSystem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComponentVisualizerInstance_OverrideTransformGizmoCoordinateSystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "ComponentVisualizer|Input" },
		{ "DisplayName", "Override Transform Gizmo Coordinate System" },
		{ "ModuleRelativePath", "Private/ComponentVisualizer/ComponentVisualizerInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UComponentVisualizerInstance_OverrideTransformGizmoCoordinateSystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComponentVisualizerInstance, nullptr, "OverrideTransformGizmoCoordinateSystem", nullptr, nullptr, sizeof(ComponentVisualizerInstance_eventOverrideTransformGizmoCoordinateSystem_Parms), Z_Construct_UFunction_UComponentVisualizerInstance_OverrideTransformGizmoCoordinateSystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComponentVisualizerInstance_OverrideTransformGizmoCoordinateSystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComponentVisualizerInstance_OverrideTransformGizmoCoordinateSystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComponentVisualizerInstance_OverrideTransformGizmoCoordinateSystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComponentVisualizerInstance_OverrideTransformGizmoCoordinateSystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UComponentVisualizerInstance_OverrideTransformGizmoCoordinateSystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComponentVisualizerInstance_OverrideTransformGizmoLocation_Statics
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComponentVisualizerInstance_OverrideTransformGizmoLocation_Statics::NewProp_NewLocation = { "NewLocation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ComponentVisualizerInstance_eventOverrideTransformGizmoLocation_Parms, NewLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UComponentVisualizerInstance_OverrideTransformGizmoLocation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ComponentVisualizerInstance_eventOverrideTransformGizmoLocation_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UComponentVisualizerInstance_OverrideTransformGizmoLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ComponentVisualizerInstance_eventOverrideTransformGizmoLocation_Parms), &Z_Construct_UFunction_UComponentVisualizerInstance_OverrideTransformGizmoLocation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComponentVisualizerInstance_OverrideTransformGizmoLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComponentVisualizerInstance_OverrideTransformGizmoLocation_Statics::NewProp_NewLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComponentVisualizerInstance_OverrideTransformGizmoLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComponentVisualizerInstance_OverrideTransformGizmoLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "ComponentVisualizer|Input" },
		{ "DisplayName", "Override Transform Gizmo Location" },
		{ "ModuleRelativePath", "Private/ComponentVisualizer/ComponentVisualizerInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UComponentVisualizerInstance_OverrideTransformGizmoLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComponentVisualizerInstance, nullptr, "OverrideTransformGizmoLocation", nullptr, nullptr, sizeof(ComponentVisualizerInstance_eventOverrideTransformGizmoLocation_Parms), Z_Construct_UFunction_UComponentVisualizerInstance_OverrideTransformGizmoLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComponentVisualizerInstance_OverrideTransformGizmoLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComponentVisualizerInstance_OverrideTransformGizmoLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComponentVisualizerInstance_OverrideTransformGizmoLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComponentVisualizerInstance_OverrideTransformGizmoLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UComponentVisualizerInstance_OverrideTransformGizmoLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComponentVisualizerInstance_ReceiveDrawHUD_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ComponentInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComponentVisualizerInstance_ReceiveDrawHUD_Statics::NewProp_ComponentInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComponentVisualizerInstance_ReceiveDrawHUD_Statics::NewProp_ComponentInfo = { "ComponentInfo", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ComponentVisualizerInstance_eventReceiveDrawHUD_Parms, ComponentInfo), Z_Construct_UScriptStruct_FActorComponentWrapper, METADATA_PARAMS(Z_Construct_UFunction_UComponentVisualizerInstance_ReceiveDrawHUD_Statics::NewProp_ComponentInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UComponentVisualizerInstance_ReceiveDrawHUD_Statics::NewProp_ComponentInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComponentVisualizerInstance_ReceiveDrawHUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComponentVisualizerInstance_ReceiveDrawHUD_Statics::NewProp_ComponentInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComponentVisualizerInstance_ReceiveDrawHUD_Statics::Function_MetaDataParams[] = {
		{ "Category", "ComponentVisualizer|Drawing" },
		{ "Comment", "/** Draw HUD on viewport for the supplied component. */" },
		{ "DisplayName", "Receive Draw HUD" },
		{ "ModuleRelativePath", "Private/ComponentVisualizer/ComponentVisualizerInstance.h" },
		{ "ToolTip", "Draw HUD on viewport for the supplied component." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UComponentVisualizerInstance_ReceiveDrawHUD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComponentVisualizerInstance, nullptr, "ReceiveDrawHUD", nullptr, nullptr, sizeof(ComponentVisualizerInstance_eventReceiveDrawHUD_Parms), Z_Construct_UFunction_UComponentVisualizerInstance_ReceiveDrawHUD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComponentVisualizerInstance_ReceiveDrawHUD_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComponentVisualizerInstance_ReceiveDrawHUD_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComponentVisualizerInstance_ReceiveDrawHUD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComponentVisualizerInstance_ReceiveDrawHUD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UComponentVisualizerInstance_ReceiveDrawHUD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComponentVisualizerInstance_ReceiveDrawPrimitives_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ComponentInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComponentVisualizerInstance_ReceiveDrawPrimitives_Statics::NewProp_ComponentInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComponentVisualizerInstance_ReceiveDrawPrimitives_Statics::NewProp_ComponentInfo = { "ComponentInfo", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ComponentVisualizerInstance_eventReceiveDrawPrimitives_Parms, ComponentInfo), Z_Construct_UScriptStruct_FActorComponentWrapper, METADATA_PARAMS(Z_Construct_UFunction_UComponentVisualizerInstance_ReceiveDrawPrimitives_Statics::NewProp_ComponentInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UComponentVisualizerInstance_ReceiveDrawPrimitives_Statics::NewProp_ComponentInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComponentVisualizerInstance_ReceiveDrawPrimitives_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComponentVisualizerInstance_ReceiveDrawPrimitives_Statics::NewProp_ComponentInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComponentVisualizerInstance_ReceiveDrawPrimitives_Statics::Function_MetaDataParams[] = {
		{ "Category", "ComponentVisualizer|Drawing" },
		{ "Comment", "/**  Draw visualization for the supplied component. */" },
		{ "DisplayName", "Receive Draw Primitives" },
		{ "ModuleRelativePath", "Private/ComponentVisualizer/ComponentVisualizerInstance.h" },
		{ "ToolTip", "Draw visualization for the supplied component." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UComponentVisualizerInstance_ReceiveDrawPrimitives_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComponentVisualizerInstance, nullptr, "ReceiveDrawPrimitives", nullptr, nullptr, sizeof(ComponentVisualizerInstance_eventReceiveDrawPrimitives_Parms), Z_Construct_UFunction_UComponentVisualizerInstance_ReceiveDrawPrimitives_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComponentVisualizerInstance_ReceiveDrawPrimitives_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComponentVisualizerInstance_ReceiveDrawPrimitives_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComponentVisualizerInstance_ReceiveDrawPrimitives_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComponentVisualizerInstance_ReceiveDrawPrimitives()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UComponentVisualizerInstance_ReceiveDrawPrimitives_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UComponentVisualizerInstance_NoRegister()
	{
		return UComponentVisualizerInstance::StaticClass();
	}
	struct Z_Construct_UClass_UComponentVisualizerInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComponentVisualizerInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULevelEditorToolBase,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorScriptingTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UComponentVisualizerInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UComponentVisualizerInstance_ClearActiveWorldHitProxy, "ClearActiveWorldHitProxy" }, // 2080674012
		{ &Z_Construct_UFunction_UComponentVisualizerInstance_Construct, "Construct" }, // 3667957393
		{ &Z_Construct_UFunction_UComponentVisualizerInstance_CreateWorldHitProxyByIndex, "CreateWorldHitProxyByIndex" }, // 1131014443
		{ &Z_Construct_UFunction_UComponentVisualizerInstance_Destruct, "Destruct" }, // 4228227413
		{ &Z_Construct_UFunction_UComponentVisualizerInstance_GetContextMenuUserWidgetClass, "GetContextMenuUserWidgetClass" }, // 1196793080
		{ &Z_Construct_UFunction_UComponentVisualizerInstance_HandleClickVisualizerHitProxy, "HandleClickVisualizerHitProxy" }, // 4186320605
		{ &Z_Construct_UFunction_UComponentVisualizerInstance_HandleInputKey, "HandleInputKey" }, // 119518599
		{ &Z_Construct_UFunction_UComponentVisualizerInstance_HandleSelectionBox, "HandleSelectionBox" }, // 326979147
		{ &Z_Construct_UFunction_UComponentVisualizerInstance_HandleSelectionFrustum, "HandleSelectionFrustum" }, // 1205823812
		{ &Z_Construct_UFunction_UComponentVisualizerInstance_HandleSnapTo, "HandleSnapTo" }, // 3397471724
		{ &Z_Construct_UFunction_UComponentVisualizerInstance_HandleTransformGizmoMove, "HandleTransformGizmoMove" }, // 1173630215
		{ &Z_Construct_UFunction_UComponentVisualizerInstance_HasFocusOnSelectionBoundingBox, "HasFocusOnSelectionBoundingBox" }, // 3855670933
		{ &Z_Construct_UFunction_UComponentVisualizerInstance_NotifyPropertyModifiedByName, "NotifyPropertyModifiedByName" }, // 1580480658
		{ &Z_Construct_UFunction_UComponentVisualizerInstance_OnContextMenuConstruct, "OnContextMenuConstruct" }, // 3191526282
		{ &Z_Construct_UFunction_UComponentVisualizerInstance_OnEndEditing, "OnEndEditing" }, // 294288840
		{ &Z_Construct_UFunction_UComponentVisualizerInstance_OverrideTransformGizmoCoordinateSystem, "OverrideTransformGizmoCoordinateSystem" }, // 4231784856
		{ &Z_Construct_UFunction_UComponentVisualizerInstance_OverrideTransformGizmoLocation, "OverrideTransformGizmoLocation" }, // 2455284724
		{ &Z_Construct_UFunction_UComponentVisualizerInstance_ReceiveDrawHUD, "ReceiveDrawHUD" }, // 2849752069
		{ &Z_Construct_UFunction_UComponentVisualizerInstance_ReceiveDrawPrimitives, "ReceiveDrawPrimitives" }, // 2772545741
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComponentVisualizerInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ComponentVisualizer/ComponentVisualizerInstance.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/ComponentVisualizer/ComponentVisualizerInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComponentVisualizerInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComponentVisualizerInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UComponentVisualizerInstance_Statics::ClassParams = {
		&UComponentVisualizerInstance::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UComponentVisualizerInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UComponentVisualizerInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UComponentVisualizerInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UComponentVisualizerInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UComponentVisualizerInstance, 2982380184);
	template<> EDITORSCRIPTINGTOOLS_API UClass* StaticClass<UComponentVisualizerInstance>()
	{
		return UComponentVisualizerInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UComponentVisualizerInstance(Z_Construct_UClass_UComponentVisualizerInstance, &UComponentVisualizerInstance::StaticClass, TEXT("/Script/EditorScriptingTools"), TEXT("UComponentVisualizerInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComponentVisualizerInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
