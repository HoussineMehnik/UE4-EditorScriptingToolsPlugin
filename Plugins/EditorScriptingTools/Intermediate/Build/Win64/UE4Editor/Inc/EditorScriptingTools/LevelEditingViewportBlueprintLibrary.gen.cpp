// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorScriptingTools/Private/BlueprintLibrary/LevelEditingViewportBlueprintLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelEditingViewportBlueprintLibrary() {}
// Cross Module References
	EDITORSCRIPTINGTOOLS_API UClass* Z_Construct_UClass_ULevelEditingViewportBlueprintLibrary_NoRegister();
	EDITORSCRIPTINGTOOLS_API UClass* Z_Construct_UClass_ULevelEditingViewportBlueprintLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_EditorScriptingTools();
	EDITORSCRIPTINGTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FActorHitProxyInfo();
	EDITORSCRIPTINGTOOLS_API UEnum* Z_Construct_UEnum_EditorScriptingTools_ELevelEditingViewportType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	DEFINE_FUNCTION(ULevelEditingViewportBlueprintLibrary::execRedrawAllViewports)
	{
		P_GET_UBOOL(Z_Param_bInvalidateHitProxies);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULevelEditingViewportBlueprintLibrary::RedrawAllViewports(Z_Param_bInvalidateHitProxies);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelEditingViewportBlueprintLibrary::execRedrawLevelEditingViewports)
	{
		P_GET_UBOOL(Z_Param_bInvalidateHitProxies);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULevelEditingViewportBlueprintLibrary::RedrawLevelEditingViewports(Z_Param_bInvalidateHitProxies);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelEditingViewportBlueprintLibrary::execIsPrimitiveComponentUnderCursor)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_InPrimComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULevelEditingViewportBlueprintLibrary::IsPrimitiveComponentUnderCursor(Z_Param_InPrimComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelEditingViewportBlueprintLibrary::execGetActorUnderCursor)
	{
		P_GET_UBOOL_REF(Z_Param_Out_bIsValid);
		P_GET_STRUCT_REF(FActorHitProxyInfo,Z_Param_Out_OutActorHitProxyInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULevelEditingViewportBlueprintLibrary::GetActorUnderCursor(Z_Param_Out_bIsValid,Z_Param_Out_OutActorHitProxyInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelEditingViewportBlueprintLibrary::execTransformPixelPointToWorld)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_X);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Y);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Z);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector4*)Z_Param__Result=ULevelEditingViewportBlueprintLibrary::TransformPixelPointToWorld(Z_Param_X,Z_Param_Y,Z_Param_Z);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelEditingViewportBlueprintLibrary::execTransformWorldPointToPixel)
	{
		P_GET_STRUCT(FVector,Z_Param_WorldPoint);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_OutPixelLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULevelEditingViewportBlueprintLibrary::TransformWorldPointToPixel(Z_Param_WorldPoint,Z_Param_Out_OutPixelLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelEditingViewportBlueprintLibrary::execTransformPixelPointToScreen)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_X);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Y);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Z);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector4*)Z_Param__Result=ULevelEditingViewportBlueprintLibrary::TransformPixelPointToScreen(Z_Param_X,Z_Param_Y,Z_Param_Z);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelEditingViewportBlueprintLibrary::execTransformScreenPointToPixel)
	{
		P_GET_STRUCT(FVector4,Z_Param_ScreenPoint);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_OutPixelLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULevelEditingViewportBlueprintLibrary::TransformScreenPointToPixel(Z_Param_ScreenPoint,Z_Param_Out_OutPixelLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelEditingViewportBlueprintLibrary::execTransformScreenPointToWorld)
	{
		P_GET_STRUCT(FVector4,Z_Param_ScreenPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=ULevelEditingViewportBlueprintLibrary::TransformScreenPointToWorld(Z_Param_ScreenPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelEditingViewportBlueprintLibrary::execTransformWorldPointToScreen)
	{
		P_GET_STRUCT(FVector,Z_Param_WorldPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector4*)Z_Param__Result=ULevelEditingViewportBlueprintLibrary::TransformWorldPointToScreen(Z_Param_WorldPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelEditingViewportBlueprintLibrary::execGetEditorViewportMouseRayStartAndEnd)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Start);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_End);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULevelEditingViewportBlueprintLibrary::GetEditorViewportMouseRayStartAndEnd(Z_Param_Out_Start,Z_Param_Out_End);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelEditingViewportBlueprintLibrary::execGetViewportCameraOrthoZoom)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=ULevelEditingViewportBlueprintLibrary::GetViewportCameraOrthoZoom();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelEditingViewportBlueprintLibrary::execGetViewportCameraLookAtLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=ULevelEditingViewportBlueprintLibrary::GetViewportCameraLookAtLocation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelEditingViewportBlueprintLibrary::execGetViewportCameraRotation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=ULevelEditingViewportBlueprintLibrary::GetViewportCameraRotation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelEditingViewportBlueprintLibrary::execGetViewportCameraLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=ULevelEditingViewportBlueprintLibrary::GetViewportCameraLocation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelEditingViewportBlueprintLibrary::execSetViewportCameraOrthoZoom)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InOrthoZoom);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULevelEditingViewportBlueprintLibrary::SetViewportCameraOrthoZoom(Z_Param_InOrthoZoom);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelEditingViewportBlueprintLibrary::execSetViewportCameraLookAtLocation)
	{
		P_GET_STRUCT(FVector,Z_Param_LookAt);
		P_GET_UBOOL(Z_Param_bRecalculateView);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULevelEditingViewportBlueprintLibrary::SetViewportCameraLookAtLocation(Z_Param_LookAt,Z_Param_bRecalculateView);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelEditingViewportBlueprintLibrary::execSetViewportCameraRotation)
	{
		P_GET_STRUCT(FRotator,Z_Param_NewRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULevelEditingViewportBlueprintLibrary::SetViewportCameraRotation(Z_Param_NewRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelEditingViewportBlueprintLibrary::execSetViewportCameraLocation)
	{
		P_GET_STRUCT(FVector,Z_Param_NewLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULevelEditingViewportBlueprintLibrary::SetViewportCameraLocation(Z_Param_NewLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelEditingViewportBlueprintLibrary::execGetEditingViewportDPIScale)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=ULevelEditingViewportBlueprintLibrary::GetEditingViewportDPIScale();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelEditingViewportBlueprintLibrary::execIsEditingViewportPerspective)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULevelEditingViewportBlueprintLibrary::IsEditingViewportPerspective();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelEditingViewportBlueprintLibrary::execGetEditingViewportType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ELevelEditingViewportType*)Z_Param__Result=ULevelEditingViewportBlueprintLibrary::GetEditingViewportType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelEditingViewportBlueprintLibrary::execSetEditingViewportType)
	{
		P_GET_ENUM(ELevelEditingViewportType,Z_Param_NewType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULevelEditingViewportBlueprintLibrary::SetEditingViewportType(ELevelEditingViewportType(Z_Param_NewType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelEditingViewportBlueprintLibrary::execIsCmdPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULevelEditingViewportBlueprintLibrary::IsCmdPressed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelEditingViewportBlueprintLibrary::execIsShiftPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULevelEditingViewportBlueprintLibrary::IsShiftPressed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelEditingViewportBlueprintLibrary::execIsCtrlPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULevelEditingViewportBlueprintLibrary::IsCtrlPressed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelEditingViewportBlueprintLibrary::execIsAltPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULevelEditingViewportBlueprintLibrary::IsAltPressed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelEditingViewportBlueprintLibrary::execIsKeyPressed)
	{
		P_GET_STRUCT(FKey,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULevelEditingViewportBlueprintLibrary::IsKeyPressed(Z_Param_Key);
		P_NATIVE_END;
	}
	void ULevelEditingViewportBlueprintLibrary::StaticRegisterNativesULevelEditingViewportBlueprintLibrary()
	{
		UClass* Class = ULevelEditingViewportBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetActorUnderCursor", &ULevelEditingViewportBlueprintLibrary::execGetActorUnderCursor },
			{ "GetEditingViewportDPIScale", &ULevelEditingViewportBlueprintLibrary::execGetEditingViewportDPIScale },
			{ "GetEditingViewportType", &ULevelEditingViewportBlueprintLibrary::execGetEditingViewportType },
			{ "GetEditorViewportMouseRayStartAndEnd", &ULevelEditingViewportBlueprintLibrary::execGetEditorViewportMouseRayStartAndEnd },
			{ "GetViewportCameraLocation", &ULevelEditingViewportBlueprintLibrary::execGetViewportCameraLocation },
			{ "GetViewportCameraLookAtLocation", &ULevelEditingViewportBlueprintLibrary::execGetViewportCameraLookAtLocation },
			{ "GetViewportCameraOrthoZoom", &ULevelEditingViewportBlueprintLibrary::execGetViewportCameraOrthoZoom },
			{ "GetViewportCameraRotation", &ULevelEditingViewportBlueprintLibrary::execGetViewportCameraRotation },
			{ "IsAltPressed", &ULevelEditingViewportBlueprintLibrary::execIsAltPressed },
			{ "IsCmdPressed", &ULevelEditingViewportBlueprintLibrary::execIsCmdPressed },
			{ "IsCtrlPressed", &ULevelEditingViewportBlueprintLibrary::execIsCtrlPressed },
			{ "IsEditingViewportPerspective", &ULevelEditingViewportBlueprintLibrary::execIsEditingViewportPerspective },
			{ "IsKeyPressed", &ULevelEditingViewportBlueprintLibrary::execIsKeyPressed },
			{ "IsPrimitiveComponentUnderCursor", &ULevelEditingViewportBlueprintLibrary::execIsPrimitiveComponentUnderCursor },
			{ "IsShiftPressed", &ULevelEditingViewportBlueprintLibrary::execIsShiftPressed },
			{ "RedrawAllViewports", &ULevelEditingViewportBlueprintLibrary::execRedrawAllViewports },
			{ "RedrawLevelEditingViewports", &ULevelEditingViewportBlueprintLibrary::execRedrawLevelEditingViewports },
			{ "SetEditingViewportType", &ULevelEditingViewportBlueprintLibrary::execSetEditingViewportType },
			{ "SetViewportCameraLocation", &ULevelEditingViewportBlueprintLibrary::execSetViewportCameraLocation },
			{ "SetViewportCameraLookAtLocation", &ULevelEditingViewportBlueprintLibrary::execSetViewportCameraLookAtLocation },
			{ "SetViewportCameraOrthoZoom", &ULevelEditingViewportBlueprintLibrary::execSetViewportCameraOrthoZoom },
			{ "SetViewportCameraRotation", &ULevelEditingViewportBlueprintLibrary::execSetViewportCameraRotation },
			{ "TransformPixelPointToScreen", &ULevelEditingViewportBlueprintLibrary::execTransformPixelPointToScreen },
			{ "TransformPixelPointToWorld", &ULevelEditingViewportBlueprintLibrary::execTransformPixelPointToWorld },
			{ "TransformScreenPointToPixel", &ULevelEditingViewportBlueprintLibrary::execTransformScreenPointToPixel },
			{ "TransformScreenPointToWorld", &ULevelEditingViewportBlueprintLibrary::execTransformScreenPointToWorld },
			{ "TransformWorldPointToPixel", &ULevelEditingViewportBlueprintLibrary::execTransformWorldPointToPixel },
			{ "TransformWorldPointToScreen", &ULevelEditingViewportBlueprintLibrary::execTransformWorldPointToScreen },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetActorUnderCursor_Statics
	{
		struct LevelEditingViewportBlueprintLibrary_eventGetActorUnderCursor_Parms
		{
			bool bIsValid;
			FActorHitProxyInfo OutActorHitProxyInfo;
		};
		static void NewProp_bIsValid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsValid;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutActorHitProxyInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetActorUnderCursor_Statics::NewProp_bIsValid_SetBit(void* Obj)
	{
		((LevelEditingViewportBlueprintLibrary_eventGetActorUnderCursor_Parms*)Obj)->bIsValid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetActorUnderCursor_Statics::NewProp_bIsValid = { "bIsValid", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LevelEditingViewportBlueprintLibrary_eventGetActorUnderCursor_Parms), &Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetActorUnderCursor_Statics::NewProp_bIsValid_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetActorUnderCursor_Statics::NewProp_OutActorHitProxyInfo = { "OutActorHitProxyInfo", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditingViewportBlueprintLibrary_eventGetActorUnderCursor_Parms, OutActorHitProxyInfo), Z_Construct_UScriptStruct_FActorHitProxyInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetActorUnderCursor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetActorUnderCursor_Statics::NewProp_bIsValid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetActorUnderCursor_Statics::NewProp_OutActorHitProxyInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetActorUnderCursor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editing Viewport" },
		{ "Comment", "/*, meta = (DisplayName = \"\", Keywords = \"\")*/" },
		{ "ModuleRelativePath", "Private/BlueprintLibrary/LevelEditingViewportBlueprintLibrary.h" },
		{ "ToolTip", ", meta = (DisplayName = \"\", Keywords = \"\")" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetActorUnderCursor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelEditingViewportBlueprintLibrary, nullptr, "GetActorUnderCursor", nullptr, nullptr, sizeof(LevelEditingViewportBlueprintLibrary_eventGetActorUnderCursor_Parms), Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetActorUnderCursor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetActorUnderCursor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetActorUnderCursor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetActorUnderCursor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetActorUnderCursor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetActorUnderCursor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetEditingViewportDPIScale_Statics
	{
		struct LevelEditingViewportBlueprintLibrary_eventGetEditingViewportDPIScale_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetEditingViewportDPIScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditingViewportBlueprintLibrary_eventGetEditingViewportDPIScale_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetEditingViewportDPIScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetEditingViewportDPIScale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetEditingViewportDPIScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editing Viewport" },
		{ "DisplayName", "Get Editing Viewport DPI Scale" },
		{ "Keywords", "viewport level editing dpi scale" },
		{ "ModuleRelativePath", "Private/BlueprintLibrary/LevelEditingViewportBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetEditingViewportDPIScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelEditingViewportBlueprintLibrary, nullptr, "GetEditingViewportDPIScale", nullptr, nullptr, sizeof(LevelEditingViewportBlueprintLibrary_eventGetEditingViewportDPIScale_Parms), Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetEditingViewportDPIScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetEditingViewportDPIScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetEditingViewportDPIScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetEditingViewportDPIScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetEditingViewportDPIScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetEditingViewportDPIScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetEditingViewportType_Statics
	{
		struct LevelEditingViewportBlueprintLibrary_eventGetEditingViewportType_Parms
		{
			ELevelEditingViewportType ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetEditingViewportType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetEditingViewportType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditingViewportBlueprintLibrary_eventGetEditingViewportType_Parms, ReturnValue), Z_Construct_UEnum_EditorScriptingTools_ELevelEditingViewportType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetEditingViewportType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetEditingViewportType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetEditingViewportType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetEditingViewportType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editing Viewport" },
		{ "DisplayName", "Get Editing Viewport Type" },
		{ "Keywords", "viewport level editing type" },
		{ "ModuleRelativePath", "Private/BlueprintLibrary/LevelEditingViewportBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetEditingViewportType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelEditingViewportBlueprintLibrary, nullptr, "GetEditingViewportType", nullptr, nullptr, sizeof(LevelEditingViewportBlueprintLibrary_eventGetEditingViewportType_Parms), Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetEditingViewportType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetEditingViewportType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetEditingViewportType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetEditingViewportType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetEditingViewportType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetEditingViewportType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetEditorViewportMouseRayStartAndEnd_Statics
	{
		struct LevelEditingViewportBlueprintLibrary_eventGetEditorViewportMouseRayStartAndEnd_Parms
		{
			FVector Start;
			FVector End;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Start;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_End;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetEditorViewportMouseRayStartAndEnd_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditingViewportBlueprintLibrary_eventGetEditorViewportMouseRayStartAndEnd_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetEditorViewportMouseRayStartAndEnd_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditingViewportBlueprintLibrary_eventGetEditorViewportMouseRayStartAndEnd_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetEditorViewportMouseRayStartAndEnd_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LevelEditingViewportBlueprintLibrary_eventGetEditorViewportMouseRayStartAndEnd_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetEditorViewportMouseRayStartAndEnd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LevelEditingViewportBlueprintLibrary_eventGetEditorViewportMouseRayStartAndEnd_Parms), &Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetEditorViewportMouseRayStartAndEnd_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetEditorViewportMouseRayStartAndEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetEditorViewportMouseRayStartAndEnd_Statics::NewProp_Start,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetEditorViewportMouseRayStartAndEnd_Statics::NewProp_End,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetEditorViewportMouseRayStartAndEnd_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetEditorViewportMouseRayStartAndEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editing Viewport" },
		{ "Comment", "///*, meta = (DisplayName = \"\", Keywords = \"\")*/\n" },
		{ "DisplayName", "Get Editor Viewport Mouse Ray Start & End" },
		{ "Keywords", "editing viewport ray trace start end mouse cursor" },
		{ "ModuleRelativePath", "Private/BlueprintLibrary/LevelEditingViewportBlueprintLibrary.h" },
		{ "ToolTip", ", meta = (DisplayName = \"\", Keywords = \"\")" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetEditorViewportMouseRayStartAndEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelEditingViewportBlueprintLibrary, nullptr, "GetEditorViewportMouseRayStartAndEnd", nullptr, nullptr, sizeof(LevelEditingViewportBlueprintLibrary_eventGetEditorViewportMouseRayStartAndEnd_Parms), Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetEditorViewportMouseRayStartAndEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetEditorViewportMouseRayStartAndEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetEditorViewportMouseRayStartAndEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetEditorViewportMouseRayStartAndEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetEditorViewportMouseRayStartAndEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetEditorViewportMouseRayStartAndEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetViewportCameraLocation_Statics
	{
		struct LevelEditingViewportBlueprintLibrary_eventGetViewportCameraLocation_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetViewportCameraLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditingViewportBlueprintLibrary_eventGetViewportCameraLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetViewportCameraLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetViewportCameraLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetViewportCameraLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editing Viewport | Camera" },
		{ "Comment", "/** @return the current viewport camera location */" },
		{ "DisplayName", "Get Viewport Camera Location" },
		{ "Keywords", "viewport level editing camera location" },
		{ "ModuleRelativePath", "Private/BlueprintLibrary/LevelEditingViewportBlueprintLibrary.h" },
		{ "ToolTip", "@return the current viewport camera location" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetViewportCameraLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelEditingViewportBlueprintLibrary, nullptr, "GetViewportCameraLocation", nullptr, nullptr, sizeof(LevelEditingViewportBlueprintLibrary_eventGetViewportCameraLocation_Parms), Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetViewportCameraLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetViewportCameraLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetViewportCameraLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetViewportCameraLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetViewportCameraLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetViewportCameraLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetViewportCameraLookAtLocation_Statics
	{
		struct LevelEditingViewportBlueprintLibrary_eventGetViewportCameraLookAtLocation_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetViewportCameraLookAtLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditingViewportBlueprintLibrary_eventGetViewportCameraLookAtLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetViewportCameraLookAtLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetViewportCameraLookAtLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetViewportCameraLookAtLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editing Viewport | Camera" },
		{ "Comment", "/** @return the current look at location */" },
		{ "DisplayName", "Get Viewport Camera Look At Location" },
		{ "Keywords", "viewport level editing camera look at lookat location" },
		{ "ModuleRelativePath", "Private/BlueprintLibrary/LevelEditingViewportBlueprintLibrary.h" },
		{ "ToolTip", "@return the current look at location" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetViewportCameraLookAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelEditingViewportBlueprintLibrary, nullptr, "GetViewportCameraLookAtLocation", nullptr, nullptr, sizeof(LevelEditingViewportBlueprintLibrary_eventGetViewportCameraLookAtLocation_Parms), Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetViewportCameraLookAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetViewportCameraLookAtLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetViewportCameraLookAtLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetViewportCameraLookAtLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetViewportCameraLookAtLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetViewportCameraLookAtLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetViewportCameraOrthoZoom_Statics
	{
		struct LevelEditingViewportBlueprintLibrary_eventGetViewportCameraOrthoZoom_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetViewportCameraOrthoZoom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditingViewportBlueprintLibrary_eventGetViewportCameraOrthoZoom_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetViewportCameraOrthoZoom_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetViewportCameraOrthoZoom_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetViewportCameraOrthoZoom_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editing Viewport | Camera" },
		{ "Comment", "/** @return the current ortho zoom amount */" },
		{ "DisplayName", "Get Viewport Camera Ortho Zoom" },
		{ "Keywords", "viewport level editing camera ortho zoom" },
		{ "ModuleRelativePath", "Private/BlueprintLibrary/LevelEditingViewportBlueprintLibrary.h" },
		{ "ToolTip", "@return the current ortho zoom amount" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetViewportCameraOrthoZoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelEditingViewportBlueprintLibrary, nullptr, "GetViewportCameraOrthoZoom", nullptr, nullptr, sizeof(LevelEditingViewportBlueprintLibrary_eventGetViewportCameraOrthoZoom_Parms), Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetViewportCameraOrthoZoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetViewportCameraOrthoZoom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetViewportCameraOrthoZoom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetViewportCameraOrthoZoom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetViewportCameraOrthoZoom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetViewportCameraOrthoZoom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetViewportCameraRotation_Statics
	{
		struct LevelEditingViewportBlueprintLibrary_eventGetViewportCameraRotation_Parms
		{
			FRotator ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetViewportCameraRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditingViewportBlueprintLibrary_eventGetViewportCameraRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetViewportCameraRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetViewportCameraRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetViewportCameraRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editing Viewport | Camera" },
		{ "Comment", "/** @return the current viewport camera rotation */" },
		{ "DisplayName", "Get Viewport Camera Rotation" },
		{ "Keywords", "viewport level editing camera rotation" },
		{ "ModuleRelativePath", "Private/BlueprintLibrary/LevelEditingViewportBlueprintLibrary.h" },
		{ "ToolTip", "@return the current viewport camera rotation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetViewportCameraRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelEditingViewportBlueprintLibrary, nullptr, "GetViewportCameraRotation", nullptr, nullptr, sizeof(LevelEditingViewportBlueprintLibrary_eventGetViewportCameraRotation_Parms), Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetViewportCameraRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetViewportCameraRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetViewportCameraRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetViewportCameraRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetViewportCameraRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetViewportCameraRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsAltPressed_Statics
	{
		struct LevelEditingViewportBlueprintLibrary_eventIsAltPressed_Parms
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
	void Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsAltPressed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LevelEditingViewportBlueprintLibrary_eventIsAltPressed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsAltPressed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LevelEditingViewportBlueprintLibrary_eventIsAltPressed_Parms), &Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsAltPressed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsAltPressed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsAltPressed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsAltPressed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editing Viewport | Input" },
		{ "DisplayName", "Is Alt Pressed ?" },
		{ "Keywords", "alt key left right pressed down" },
		{ "ModuleRelativePath", "Private/BlueprintLibrary/LevelEditingViewportBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsAltPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelEditingViewportBlueprintLibrary, nullptr, "IsAltPressed", nullptr, nullptr, sizeof(LevelEditingViewportBlueprintLibrary_eventIsAltPressed_Parms), Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsAltPressed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsAltPressed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsAltPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsAltPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsAltPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsAltPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsCmdPressed_Statics
	{
		struct LevelEditingViewportBlueprintLibrary_eventIsCmdPressed_Parms
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
	void Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsCmdPressed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LevelEditingViewportBlueprintLibrary_eventIsCmdPressed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsCmdPressed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LevelEditingViewportBlueprintLibrary_eventIsCmdPressed_Parms), &Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsCmdPressed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsCmdPressed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsCmdPressed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsCmdPressed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editing Viewport | Input" },
		{ "DisplayName", "Is Cmd Pressed ?" },
		{ "Keywords", "cmd command key left right pressed down" },
		{ "ModuleRelativePath", "Private/BlueprintLibrary/LevelEditingViewportBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsCmdPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelEditingViewportBlueprintLibrary, nullptr, "IsCmdPressed", nullptr, nullptr, sizeof(LevelEditingViewportBlueprintLibrary_eventIsCmdPressed_Parms), Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsCmdPressed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsCmdPressed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsCmdPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsCmdPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsCmdPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsCmdPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsCtrlPressed_Statics
	{
		struct LevelEditingViewportBlueprintLibrary_eventIsCtrlPressed_Parms
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
	void Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsCtrlPressed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LevelEditingViewportBlueprintLibrary_eventIsCtrlPressed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsCtrlPressed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LevelEditingViewportBlueprintLibrary_eventIsCtrlPressed_Parms), &Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsCtrlPressed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsCtrlPressed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsCtrlPressed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsCtrlPressed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editing Viewport | Input" },
		{ "DisplayName", "Is Ctrl Pressed ?" },
		{ "Keywords", "ctrl control left right key pressed down" },
		{ "ModuleRelativePath", "Private/BlueprintLibrary/LevelEditingViewportBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsCtrlPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelEditingViewportBlueprintLibrary, nullptr, "IsCtrlPressed", nullptr, nullptr, sizeof(LevelEditingViewportBlueprintLibrary_eventIsCtrlPressed_Parms), Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsCtrlPressed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsCtrlPressed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsCtrlPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsCtrlPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsCtrlPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsCtrlPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsEditingViewportPerspective_Statics
	{
		struct LevelEditingViewportBlueprintLibrary_eventIsEditingViewportPerspective_Parms
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
	void Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsEditingViewportPerspective_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LevelEditingViewportBlueprintLibrary_eventIsEditingViewportPerspective_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsEditingViewportPerspective_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LevelEditingViewportBlueprintLibrary_eventIsEditingViewportPerspective_Parms), &Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsEditingViewportPerspective_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsEditingViewportPerspective_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsEditingViewportPerspective_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsEditingViewportPerspective_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editing Viewport" },
		{ "DisplayName", "Is Editing Viewport Perspective ?" },
		{ "Keywords", "viewport level editing type perspective orthographic" },
		{ "ModuleRelativePath", "Private/BlueprintLibrary/LevelEditingViewportBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsEditingViewportPerspective_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelEditingViewportBlueprintLibrary, nullptr, "IsEditingViewportPerspective", nullptr, nullptr, sizeof(LevelEditingViewportBlueprintLibrary_eventIsEditingViewportPerspective_Parms), Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsEditingViewportPerspective_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsEditingViewportPerspective_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsEditingViewportPerspective_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsEditingViewportPerspective_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsEditingViewportPerspective()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsEditingViewportPerspective_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsKeyPressed_Statics
	{
		struct LevelEditingViewportBlueprintLibrary_eventIsKeyPressed_Parms
		{
			FKey Key;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsKeyPressed_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditingViewportBlueprintLibrary_eventIsKeyPressed_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsKeyPressed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LevelEditingViewportBlueprintLibrary_eventIsKeyPressed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsKeyPressed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LevelEditingViewportBlueprintLibrary_eventIsKeyPressed_Parms), &Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsKeyPressed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsKeyPressed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsKeyPressed_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsKeyPressed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsKeyPressed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editing Viewport | Input" },
		{ "DisplayName", "Is Key Pressed ?" },
		{ "Keywords", "key pressed down" },
		{ "ModuleRelativePath", "Private/BlueprintLibrary/LevelEditingViewportBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsKeyPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelEditingViewportBlueprintLibrary, nullptr, "IsKeyPressed", nullptr, nullptr, sizeof(LevelEditingViewportBlueprintLibrary_eventIsKeyPressed_Parms), Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsKeyPressed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsKeyPressed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsKeyPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsKeyPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsKeyPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsKeyPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsPrimitiveComponentUnderCursor_Statics
	{
		struct LevelEditingViewportBlueprintLibrary_eventIsPrimitiveComponentUnderCursor_Parms
		{
			UPrimitiveComponent* InPrimComponent;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPrimComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InPrimComponent;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsPrimitiveComponentUnderCursor_Statics::NewProp_InPrimComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsPrimitiveComponentUnderCursor_Statics::NewProp_InPrimComponent = { "InPrimComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditingViewportBlueprintLibrary_eventIsPrimitiveComponentUnderCursor_Parms, InPrimComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsPrimitiveComponentUnderCursor_Statics::NewProp_InPrimComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsPrimitiveComponentUnderCursor_Statics::NewProp_InPrimComponent_MetaData)) };
	void Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsPrimitiveComponentUnderCursor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LevelEditingViewportBlueprintLibrary_eventIsPrimitiveComponentUnderCursor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsPrimitiveComponentUnderCursor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LevelEditingViewportBlueprintLibrary_eventIsPrimitiveComponentUnderCursor_Parms), &Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsPrimitiveComponentUnderCursor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsPrimitiveComponentUnderCursor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsPrimitiveComponentUnderCursor_Statics::NewProp_InPrimComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsPrimitiveComponentUnderCursor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsPrimitiveComponentUnderCursor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editing Viewport" },
		{ "Comment", "/*, meta = (DisplayName = \"\", Keywords = \"\")*/" },
		{ "ModuleRelativePath", "Private/BlueprintLibrary/LevelEditingViewportBlueprintLibrary.h" },
		{ "ToolTip", ", meta = (DisplayName = \"\", Keywords = \"\")" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsPrimitiveComponentUnderCursor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelEditingViewportBlueprintLibrary, nullptr, "IsPrimitiveComponentUnderCursor", nullptr, nullptr, sizeof(LevelEditingViewportBlueprintLibrary_eventIsPrimitiveComponentUnderCursor_Parms), Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsPrimitiveComponentUnderCursor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsPrimitiveComponentUnderCursor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsPrimitiveComponentUnderCursor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsPrimitiveComponentUnderCursor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsPrimitiveComponentUnderCursor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsPrimitiveComponentUnderCursor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsShiftPressed_Statics
	{
		struct LevelEditingViewportBlueprintLibrary_eventIsShiftPressed_Parms
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
	void Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsShiftPressed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LevelEditingViewportBlueprintLibrary_eventIsShiftPressed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsShiftPressed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LevelEditingViewportBlueprintLibrary_eventIsShiftPressed_Parms), &Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsShiftPressed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsShiftPressed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsShiftPressed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsShiftPressed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editing Viewport | Input" },
		{ "DisplayName", "Is Shift Pressed ?" },
		{ "Keywords", "shift key left right pressed down" },
		{ "ModuleRelativePath", "Private/BlueprintLibrary/LevelEditingViewportBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsShiftPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelEditingViewportBlueprintLibrary, nullptr, "IsShiftPressed", nullptr, nullptr, sizeof(LevelEditingViewportBlueprintLibrary_eventIsShiftPressed_Parms), Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsShiftPressed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsShiftPressed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsShiftPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsShiftPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsShiftPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsShiftPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_RedrawAllViewports_Statics
	{
		struct LevelEditingViewportBlueprintLibrary_eventRedrawAllViewports_Parms
		{
			bool bInvalidateHitProxies;
		};
		static void NewProp_bInvalidateHitProxies_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInvalidateHitProxies;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_RedrawAllViewports_Statics::NewProp_bInvalidateHitProxies_SetBit(void* Obj)
	{
		((LevelEditingViewportBlueprintLibrary_eventRedrawAllViewports_Parms*)Obj)->bInvalidateHitProxies = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_RedrawAllViewports_Statics::NewProp_bInvalidateHitProxies = { "bInvalidateHitProxies", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LevelEditingViewportBlueprintLibrary_eventRedrawAllViewports_Parms), &Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_RedrawAllViewports_Statics::NewProp_bInvalidateHitProxies_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_RedrawAllViewports_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_RedrawAllViewports_Statics::NewProp_bInvalidateHitProxies,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_RedrawAllViewports_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editing Viewport" },
		{ "Comment", "/**\n\x09 * Redraws all editor viewport clients.\n\x09 *\n\x09 * @param\x09""bInvalidateHitProxies\x09\x09[opt] If true (the default), invalidates cached hit proxies too.\n\x09 */" },
		{ "CPP_Default_bInvalidateHitProxies", "true" },
		{ "DisplayName", "Redraw All Viewports" },
		{ "Keywords", "redraw refresh viewports viewport" },
		{ "ModuleRelativePath", "Private/BlueprintLibrary/LevelEditingViewportBlueprintLibrary.h" },
		{ "ToolTip", "Redraws all editor viewport clients.\n\n@param       bInvalidateHitProxies           [opt] If true (the default), invalidates cached hit proxies too." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_RedrawAllViewports_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelEditingViewportBlueprintLibrary, nullptr, "RedrawAllViewports", nullptr, nullptr, sizeof(LevelEditingViewportBlueprintLibrary_eventRedrawAllViewports_Parms), Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_RedrawAllViewports_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_RedrawAllViewports_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_RedrawAllViewports_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_RedrawAllViewports_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_RedrawAllViewports()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_RedrawAllViewports_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_RedrawLevelEditingViewports_Statics
	{
		struct LevelEditingViewportBlueprintLibrary_eventRedrawLevelEditingViewports_Parms
		{
			bool bInvalidateHitProxies;
		};
		static void NewProp_bInvalidateHitProxies_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInvalidateHitProxies;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_RedrawLevelEditingViewports_Statics::NewProp_bInvalidateHitProxies_SetBit(void* Obj)
	{
		((LevelEditingViewportBlueprintLibrary_eventRedrawLevelEditingViewports_Parms*)Obj)->bInvalidateHitProxies = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_RedrawLevelEditingViewports_Statics::NewProp_bInvalidateHitProxies = { "bInvalidateHitProxies", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LevelEditingViewportBlueprintLibrary_eventRedrawLevelEditingViewports_Parms), &Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_RedrawLevelEditingViewports_Statics::NewProp_bInvalidateHitProxies_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_RedrawLevelEditingViewports_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_RedrawLevelEditingViewports_Statics::NewProp_bInvalidateHitProxies,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_RedrawLevelEditingViewports_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editing Viewport" },
		{ "Comment", "/**\n\x09 * Redraws all level editing viewport clients.\n\x09 *\n\x09 * @param\x09""bInvalidateHitProxies\x09\x09[opt] If true (the default), invalidates cached hit proxies too.\n\x09 */" },
		{ "CPP_Default_bInvalidateHitProxies", "true" },
		{ "DisplayName", "Redraw Level Editing Viewports" },
		{ "Keywords", "redraw refresh level editing viewports viewport" },
		{ "ModuleRelativePath", "Private/BlueprintLibrary/LevelEditingViewportBlueprintLibrary.h" },
		{ "ToolTip", "Redraws all level editing viewport clients.\n\n@param       bInvalidateHitProxies           [opt] If true (the default), invalidates cached hit proxies too." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_RedrawLevelEditingViewports_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelEditingViewportBlueprintLibrary, nullptr, "RedrawLevelEditingViewports", nullptr, nullptr, sizeof(LevelEditingViewportBlueprintLibrary_eventRedrawLevelEditingViewports_Parms), Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_RedrawLevelEditingViewports_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_RedrawLevelEditingViewports_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_RedrawLevelEditingViewports_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_RedrawLevelEditingViewports_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_RedrawLevelEditingViewports()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_RedrawLevelEditingViewports_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_SetEditingViewportType_Statics
	{
		struct LevelEditingViewportBlueprintLibrary_eventSetEditingViewportType_Parms
		{
			ELevelEditingViewportType NewType;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_SetEditingViewportType_Statics::NewProp_NewType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_SetEditingViewportType_Statics::NewProp_NewType = { "NewType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditingViewportBlueprintLibrary_eventSetEditingViewportType_Parms, NewType), Z_Construct_UEnum_EditorScriptingTools_ELevelEditingViewportType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_SetEditingViewportType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LevelEditingViewportBlueprintLibrary_eventSetEditingViewportType_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_SetEditingViewportType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LevelEditingViewportBlueprintLibrary_eventSetEditingViewportType_Parms), &Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_SetEditingViewportType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_SetEditingViewportType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_SetEditingViewportType_Statics::NewProp_NewType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_SetEditingViewportType_Statics::NewProp_NewType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_SetEditingViewportType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_SetEditingViewportType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editing Viewport" },
		{ "DisplayName", "Set Editing Viewport Type" },
		{ "Keywords", "viewport level editing type" },
		{ "ModuleRelativePath", "Private/BlueprintLibrary/LevelEditingViewportBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_SetEditingViewportType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelEditingViewportBlueprintLibrary, nullptr, "SetEditingViewportType", nullptr, nullptr, sizeof(LevelEditingViewportBlueprintLibrary_eventSetEditingViewportType_Parms), Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_SetEditingViewportType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_SetEditingViewportType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_SetEditingViewportType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_SetEditingViewportType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_SetEditingViewportType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_SetEditingViewportType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_SetViewportCameraLocation_Statics
	{
		struct LevelEditingViewportBlueprintLibrary_eventSetViewportCameraLocation_Parms
		{
			FVector NewLocation;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_SetViewportCameraLocation_Statics::NewProp_NewLocation = { "NewLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditingViewportBlueprintLibrary_eventSetViewportCameraLocation_Parms, NewLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_SetViewportCameraLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_SetViewportCameraLocation_Statics::NewProp_NewLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_SetViewportCameraLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editing Viewport | Camera" },
		{ "Comment", "/** Sets the location of the viewport's camera */" },
		{ "DisplayName", "Set Viewport Camera Location" },
		{ "Keywords", "viewport level editing camera location" },
		{ "ModuleRelativePath", "Private/BlueprintLibrary/LevelEditingViewportBlueprintLibrary.h" },
		{ "ToolTip", "Sets the location of the viewport's camera" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_SetViewportCameraLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelEditingViewportBlueprintLibrary, nullptr, "SetViewportCameraLocation", nullptr, nullptr, sizeof(LevelEditingViewportBlueprintLibrary_eventSetViewportCameraLocation_Parms), Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_SetViewportCameraLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_SetViewportCameraLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_SetViewportCameraLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_SetViewportCameraLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_SetViewportCameraLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_SetViewportCameraLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_SetViewportCameraLookAtLocation_Statics
	{
		struct LevelEditingViewportBlueprintLibrary_eventSetViewportCameraLookAtLocation_Parms
		{
			FVector LookAt;
			bool bRecalculateView;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LookAt;
		static void NewProp_bRecalculateView_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecalculateView;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_SetViewportCameraLookAtLocation_Statics::NewProp_LookAt = { "LookAt", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditingViewportBlueprintLibrary_eventSetViewportCameraLookAtLocation_Parms, LookAt), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_SetViewportCameraLookAtLocation_Statics::NewProp_bRecalculateView_SetBit(void* Obj)
	{
		((LevelEditingViewportBlueprintLibrary_eventSetViewportCameraLookAtLocation_Parms*)Obj)->bRecalculateView = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_SetViewportCameraLookAtLocation_Statics::NewProp_bRecalculateView = { "bRecalculateView", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LevelEditingViewportBlueprintLibrary_eventSetViewportCameraLookAtLocation_Parms), &Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_SetViewportCameraLookAtLocation_Statics::NewProp_bRecalculateView_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_SetViewportCameraLookAtLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_SetViewportCameraLookAtLocation_Statics::NewProp_LookAt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_SetViewportCameraLookAtLocation_Statics::NewProp_bRecalculateView,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_SetViewportCameraLookAtLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editing Viewport | Camera" },
		{ "Comment", "/**\n\x09 * Sets the look at location of the viewports camera for orbit *\n\x09 *\n\x09 * @param LookAt The new look at location\n\x09 * @param bRecalulateView\x09If true, will recalculate view location and rotation to look at the new point immediatley\n\x09 */" },
		{ "CPP_Default_bRecalculateView", "false" },
		{ "DisplayName", "Set Viewport Camera Look At Location" },
		{ "Keywords", "viewport level editing camera look at lookat location" },
		{ "ModuleRelativePath", "Private/BlueprintLibrary/LevelEditingViewportBlueprintLibrary.h" },
		{ "ToolTip", "Sets the look at location of the viewports camera for orbit *\n\n@param LookAt The new look at location\n@param bRecalulateView       If true, will recalculate view location and rotation to look at the new point immediatley" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_SetViewportCameraLookAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelEditingViewportBlueprintLibrary, nullptr, "SetViewportCameraLookAtLocation", nullptr, nullptr, sizeof(LevelEditingViewportBlueprintLibrary_eventSetViewportCameraLookAtLocation_Parms), Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_SetViewportCameraLookAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_SetViewportCameraLookAtLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_SetViewportCameraLookAtLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_SetViewportCameraLookAtLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_SetViewportCameraLookAtLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_SetViewportCameraLookAtLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_SetViewportCameraOrthoZoom_Statics
	{
		struct LevelEditingViewportBlueprintLibrary_eventSetViewportCameraOrthoZoom_Parms
		{
			float InOrthoZoom;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InOrthoZoom;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_SetViewportCameraOrthoZoom_Statics::NewProp_InOrthoZoom = { "InOrthoZoom", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditingViewportBlueprintLibrary_eventSetViewportCameraOrthoZoom_Parms, InOrthoZoom), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_SetViewportCameraOrthoZoom_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_SetViewportCameraOrthoZoom_Statics::NewProp_InOrthoZoom,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_SetViewportCameraOrthoZoom_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editing Viewport | Camera" },
		{ "Comment", "/** Sets ortho zoom amount */" },
		{ "DisplayName", "Set Viewport Camera Ortho Zoom" },
		{ "Keywords", "viewport level editing camera ortho zoom" },
		{ "ModuleRelativePath", "Private/BlueprintLibrary/LevelEditingViewportBlueprintLibrary.h" },
		{ "ToolTip", "Sets ortho zoom amount" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_SetViewportCameraOrthoZoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelEditingViewportBlueprintLibrary, nullptr, "SetViewportCameraOrthoZoom", nullptr, nullptr, sizeof(LevelEditingViewportBlueprintLibrary_eventSetViewportCameraOrthoZoom_Parms), Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_SetViewportCameraOrthoZoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_SetViewportCameraOrthoZoom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_SetViewportCameraOrthoZoom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_SetViewportCameraOrthoZoom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_SetViewportCameraOrthoZoom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_SetViewportCameraOrthoZoom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_SetViewportCameraRotation_Statics
	{
		struct LevelEditingViewportBlueprintLibrary_eventSetViewportCameraRotation_Parms
		{
			FRotator NewRotation;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewRotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_SetViewportCameraRotation_Statics::NewProp_NewRotation = { "NewRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditingViewportBlueprintLibrary_eventSetViewportCameraRotation_Parms, NewRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_SetViewportCameraRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_SetViewportCameraRotation_Statics::NewProp_NewRotation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_SetViewportCameraRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editing Viewport | Camera" },
		{ "Comment", "/** Sets the location of the viewport's camera */" },
		{ "DisplayName", "Set Viewport Camera Rotation" },
		{ "Keywords", "viewport level editing camera rotation" },
		{ "ModuleRelativePath", "Private/BlueprintLibrary/LevelEditingViewportBlueprintLibrary.h" },
		{ "ToolTip", "Sets the location of the viewport's camera" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_SetViewportCameraRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelEditingViewportBlueprintLibrary, nullptr, "SetViewportCameraRotation", nullptr, nullptr, sizeof(LevelEditingViewportBlueprintLibrary_eventSetViewportCameraRotation_Parms), Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_SetViewportCameraRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_SetViewportCameraRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_SetViewportCameraRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_SetViewportCameraRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_SetViewportCameraRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_SetViewportCameraRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformPixelPointToScreen_Statics
	{
		struct LevelEditingViewportBlueprintLibrary_eventTransformPixelPointToScreen_Parms
		{
			float X;
			float Y;
			float Z;
			FVector4 ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_X;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Y;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Z;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformPixelPointToScreen_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditingViewportBlueprintLibrary_eventTransformPixelPointToScreen_Parms, X), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformPixelPointToScreen_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditingViewportBlueprintLibrary_eventTransformPixelPointToScreen_Parms, Y), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformPixelPointToScreen_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditingViewportBlueprintLibrary_eventTransformPixelPointToScreen_Parms, Z), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformPixelPointToScreen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditingViewportBlueprintLibrary_eventTransformPixelPointToScreen_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformPixelPointToScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformPixelPointToScreen_Statics::NewProp_X,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformPixelPointToScreen_Statics::NewProp_Y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformPixelPointToScreen_Statics::NewProp_Z,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformPixelPointToScreen_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformPixelPointToScreen_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editing Viewport" },
		{ "Comment", "/*, meta = (DisplayName = \"\", Keywords = \"\")*/" },
		{ "ModuleRelativePath", "Private/BlueprintLibrary/LevelEditingViewportBlueprintLibrary.h" },
		{ "ToolTip", ", meta = (DisplayName = \"\", Keywords = \"\")" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformPixelPointToScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelEditingViewportBlueprintLibrary, nullptr, "TransformPixelPointToScreen", nullptr, nullptr, sizeof(LevelEditingViewportBlueprintLibrary_eventTransformPixelPointToScreen_Parms), Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformPixelPointToScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformPixelPointToScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformPixelPointToScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformPixelPointToScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformPixelPointToScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformPixelPointToScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformPixelPointToWorld_Statics
	{
		struct LevelEditingViewportBlueprintLibrary_eventTransformPixelPointToWorld_Parms
		{
			float X;
			float Y;
			float Z;
			FVector4 ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_X;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Y;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Z;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformPixelPointToWorld_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditingViewportBlueprintLibrary_eventTransformPixelPointToWorld_Parms, X), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformPixelPointToWorld_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditingViewportBlueprintLibrary_eventTransformPixelPointToWorld_Parms, Y), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformPixelPointToWorld_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditingViewportBlueprintLibrary_eventTransformPixelPointToWorld_Parms, Z), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformPixelPointToWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditingViewportBlueprintLibrary_eventTransformPixelPointToWorld_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformPixelPointToWorld_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformPixelPointToWorld_Statics::NewProp_X,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformPixelPointToWorld_Statics::NewProp_Y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformPixelPointToWorld_Statics::NewProp_Z,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformPixelPointToWorld_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformPixelPointToWorld_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editing Viewport" },
		{ "Comment", "/*, meta = (DisplayName = \"\", Keywords = \"\")*/" },
		{ "ModuleRelativePath", "Private/BlueprintLibrary/LevelEditingViewportBlueprintLibrary.h" },
		{ "ToolTip", ", meta = (DisplayName = \"\", Keywords = \"\")" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformPixelPointToWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelEditingViewportBlueprintLibrary, nullptr, "TransformPixelPointToWorld", nullptr, nullptr, sizeof(LevelEditingViewportBlueprintLibrary_eventTransformPixelPointToWorld_Parms), Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformPixelPointToWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformPixelPointToWorld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformPixelPointToWorld_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformPixelPointToWorld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformPixelPointToWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformPixelPointToWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformScreenPointToPixel_Statics
	{
		struct LevelEditingViewportBlueprintLibrary_eventTransformScreenPointToPixel_Parms
		{
			FVector4 ScreenPoint;
			FVector2D OutPixelLocation;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScreenPoint;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutPixelLocation;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformScreenPointToPixel_Statics::NewProp_ScreenPoint = { "ScreenPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditingViewportBlueprintLibrary_eventTransformScreenPointToPixel_Parms, ScreenPoint), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformScreenPointToPixel_Statics::NewProp_OutPixelLocation = { "OutPixelLocation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditingViewportBlueprintLibrary_eventTransformScreenPointToPixel_Parms, OutPixelLocation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformScreenPointToPixel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LevelEditingViewportBlueprintLibrary_eventTransformScreenPointToPixel_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformScreenPointToPixel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LevelEditingViewportBlueprintLibrary_eventTransformScreenPointToPixel_Parms), &Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformScreenPointToPixel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformScreenPointToPixel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformScreenPointToPixel_Statics::NewProp_ScreenPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformScreenPointToPixel_Statics::NewProp_OutPixelLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformScreenPointToPixel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformScreenPointToPixel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editing Viewport" },
		{ "Comment", "/*, meta = (DisplayName = \"\", Keywords = \"\")*/" },
		{ "ModuleRelativePath", "Private/BlueprintLibrary/LevelEditingViewportBlueprintLibrary.h" },
		{ "ToolTip", ", meta = (DisplayName = \"\", Keywords = \"\")" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformScreenPointToPixel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelEditingViewportBlueprintLibrary, nullptr, "TransformScreenPointToPixel", nullptr, nullptr, sizeof(LevelEditingViewportBlueprintLibrary_eventTransformScreenPointToPixel_Parms), Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformScreenPointToPixel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformScreenPointToPixel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformScreenPointToPixel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformScreenPointToPixel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformScreenPointToPixel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformScreenPointToPixel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformScreenPointToWorld_Statics
	{
		struct LevelEditingViewportBlueprintLibrary_eventTransformScreenPointToWorld_Parms
		{
			FVector4 ScreenPoint;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScreenPoint;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformScreenPointToWorld_Statics::NewProp_ScreenPoint = { "ScreenPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditingViewportBlueprintLibrary_eventTransformScreenPointToWorld_Parms, ScreenPoint), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformScreenPointToWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditingViewportBlueprintLibrary_eventTransformScreenPointToWorld_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformScreenPointToWorld_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformScreenPointToWorld_Statics::NewProp_ScreenPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformScreenPointToWorld_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformScreenPointToWorld_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editing Viewport" },
		{ "Comment", "/*, meta = (DisplayName = \"\", Keywords = \"\")*/" },
		{ "ModuleRelativePath", "Private/BlueprintLibrary/LevelEditingViewportBlueprintLibrary.h" },
		{ "ToolTip", ", meta = (DisplayName = \"\", Keywords = \"\")" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformScreenPointToWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelEditingViewportBlueprintLibrary, nullptr, "TransformScreenPointToWorld", nullptr, nullptr, sizeof(LevelEditingViewportBlueprintLibrary_eventTransformScreenPointToWorld_Parms), Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformScreenPointToWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformScreenPointToWorld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformScreenPointToWorld_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformScreenPointToWorld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformScreenPointToWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformScreenPointToWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformWorldPointToPixel_Statics
	{
		struct LevelEditingViewportBlueprintLibrary_eventTransformWorldPointToPixel_Parms
		{
			FVector WorldPoint;
			FVector2D OutPixelLocation;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldPoint;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutPixelLocation;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformWorldPointToPixel_Statics::NewProp_WorldPoint = { "WorldPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditingViewportBlueprintLibrary_eventTransformWorldPointToPixel_Parms, WorldPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformWorldPointToPixel_Statics::NewProp_OutPixelLocation = { "OutPixelLocation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditingViewportBlueprintLibrary_eventTransformWorldPointToPixel_Parms, OutPixelLocation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformWorldPointToPixel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LevelEditingViewportBlueprintLibrary_eventTransformWorldPointToPixel_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformWorldPointToPixel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LevelEditingViewportBlueprintLibrary_eventTransformWorldPointToPixel_Parms), &Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformWorldPointToPixel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformWorldPointToPixel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformWorldPointToPixel_Statics::NewProp_WorldPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformWorldPointToPixel_Statics::NewProp_OutPixelLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformWorldPointToPixel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformWorldPointToPixel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editing Viewport" },
		{ "Comment", "/*, meta = (DisplayName = \"\", Keywords = \"\")*/" },
		{ "ModuleRelativePath", "Private/BlueprintLibrary/LevelEditingViewportBlueprintLibrary.h" },
		{ "ToolTip", ", meta = (DisplayName = \"\", Keywords = \"\")" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformWorldPointToPixel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelEditingViewportBlueprintLibrary, nullptr, "TransformWorldPointToPixel", nullptr, nullptr, sizeof(LevelEditingViewportBlueprintLibrary_eventTransformWorldPointToPixel_Parms), Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformWorldPointToPixel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformWorldPointToPixel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformWorldPointToPixel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformWorldPointToPixel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformWorldPointToPixel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformWorldPointToPixel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformWorldPointToScreen_Statics
	{
		struct LevelEditingViewportBlueprintLibrary_eventTransformWorldPointToScreen_Parms
		{
			FVector WorldPoint;
			FVector4 ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldPoint;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformWorldPointToScreen_Statics::NewProp_WorldPoint = { "WorldPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditingViewportBlueprintLibrary_eventTransformWorldPointToScreen_Parms, WorldPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformWorldPointToScreen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditingViewportBlueprintLibrary_eventTransformWorldPointToScreen_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformWorldPointToScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformWorldPointToScreen_Statics::NewProp_WorldPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformWorldPointToScreen_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformWorldPointToScreen_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editing Viewport" },
		{ "Comment", "/*, meta = (DisplayName = \"\", Keywords = \"\")*/" },
		{ "ModuleRelativePath", "Private/BlueprintLibrary/LevelEditingViewportBlueprintLibrary.h" },
		{ "ToolTip", ", meta = (DisplayName = \"\", Keywords = \"\")" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformWorldPointToScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelEditingViewportBlueprintLibrary, nullptr, "TransformWorldPointToScreen", nullptr, nullptr, sizeof(LevelEditingViewportBlueprintLibrary_eventTransformWorldPointToScreen_Parms), Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformWorldPointToScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformWorldPointToScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformWorldPointToScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformWorldPointToScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformWorldPointToScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformWorldPointToScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULevelEditingViewportBlueprintLibrary_NoRegister()
	{
		return ULevelEditingViewportBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_ULevelEditingViewportBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelEditingViewportBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorScriptingTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULevelEditingViewportBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetActorUnderCursor, "GetActorUnderCursor" }, // 2103533771
		{ &Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetEditingViewportDPIScale, "GetEditingViewportDPIScale" }, // 1351346562
		{ &Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetEditingViewportType, "GetEditingViewportType" }, // 3560359111
		{ &Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetEditorViewportMouseRayStartAndEnd, "GetEditorViewportMouseRayStartAndEnd" }, // 1616728224
		{ &Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetViewportCameraLocation, "GetViewportCameraLocation" }, // 3312921997
		{ &Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetViewportCameraLookAtLocation, "GetViewportCameraLookAtLocation" }, // 1773659754
		{ &Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetViewportCameraOrthoZoom, "GetViewportCameraOrthoZoom" }, // 1185591309
		{ &Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_GetViewportCameraRotation, "GetViewportCameraRotation" }, // 847221466
		{ &Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsAltPressed, "IsAltPressed" }, // 2368224890
		{ &Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsCmdPressed, "IsCmdPressed" }, // 1298641774
		{ &Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsCtrlPressed, "IsCtrlPressed" }, // 3469512819
		{ &Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsEditingViewportPerspective, "IsEditingViewportPerspective" }, // 223024916
		{ &Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsKeyPressed, "IsKeyPressed" }, // 2384540650
		{ &Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsPrimitiveComponentUnderCursor, "IsPrimitiveComponentUnderCursor" }, // 4132433576
		{ &Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_IsShiftPressed, "IsShiftPressed" }, // 1165983584
		{ &Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_RedrawAllViewports, "RedrawAllViewports" }, // 2203833848
		{ &Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_RedrawLevelEditingViewports, "RedrawLevelEditingViewports" }, // 2877322744
		{ &Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_SetEditingViewportType, "SetEditingViewportType" }, // 2754408833
		{ &Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_SetViewportCameraLocation, "SetViewportCameraLocation" }, // 377313823
		{ &Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_SetViewportCameraLookAtLocation, "SetViewportCameraLookAtLocation" }, // 3508943907
		{ &Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_SetViewportCameraOrthoZoom, "SetViewportCameraOrthoZoom" }, // 1284155201
		{ &Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_SetViewportCameraRotation, "SetViewportCameraRotation" }, // 2461175707
		{ &Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformPixelPointToScreen, "TransformPixelPointToScreen" }, // 3281622836
		{ &Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformPixelPointToWorld, "TransformPixelPointToWorld" }, // 2646674869
		{ &Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformScreenPointToPixel, "TransformScreenPointToPixel" }, // 810362386
		{ &Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformScreenPointToWorld, "TransformScreenPointToWorld" }, // 3430868735
		{ &Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformWorldPointToPixel, "TransformWorldPointToPixel" }, // 1493714043
		{ &Z_Construct_UFunction_ULevelEditingViewportBlueprintLibrary_TransformWorldPointToScreen, "TransformWorldPointToScreen" }, // 111182648
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditingViewportBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "BlueprintLibrary/LevelEditingViewportBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Private/BlueprintLibrary/LevelEditingViewportBlueprintLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelEditingViewportBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelEditingViewportBlueprintLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULevelEditingViewportBlueprintLibrary_Statics::ClassParams = {
		&ULevelEditingViewportBlueprintLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULevelEditingViewportBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditingViewportBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelEditingViewportBlueprintLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULevelEditingViewportBlueprintLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULevelEditingViewportBlueprintLibrary, 2033984690);
	template<> EDITORSCRIPTINGTOOLS_API UClass* StaticClass<ULevelEditingViewportBlueprintLibrary>()
	{
		return ULevelEditingViewportBlueprintLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULevelEditingViewportBlueprintLibrary(Z_Construct_UClass_ULevelEditingViewportBlueprintLibrary, &ULevelEditingViewportBlueprintLibrary::StaticClass, TEXT("/Script/EditorScriptingTools"), TEXT("ULevelEditingViewportBlueprintLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelEditingViewportBlueprintLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
