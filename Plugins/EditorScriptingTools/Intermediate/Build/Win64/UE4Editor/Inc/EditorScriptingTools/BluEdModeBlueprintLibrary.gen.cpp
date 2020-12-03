// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorScriptingTools/Private/BlueprintLibrary/BluEdModeBlueprintLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBluEdModeBlueprintLibrary() {}
// Cross Module References
	EDITORSCRIPTINGTOOLS_API UClass* Z_Construct_UClass_UBluEdModeBlueprintLibrary_NoRegister();
	EDITORSCRIPTINGTOOLS_API UClass* Z_Construct_UClass_UBluEdModeBlueprintLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_EditorScriptingTools();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	EDITORSCRIPTINGTOOLS_API UClass* Z_Construct_UClass_UEditorModeToolInstance_NoRegister();
	EDITORSCRIPTINGTOOLS_API UClass* Z_Construct_UClass_UEditorModeToolUtilityBlueprint_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBluEdModeBlueprintLibrary::execGetActiveEditorModeToolUtilityBlueprint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSoftObjectPtr<UEditorModeToolUtilityBlueprint>*)Z_Param__Result=UBluEdModeBlueprintLibrary::GetActiveEditorModeToolUtilityBlueprint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBluEdModeBlueprintLibrary::execGetActiveEditorModeToolInstanceInstance)
	{
		P_GET_OBJECT(UClass,Z_Param_ToolClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEditorModeToolInstance**)Z_Param__Result=UBluEdModeBlueprintLibrary::GetActiveEditorModeToolInstanceInstance(Z_Param_ToolClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBluEdModeBlueprintLibrary::execIsEditorModeToolInstanceRunning)
	{
		P_GET_SOFTOBJECT(TSoftObjectPtr<UEditorModeToolUtilityBlueprint>,Z_Param_ToolBlueprint);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBluEdModeBlueprintLibrary::IsEditorModeToolInstanceRunning(Z_Param_ToolBlueprint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBluEdModeBlueprintLibrary::execIsAnyEditorModeToolInstanceRunning)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBluEdModeBlueprintLibrary::IsAnyEditorModeToolInstanceRunning();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBluEdModeBlueprintLibrary::execStopActiveEditorModeToolInstance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBluEdModeBlueprintLibrary::StopActiveEditorModeToolInstance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBluEdModeBlueprintLibrary::execRunEditorModeToolInstance)
	{
		P_GET_SOFTOBJECT(TSoftObjectPtr<UEditorModeToolUtilityBlueprint>,Z_Param_ToolBlueprint);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBluEdModeBlueprintLibrary::RunEditorModeToolInstance(Z_Param_ToolBlueprint);
		P_NATIVE_END;
	}
	void UBluEdModeBlueprintLibrary::StaticRegisterNativesUBluEdModeBlueprintLibrary()
	{
		UClass* Class = UBluEdModeBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetActiveEditorModeToolInstanceInstance", &UBluEdModeBlueprintLibrary::execGetActiveEditorModeToolInstanceInstance },
			{ "GetActiveEditorModeToolUtilityBlueprint", &UBluEdModeBlueprintLibrary::execGetActiveEditorModeToolUtilityBlueprint },
			{ "IsAnyEditorModeToolInstanceRunning", &UBluEdModeBlueprintLibrary::execIsAnyEditorModeToolInstanceRunning },
			{ "IsEditorModeToolInstanceRunning", &UBluEdModeBlueprintLibrary::execIsEditorModeToolInstanceRunning },
			{ "RunEditorModeToolInstance", &UBluEdModeBlueprintLibrary::execRunEditorModeToolInstance },
			{ "StopActiveEditorModeToolInstance", &UBluEdModeBlueprintLibrary::execStopActiveEditorModeToolInstance },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBluEdModeBlueprintLibrary_GetActiveEditorModeToolInstanceInstance_Statics
	{
		struct BluEdModeBlueprintLibrary_eventGetActiveEditorModeToolInstanceInstance_Parms
		{
			TSubclassOf<UEditorModeToolInstance>  ToolClass;
			UEditorModeToolInstance* ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ToolClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UBluEdModeBlueprintLibrary_GetActiveEditorModeToolInstanceInstance_Statics::NewProp_ToolClass = { "ToolClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BluEdModeBlueprintLibrary_eventGetActiveEditorModeToolInstanceInstance_Parms, ToolClass), Z_Construct_UClass_UEditorModeToolInstance_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBluEdModeBlueprintLibrary_GetActiveEditorModeToolInstanceInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BluEdModeBlueprintLibrary_eventGetActiveEditorModeToolInstanceInstance_Parms, ReturnValue), Z_Construct_UClass_UEditorModeToolInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBluEdModeBlueprintLibrary_GetActiveEditorModeToolInstanceInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBluEdModeBlueprintLibrary_GetActiveEditorModeToolInstanceInstance_Statics::NewProp_ToolClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBluEdModeBlueprintLibrary_GetActiveEditorModeToolInstanceInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBluEdModeBlueprintLibrary_GetActiveEditorModeToolInstanceInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editor Mode" },
		{ "DeterminesOutputType", "ToolClass" },
		{ "ModuleRelativePath", "Private/BlueprintLibrary/BluEdModeBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBluEdModeBlueprintLibrary_GetActiveEditorModeToolInstanceInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBluEdModeBlueprintLibrary, nullptr, "GetActiveEditorModeToolInstanceInstance", nullptr, nullptr, sizeof(BluEdModeBlueprintLibrary_eventGetActiveEditorModeToolInstanceInstance_Parms), Z_Construct_UFunction_UBluEdModeBlueprintLibrary_GetActiveEditorModeToolInstanceInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBluEdModeBlueprintLibrary_GetActiveEditorModeToolInstanceInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBluEdModeBlueprintLibrary_GetActiveEditorModeToolInstanceInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBluEdModeBlueprintLibrary_GetActiveEditorModeToolInstanceInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBluEdModeBlueprintLibrary_GetActiveEditorModeToolInstanceInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBluEdModeBlueprintLibrary_GetActiveEditorModeToolInstanceInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBluEdModeBlueprintLibrary_GetActiveEditorModeToolUtilityBlueprint_Statics
	{
		struct BluEdModeBlueprintLibrary_eventGetActiveEditorModeToolUtilityBlueprint_Parms
		{
			TSoftObjectPtr<UEditorModeToolUtilityBlueprint> ReturnValue;
		};
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UBluEdModeBlueprintLibrary_GetActiveEditorModeToolUtilityBlueprint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BluEdModeBlueprintLibrary_eventGetActiveEditorModeToolUtilityBlueprint_Parms, ReturnValue), Z_Construct_UClass_UEditorModeToolUtilityBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBluEdModeBlueprintLibrary_GetActiveEditorModeToolUtilityBlueprint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBluEdModeBlueprintLibrary_GetActiveEditorModeToolUtilityBlueprint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBluEdModeBlueprintLibrary_GetActiveEditorModeToolUtilityBlueprint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editor Mode" },
		{ "ModuleRelativePath", "Private/BlueprintLibrary/BluEdModeBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBluEdModeBlueprintLibrary_GetActiveEditorModeToolUtilityBlueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBluEdModeBlueprintLibrary, nullptr, "GetActiveEditorModeToolUtilityBlueprint", nullptr, nullptr, sizeof(BluEdModeBlueprintLibrary_eventGetActiveEditorModeToolUtilityBlueprint_Parms), Z_Construct_UFunction_UBluEdModeBlueprintLibrary_GetActiveEditorModeToolUtilityBlueprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBluEdModeBlueprintLibrary_GetActiveEditorModeToolUtilityBlueprint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBluEdModeBlueprintLibrary_GetActiveEditorModeToolUtilityBlueprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBluEdModeBlueprintLibrary_GetActiveEditorModeToolUtilityBlueprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBluEdModeBlueprintLibrary_GetActiveEditorModeToolUtilityBlueprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBluEdModeBlueprintLibrary_GetActiveEditorModeToolUtilityBlueprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBluEdModeBlueprintLibrary_IsAnyEditorModeToolInstanceRunning_Statics
	{
		struct BluEdModeBlueprintLibrary_eventIsAnyEditorModeToolInstanceRunning_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBluEdModeBlueprintLibrary_IsAnyEditorModeToolInstanceRunning_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BluEdModeBlueprintLibrary_eventIsAnyEditorModeToolInstanceRunning_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBluEdModeBlueprintLibrary_IsAnyEditorModeToolInstanceRunning_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BluEdModeBlueprintLibrary_eventIsAnyEditorModeToolInstanceRunning_Parms), &Z_Construct_UFunction_UBluEdModeBlueprintLibrary_IsAnyEditorModeToolInstanceRunning_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBluEdModeBlueprintLibrary_IsAnyEditorModeToolInstanceRunning_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBluEdModeBlueprintLibrary_IsAnyEditorModeToolInstanceRunning_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBluEdModeBlueprintLibrary_IsAnyEditorModeToolInstanceRunning_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editor Mode" },
		{ "ModuleRelativePath", "Private/BlueprintLibrary/BluEdModeBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBluEdModeBlueprintLibrary_IsAnyEditorModeToolInstanceRunning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBluEdModeBlueprintLibrary, nullptr, "IsAnyEditorModeToolInstanceRunning", nullptr, nullptr, sizeof(BluEdModeBlueprintLibrary_eventIsAnyEditorModeToolInstanceRunning_Parms), Z_Construct_UFunction_UBluEdModeBlueprintLibrary_IsAnyEditorModeToolInstanceRunning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBluEdModeBlueprintLibrary_IsAnyEditorModeToolInstanceRunning_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBluEdModeBlueprintLibrary_IsAnyEditorModeToolInstanceRunning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBluEdModeBlueprintLibrary_IsAnyEditorModeToolInstanceRunning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBluEdModeBlueprintLibrary_IsAnyEditorModeToolInstanceRunning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBluEdModeBlueprintLibrary_IsAnyEditorModeToolInstanceRunning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBluEdModeBlueprintLibrary_IsEditorModeToolInstanceRunning_Statics
	{
		struct BluEdModeBlueprintLibrary_eventIsEditorModeToolInstanceRunning_Parms
		{
			TSoftObjectPtr<UEditorModeToolUtilityBlueprint> ToolBlueprint;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ToolBlueprint;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UBluEdModeBlueprintLibrary_IsEditorModeToolInstanceRunning_Statics::NewProp_ToolBlueprint = { "ToolBlueprint", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BluEdModeBlueprintLibrary_eventIsEditorModeToolInstanceRunning_Parms, ToolBlueprint), Z_Construct_UClass_UEditorModeToolUtilityBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBluEdModeBlueprintLibrary_IsEditorModeToolInstanceRunning_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BluEdModeBlueprintLibrary_eventIsEditorModeToolInstanceRunning_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBluEdModeBlueprintLibrary_IsEditorModeToolInstanceRunning_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BluEdModeBlueprintLibrary_eventIsEditorModeToolInstanceRunning_Parms), &Z_Construct_UFunction_UBluEdModeBlueprintLibrary_IsEditorModeToolInstanceRunning_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBluEdModeBlueprintLibrary_IsEditorModeToolInstanceRunning_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBluEdModeBlueprintLibrary_IsEditorModeToolInstanceRunning_Statics::NewProp_ToolBlueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBluEdModeBlueprintLibrary_IsEditorModeToolInstanceRunning_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBluEdModeBlueprintLibrary_IsEditorModeToolInstanceRunning_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editor Mode" },
		{ "ModuleRelativePath", "Private/BlueprintLibrary/BluEdModeBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBluEdModeBlueprintLibrary_IsEditorModeToolInstanceRunning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBluEdModeBlueprintLibrary, nullptr, "IsEditorModeToolInstanceRunning", nullptr, nullptr, sizeof(BluEdModeBlueprintLibrary_eventIsEditorModeToolInstanceRunning_Parms), Z_Construct_UFunction_UBluEdModeBlueprintLibrary_IsEditorModeToolInstanceRunning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBluEdModeBlueprintLibrary_IsEditorModeToolInstanceRunning_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBluEdModeBlueprintLibrary_IsEditorModeToolInstanceRunning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBluEdModeBlueprintLibrary_IsEditorModeToolInstanceRunning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBluEdModeBlueprintLibrary_IsEditorModeToolInstanceRunning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBluEdModeBlueprintLibrary_IsEditorModeToolInstanceRunning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBluEdModeBlueprintLibrary_RunEditorModeToolInstance_Statics
	{
		struct BluEdModeBlueprintLibrary_eventRunEditorModeToolInstance_Parms
		{
			TSoftObjectPtr<UEditorModeToolUtilityBlueprint> ToolBlueprint;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ToolBlueprint;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UBluEdModeBlueprintLibrary_RunEditorModeToolInstance_Statics::NewProp_ToolBlueprint = { "ToolBlueprint", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BluEdModeBlueprintLibrary_eventRunEditorModeToolInstance_Parms, ToolBlueprint), Z_Construct_UClass_UEditorModeToolUtilityBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBluEdModeBlueprintLibrary_RunEditorModeToolInstance_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BluEdModeBlueprintLibrary_eventRunEditorModeToolInstance_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBluEdModeBlueprintLibrary_RunEditorModeToolInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BluEdModeBlueprintLibrary_eventRunEditorModeToolInstance_Parms), &Z_Construct_UFunction_UBluEdModeBlueprintLibrary_RunEditorModeToolInstance_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBluEdModeBlueprintLibrary_RunEditorModeToolInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBluEdModeBlueprintLibrary_RunEditorModeToolInstance_Statics::NewProp_ToolBlueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBluEdModeBlueprintLibrary_RunEditorModeToolInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBluEdModeBlueprintLibrary_RunEditorModeToolInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editor Mode" },
		{ "ModuleRelativePath", "Private/BlueprintLibrary/BluEdModeBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBluEdModeBlueprintLibrary_RunEditorModeToolInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBluEdModeBlueprintLibrary, nullptr, "RunEditorModeToolInstance", nullptr, nullptr, sizeof(BluEdModeBlueprintLibrary_eventRunEditorModeToolInstance_Parms), Z_Construct_UFunction_UBluEdModeBlueprintLibrary_RunEditorModeToolInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBluEdModeBlueprintLibrary_RunEditorModeToolInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBluEdModeBlueprintLibrary_RunEditorModeToolInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBluEdModeBlueprintLibrary_RunEditorModeToolInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBluEdModeBlueprintLibrary_RunEditorModeToolInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBluEdModeBlueprintLibrary_RunEditorModeToolInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBluEdModeBlueprintLibrary_StopActiveEditorModeToolInstance_Statics
	{
		struct BluEdModeBlueprintLibrary_eventStopActiveEditorModeToolInstance_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBluEdModeBlueprintLibrary_StopActiveEditorModeToolInstance_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BluEdModeBlueprintLibrary_eventStopActiveEditorModeToolInstance_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBluEdModeBlueprintLibrary_StopActiveEditorModeToolInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BluEdModeBlueprintLibrary_eventStopActiveEditorModeToolInstance_Parms), &Z_Construct_UFunction_UBluEdModeBlueprintLibrary_StopActiveEditorModeToolInstance_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBluEdModeBlueprintLibrary_StopActiveEditorModeToolInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBluEdModeBlueprintLibrary_StopActiveEditorModeToolInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBluEdModeBlueprintLibrary_StopActiveEditorModeToolInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editor Mode" },
		{ "ModuleRelativePath", "Private/BlueprintLibrary/BluEdModeBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBluEdModeBlueprintLibrary_StopActiveEditorModeToolInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBluEdModeBlueprintLibrary, nullptr, "StopActiveEditorModeToolInstance", nullptr, nullptr, sizeof(BluEdModeBlueprintLibrary_eventStopActiveEditorModeToolInstance_Parms), Z_Construct_UFunction_UBluEdModeBlueprintLibrary_StopActiveEditorModeToolInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBluEdModeBlueprintLibrary_StopActiveEditorModeToolInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBluEdModeBlueprintLibrary_StopActiveEditorModeToolInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBluEdModeBlueprintLibrary_StopActiveEditorModeToolInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBluEdModeBlueprintLibrary_StopActiveEditorModeToolInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBluEdModeBlueprintLibrary_StopActiveEditorModeToolInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBluEdModeBlueprintLibrary_NoRegister()
	{
		return UBluEdModeBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UBluEdModeBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBluEdModeBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorScriptingTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBluEdModeBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBluEdModeBlueprintLibrary_GetActiveEditorModeToolInstanceInstance, "GetActiveEditorModeToolInstanceInstance" }, // 2996587461
		{ &Z_Construct_UFunction_UBluEdModeBlueprintLibrary_GetActiveEditorModeToolUtilityBlueprint, "GetActiveEditorModeToolUtilityBlueprint" }, // 140550122
		{ &Z_Construct_UFunction_UBluEdModeBlueprintLibrary_IsAnyEditorModeToolInstanceRunning, "IsAnyEditorModeToolInstanceRunning" }, // 332701865
		{ &Z_Construct_UFunction_UBluEdModeBlueprintLibrary_IsEditorModeToolInstanceRunning, "IsEditorModeToolInstanceRunning" }, // 127472926
		{ &Z_Construct_UFunction_UBluEdModeBlueprintLibrary_RunEditorModeToolInstance, "RunEditorModeToolInstance" }, // 2113902178
		{ &Z_Construct_UFunction_UBluEdModeBlueprintLibrary_StopActiveEditorModeToolInstance, "StopActiveEditorModeToolInstance" }, // 226248660
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBluEdModeBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintLibrary/BluEdModeBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Private/BlueprintLibrary/BluEdModeBlueprintLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBluEdModeBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBluEdModeBlueprintLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBluEdModeBlueprintLibrary_Statics::ClassParams = {
		&UBluEdModeBlueprintLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBluEdModeBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBluEdModeBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBluEdModeBlueprintLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBluEdModeBlueprintLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBluEdModeBlueprintLibrary, 3857647952);
	template<> EDITORSCRIPTINGTOOLS_API UClass* StaticClass<UBluEdModeBlueprintLibrary>()
	{
		return UBluEdModeBlueprintLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBluEdModeBlueprintLibrary(Z_Construct_UClass_UBluEdModeBlueprintLibrary, &UBluEdModeBlueprintLibrary::StaticClass, TEXT("/Script/EditorScriptingTools"), TEXT("UBluEdModeBlueprintLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBluEdModeBlueprintLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
