// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorScriptingTools/Private/EditorEventsSubsystem/EditorEventsSubsystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorEventsSubsystem() {}
// Cross Module References
	EDITORSCRIPTINGTOOLS_API UFunction* Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnExecuteActionEventSignature__DelegateSignature();
	EDITORSCRIPTINGTOOLS_API UClass* Z_Construct_UClass_UEditorEventsSubsystem();
	EDITORSCRIPTINGTOOLS_API UClass* Z_Construct_UClass_UEditorUserDefinedActions_NoRegister();
	EDITORSCRIPTINGTOOLS_API UFunction* Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnApplicationMousePreInputButtonDownEventSignature__DelegateSignature();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FPointerEvent();
	EDITORSCRIPTINGTOOLS_API UFunction* Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnApplicationPreInputKeyDownEventSignature__DelegateSignature();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FKeyEvent();
	EDITORSCRIPTINGTOOLS_API UFunction* Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnActorSelectionChangedEventSignature__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	EDITORSCRIPTINGTOOLS_API UFunction* Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnWorldFolderDeleteEventSignature__DelegateSignature();
	EDITORSCRIPTINGTOOLS_API UFunction* Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnWorldFolderMoveEventSignature__DelegateSignature();
	EDITORSCRIPTINGTOOLS_API UFunction* Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnWorldFolderCreateEventSignature__DelegateSignature();
	EDITORSCRIPTINGTOOLS_API UFunction* Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnAssetsPreDeleteEventSignature__DelegateSignature();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	EDITORSCRIPTINGTOOLS_API UFunction* Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnPlayInEditorEventSignature__DelegateSignature();
	EDITORSCRIPTINGTOOLS_API UEnum* Z_Construct_UEnum_EditorScriptingTools_EOnPIEEventType();
	EDITORSCRIPTINGTOOLS_API UFunction* Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnDollyPerspectiveCameraSignature__DelegateSignature();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	EDITORSCRIPTINGTOOLS_API UFunction* Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnEditorCameraMovedSignature__DelegateSignature();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	EDITORSCRIPTINGTOOLS_API UFunction* Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnMapChangedSignature__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	EDITORSCRIPTINGTOOLS_API UEnum* Z_Construct_UEnum_EditorScriptingTools_ELevelMapChangeType();
	EDITORSCRIPTINGTOOLS_API UFunction* Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnEditorModeChangedSignature__DelegateSignature();
	EDITORSCRIPTINGTOOLS_API UFunction* Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnMapOpenedSignature__DelegateSignature();
	EDITORSCRIPTINGTOOLS_API UFunction* Z_Construct_UDelegateFunction_UEditorEventsSubsystem_SimpleEventSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_EditorScriptingTools();
	EDITORSCRIPTINGTOOLS_API UClass* Z_Construct_UClass_UEditorEventsSubsystem_NoRegister();
	EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnExecuteActionEventSignature__DelegateSignature_Statics
	{
		struct EditorEventsSubsystem_eventOnExecuteActionEventSignature_Parms
		{
			UEditorUserDefinedActions* ActionsAsset;
			uint8 ActionAsByte;
			bool bIsRepeated;
		};
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnExecuteActionEventSignature__DelegateSignature_Statics::NewProp_ActionsAsset = { "ActionsAsset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorEventsSubsystem_eventOnExecuteActionEventSignature_Parms, ActionsAsset), Z_Construct_UClass_UEditorUserDefinedActions_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnExecuteActionEventSignature__DelegateSignature_Statics::NewProp_ActionAsByte = { "ActionAsByte", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorEventsSubsystem_eventOnExecuteActionEventSignature_Parms, ActionAsByte), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnExecuteActionEventSignature__DelegateSignature_Statics::NewProp_bIsRepeated_SetBit(void* Obj)
	{
		((EditorEventsSubsystem_eventOnExecuteActionEventSignature_Parms*)Obj)->bIsRepeated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnExecuteActionEventSignature__DelegateSignature_Statics::NewProp_bIsRepeated = { "bIsRepeated", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorEventsSubsystem_eventOnExecuteActionEventSignature_Parms), &Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnExecuteActionEventSignature__DelegateSignature_Statics::NewProp_bIsRepeated_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnExecuteActionEventSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnExecuteActionEventSignature__DelegateSignature_Statics::NewProp_ActionsAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnExecuteActionEventSignature__DelegateSignature_Statics::NewProp_ActionAsByte,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnExecuteActionEventSignature__DelegateSignature_Statics::NewProp_bIsRepeated,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnExecuteActionEventSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/EditorEventsSubsystem/EditorEventsSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnExecuteActionEventSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorEventsSubsystem, nullptr, "OnExecuteActionEventSignature__DelegateSignature", nullptr, nullptr, sizeof(EditorEventsSubsystem_eventOnExecuteActionEventSignature_Parms), Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnExecuteActionEventSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnExecuteActionEventSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnExecuteActionEventSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnExecuteActionEventSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnExecuteActionEventSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnExecuteActionEventSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnApplicationMousePreInputButtonDownEventSignature__DelegateSignature_Statics
	{
		struct EditorEventsSubsystem_eventOnApplicationMousePreInputButtonDownEventSignature_Parms
		{
			FPointerEvent MouseEvent;
			bool bIsEditingViewportFocused;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MouseEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MouseEvent;
		static void NewProp_bIsEditingViewportFocused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsEditingViewportFocused;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnApplicationMousePreInputButtonDownEventSignature__DelegateSignature_Statics::NewProp_MouseEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnApplicationMousePreInputButtonDownEventSignature__DelegateSignature_Statics::NewProp_MouseEvent = { "MouseEvent", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorEventsSubsystem_eventOnApplicationMousePreInputButtonDownEventSignature_Parms, MouseEvent), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnApplicationMousePreInputButtonDownEventSignature__DelegateSignature_Statics::NewProp_MouseEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnApplicationMousePreInputButtonDownEventSignature__DelegateSignature_Statics::NewProp_MouseEvent_MetaData)) };
	void Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnApplicationMousePreInputButtonDownEventSignature__DelegateSignature_Statics::NewProp_bIsEditingViewportFocused_SetBit(void* Obj)
	{
		((EditorEventsSubsystem_eventOnApplicationMousePreInputButtonDownEventSignature_Parms*)Obj)->bIsEditingViewportFocused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnApplicationMousePreInputButtonDownEventSignature__DelegateSignature_Statics::NewProp_bIsEditingViewportFocused = { "bIsEditingViewportFocused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorEventsSubsystem_eventOnApplicationMousePreInputButtonDownEventSignature_Parms), &Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnApplicationMousePreInputButtonDownEventSignature__DelegateSignature_Statics::NewProp_bIsEditingViewportFocused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnApplicationMousePreInputButtonDownEventSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnApplicationMousePreInputButtonDownEventSignature__DelegateSignature_Statics::NewProp_MouseEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnApplicationMousePreInputButtonDownEventSignature__DelegateSignature_Statics::NewProp_bIsEditingViewportFocused,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnApplicationMousePreInputButtonDownEventSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/EditorEventsSubsystem/EditorEventsSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnApplicationMousePreInputButtonDownEventSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorEventsSubsystem, nullptr, "OnApplicationMousePreInputButtonDownEventSignature__DelegateSignature", nullptr, nullptr, sizeof(EditorEventsSubsystem_eventOnApplicationMousePreInputButtonDownEventSignature_Parms), Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnApplicationMousePreInputButtonDownEventSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnApplicationMousePreInputButtonDownEventSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnApplicationMousePreInputButtonDownEventSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnApplicationMousePreInputButtonDownEventSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnApplicationMousePreInputButtonDownEventSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnApplicationMousePreInputButtonDownEventSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnApplicationPreInputKeyDownEventSignature__DelegateSignature_Statics
	{
		struct EditorEventsSubsystem_eventOnApplicationPreInputKeyDownEventSignature_Parms
		{
			FKeyEvent KeyEvent;
			bool bIsEditingViewportFocused;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KeyEvent;
		static void NewProp_bIsEditingViewportFocused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsEditingViewportFocused;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnApplicationPreInputKeyDownEventSignature__DelegateSignature_Statics::NewProp_KeyEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnApplicationPreInputKeyDownEventSignature__DelegateSignature_Statics::NewProp_KeyEvent = { "KeyEvent", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorEventsSubsystem_eventOnApplicationPreInputKeyDownEventSignature_Parms, KeyEvent), Z_Construct_UScriptStruct_FKeyEvent, METADATA_PARAMS(Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnApplicationPreInputKeyDownEventSignature__DelegateSignature_Statics::NewProp_KeyEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnApplicationPreInputKeyDownEventSignature__DelegateSignature_Statics::NewProp_KeyEvent_MetaData)) };
	void Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnApplicationPreInputKeyDownEventSignature__DelegateSignature_Statics::NewProp_bIsEditingViewportFocused_SetBit(void* Obj)
	{
		((EditorEventsSubsystem_eventOnApplicationPreInputKeyDownEventSignature_Parms*)Obj)->bIsEditingViewportFocused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnApplicationPreInputKeyDownEventSignature__DelegateSignature_Statics::NewProp_bIsEditingViewportFocused = { "bIsEditingViewportFocused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorEventsSubsystem_eventOnApplicationPreInputKeyDownEventSignature_Parms), &Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnApplicationPreInputKeyDownEventSignature__DelegateSignature_Statics::NewProp_bIsEditingViewportFocused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnApplicationPreInputKeyDownEventSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnApplicationPreInputKeyDownEventSignature__DelegateSignature_Statics::NewProp_KeyEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnApplicationPreInputKeyDownEventSignature__DelegateSignature_Statics::NewProp_bIsEditingViewportFocused,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnApplicationPreInputKeyDownEventSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/EditorEventsSubsystem/EditorEventsSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnApplicationPreInputKeyDownEventSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorEventsSubsystem, nullptr, "OnApplicationPreInputKeyDownEventSignature__DelegateSignature", nullptr, nullptr, sizeof(EditorEventsSubsystem_eventOnApplicationPreInputKeyDownEventSignature_Parms), Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnApplicationPreInputKeyDownEventSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnApplicationPreInputKeyDownEventSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnApplicationPreInputKeyDownEventSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnApplicationPreInputKeyDownEventSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnApplicationPreInputKeyDownEventSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnApplicationPreInputKeyDownEventSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnActorSelectionChangedEventSignature__DelegateSignature_Statics
	{
		struct EditorEventsSubsystem_eventOnActorSelectionChangedEventSignature_Parms
		{
			TArray<AActor*> SelectedActors;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelectedActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SelectedActors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnActorSelectionChangedEventSignature__DelegateSignature_Statics::NewProp_SelectedActors_Inner = { "SelectedActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnActorSelectionChangedEventSignature__DelegateSignature_Statics::NewProp_SelectedActors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnActorSelectionChangedEventSignature__DelegateSignature_Statics::NewProp_SelectedActors = { "SelectedActors", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorEventsSubsystem_eventOnActorSelectionChangedEventSignature_Parms, SelectedActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnActorSelectionChangedEventSignature__DelegateSignature_Statics::NewProp_SelectedActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnActorSelectionChangedEventSignature__DelegateSignature_Statics::NewProp_SelectedActors_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnActorSelectionChangedEventSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnActorSelectionChangedEventSignature__DelegateSignature_Statics::NewProp_SelectedActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnActorSelectionChangedEventSignature__DelegateSignature_Statics::NewProp_SelectedActors,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnActorSelectionChangedEventSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/EditorEventsSubsystem/EditorEventsSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnActorSelectionChangedEventSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorEventsSubsystem, nullptr, "OnActorSelectionChangedEventSignature__DelegateSignature", nullptr, nullptr, sizeof(EditorEventsSubsystem_eventOnActorSelectionChangedEventSignature_Parms), Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnActorSelectionChangedEventSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnActorSelectionChangedEventSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnActorSelectionChangedEventSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnActorSelectionChangedEventSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnActorSelectionChangedEventSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnActorSelectionChangedEventSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnWorldFolderDeleteEventSignature__DelegateSignature_Statics
	{
		struct EditorEventsSubsystem_eventOnWorldFolderDeleteEventSignature_Parms
		{
			FName Path;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Path;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnWorldFolderDeleteEventSignature__DelegateSignature_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorEventsSubsystem_eventOnWorldFolderDeleteEventSignature_Parms, Path), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnWorldFolderDeleteEventSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnWorldFolderDeleteEventSignature__DelegateSignature_Statics::NewProp_Path,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnWorldFolderDeleteEventSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/EditorEventsSubsystem/EditorEventsSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnWorldFolderDeleteEventSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorEventsSubsystem, nullptr, "OnWorldFolderDeleteEventSignature__DelegateSignature", nullptr, nullptr, sizeof(EditorEventsSubsystem_eventOnWorldFolderDeleteEventSignature_Parms), Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnWorldFolderDeleteEventSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnWorldFolderDeleteEventSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnWorldFolderDeleteEventSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnWorldFolderDeleteEventSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnWorldFolderDeleteEventSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnWorldFolderDeleteEventSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnWorldFolderMoveEventSignature__DelegateSignature_Statics
	{
		struct EditorEventsSubsystem_eventOnWorldFolderMoveEventSignature_Parms
		{
			FName OldPath;
			FName NewPath;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OldPath;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NewPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnWorldFolderMoveEventSignature__DelegateSignature_Statics::NewProp_OldPath = { "OldPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorEventsSubsystem_eventOnWorldFolderMoveEventSignature_Parms, OldPath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnWorldFolderMoveEventSignature__DelegateSignature_Statics::NewProp_NewPath = { "NewPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorEventsSubsystem_eventOnWorldFolderMoveEventSignature_Parms, NewPath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnWorldFolderMoveEventSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnWorldFolderMoveEventSignature__DelegateSignature_Statics::NewProp_OldPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnWorldFolderMoveEventSignature__DelegateSignature_Statics::NewProp_NewPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnWorldFolderMoveEventSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/EditorEventsSubsystem/EditorEventsSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnWorldFolderMoveEventSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorEventsSubsystem, nullptr, "OnWorldFolderMoveEventSignature__DelegateSignature", nullptr, nullptr, sizeof(EditorEventsSubsystem_eventOnWorldFolderMoveEventSignature_Parms), Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnWorldFolderMoveEventSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnWorldFolderMoveEventSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnWorldFolderMoveEventSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnWorldFolderMoveEventSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnWorldFolderMoveEventSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnWorldFolderMoveEventSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnWorldFolderCreateEventSignature__DelegateSignature_Statics
	{
		struct EditorEventsSubsystem_eventOnWorldFolderCreateEventSignature_Parms
		{
			FName NewPath;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NewPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnWorldFolderCreateEventSignature__DelegateSignature_Statics::NewProp_NewPath = { "NewPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorEventsSubsystem_eventOnWorldFolderCreateEventSignature_Parms, NewPath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnWorldFolderCreateEventSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnWorldFolderCreateEventSignature__DelegateSignature_Statics::NewProp_NewPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnWorldFolderCreateEventSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/EditorEventsSubsystem/EditorEventsSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnWorldFolderCreateEventSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorEventsSubsystem, nullptr, "OnWorldFolderCreateEventSignature__DelegateSignature", nullptr, nullptr, sizeof(EditorEventsSubsystem_eventOnWorldFolderCreateEventSignature_Parms), Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnWorldFolderCreateEventSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnWorldFolderCreateEventSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnWorldFolderCreateEventSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnWorldFolderCreateEventSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnWorldFolderCreateEventSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnWorldFolderCreateEventSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnAssetsPreDeleteEventSignature__DelegateSignature_Statics
	{
		struct EditorEventsSubsystem_eventOnAssetsPreDeleteEventSignature_Parms
		{
			TArray<UObject*> Assets;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Assets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Assets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Assets;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnAssetsPreDeleteEventSignature__DelegateSignature_Statics::NewProp_Assets_Inner = { "Assets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnAssetsPreDeleteEventSignature__DelegateSignature_Statics::NewProp_Assets_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnAssetsPreDeleteEventSignature__DelegateSignature_Statics::NewProp_Assets = { "Assets", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorEventsSubsystem_eventOnAssetsPreDeleteEventSignature_Parms, Assets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnAssetsPreDeleteEventSignature__DelegateSignature_Statics::NewProp_Assets_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnAssetsPreDeleteEventSignature__DelegateSignature_Statics::NewProp_Assets_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnAssetsPreDeleteEventSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnAssetsPreDeleteEventSignature__DelegateSignature_Statics::NewProp_Assets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnAssetsPreDeleteEventSignature__DelegateSignature_Statics::NewProp_Assets,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnAssetsPreDeleteEventSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/EditorEventsSubsystem/EditorEventsSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnAssetsPreDeleteEventSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorEventsSubsystem, nullptr, "OnAssetsPreDeleteEventSignature__DelegateSignature", nullptr, nullptr, sizeof(EditorEventsSubsystem_eventOnAssetsPreDeleteEventSignature_Parms), Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnAssetsPreDeleteEventSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnAssetsPreDeleteEventSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnAssetsPreDeleteEventSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnAssetsPreDeleteEventSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnAssetsPreDeleteEventSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnAssetsPreDeleteEventSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnPlayInEditorEventSignature__DelegateSignature_Statics
	{
		struct EditorEventsSubsystem_eventOnPlayInEditorEventSignature_Parms
		{
			bool bIsSimulating;
			EOnPIEEventType EventType;
		};
		static void NewProp_bIsSimulating_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSimulating;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EventType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EventType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnPlayInEditorEventSignature__DelegateSignature_Statics::NewProp_bIsSimulating_SetBit(void* Obj)
	{
		((EditorEventsSubsystem_eventOnPlayInEditorEventSignature_Parms*)Obj)->bIsSimulating = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnPlayInEditorEventSignature__DelegateSignature_Statics::NewProp_bIsSimulating = { "bIsSimulating", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorEventsSubsystem_eventOnPlayInEditorEventSignature_Parms), &Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnPlayInEditorEventSignature__DelegateSignature_Statics::NewProp_bIsSimulating_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnPlayInEditorEventSignature__DelegateSignature_Statics::NewProp_EventType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnPlayInEditorEventSignature__DelegateSignature_Statics::NewProp_EventType = { "EventType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorEventsSubsystem_eventOnPlayInEditorEventSignature_Parms, EventType), Z_Construct_UEnum_EditorScriptingTools_EOnPIEEventType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnPlayInEditorEventSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnPlayInEditorEventSignature__DelegateSignature_Statics::NewProp_bIsSimulating,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnPlayInEditorEventSignature__DelegateSignature_Statics::NewProp_EventType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnPlayInEditorEventSignature__DelegateSignature_Statics::NewProp_EventType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnPlayInEditorEventSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/EditorEventsSubsystem/EditorEventsSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnPlayInEditorEventSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorEventsSubsystem, nullptr, "OnPlayInEditorEventSignature__DelegateSignature", nullptr, nullptr, sizeof(EditorEventsSubsystem_eventOnPlayInEditorEventSignature_Parms), Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnPlayInEditorEventSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnPlayInEditorEventSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnPlayInEditorEventSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnPlayInEditorEventSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnPlayInEditorEventSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnPlayInEditorEventSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnDollyPerspectiveCameraSignature__DelegateSignature_Statics
	{
		struct EditorEventsSubsystem_eventOnDollyPerspectiveCameraSignature_Parms
		{
			FVector Drag;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Drag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Drag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnDollyPerspectiveCameraSignature__DelegateSignature_Statics::NewProp_Drag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnDollyPerspectiveCameraSignature__DelegateSignature_Statics::NewProp_Drag = { "Drag", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorEventsSubsystem_eventOnDollyPerspectiveCameraSignature_Parms, Drag), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnDollyPerspectiveCameraSignature__DelegateSignature_Statics::NewProp_Drag_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnDollyPerspectiveCameraSignature__DelegateSignature_Statics::NewProp_Drag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnDollyPerspectiveCameraSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnDollyPerspectiveCameraSignature__DelegateSignature_Statics::NewProp_Drag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnDollyPerspectiveCameraSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/EditorEventsSubsystem/EditorEventsSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnDollyPerspectiveCameraSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorEventsSubsystem, nullptr, "OnDollyPerspectiveCameraSignature__DelegateSignature", nullptr, nullptr, sizeof(EditorEventsSubsystem_eventOnDollyPerspectiveCameraSignature_Parms), Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnDollyPerspectiveCameraSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnDollyPerspectiveCameraSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00D30000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnDollyPerspectiveCameraSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnDollyPerspectiveCameraSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnDollyPerspectiveCameraSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnDollyPerspectiveCameraSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnEditorCameraMovedSignature__DelegateSignature_Statics
	{
		struct EditorEventsSubsystem_eventOnEditorCameraMovedSignature_Parms
		{
			FVector ViewLocation;
			FRotator ViewRotation;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ViewLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ViewRotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnEditorCameraMovedSignature__DelegateSignature_Statics::NewProp_ViewLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnEditorCameraMovedSignature__DelegateSignature_Statics::NewProp_ViewLocation = { "ViewLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorEventsSubsystem_eventOnEditorCameraMovedSignature_Parms, ViewLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnEditorCameraMovedSignature__DelegateSignature_Statics::NewProp_ViewLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnEditorCameraMovedSignature__DelegateSignature_Statics::NewProp_ViewLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnEditorCameraMovedSignature__DelegateSignature_Statics::NewProp_ViewRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnEditorCameraMovedSignature__DelegateSignature_Statics::NewProp_ViewRotation = { "ViewRotation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorEventsSubsystem_eventOnEditorCameraMovedSignature_Parms, ViewRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnEditorCameraMovedSignature__DelegateSignature_Statics::NewProp_ViewRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnEditorCameraMovedSignature__DelegateSignature_Statics::NewProp_ViewRotation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnEditorCameraMovedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnEditorCameraMovedSignature__DelegateSignature_Statics::NewProp_ViewLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnEditorCameraMovedSignature__DelegateSignature_Statics::NewProp_ViewRotation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnEditorCameraMovedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/EditorEventsSubsystem/EditorEventsSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnEditorCameraMovedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorEventsSubsystem, nullptr, "OnEditorCameraMovedSignature__DelegateSignature", nullptr, nullptr, sizeof(EditorEventsSubsystem_eventOnEditorCameraMovedSignature_Parms), Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnEditorCameraMovedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnEditorCameraMovedSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00D30000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnEditorCameraMovedSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnEditorCameraMovedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnEditorCameraMovedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnEditorCameraMovedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnMapChangedSignature__DelegateSignature_Statics
	{
		struct EditorEventsSubsystem_eventOnMapChangedSignature_Parms
		{
			UWorld* World;
			ELevelMapChangeType ChangeType;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ChangeType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ChangeType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnMapChangedSignature__DelegateSignature_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorEventsSubsystem_eventOnMapChangedSignature_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnMapChangedSignature__DelegateSignature_Statics::NewProp_ChangeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnMapChangedSignature__DelegateSignature_Statics::NewProp_ChangeType = { "ChangeType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorEventsSubsystem_eventOnMapChangedSignature_Parms, ChangeType), Z_Construct_UEnum_EditorScriptingTools_ELevelMapChangeType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnMapChangedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnMapChangedSignature__DelegateSignature_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnMapChangedSignature__DelegateSignature_Statics::NewProp_ChangeType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnMapChangedSignature__DelegateSignature_Statics::NewProp_ChangeType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnMapChangedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/EditorEventsSubsystem/EditorEventsSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnMapChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorEventsSubsystem, nullptr, "OnMapChangedSignature__DelegateSignature", nullptr, nullptr, sizeof(EditorEventsSubsystem_eventOnMapChangedSignature_Parms), Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnMapChangedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnMapChangedSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnMapChangedSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnMapChangedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnMapChangedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnMapChangedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnEditorModeChangedSignature__DelegateSignature_Statics
	{
		struct EditorEventsSubsystem_eventOnEditorModeChangedSignature_Parms
		{
			FName ID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnEditorModeChangedSignature__DelegateSignature_Statics::NewProp_ID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnEditorModeChangedSignature__DelegateSignature_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorEventsSubsystem_eventOnEditorModeChangedSignature_Parms, ID), METADATA_PARAMS(Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnEditorModeChangedSignature__DelegateSignature_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnEditorModeChangedSignature__DelegateSignature_Statics::NewProp_ID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnEditorModeChangedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnEditorModeChangedSignature__DelegateSignature_Statics::NewProp_ID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnEditorModeChangedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/EditorEventsSubsystem/EditorEventsSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnEditorModeChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorEventsSubsystem, nullptr, "OnEditorModeChangedSignature__DelegateSignature", nullptr, nullptr, sizeof(EditorEventsSubsystem_eventOnEditorModeChangedSignature_Parms), Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnEditorModeChangedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnEditorModeChangedSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnEditorModeChangedSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnEditorModeChangedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnEditorModeChangedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnEditorModeChangedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnMapOpenedSignature__DelegateSignature_Statics
	{
		struct EditorEventsSubsystem_eventOnMapOpenedSignature_Parms
		{
			FString Filename;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filename;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnMapOpenedSignature__DelegateSignature_Statics::NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnMapOpenedSignature__DelegateSignature_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorEventsSubsystem_eventOnMapOpenedSignature_Parms, Filename), METADATA_PARAMS(Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnMapOpenedSignature__DelegateSignature_Statics::NewProp_Filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnMapOpenedSignature__DelegateSignature_Statics::NewProp_Filename_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnMapOpenedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnMapOpenedSignature__DelegateSignature_Statics::NewProp_Filename,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnMapOpenedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/EditorEventsSubsystem/EditorEventsSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnMapOpenedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorEventsSubsystem, nullptr, "OnMapOpenedSignature__DelegateSignature", nullptr, nullptr, sizeof(EditorEventsSubsystem_eventOnMapOpenedSignature_Parms), Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnMapOpenedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnMapOpenedSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnMapOpenedSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnMapOpenedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnMapOpenedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnMapOpenedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UEditorEventsSubsystem_SimpleEventSignature__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UEditorEventsSubsystem_SimpleEventSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/EditorEventsSubsystem/EditorEventsSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UEditorEventsSubsystem_SimpleEventSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorEventsSubsystem, nullptr, "SimpleEventSignature__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UEditorEventsSubsystem_SimpleEventSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEditorEventsSubsystem_SimpleEventSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UEditorEventsSubsystem_SimpleEventSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UEditorEventsSubsystem_SimpleEventSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EOnPIEEventType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_EditorScriptingTools_EOnPIEEventType, Z_Construct_UPackage__Script_EditorScriptingTools(), TEXT("EOnPIEEventType"));
		}
		return Singleton;
	}
	template<> EDITORSCRIPTINGTOOLS_API UEnum* StaticEnum<EOnPIEEventType>()
	{
		return EOnPIEEventType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EOnPIEEventType(EOnPIEEventType_StaticEnum, TEXT("/Script/EditorScriptingTools"), TEXT("EOnPIEEventType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_EditorScriptingTools_EOnPIEEventType_Hash() { return 4042832099U; }
	UEnum* Z_Construct_UEnum_EditorScriptingTools_EOnPIEEventType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_EditorScriptingTools();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EOnPIEEventType"), 0, Get_Z_Construct_UEnum_EditorScriptingTools_EOnPIEEventType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EOnPIEEventType::PreBeginPIE", (int64)EOnPIEEventType::PreBeginPIE },
				{ "EOnPIEEventType::BeginPIE", (int64)EOnPIEEventType::BeginPIE },
				{ "EOnPIEEventType::PostPIEStarted", (int64)EOnPIEEventType::PostPIEStarted },
				{ "EOnPIEEventType::PrePIEEnded", (int64)EOnPIEEventType::PrePIEEnded },
				{ "EOnPIEEventType::EndPIE", (int64)EOnPIEEventType::EndPIE },
				{ "EOnPIEEventType::PausePIE", (int64)EOnPIEEventType::PausePIE },
				{ "EOnPIEEventType::ResumePIE", (int64)EOnPIEEventType::ResumePIE },
				{ "EOnPIEEventType::SingleStepPIE", (int64)EOnPIEEventType::SingleStepPIE },
				{ "EOnPIEEventType::OnPreSwitchBeginPIEAndSIE", (int64)EOnPIEEventType::OnPreSwitchBeginPIEAndSIE },
				{ "EOnPIEEventType::OnSwitchBeginPIEAndSIE", (int64)EOnPIEEventType::OnSwitchBeginPIEAndSIE },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BeginPIE.Name", "EOnPIEEventType::BeginPIE" },
				{ "BeginPIE.ToolTip", " Sent when a PIE session is beginning (but hasn't actually started yet)." },
				{ "EndPIE.Name", "EOnPIEEventType::EndPIE" },
				{ "EndPIE.ToolTip", "Sent when a PIE session is ending." },
				{ "ModuleRelativePath", "Private/EditorEventsSubsystem/EditorEventsSubsystem.h" },
				{ "OnPreSwitchBeginPIEAndSIE.Name", "EOnPIEEventType::OnPreSwitchBeginPIEAndSIE" },
				{ "OnPreSwitchBeginPIEAndSIE.ToolTip", "Sent just before the user switches between from PIE to SIE, or vice-versa.  Passes in whether we are currently in SIE." },
				{ "OnSwitchBeginPIEAndSIE.Name", "EOnPIEEventType::OnSwitchBeginPIEAndSIE" },
				{ "OnSwitchBeginPIEAndSIE.ToolTip", "Sent after the user switches between from PIE to SIE, or vice-versa.  Passes in whether we are currently in SIE." },
				{ "PausePIE.Name", "EOnPIEEventType::PausePIE" },
				{ "PausePIE.ToolTip", "Sent when a PIE session is paused." },
				{ "PostPIEStarted.Name", "EOnPIEEventType::PostPIEStarted" },
				{ "PostPIEStarted.ToolTip", "Sent when a PIE session has fully started and after BeginPlay() has been called ." },
				{ "PreBeginPIE.Name", "EOnPIEEventType::PreBeginPIE" },
				{ "PreBeginPIE.ToolTip", "Sent when a PIE session is beginning (before we decide if PIE can run - allows clients to avoid blocking PIE)." },
				{ "PrePIEEnded.Name", "EOnPIEEventType::PrePIEEnded" },
				{ "PrePIEEnded.ToolTip", "Sent when a PIE session is ending, before anything else happens." },
				{ "ResumePIE.Name", "EOnPIEEventType::ResumePIE" },
				{ "ResumePIE.ToolTip", "Sent when a PIE session is resumed." },
				{ "SingleStepPIE.Name", "EOnPIEEventType::SingleStepPIE" },
				{ "SingleStepPIE.ToolTip", "Sent when a PIE session is single-stepped." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_EditorScriptingTools,
				nullptr,
				"EOnPIEEventType",
				"EOnPIEEventType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UEditorEventsSubsystem::StaticRegisterNativesUEditorEventsSubsystem()
	{
	}
	UClass* Z_Construct_UClass_UEditorEventsSubsystem_NoRegister()
	{
		return UEditorEventsSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UEditorEventsSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnEditorModeEnter_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEditorModeEnter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnEditorModeExit_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEditorModeExit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMapOpened_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMapOpened;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnEditorCameraMoved_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEditorCameraMoved;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDollyPerspectiveCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDollyPerspectiveCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPlayInEditorEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayInEditorEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAssetsPreDeleted_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAssetsPreDeleted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnWorldFolderCreate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWorldFolderCreate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnWorldFolderMove_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWorldFolderMove;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnWorldFolderDelete_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWorldFolderDelete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnActorsSelected_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActorsSelected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnOnActorsUnselected_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnOnActorsUnselected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMapChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMapChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnInputKeyDown_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInputKeyDown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMouseButtonDown_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMouseButtonDown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnExecuteUserDefinedAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnExecuteUserDefinedAction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorEventsSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorScriptingTools,
	};
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_UEditorEventsSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnActorSelectionChangedEventSignature__DelegateSignature, "OnActorSelectionChangedEventSignature__DelegateSignature" }, // 37012768
		{ &Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnApplicationMousePreInputButtonDownEventSignature__DelegateSignature, "OnApplicationMousePreInputButtonDownEventSignature__DelegateSignature" }, // 3344789074
		{ &Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnApplicationPreInputKeyDownEventSignature__DelegateSignature, "OnApplicationPreInputKeyDownEventSignature__DelegateSignature" }, // 439417864
		{ &Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnAssetsPreDeleteEventSignature__DelegateSignature, "OnAssetsPreDeleteEventSignature__DelegateSignature" }, // 1067206592
		{ &Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnDollyPerspectiveCameraSignature__DelegateSignature, "OnDollyPerspectiveCameraSignature__DelegateSignature" }, // 2598485303
		{ &Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnEditorCameraMovedSignature__DelegateSignature, "OnEditorCameraMovedSignature__DelegateSignature" }, // 3438708269
		{ &Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnEditorModeChangedSignature__DelegateSignature, "OnEditorModeChangedSignature__DelegateSignature" }, // 222792826
		{ &Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnExecuteActionEventSignature__DelegateSignature, "OnExecuteActionEventSignature__DelegateSignature" }, // 3812436655
		{ &Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnMapChangedSignature__DelegateSignature, "OnMapChangedSignature__DelegateSignature" }, // 3398427681
		{ &Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnMapOpenedSignature__DelegateSignature, "OnMapOpenedSignature__DelegateSignature" }, // 214537249
		{ &Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnPlayInEditorEventSignature__DelegateSignature, "OnPlayInEditorEventSignature__DelegateSignature" }, // 2885272088
		{ &Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnWorldFolderCreateEventSignature__DelegateSignature, "OnWorldFolderCreateEventSignature__DelegateSignature" }, // 3177553639
		{ &Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnWorldFolderDeleteEventSignature__DelegateSignature, "OnWorldFolderDeleteEventSignature__DelegateSignature" }, // 2749023415
		{ &Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnWorldFolderMoveEventSignature__DelegateSignature, "OnWorldFolderMoveEventSignature__DelegateSignature" }, // 3428362754
		{ &Z_Construct_UDelegateFunction_UEditorEventsSubsystem_SimpleEventSignature__DelegateSignature, "SimpleEventSignature__DelegateSignature" }, // 1832961159
	};
#endif //WITH_EDITOR
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEventsSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EditorEventsSubsystem/EditorEventsSubsystem.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Private/EditorEventsSubsystem/EditorEventsSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEventsSubsystem_Statics::NewProp_OnEditorModeEnter_MetaData[] = {
		{ "Category", "Editor Scripting | Event Listener" },
		{ "Comment", "/** Called when an editor mode is being entered */" },
		{ "ModuleRelativePath", "Private/EditorEventsSubsystem/EditorEventsSubsystem.h" },
		{ "ToolTip", "Called when an editor mode is being entered" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEditorEventsSubsystem_Statics::NewProp_OnEditorModeEnter = { "OnEditorModeEnter", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorEventsSubsystem, OnEditorModeEnter), Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnEditorModeChangedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEditorEventsSubsystem_Statics::NewProp_OnEditorModeEnter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEventsSubsystem_Statics::NewProp_OnEditorModeEnter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEventsSubsystem_Statics::NewProp_OnEditorModeExit_MetaData[] = {
		{ "Category", "Editor Scripting | Event Listener" },
		{ "Comment", "/** Called when an editor mode is being exited */" },
		{ "ModuleRelativePath", "Private/EditorEventsSubsystem/EditorEventsSubsystem.h" },
		{ "ToolTip", "Called when an editor mode is being exited" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEditorEventsSubsystem_Statics::NewProp_OnEditorModeExit = { "OnEditorModeExit", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorEventsSubsystem, OnEditorModeExit), Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnEditorModeChangedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEditorEventsSubsystem_Statics::NewProp_OnEditorModeExit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEventsSubsystem_Statics::NewProp_OnEditorModeExit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEventsSubsystem_Statics::NewProp_OnMapOpened_MetaData[] = {
		{ "Category", "Editor Scripting | Event Listener" },
		{ "Comment", "/** Called when a map is opened. */" },
		{ "ModuleRelativePath", "Private/EditorEventsSubsystem/EditorEventsSubsystem.h" },
		{ "ToolTip", "Called when a map is opened." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEditorEventsSubsystem_Statics::NewProp_OnMapOpened = { "OnMapOpened", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorEventsSubsystem, OnMapOpened), Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnMapOpenedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEditorEventsSubsystem_Statics::NewProp_OnMapOpened_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEventsSubsystem_Statics::NewProp_OnMapOpened_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEventsSubsystem_Statics::NewProp_OnEditorCameraMoved_MetaData[] = {
		{ "Category", "Editor Scripting | Event Listener" },
		{ "Comment", "/** Called when the editor camera is moved */" },
		{ "ModuleRelativePath", "Private/EditorEventsSubsystem/EditorEventsSubsystem.h" },
		{ "ToolTip", "Called when the editor camera is moved" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEditorEventsSubsystem_Statics::NewProp_OnEditorCameraMoved = { "OnEditorCameraMoved", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorEventsSubsystem, OnEditorCameraMoved), Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnEditorCameraMovedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEditorEventsSubsystem_Statics::NewProp_OnEditorCameraMoved_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEventsSubsystem_Statics::NewProp_OnEditorCameraMoved_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEventsSubsystem_Statics::NewProp_OnDollyPerspectiveCamera_MetaData[] = {
		{ "Category", "Editor Scripting | Event Listener" },
		{ "Comment", "/** Called when the editor camera is moved */" },
		{ "ModuleRelativePath", "Private/EditorEventsSubsystem/EditorEventsSubsystem.h" },
		{ "ToolTip", "Called when the editor camera is moved" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEditorEventsSubsystem_Statics::NewProp_OnDollyPerspectiveCamera = { "OnDollyPerspectiveCamera", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorEventsSubsystem, OnDollyPerspectiveCamera), Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnDollyPerspectiveCameraSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEditorEventsSubsystem_Statics::NewProp_OnDollyPerspectiveCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEventsSubsystem_Statics::NewProp_OnDollyPerspectiveCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEventsSubsystem_Statics::NewProp_OnPlayInEditorEvent_MetaData[] = {
		{ "Category", "Editor Scripting | Event Listener" },
		{ "Comment", "/** Sent when a PIE session is beginning (before we decide if PIE can run - allows clients to avoid blocking PIE) */" },
		{ "ModuleRelativePath", "Private/EditorEventsSubsystem/EditorEventsSubsystem.h" },
		{ "ToolTip", "Sent when a PIE session is beginning (before we decide if PIE can run - allows clients to avoid blocking PIE)" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEditorEventsSubsystem_Statics::NewProp_OnPlayInEditorEvent = { "OnPlayInEditorEvent", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorEventsSubsystem, OnPlayInEditorEvent), Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnPlayInEditorEventSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEditorEventsSubsystem_Statics::NewProp_OnPlayInEditorEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEventsSubsystem_Statics::NewProp_OnPlayInEditorEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEventsSubsystem_Statics::NewProp_OnAssetsPreDeleted_MetaData[] = {
		{ "Category", "Editor Scripting | Event Listener" },
		{ "ModuleRelativePath", "Private/EditorEventsSubsystem/EditorEventsSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEditorEventsSubsystem_Statics::NewProp_OnAssetsPreDeleted = { "OnAssetsPreDeleted", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorEventsSubsystem, OnAssetsPreDeleted), Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnAssetsPreDeleteEventSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEditorEventsSubsystem_Statics::NewProp_OnAssetsPreDeleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEventsSubsystem_Statics::NewProp_OnAssetsPreDeleted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEventsSubsystem_Statics::NewProp_OnWorldFolderCreate_MetaData[] = {
		{ "Category", "Editor Scripting | Event Listener" },
		{ "ModuleRelativePath", "Private/EditorEventsSubsystem/EditorEventsSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEditorEventsSubsystem_Statics::NewProp_OnWorldFolderCreate = { "OnWorldFolderCreate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorEventsSubsystem, OnWorldFolderCreate), Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnWorldFolderCreateEventSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEditorEventsSubsystem_Statics::NewProp_OnWorldFolderCreate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEventsSubsystem_Statics::NewProp_OnWorldFolderCreate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEventsSubsystem_Statics::NewProp_OnWorldFolderMove_MetaData[] = {
		{ "Category", "Editor Scripting | Event Listener" },
		{ "ModuleRelativePath", "Private/EditorEventsSubsystem/EditorEventsSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEditorEventsSubsystem_Statics::NewProp_OnWorldFolderMove = { "OnWorldFolderMove", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorEventsSubsystem, OnWorldFolderMove), Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnWorldFolderMoveEventSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEditorEventsSubsystem_Statics::NewProp_OnWorldFolderMove_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEventsSubsystem_Statics::NewProp_OnWorldFolderMove_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEventsSubsystem_Statics::NewProp_OnWorldFolderDelete_MetaData[] = {
		{ "Category", "Editor Scripting | Event Listener" },
		{ "ModuleRelativePath", "Private/EditorEventsSubsystem/EditorEventsSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEditorEventsSubsystem_Statics::NewProp_OnWorldFolderDelete = { "OnWorldFolderDelete", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorEventsSubsystem, OnWorldFolderDelete), Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnWorldFolderDeleteEventSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEditorEventsSubsystem_Statics::NewProp_OnWorldFolderDelete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEventsSubsystem_Statics::NewProp_OnWorldFolderDelete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEventsSubsystem_Statics::NewProp_OnActorsSelected_MetaData[] = {
		{ "Category", "Editor Scripting | Event Listener" },
		{ "Comment", "/** Called when actors are selected */" },
		{ "ModuleRelativePath", "Private/EditorEventsSubsystem/EditorEventsSubsystem.h" },
		{ "ToolTip", "Called when actors are selected" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEditorEventsSubsystem_Statics::NewProp_OnActorsSelected = { "OnActorsSelected", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorEventsSubsystem, OnActorsSelected), Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnActorSelectionChangedEventSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEditorEventsSubsystem_Statics::NewProp_OnActorsSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEventsSubsystem_Statics::NewProp_OnActorsSelected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEventsSubsystem_Statics::NewProp_OnOnActorsUnselected_MetaData[] = {
		{ "Category", "Editor Scripting | Event Listener" },
		{ "Comment", "/** Called when actors are  unselected */" },
		{ "ModuleRelativePath", "Private/EditorEventsSubsystem/EditorEventsSubsystem.h" },
		{ "ToolTip", "Called when actors are  unselected" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEditorEventsSubsystem_Statics::NewProp_OnOnActorsUnselected = { "OnOnActorsUnselected", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorEventsSubsystem, OnOnActorsUnselected), Z_Construct_UDelegateFunction_UEditorEventsSubsystem_SimpleEventSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEditorEventsSubsystem_Statics::NewProp_OnOnActorsUnselected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEventsSubsystem_Statics::NewProp_OnOnActorsUnselected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEventsSubsystem_Statics::NewProp_OnMapChanged_MetaData[] = {
		{ "Category", "Editor Scripting | Event Listener" },
		{ "Comment", "/** Called when the map has changed */" },
		{ "ModuleRelativePath", "Private/EditorEventsSubsystem/EditorEventsSubsystem.h" },
		{ "ToolTip", "Called when the map has changed" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEditorEventsSubsystem_Statics::NewProp_OnMapChanged = { "OnMapChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorEventsSubsystem, OnMapChanged), Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnMapChangedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEditorEventsSubsystem_Statics::NewProp_OnMapChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEventsSubsystem_Statics::NewProp_OnMapChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEventsSubsystem_Statics::NewProp_OnInputKeyDown_MetaData[] = {
		{ "Category", "Editor Scripting | Event Listener" },
		{ "ModuleRelativePath", "Private/EditorEventsSubsystem/EditorEventsSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEditorEventsSubsystem_Statics::NewProp_OnInputKeyDown = { "OnInputKeyDown", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorEventsSubsystem, OnInputKeyDown), Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnApplicationPreInputKeyDownEventSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEditorEventsSubsystem_Statics::NewProp_OnInputKeyDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEventsSubsystem_Statics::NewProp_OnInputKeyDown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEventsSubsystem_Statics::NewProp_OnMouseButtonDown_MetaData[] = {
		{ "Category", "Editor Scripting | Event Listener" },
		{ "ModuleRelativePath", "Private/EditorEventsSubsystem/EditorEventsSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEditorEventsSubsystem_Statics::NewProp_OnMouseButtonDown = { "OnMouseButtonDown", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorEventsSubsystem, OnMouseButtonDown), Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnApplicationMousePreInputButtonDownEventSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEditorEventsSubsystem_Statics::NewProp_OnMouseButtonDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEventsSubsystem_Statics::NewProp_OnMouseButtonDown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEventsSubsystem_Statics::NewProp_OnExecuteUserDefinedAction_MetaData[] = {
		{ "Category", "Editor Scripting | Event Listener" },
		{ "ModuleRelativePath", "Private/EditorEventsSubsystem/EditorEventsSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEditorEventsSubsystem_Statics::NewProp_OnExecuteUserDefinedAction = { "OnExecuteUserDefinedAction", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorEventsSubsystem, OnExecuteUserDefinedAction), Z_Construct_UDelegateFunction_UEditorEventsSubsystem_OnExecuteActionEventSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEditorEventsSubsystem_Statics::NewProp_OnExecuteUserDefinedAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEventsSubsystem_Statics::NewProp_OnExecuteUserDefinedAction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditorEventsSubsystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEventsSubsystem_Statics::NewProp_OnEditorModeEnter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEventsSubsystem_Statics::NewProp_OnEditorModeExit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEventsSubsystem_Statics::NewProp_OnMapOpened,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEventsSubsystem_Statics::NewProp_OnEditorCameraMoved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEventsSubsystem_Statics::NewProp_OnDollyPerspectiveCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEventsSubsystem_Statics::NewProp_OnPlayInEditorEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEventsSubsystem_Statics::NewProp_OnAssetsPreDeleted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEventsSubsystem_Statics::NewProp_OnWorldFolderCreate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEventsSubsystem_Statics::NewProp_OnWorldFolderMove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEventsSubsystem_Statics::NewProp_OnWorldFolderDelete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEventsSubsystem_Statics::NewProp_OnActorsSelected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEventsSubsystem_Statics::NewProp_OnOnActorsUnselected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEventsSubsystem_Statics::NewProp_OnMapChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEventsSubsystem_Statics::NewProp_OnInputKeyDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEventsSubsystem_Statics::NewProp_OnMouseButtonDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEventsSubsystem_Statics::NewProp_OnExecuteUserDefinedAction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorEventsSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorEventsSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEditorEventsSubsystem_Statics::ClassParams = {
		&UEditorEventsSubsystem::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		Z_Construct_UClass_UEditorEventsSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEventsSubsystem_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorEventsSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEventsSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorEventsSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEditorEventsSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEditorEventsSubsystem, 341121162);
	template<> EDITORSCRIPTINGTOOLS_API UClass* StaticClass<UEditorEventsSubsystem>()
	{
		return UEditorEventsSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditorEventsSubsystem(Z_Construct_UClass_UEditorEventsSubsystem, &UEditorEventsSubsystem::StaticClass, TEXT("/Script/EditorScriptingTools"), TEXT("UEditorEventsSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorEventsSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
