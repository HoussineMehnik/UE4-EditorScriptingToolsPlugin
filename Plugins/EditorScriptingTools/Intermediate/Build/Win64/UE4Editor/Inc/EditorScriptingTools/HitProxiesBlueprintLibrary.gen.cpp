// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorScriptingTools/Private/BlueprintLibrary/HitProxiesBlueprintLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHitProxiesBlueprintLibrary() {}
// Cross Module References
	EDITORSCRIPTINGTOOLS_API UClass* Z_Construct_UClass_UHitProxiesBlueprintLibrary_NoRegister();
	EDITORSCRIPTINGTOOLS_API UClass* Z_Construct_UClass_UHitProxiesBlueprintLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_EditorScriptingTools();
	EDITORSCRIPTINGTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FHitProxyHandle();
	EDITORSCRIPTINGTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FActorHitProxyInfo();
	EDITORSCRIPTINGTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FActorComponentWrapper();
	EDITORSCRIPTINGTOOLS_API UEnum* Z_Construct_UEnum_EditorScriptingTools_EHitProxyType();
// End Cross Module References
	DEFINE_FUNCTION(UHitProxiesBlueprintLibrary::execGetComponentVisualizerHitProxyInfo)
	{
		P_GET_STRUCT_REF(FHitProxyHandle,Z_Param_Out_Handle);
		P_GET_STRUCT_REF(FActorComponentWrapper,Z_Param_Out_OutComponentInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UHitProxiesBlueprintLibrary::GetComponentVisualizerHitProxyInfo(Z_Param_Out_Handle,Z_Param_Out_OutComponentInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHitProxiesBlueprintLibrary::execGetActorHitProxyInfo)
	{
		P_GET_STRUCT_REF(FHitProxyHandle,Z_Param_Out_Handle);
		P_GET_STRUCT_REF(FActorHitProxyInfo,Z_Param_Out_OutActorHitProxyInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UHitProxiesBlueprintLibrary::GetActorHitProxyInfo(Z_Param_Out_Handle,Z_Param_Out_OutActorHitProxyInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHitProxiesBlueprintLibrary::execGetIndexedHitProxyInfo)
	{
		P_GET_STRUCT_REF(FHitProxyHandle,Z_Param_Out_Handle);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UHitProxiesBlueprintLibrary::GetIndexedHitProxyInfo(Z_Param_Out_Handle,Z_Param_Out_OutIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHitProxiesBlueprintLibrary::execGetHitProxyType)
	{
		P_GET_STRUCT_REF(FHitProxyHandle,Z_Param_Out_Handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EHitProxyType*)Z_Param__Result=UHitProxiesBlueprintLibrary::GetHitProxyType(Z_Param_Out_Handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHitProxiesBlueprintLibrary::execIsValid)
	{
		P_GET_STRUCT_REF(FHitProxyHandle,Z_Param_Out_Handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UHitProxiesBlueprintLibrary::IsValid(Z_Param_Out_Handle);
		P_NATIVE_END;
	}
	void UHitProxiesBlueprintLibrary::StaticRegisterNativesUHitProxiesBlueprintLibrary()
	{
		UClass* Class = UHitProxiesBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetActorHitProxyInfo", &UHitProxiesBlueprintLibrary::execGetActorHitProxyInfo },
			{ "GetComponentVisualizerHitProxyInfo", &UHitProxiesBlueprintLibrary::execGetComponentVisualizerHitProxyInfo },
			{ "GetHitProxyType", &UHitProxiesBlueprintLibrary::execGetHitProxyType },
			{ "GetIndexedHitProxyInfo", &UHitProxiesBlueprintLibrary::execGetIndexedHitProxyInfo },
			{ "IsValid", &UHitProxiesBlueprintLibrary::execIsValid },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHitProxiesBlueprintLibrary_GetActorHitProxyInfo_Statics
	{
		struct HitProxiesBlueprintLibrary_eventGetActorHitProxyInfo_Parms
		{
			FHitProxyHandle Handle;
			FActorHitProxyInfo OutActorHitProxyInfo;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutActorHitProxyInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHitProxiesBlueprintLibrary_GetActorHitProxyInfo_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HitProxiesBlueprintLibrary_eventGetActorHitProxyInfo_Parms, Handle), Z_Construct_UScriptStruct_FHitProxyHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHitProxiesBlueprintLibrary_GetActorHitProxyInfo_Statics::NewProp_OutActorHitProxyInfo = { "OutActorHitProxyInfo", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HitProxiesBlueprintLibrary_eventGetActorHitProxyInfo_Parms, OutActorHitProxyInfo), Z_Construct_UScriptStruct_FActorHitProxyInfo, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHitProxiesBlueprintLibrary_GetActorHitProxyInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HitProxiesBlueprintLibrary_eventGetActorHitProxyInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHitProxiesBlueprintLibrary_GetActorHitProxyInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HitProxiesBlueprintLibrary_eventGetActorHitProxyInfo_Parms), &Z_Construct_UFunction_UHitProxiesBlueprintLibrary_GetActorHitProxyInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHitProxiesBlueprintLibrary_GetActorHitProxyInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitProxiesBlueprintLibrary_GetActorHitProxyInfo_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitProxiesBlueprintLibrary_GetActorHitProxyInfo_Statics::NewProp_OutActorHitProxyInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitProxiesBlueprintLibrary_GetActorHitProxyInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHitProxiesBlueprintLibrary_GetActorHitProxyInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "EditorScripting | HitProxies" },
		{ "ModuleRelativePath", "Private/BlueprintLibrary/HitProxiesBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHitProxiesBlueprintLibrary_GetActorHitProxyInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHitProxiesBlueprintLibrary, nullptr, "GetActorHitProxyInfo", nullptr, nullptr, sizeof(HitProxiesBlueprintLibrary_eventGetActorHitProxyInfo_Parms), Z_Construct_UFunction_UHitProxiesBlueprintLibrary_GetActorHitProxyInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHitProxiesBlueprintLibrary_GetActorHitProxyInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHitProxiesBlueprintLibrary_GetActorHitProxyInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHitProxiesBlueprintLibrary_GetActorHitProxyInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHitProxiesBlueprintLibrary_GetActorHitProxyInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHitProxiesBlueprintLibrary_GetActorHitProxyInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHitProxiesBlueprintLibrary_GetComponentVisualizerHitProxyInfo_Statics
	{
		struct HitProxiesBlueprintLibrary_eventGetComponentVisualizerHitProxyInfo_Parms
		{
			FHitProxyHandle Handle;
			FActorComponentWrapper OutComponentInfo;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutComponentInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHitProxiesBlueprintLibrary_GetComponentVisualizerHitProxyInfo_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HitProxiesBlueprintLibrary_eventGetComponentVisualizerHitProxyInfo_Parms, Handle), Z_Construct_UScriptStruct_FHitProxyHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHitProxiesBlueprintLibrary_GetComponentVisualizerHitProxyInfo_Statics::NewProp_OutComponentInfo = { "OutComponentInfo", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HitProxiesBlueprintLibrary_eventGetComponentVisualizerHitProxyInfo_Parms, OutComponentInfo), Z_Construct_UScriptStruct_FActorComponentWrapper, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHitProxiesBlueprintLibrary_GetComponentVisualizerHitProxyInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HitProxiesBlueprintLibrary_eventGetComponentVisualizerHitProxyInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHitProxiesBlueprintLibrary_GetComponentVisualizerHitProxyInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HitProxiesBlueprintLibrary_eventGetComponentVisualizerHitProxyInfo_Parms), &Z_Construct_UFunction_UHitProxiesBlueprintLibrary_GetComponentVisualizerHitProxyInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHitProxiesBlueprintLibrary_GetComponentVisualizerHitProxyInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitProxiesBlueprintLibrary_GetComponentVisualizerHitProxyInfo_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitProxiesBlueprintLibrary_GetComponentVisualizerHitProxyInfo_Statics::NewProp_OutComponentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitProxiesBlueprintLibrary_GetComponentVisualizerHitProxyInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHitProxiesBlueprintLibrary_GetComponentVisualizerHitProxyInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "EditorScripting | HitProxies" },
		{ "ModuleRelativePath", "Private/BlueprintLibrary/HitProxiesBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHitProxiesBlueprintLibrary_GetComponentVisualizerHitProxyInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHitProxiesBlueprintLibrary, nullptr, "GetComponentVisualizerHitProxyInfo", nullptr, nullptr, sizeof(HitProxiesBlueprintLibrary_eventGetComponentVisualizerHitProxyInfo_Parms), Z_Construct_UFunction_UHitProxiesBlueprintLibrary_GetComponentVisualizerHitProxyInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHitProxiesBlueprintLibrary_GetComponentVisualizerHitProxyInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHitProxiesBlueprintLibrary_GetComponentVisualizerHitProxyInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHitProxiesBlueprintLibrary_GetComponentVisualizerHitProxyInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHitProxiesBlueprintLibrary_GetComponentVisualizerHitProxyInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHitProxiesBlueprintLibrary_GetComponentVisualizerHitProxyInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHitProxiesBlueprintLibrary_GetHitProxyType_Statics
	{
		struct HitProxiesBlueprintLibrary_eventGetHitProxyType_Parms
		{
			FHitProxyHandle Handle;
			EHitProxyType ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHitProxiesBlueprintLibrary_GetHitProxyType_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HitProxiesBlueprintLibrary_eventGetHitProxyType_Parms, Handle), Z_Construct_UScriptStruct_FHitProxyHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHitProxiesBlueprintLibrary_GetHitProxyType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHitProxiesBlueprintLibrary_GetHitProxyType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HitProxiesBlueprintLibrary_eventGetHitProxyType_Parms, ReturnValue), Z_Construct_UEnum_EditorScriptingTools_EHitProxyType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHitProxiesBlueprintLibrary_GetHitProxyType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitProxiesBlueprintLibrary_GetHitProxyType_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitProxiesBlueprintLibrary_GetHitProxyType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitProxiesBlueprintLibrary_GetHitProxyType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHitProxiesBlueprintLibrary_GetHitProxyType_Statics::Function_MetaDataParams[] = {
		{ "Category", "EditorScripting | HitProxies" },
		{ "ModuleRelativePath", "Private/BlueprintLibrary/HitProxiesBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHitProxiesBlueprintLibrary_GetHitProxyType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHitProxiesBlueprintLibrary, nullptr, "GetHitProxyType", nullptr, nullptr, sizeof(HitProxiesBlueprintLibrary_eventGetHitProxyType_Parms), Z_Construct_UFunction_UHitProxiesBlueprintLibrary_GetHitProxyType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHitProxiesBlueprintLibrary_GetHitProxyType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHitProxiesBlueprintLibrary_GetHitProxyType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHitProxiesBlueprintLibrary_GetHitProxyType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHitProxiesBlueprintLibrary_GetHitProxyType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHitProxiesBlueprintLibrary_GetHitProxyType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHitProxiesBlueprintLibrary_GetIndexedHitProxyInfo_Statics
	{
		struct HitProxiesBlueprintLibrary_eventGetIndexedHitProxyInfo_Parms
		{
			FHitProxyHandle Handle;
			int32 OutIndex;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHitProxiesBlueprintLibrary_GetIndexedHitProxyInfo_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HitProxiesBlueprintLibrary_eventGetIndexedHitProxyInfo_Parms, Handle), Z_Construct_UScriptStruct_FHitProxyHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHitProxiesBlueprintLibrary_GetIndexedHitProxyInfo_Statics::NewProp_OutIndex = { "OutIndex", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HitProxiesBlueprintLibrary_eventGetIndexedHitProxyInfo_Parms, OutIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHitProxiesBlueprintLibrary_GetIndexedHitProxyInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HitProxiesBlueprintLibrary_eventGetIndexedHitProxyInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHitProxiesBlueprintLibrary_GetIndexedHitProxyInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HitProxiesBlueprintLibrary_eventGetIndexedHitProxyInfo_Parms), &Z_Construct_UFunction_UHitProxiesBlueprintLibrary_GetIndexedHitProxyInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHitProxiesBlueprintLibrary_GetIndexedHitProxyInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitProxiesBlueprintLibrary_GetIndexedHitProxyInfo_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitProxiesBlueprintLibrary_GetIndexedHitProxyInfo_Statics::NewProp_OutIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitProxiesBlueprintLibrary_GetIndexedHitProxyInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHitProxiesBlueprintLibrary_GetIndexedHitProxyInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "EditorScripting | HitProxies" },
		{ "ModuleRelativePath", "Private/BlueprintLibrary/HitProxiesBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHitProxiesBlueprintLibrary_GetIndexedHitProxyInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHitProxiesBlueprintLibrary, nullptr, "GetIndexedHitProxyInfo", nullptr, nullptr, sizeof(HitProxiesBlueprintLibrary_eventGetIndexedHitProxyInfo_Parms), Z_Construct_UFunction_UHitProxiesBlueprintLibrary_GetIndexedHitProxyInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHitProxiesBlueprintLibrary_GetIndexedHitProxyInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHitProxiesBlueprintLibrary_GetIndexedHitProxyInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHitProxiesBlueprintLibrary_GetIndexedHitProxyInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHitProxiesBlueprintLibrary_GetIndexedHitProxyInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHitProxiesBlueprintLibrary_GetIndexedHitProxyInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHitProxiesBlueprintLibrary_IsValid_Statics
	{
		struct HitProxiesBlueprintLibrary_eventIsValid_Parms
		{
			FHitProxyHandle Handle;
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHitProxiesBlueprintLibrary_IsValid_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HitProxiesBlueprintLibrary_eventIsValid_Parms, Handle), Z_Construct_UScriptStruct_FHitProxyHandle, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHitProxiesBlueprintLibrary_IsValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HitProxiesBlueprintLibrary_eventIsValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHitProxiesBlueprintLibrary_IsValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HitProxiesBlueprintLibrary_eventIsValid_Parms), &Z_Construct_UFunction_UHitProxiesBlueprintLibrary_IsValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHitProxiesBlueprintLibrary_IsValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitProxiesBlueprintLibrary_IsValid_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitProxiesBlueprintLibrary_IsValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHitProxiesBlueprintLibrary_IsValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "EditorScripting | HitProxies" },
		{ "ModuleRelativePath", "Private/BlueprintLibrary/HitProxiesBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHitProxiesBlueprintLibrary_IsValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHitProxiesBlueprintLibrary, nullptr, "IsValid", nullptr, nullptr, sizeof(HitProxiesBlueprintLibrary_eventIsValid_Parms), Z_Construct_UFunction_UHitProxiesBlueprintLibrary_IsValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHitProxiesBlueprintLibrary_IsValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHitProxiesBlueprintLibrary_IsValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHitProxiesBlueprintLibrary_IsValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHitProxiesBlueprintLibrary_IsValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHitProxiesBlueprintLibrary_IsValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHitProxiesBlueprintLibrary_NoRegister()
	{
		return UHitProxiesBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UHitProxiesBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHitProxiesBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorScriptingTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHitProxiesBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHitProxiesBlueprintLibrary_GetActorHitProxyInfo, "GetActorHitProxyInfo" }, // 2523380979
		{ &Z_Construct_UFunction_UHitProxiesBlueprintLibrary_GetComponentVisualizerHitProxyInfo, "GetComponentVisualizerHitProxyInfo" }, // 3917825190
		{ &Z_Construct_UFunction_UHitProxiesBlueprintLibrary_GetHitProxyType, "GetHitProxyType" }, // 4248101140
		{ &Z_Construct_UFunction_UHitProxiesBlueprintLibrary_GetIndexedHitProxyInfo, "GetIndexedHitProxyInfo" }, // 606453512
		{ &Z_Construct_UFunction_UHitProxiesBlueprintLibrary_IsValid, "IsValid" }, // 3138048566
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHitProxiesBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintLibrary/HitProxiesBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Private/BlueprintLibrary/HitProxiesBlueprintLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHitProxiesBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHitProxiesBlueprintLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHitProxiesBlueprintLibrary_Statics::ClassParams = {
		&UHitProxiesBlueprintLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UHitProxiesBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHitProxiesBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHitProxiesBlueprintLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHitProxiesBlueprintLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHitProxiesBlueprintLibrary, 3998845389);
	template<> EDITORSCRIPTINGTOOLS_API UClass* StaticClass<UHitProxiesBlueprintLibrary>()
	{
		return UHitProxiesBlueprintLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHitProxiesBlueprintLibrary(Z_Construct_UClass_UHitProxiesBlueprintLibrary, &UHitProxiesBlueprintLibrary::StaticClass, TEXT("/Script/EditorScriptingTools"), TEXT("UHitProxiesBlueprintLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHitProxiesBlueprintLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
