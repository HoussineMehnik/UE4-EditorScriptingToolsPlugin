// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorScriptingTools/Private/BlueprintLibrary/ComponentVisualizerUtilityBlueprintLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComponentVisualizerUtilityBlueprintLibrary() {}
// Cross Module References
	EDITORSCRIPTINGTOOLS_API UClass* Z_Construct_UClass_UComponentVisualizerUtilityBlueprintLibrary_NoRegister();
	EDITORSCRIPTINGTOOLS_API UClass* Z_Construct_UClass_UComponentVisualizerUtilityBlueprintLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_EditorScriptingTools();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	EDITORSCRIPTINGTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FComponentPropertyPathHandle();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UComponentVisualizerUtilityBlueprintLibrary::execGetComponentByPropertyPathHandle)
	{
		P_GET_STRUCT_REF(FComponentPropertyPathHandle,Z_Param_Out_Handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UActorComponent**)Z_Param__Result=UComponentVisualizerUtilityBlueprintLibrary::GetComponentByPropertyPathHandle(Z_Param_Out_Handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComponentVisualizerUtilityBlueprintLibrary::execGetParentOwningActorByPropertyPathHandle)
	{
		P_GET_STRUCT_REF(FComponentPropertyPathHandle,Z_Param_Out_Handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=UComponentVisualizerUtilityBlueprintLibrary::GetParentOwningActorByPropertyPathHandle(Z_Param_Out_Handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComponentVisualizerUtilityBlueprintLibrary::execResetPropertyPathHandle)
	{
		P_GET_STRUCT_REF(FComponentPropertyPathHandle,Z_Param_Out_Handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		UComponentVisualizerUtilityBlueprintLibrary::ResetPropertyPathHandle(Z_Param_Out_Handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComponentVisualizerUtilityBlueprintLibrary::execCreateComponentPropertyPathHandle)
	{
		P_GET_OBJECT(UActorComponent,Z_Param_Component);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FComponentPropertyPathHandle*)Z_Param__Result=UComponentVisualizerUtilityBlueprintLibrary::CreateComponentPropertyPathHandle(Z_Param_Component);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComponentVisualizerUtilityBlueprintLibrary::execIsValidPropertyPathHandle)
	{
		P_GET_STRUCT_REF(FComponentPropertyPathHandle,Z_Param_Out_Handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UComponentVisualizerUtilityBlueprintLibrary::IsValidPropertyPathHandle(Z_Param_Out_Handle);
		P_NATIVE_END;
	}
	void UComponentVisualizerUtilityBlueprintLibrary::StaticRegisterNativesUComponentVisualizerUtilityBlueprintLibrary()
	{
		UClass* Class = UComponentVisualizerUtilityBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateComponentPropertyPathHandle", &UComponentVisualizerUtilityBlueprintLibrary::execCreateComponentPropertyPathHandle },
			{ "GetComponentByPropertyPathHandle", &UComponentVisualizerUtilityBlueprintLibrary::execGetComponentByPropertyPathHandle },
			{ "GetParentOwningActorByPropertyPathHandle", &UComponentVisualizerUtilityBlueprintLibrary::execGetParentOwningActorByPropertyPathHandle },
			{ "IsValidPropertyPathHandle", &UComponentVisualizerUtilityBlueprintLibrary::execIsValidPropertyPathHandle },
			{ "ResetPropertyPathHandle", &UComponentVisualizerUtilityBlueprintLibrary::execResetPropertyPathHandle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UComponentVisualizerUtilityBlueprintLibrary_CreateComponentPropertyPathHandle_Statics
	{
		struct ComponentVisualizerUtilityBlueprintLibrary_eventCreateComponentPropertyPathHandle_Parms
		{
			UActorComponent* Component;
			FComponentPropertyPathHandle ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComponentVisualizerUtilityBlueprintLibrary_CreateComponentPropertyPathHandle_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComponentVisualizerUtilityBlueprintLibrary_CreateComponentPropertyPathHandle_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ComponentVisualizerUtilityBlueprintLibrary_eventCreateComponentPropertyPathHandle_Parms, Component), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UComponentVisualizerUtilityBlueprintLibrary_CreateComponentPropertyPathHandle_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UComponentVisualizerUtilityBlueprintLibrary_CreateComponentPropertyPathHandle_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComponentVisualizerUtilityBlueprintLibrary_CreateComponentPropertyPathHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ComponentVisualizerUtilityBlueprintLibrary_eventCreateComponentPropertyPathHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FComponentPropertyPathHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComponentVisualizerUtilityBlueprintLibrary_CreateComponentPropertyPathHandle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComponentVisualizerUtilityBlueprintLibrary_CreateComponentPropertyPathHandle_Statics::NewProp_Component,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComponentVisualizerUtilityBlueprintLibrary_CreateComponentPropertyPathHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComponentVisualizerUtilityBlueprintLibrary_CreateComponentPropertyPathHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "ComponentVisualizer|ComponentPropertyPathHandle" },
		{ "Comment", "/** creates a new component property handle from a given component pointer. */" },
		{ "ModuleRelativePath", "Private/BlueprintLibrary/ComponentVisualizerUtilityBlueprintLibrary.h" },
		{ "ToolTip", "creates a new component property handle from a given component pointer." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UComponentVisualizerUtilityBlueprintLibrary_CreateComponentPropertyPathHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComponentVisualizerUtilityBlueprintLibrary, nullptr, "CreateComponentPropertyPathHandle", nullptr, nullptr, sizeof(ComponentVisualizerUtilityBlueprintLibrary_eventCreateComponentPropertyPathHandle_Parms), Z_Construct_UFunction_UComponentVisualizerUtilityBlueprintLibrary_CreateComponentPropertyPathHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComponentVisualizerUtilityBlueprintLibrary_CreateComponentPropertyPathHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComponentVisualizerUtilityBlueprintLibrary_CreateComponentPropertyPathHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComponentVisualizerUtilityBlueprintLibrary_CreateComponentPropertyPathHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComponentVisualizerUtilityBlueprintLibrary_CreateComponentPropertyPathHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UComponentVisualizerUtilityBlueprintLibrary_CreateComponentPropertyPathHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComponentVisualizerUtilityBlueprintLibrary_GetComponentByPropertyPathHandle_Statics
	{
		struct ComponentVisualizerUtilityBlueprintLibrary_eventGetComponentByPropertyPathHandle_Parms
		{
			FComponentPropertyPathHandle Handle;
			UActorComponent* ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComponentVisualizerUtilityBlueprintLibrary_GetComponentByPropertyPathHandle_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ComponentVisualizerUtilityBlueprintLibrary_eventGetComponentByPropertyPathHandle_Parms, Handle), Z_Construct_UScriptStruct_FComponentPropertyPathHandle, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComponentVisualizerUtilityBlueprintLibrary_GetComponentByPropertyPathHandle_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComponentVisualizerUtilityBlueprintLibrary_GetComponentByPropertyPathHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ComponentVisualizerUtilityBlueprintLibrary_eventGetComponentByPropertyPathHandle_Parms, ReturnValue), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UComponentVisualizerUtilityBlueprintLibrary_GetComponentByPropertyPathHandle_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UComponentVisualizerUtilityBlueprintLibrary_GetComponentByPropertyPathHandle_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComponentVisualizerUtilityBlueprintLibrary_GetComponentByPropertyPathHandle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComponentVisualizerUtilityBlueprintLibrary_GetComponentByPropertyPathHandle_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComponentVisualizerUtilityBlueprintLibrary_GetComponentByPropertyPathHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComponentVisualizerUtilityBlueprintLibrary_GetComponentByPropertyPathHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "ComponentVisualizer|ComponentPropertyPathHandle" },
		{ "Comment", "/** Gets a pointer to the component, or nullptr if it is not valid. */" },
		{ "ModuleRelativePath", "Private/BlueprintLibrary/ComponentVisualizerUtilityBlueprintLibrary.h" },
		{ "ToolTip", "Gets a pointer to the component, or nullptr if it is not valid." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UComponentVisualizerUtilityBlueprintLibrary_GetComponentByPropertyPathHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComponentVisualizerUtilityBlueprintLibrary, nullptr, "GetComponentByPropertyPathHandle", nullptr, nullptr, sizeof(ComponentVisualizerUtilityBlueprintLibrary_eventGetComponentByPropertyPathHandle_Parms), Z_Construct_UFunction_UComponentVisualizerUtilityBlueprintLibrary_GetComponentByPropertyPathHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComponentVisualizerUtilityBlueprintLibrary_GetComponentByPropertyPathHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComponentVisualizerUtilityBlueprintLibrary_GetComponentByPropertyPathHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComponentVisualizerUtilityBlueprintLibrary_GetComponentByPropertyPathHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComponentVisualizerUtilityBlueprintLibrary_GetComponentByPropertyPathHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UComponentVisualizerUtilityBlueprintLibrary_GetComponentByPropertyPathHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComponentVisualizerUtilityBlueprintLibrary_GetParentOwningActorByPropertyPathHandle_Statics
	{
		struct ComponentVisualizerUtilityBlueprintLibrary_eventGetParentOwningActorByPropertyPathHandle_Parms
		{
			FComponentPropertyPathHandle Handle;
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComponentVisualizerUtilityBlueprintLibrary_GetParentOwningActorByPropertyPathHandle_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ComponentVisualizerUtilityBlueprintLibrary_eventGetParentOwningActorByPropertyPathHandle_Parms, Handle), Z_Construct_UScriptStruct_FComponentPropertyPathHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComponentVisualizerUtilityBlueprintLibrary_GetParentOwningActorByPropertyPathHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ComponentVisualizerUtilityBlueprintLibrary_eventGetParentOwningActorByPropertyPathHandle_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComponentVisualizerUtilityBlueprintLibrary_GetParentOwningActorByPropertyPathHandle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComponentVisualizerUtilityBlueprintLibrary_GetParentOwningActorByPropertyPathHandle_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComponentVisualizerUtilityBlueprintLibrary_GetParentOwningActorByPropertyPathHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComponentVisualizerUtilityBlueprintLibrary_GetParentOwningActorByPropertyPathHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "ComponentVisualizer|ComponentPropertyPathHandle" },
		{ "Comment", "/** Gets the parent owning actor for the component, or nullptr if it is not valid. */" },
		{ "ModuleRelativePath", "Private/BlueprintLibrary/ComponentVisualizerUtilityBlueprintLibrary.h" },
		{ "ToolTip", "Gets the parent owning actor for the component, or nullptr if it is not valid." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UComponentVisualizerUtilityBlueprintLibrary_GetParentOwningActorByPropertyPathHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComponentVisualizerUtilityBlueprintLibrary, nullptr, "GetParentOwningActorByPropertyPathHandle", nullptr, nullptr, sizeof(ComponentVisualizerUtilityBlueprintLibrary_eventGetParentOwningActorByPropertyPathHandle_Parms), Z_Construct_UFunction_UComponentVisualizerUtilityBlueprintLibrary_GetParentOwningActorByPropertyPathHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComponentVisualizerUtilityBlueprintLibrary_GetParentOwningActorByPropertyPathHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComponentVisualizerUtilityBlueprintLibrary_GetParentOwningActorByPropertyPathHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComponentVisualizerUtilityBlueprintLibrary_GetParentOwningActorByPropertyPathHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComponentVisualizerUtilityBlueprintLibrary_GetParentOwningActorByPropertyPathHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UComponentVisualizerUtilityBlueprintLibrary_GetParentOwningActorByPropertyPathHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComponentVisualizerUtilityBlueprintLibrary_IsValidPropertyPathHandle_Statics
	{
		struct ComponentVisualizerUtilityBlueprintLibrary_eventIsValidPropertyPathHandle_Parms
		{
			FComponentPropertyPathHandle Handle;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComponentVisualizerUtilityBlueprintLibrary_IsValidPropertyPathHandle_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ComponentVisualizerUtilityBlueprintLibrary_eventIsValidPropertyPathHandle_Parms, Handle), Z_Construct_UScriptStruct_FComponentPropertyPathHandle, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UComponentVisualizerUtilityBlueprintLibrary_IsValidPropertyPathHandle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ComponentVisualizerUtilityBlueprintLibrary_eventIsValidPropertyPathHandle_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UComponentVisualizerUtilityBlueprintLibrary_IsValidPropertyPathHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ComponentVisualizerUtilityBlueprintLibrary_eventIsValidPropertyPathHandle_Parms), &Z_Construct_UFunction_UComponentVisualizerUtilityBlueprintLibrary_IsValidPropertyPathHandle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComponentVisualizerUtilityBlueprintLibrary_IsValidPropertyPathHandle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComponentVisualizerUtilityBlueprintLibrary_IsValidPropertyPathHandle_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComponentVisualizerUtilityBlueprintLibrary_IsValidPropertyPathHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComponentVisualizerUtilityBlueprintLibrary_IsValidPropertyPathHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "ComponentVisualizer|ComponentPropertyPathHandle" },
		{ "Comment", "/** Determines whether the property path is valid or not. */" },
		{ "ModuleRelativePath", "Private/BlueprintLibrary/ComponentVisualizerUtilityBlueprintLibrary.h" },
		{ "ToolTip", "Determines whether the property path is valid or not." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UComponentVisualizerUtilityBlueprintLibrary_IsValidPropertyPathHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComponentVisualizerUtilityBlueprintLibrary, nullptr, "IsValidPropertyPathHandle", nullptr, nullptr, sizeof(ComponentVisualizerUtilityBlueprintLibrary_eventIsValidPropertyPathHandle_Parms), Z_Construct_UFunction_UComponentVisualizerUtilityBlueprintLibrary_IsValidPropertyPathHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComponentVisualizerUtilityBlueprintLibrary_IsValidPropertyPathHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComponentVisualizerUtilityBlueprintLibrary_IsValidPropertyPathHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComponentVisualizerUtilityBlueprintLibrary_IsValidPropertyPathHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComponentVisualizerUtilityBlueprintLibrary_IsValidPropertyPathHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UComponentVisualizerUtilityBlueprintLibrary_IsValidPropertyPathHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComponentVisualizerUtilityBlueprintLibrary_ResetPropertyPathHandle_Statics
	{
		struct ComponentVisualizerUtilityBlueprintLibrary_eventResetPropertyPathHandle_Parms
		{
			FComponentPropertyPathHandle Handle;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComponentVisualizerUtilityBlueprintLibrary_ResetPropertyPathHandle_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ComponentVisualizerUtilityBlueprintLibrary_eventResetPropertyPathHandle_Parms, Handle), Z_Construct_UScriptStruct_FComponentPropertyPathHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComponentVisualizerUtilityBlueprintLibrary_ResetPropertyPathHandle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComponentVisualizerUtilityBlueprintLibrary_ResetPropertyPathHandle_Statics::NewProp_Handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComponentVisualizerUtilityBlueprintLibrary_ResetPropertyPathHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "ComponentVisualizer|ComponentPropertyPathHandle" },
		{ "Comment", "/** Resets the property path. */" },
		{ "ModuleRelativePath", "Private/BlueprintLibrary/ComponentVisualizerUtilityBlueprintLibrary.h" },
		{ "ToolTip", "Resets the property path." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UComponentVisualizerUtilityBlueprintLibrary_ResetPropertyPathHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComponentVisualizerUtilityBlueprintLibrary, nullptr, "ResetPropertyPathHandle", nullptr, nullptr, sizeof(ComponentVisualizerUtilityBlueprintLibrary_eventResetPropertyPathHandle_Parms), Z_Construct_UFunction_UComponentVisualizerUtilityBlueprintLibrary_ResetPropertyPathHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComponentVisualizerUtilityBlueprintLibrary_ResetPropertyPathHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComponentVisualizerUtilityBlueprintLibrary_ResetPropertyPathHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComponentVisualizerUtilityBlueprintLibrary_ResetPropertyPathHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComponentVisualizerUtilityBlueprintLibrary_ResetPropertyPathHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UComponentVisualizerUtilityBlueprintLibrary_ResetPropertyPathHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UComponentVisualizerUtilityBlueprintLibrary_NoRegister()
	{
		return UComponentVisualizerUtilityBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UComponentVisualizerUtilityBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComponentVisualizerUtilityBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorScriptingTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UComponentVisualizerUtilityBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UComponentVisualizerUtilityBlueprintLibrary_CreateComponentPropertyPathHandle, "CreateComponentPropertyPathHandle" }, // 3731202689
		{ &Z_Construct_UFunction_UComponentVisualizerUtilityBlueprintLibrary_GetComponentByPropertyPathHandle, "GetComponentByPropertyPathHandle" }, // 2626325915
		{ &Z_Construct_UFunction_UComponentVisualizerUtilityBlueprintLibrary_GetParentOwningActorByPropertyPathHandle, "GetParentOwningActorByPropertyPathHandle" }, // 1676648187
		{ &Z_Construct_UFunction_UComponentVisualizerUtilityBlueprintLibrary_IsValidPropertyPathHandle, "IsValidPropertyPathHandle" }, // 2592398118
		{ &Z_Construct_UFunction_UComponentVisualizerUtilityBlueprintLibrary_ResetPropertyPathHandle, "ResetPropertyPathHandle" }, // 3790634287
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComponentVisualizerUtilityBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintLibrary/ComponentVisualizerUtilityBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Private/BlueprintLibrary/ComponentVisualizerUtilityBlueprintLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComponentVisualizerUtilityBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComponentVisualizerUtilityBlueprintLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UComponentVisualizerUtilityBlueprintLibrary_Statics::ClassParams = {
		&UComponentVisualizerUtilityBlueprintLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UComponentVisualizerUtilityBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UComponentVisualizerUtilityBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UComponentVisualizerUtilityBlueprintLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UComponentVisualizerUtilityBlueprintLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UComponentVisualizerUtilityBlueprintLibrary, 3191655488);
	template<> EDITORSCRIPTINGTOOLS_API UClass* StaticClass<UComponentVisualizerUtilityBlueprintLibrary>()
	{
		return UComponentVisualizerUtilityBlueprintLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UComponentVisualizerUtilityBlueprintLibrary(Z_Construct_UClass_UComponentVisualizerUtilityBlueprintLibrary, &UComponentVisualizerUtilityBlueprintLibrary::StaticClass, TEXT("/Script/EditorScriptingTools"), TEXT("UComponentVisualizerUtilityBlueprintLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComponentVisualizerUtilityBlueprintLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
