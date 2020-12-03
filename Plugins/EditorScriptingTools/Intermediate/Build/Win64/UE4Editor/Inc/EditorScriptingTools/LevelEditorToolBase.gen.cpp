// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorScriptingTools/Private/EditorScriptingToolsCommon/LevelEditorToolBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelEditorToolBase() {}
// Cross Module References
	EDITORSCRIPTINGTOOLS_API UClass* Z_Construct_UClass_ULevelEditorToolBase_NoRegister();
	EDITORSCRIPTINGTOOLS_API UClass* Z_Construct_UClass_ULevelEditorToolBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_EditorScriptingTools();
	EDITORSCRIPTINGTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FDummyStruct();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	EDITORSCRIPTINGTOOLS_API UEnum* Z_Construct_UEnum_EditorScriptingTools_EDepthPriorityGroup();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ULevelEditorToolBase::execGetCanvasDPIScale)
	{
		P_GET_STRUCT(FDummyStruct,Z_Param_DrawHUDContext);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCanvasDPIScale(Z_Param_DrawHUDContext);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelEditorToolBase::execDrawActorScreenSpaceBoundingBox)
	{
		P_GET_STRUCT(FDummyStruct,Z_Param_DrawHUDContext);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_STRUCT(FLinearColor,Z_Param_Color);
		P_GET_UBOOL(Z_Param_bDrawBracket);
		P_GET_PROPERTY(FStrProperty,Z_Param_LabelText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DrawActorScreenSpaceBoundingBox(Z_Param_DrawHUDContext,Z_Param_Actor,Z_Param_Color,Z_Param_bDrawBracket,Z_Param_LabelText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelEditorToolBase::execDrawCanvasLine)
	{
		P_GET_STRUCT(FDummyStruct,Z_Param_DrawHUDContext);
		P_GET_STRUCT(FVector2D,Z_Param_LineStart);
		P_GET_STRUCT(FVector2D,Z_Param_LineEnd);
		P_GET_STRUCT(FLinearColor,Z_Param_LineColor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_LineThickness);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DrawCanvasLine(Z_Param_DrawHUDContext,Z_Param_LineStart,Z_Param_LineEnd,Z_Param_LineColor,Z_Param_LineThickness);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelEditorToolBase::execDrawSimpleText)
	{
		P_GET_STRUCT(FDummyStruct,Z_Param_DrawHUDContext);
		P_GET_PROPERTY(FStrProperty,Z_Param_Text);
		P_GET_STRUCT(FLinearColor,Z_Param_TextColor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ViewportX);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ViewportY);
		P_GET_OBJECT(UFont,Z_Param_Font);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TextScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DrawSimpleText(Z_Param_DrawHUDContext,Z_Param_Text,Z_Param_TextColor,Z_Param_ViewportX,Z_Param_ViewportY,Z_Param_Font,Z_Param_TextScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelEditorToolBase::execDrawSpline)
	{
		P_GET_STRUCT(FDummyStruct,Z_Param_DrawPrimitivesContext);
		P_GET_OBJECT(USplineComponent,Z_Param_SplineComponent);
		P_GET_STRUCT(FLinearColor,Z_Param_LineColor);
		P_GET_ENUM(EDepthPriorityGroup,Z_Param_DepthPriorityGroup);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DrawSpline(Z_Param_DrawPrimitivesContext,Z_Param_SplineComponent,Z_Param_LineColor,EDepthPriorityGroup(Z_Param_DepthPriorityGroup));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelEditorToolBase::execDrawFlatArrow)
	{
		P_GET_STRUCT(FDummyStruct,Z_Param_DrawPrimitivesContext);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT(FVector,Z_Param_XAxis);
		P_GET_STRUCT(FVector,Z_Param_YAxis);
		P_GET_STRUCT(FLinearColor,Z_Param_Color);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Length);
		P_GET_PROPERTY(FIntProperty,Z_Param_Width);
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material);
		P_GET_ENUM(EDepthPriorityGroup,Z_Param_DepthPriority);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Thickness);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DrawFlatArrow(Z_Param_DrawPrimitivesContext,Z_Param_Location,Z_Param_XAxis,Z_Param_YAxis,Z_Param_Color,Z_Param_Length,Z_Param_Width,Z_Param_Material,EDepthPriorityGroup(Z_Param_DepthPriority),Z_Param_Thickness);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelEditorToolBase::execDrawWireBox)
	{
		P_GET_STRUCT(FDummyStruct,Z_Param_DrawPrimitivesContext);
		P_GET_STRUCT(FTransform,Z_Param_Transform);
		P_GET_STRUCT(FVector,Z_Param_Extent);
		P_GET_STRUCT(FLinearColor,Z_Param_Color);
		P_GET_ENUM(EDepthPriorityGroup,Z_Param_DepthPriority);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Thickness);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DepthBias);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DrawWireBox(Z_Param_DrawPrimitivesContext,Z_Param_Transform,Z_Param_Extent,Z_Param_Color,EDepthPriorityGroup(Z_Param_DepthPriority),Z_Param_Thickness,Z_Param_DepthBias);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelEditorToolBase::execDrawBox)
	{
		P_GET_STRUCT(FDummyStruct,Z_Param_DrawPrimitivesContext);
		P_GET_STRUCT(FTransform,Z_Param_Transform);
		P_GET_STRUCT(FVector,Z_Param_Extent);
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material);
		P_GET_ENUM(EDepthPriorityGroup,Z_Param_DepthPriority);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DrawBox(Z_Param_DrawPrimitivesContext,Z_Param_Transform,Z_Param_Extent,Z_Param_Material,EDepthPriorityGroup(Z_Param_DepthPriority));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelEditorToolBase::execDrawWireSphere)
	{
		P_GET_STRUCT(FDummyStruct,Z_Param_DrawPrimitivesContext);
		P_GET_STRUCT(FVector,Z_Param_Center);
		P_GET_STRUCT(FLinearColor,Z_Param_Color);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumSides);
		P_GET_ENUM(EDepthPriorityGroup,Z_Param_DepthPriority);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Thickness);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DepthBias);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DrawWireSphere(Z_Param_DrawPrimitivesContext,Z_Param_Center,Z_Param_Color,Z_Param_Radius,Z_Param_NumSides,EDepthPriorityGroup(Z_Param_DepthPriority),Z_Param_Thickness,Z_Param_DepthBias);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelEditorToolBase::execDrawSphere)
	{
		P_GET_STRUCT(FDummyStruct,Z_Param_DrawPrimitivesContext);
		P_GET_STRUCT(FVector,Z_Param_Center);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumSides);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumRings);
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material);
		P_GET_ENUM(EDepthPriorityGroup,Z_Param_DepthPriorityGroup);
		P_GET_UBOOL(Z_Param_bDisableBackfaceCulling);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DrawSphere(Z_Param_DrawPrimitivesContext,Z_Param_Center,Z_Param_Radius,Z_Param_NumSides,Z_Param_NumRings,Z_Param_Material,EDepthPriorityGroup(Z_Param_DepthPriorityGroup),Z_Param_bDisableBackfaceCulling);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelEditorToolBase::execDrawTriangle)
	{
		P_GET_STRUCT(FDummyStruct,Z_Param_DrawPrimitivesContext);
		P_GET_STRUCT(FVector,Z_Param_PointA);
		P_GET_STRUCT(FVector,Z_Param_PointB);
		P_GET_STRUCT(FVector,Z_Param_PointC);
		P_GET_STRUCT(FLinearColor,Z_Param_Color);
		P_GET_UBOOL(Z_Param_bDrawLines);
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material);
		P_GET_ENUM(EDepthPriorityGroup,Z_Param_DepthPriorityGroup);
		P_GET_UBOOL(Z_Param_bDisableBackfaceCulling);
		P_GET_UBOOL(Z_Param_bReceivesDecals);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DrawTriangle(Z_Param_DrawPrimitivesContext,Z_Param_PointA,Z_Param_PointB,Z_Param_PointC,Z_Param_Color,Z_Param_bDrawLines,Z_Param_Material,EDepthPriorityGroup(Z_Param_DepthPriorityGroup),Z_Param_bDisableBackfaceCulling,Z_Param_bReceivesDecals);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelEditorToolBase::execDrawLine)
	{
		P_GET_STRUCT(FDummyStruct,Z_Param_DrawPrimitivesContext);
		P_GET_STRUCT(FVector,Z_Param_Start);
		P_GET_STRUCT(FVector,Z_Param_End);
		P_GET_STRUCT(FLinearColor,Z_Param_Color);
		P_GET_ENUM(EDepthPriorityGroup,Z_Param_DepthPriorityGroup);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Thickness);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DepthBias);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DrawLine(Z_Param_DrawPrimitivesContext,Z_Param_Start,Z_Param_End,Z_Param_Color,EDepthPriorityGroup(Z_Param_DepthPriorityGroup),Z_Param_Thickness,Z_Param_DepthBias);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelEditorToolBase::execDrawPoint)
	{
		P_GET_STRUCT(FDummyStruct,Z_Param_DrawPrimitivesContext);
		P_GET_STRUCT(FVector,Z_Param_Position);
		P_GET_STRUCT(FLinearColor,Z_Param_Color);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PointSize);
		P_GET_ENUM(EDepthPriorityGroup,Z_Param_DepthPriorityGroup);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DrawPoint(Z_Param_DrawPrimitivesContext,Z_Param_Position,Z_Param_Color,Z_Param_PointSize,EDepthPriorityGroup(Z_Param_DepthPriorityGroup));
		P_NATIVE_END;
	}
	void ULevelEditorToolBase::StaticRegisterNativesULevelEditorToolBase()
	{
		UClass* Class = ULevelEditorToolBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DrawActorScreenSpaceBoundingBox", &ULevelEditorToolBase::execDrawActorScreenSpaceBoundingBox },
			{ "DrawBox", &ULevelEditorToolBase::execDrawBox },
			{ "DrawCanvasLine", &ULevelEditorToolBase::execDrawCanvasLine },
			{ "DrawFlatArrow", &ULevelEditorToolBase::execDrawFlatArrow },
			{ "DrawLine", &ULevelEditorToolBase::execDrawLine },
			{ "DrawPoint", &ULevelEditorToolBase::execDrawPoint },
			{ "DrawSimpleText", &ULevelEditorToolBase::execDrawSimpleText },
			{ "DrawSphere", &ULevelEditorToolBase::execDrawSphere },
			{ "DrawSpline", &ULevelEditorToolBase::execDrawSpline },
			{ "DrawTriangle", &ULevelEditorToolBase::execDrawTriangle },
			{ "DrawWireBox", &ULevelEditorToolBase::execDrawWireBox },
			{ "DrawWireSphere", &ULevelEditorToolBase::execDrawWireSphere },
			{ "GetCanvasDPIScale", &ULevelEditorToolBase::execGetCanvasDPIScale },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULevelEditorToolBase_DrawActorScreenSpaceBoundingBox_Statics
	{
		struct LevelEditorToolBase_eventDrawActorScreenSpaceBoundingBox_Parms
		{
			FDummyStruct DrawHUDContext;
			AActor* Actor;
			FLinearColor Color;
			bool bDrawBracket;
			FString LabelText;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DrawHUDContext;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawBracket_MetaData[];
#endif
		static void NewProp_bDrawBracket_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawBracket;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LabelText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawActorScreenSpaceBoundingBox_Statics::NewProp_DrawHUDContext = { "DrawHUDContext", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditorToolBase_eventDrawActorScreenSpaceBoundingBox_Parms, DrawHUDContext), Z_Construct_UScriptStruct_FDummyStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawActorScreenSpaceBoundingBox_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditorToolBase_eventDrawActorScreenSpaceBoundingBox_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawActorScreenSpaceBoundingBox_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditorToolBase_eventDrawActorScreenSpaceBoundingBox_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelEditorToolBase_DrawActorScreenSpaceBoundingBox_Statics::NewProp_bDrawBracket_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULevelEditorToolBase_DrawActorScreenSpaceBoundingBox_Statics::NewProp_bDrawBracket_SetBit(void* Obj)
	{
		((LevelEditorToolBase_eventDrawActorScreenSpaceBoundingBox_Parms*)Obj)->bDrawBracket = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawActorScreenSpaceBoundingBox_Statics::NewProp_bDrawBracket = { "bDrawBracket", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LevelEditorToolBase_eventDrawActorScreenSpaceBoundingBox_Parms), &Z_Construct_UFunction_ULevelEditorToolBase_DrawActorScreenSpaceBoundingBox_Statics::NewProp_bDrawBracket_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULevelEditorToolBase_DrawActorScreenSpaceBoundingBox_Statics::NewProp_bDrawBracket_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditorToolBase_DrawActorScreenSpaceBoundingBox_Statics::NewProp_bDrawBracket_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawActorScreenSpaceBoundingBox_Statics::NewProp_LabelText = { "LabelText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditorToolBase_eventDrawActorScreenSpaceBoundingBox_Parms, LabelText), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelEditorToolBase_DrawActorScreenSpaceBoundingBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawActorScreenSpaceBoundingBox_Statics::NewProp_DrawHUDContext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawActorScreenSpaceBoundingBox_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawActorScreenSpaceBoundingBox_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawActorScreenSpaceBoundingBox_Statics::NewProp_bDrawBracket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawActorScreenSpaceBoundingBox_Statics::NewProp_LabelText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelEditorToolBase_DrawActorScreenSpaceBoundingBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "LevelEditingViewport|HUD" },
		{ "Color", "(R=0,G=0,B=0,A=1)" },
		{ "Comment", "/**\n\x09 * Draws a screen space bounding box around the specified actor\n\x09 *\n\x09 * @param\x09""Actor\x09\x09\x09""Actor to draw a bounding box for\n\x09 * @param\x09""Color\x09\x09\x09""Color of bounding box\n\x09 * @param\x09""bDrawBracket\x09True to draw a bracket, otherwise a box will be rendered\n\x09 * @param\x09LabelText\x09\x09Optional label text to draw\n\x09 */" },
		{ "CPP_Default_LabelText", "" },
		{ "DisplayName", "Draw Actor Screen Space Bounding Box" },
		{ "HideSelfPin", "true" },
		{ "ModuleRelativePath", "Private/EditorScriptingToolsCommon/LevelEditorToolBase.h" },
		{ "ToolTip", "Draws a screen space bounding box around the specified actor\n\n@param       Actor                   Actor to draw a bounding box for\n@param       Color                   Color of bounding box\n@param       bDrawBracket    True to draw a bracket, otherwise a box will be rendered\n@param       LabelText               Optional label text to draw" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelEditorToolBase_DrawActorScreenSpaceBoundingBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelEditorToolBase, nullptr, "DrawActorScreenSpaceBoundingBox", nullptr, nullptr, sizeof(LevelEditorToolBase_eventDrawActorScreenSpaceBoundingBox_Parms), Z_Construct_UFunction_ULevelEditorToolBase_DrawActorScreenSpaceBoundingBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditorToolBase_DrawActorScreenSpaceBoundingBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelEditorToolBase_DrawActorScreenSpaceBoundingBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditorToolBase_DrawActorScreenSpaceBoundingBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelEditorToolBase_DrawActorScreenSpaceBoundingBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelEditorToolBase_DrawActorScreenSpaceBoundingBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelEditorToolBase_DrawBox_Statics
	{
		struct LevelEditorToolBase_eventDrawBox_Parms
		{
			FDummyStruct DrawPrimitivesContext;
			FTransform Transform;
			FVector Extent;
			UMaterialInterface* Material;
			EDepthPriorityGroup DepthPriority;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DrawPrimitivesContext;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Extent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DepthPriority_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DepthPriority;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawBox_Statics::NewProp_DrawPrimitivesContext = { "DrawPrimitivesContext", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditorToolBase_eventDrawBox_Parms, DrawPrimitivesContext), Z_Construct_UScriptStruct_FDummyStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawBox_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditorToolBase_eventDrawBox_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawBox_Statics::NewProp_Extent = { "Extent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditorToolBase_eventDrawBox_Parms, Extent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawBox_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditorToolBase_eventDrawBox_Parms, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawBox_Statics::NewProp_DepthPriority_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawBox_Statics::NewProp_DepthPriority = { "DepthPriority", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditorToolBase_eventDrawBox_Parms, DepthPriority), Z_Construct_UEnum_EditorScriptingTools_EDepthPriorityGroup, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelEditorToolBase_DrawBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawBox_Statics::NewProp_DrawPrimitivesContext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawBox_Statics::NewProp_Transform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawBox_Statics::NewProp_Extent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawBox_Statics::NewProp_Material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawBox_Statics::NewProp_DepthPriority_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawBox_Statics::NewProp_DepthPriority,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelEditorToolBase_DrawBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "LevelEditingViewport|DrawPrimitives" },
		{ "CPP_Default_DepthPriority", "World" },
		{ "CPP_Default_Extent", "50.000000,50.000000,50.000000" },
		{ "CPP_Default_Material", "None" },
		{ "HideSelfPin", "true" },
		{ "ModuleRelativePath", "Private/EditorScriptingToolsCommon/LevelEditorToolBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelEditorToolBase_DrawBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelEditorToolBase, nullptr, "DrawBox", nullptr, nullptr, sizeof(LevelEditorToolBase_eventDrawBox_Parms), Z_Construct_UFunction_ULevelEditorToolBase_DrawBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditorToolBase_DrawBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelEditorToolBase_DrawBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditorToolBase_DrawBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelEditorToolBase_DrawBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelEditorToolBase_DrawBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelEditorToolBase_DrawCanvasLine_Statics
	{
		struct LevelEditorToolBase_eventDrawCanvasLine_Parms
		{
			FDummyStruct DrawHUDContext;
			FVector2D LineStart;
			FVector2D LineEnd;
			FLinearColor LineColor;
			float LineThickness;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DrawHUDContext;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LineStart;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LineEnd;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LineColor;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LineThickness;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawCanvasLine_Statics::NewProp_DrawHUDContext = { "DrawHUDContext", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditorToolBase_eventDrawCanvasLine_Parms, DrawHUDContext), Z_Construct_UScriptStruct_FDummyStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawCanvasLine_Statics::NewProp_LineStart = { "LineStart", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditorToolBase_eventDrawCanvasLine_Parms, LineStart), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawCanvasLine_Statics::NewProp_LineEnd = { "LineEnd", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditorToolBase_eventDrawCanvasLine_Parms, LineEnd), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawCanvasLine_Statics::NewProp_LineColor = { "LineColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditorToolBase_eventDrawCanvasLine_Parms, LineColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawCanvasLine_Statics::NewProp_LineThickness = { "LineThickness", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditorToolBase_eventDrawCanvasLine_Parms, LineThickness), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelEditorToolBase_DrawCanvasLine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawCanvasLine_Statics::NewProp_DrawHUDContext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawCanvasLine_Statics::NewProp_LineStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawCanvasLine_Statics::NewProp_LineEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawCanvasLine_Statics::NewProp_LineColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawCanvasLine_Statics::NewProp_LineThickness,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelEditorToolBase_DrawCanvasLine_Statics::Function_MetaDataParams[] = {
		{ "Category", "LevelEditingViewport|HUD" },
		{ "Comment", "/**\n\x09 * Draws a 2D line on the HUD.\n\x09 * @param StartScreenX\x09\x09Screen-space X coordinate of start of the line.\n\x09 * @param StartScreenY\x09\x09Screen-space Y coordinate of start of the line.\n\x09 * @param EndScreenX\x09\x09Screen-space X coordinate of end of the line.\n\x09 * @param EndScreenY\x09\x09Screen-space Y coordinate of end of the line.\n\x09 * @param LineColor\x09\x09\x09""Color to draw line\n\x09 * @param LineThickness\x09\x09Thickness of the line to draw\n\x09 */" },
		{ "CPP_Default_LineThickness", "0.000000" },
		{ "DisplayName", "Draw Line" },
		{ "HideSelfPin", "true" },
		{ "LineColor", "(R=0,G=0,B=0,A=1)" },
		{ "ModuleRelativePath", "Private/EditorScriptingToolsCommon/LevelEditorToolBase.h" },
		{ "ToolTip", "Draws a 2D line on the HUD.\n@param StartScreenX          Screen-space X coordinate of start of the line.\n@param StartScreenY          Screen-space Y coordinate of start of the line.\n@param EndScreenX            Screen-space X coordinate of end of the line.\n@param EndScreenY            Screen-space Y coordinate of end of the line.\n@param LineColor                     Color to draw line\n@param LineThickness         Thickness of the line to draw" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelEditorToolBase_DrawCanvasLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelEditorToolBase, nullptr, "DrawCanvasLine", nullptr, nullptr, sizeof(LevelEditorToolBase_eventDrawCanvasLine_Parms), Z_Construct_UFunction_ULevelEditorToolBase_DrawCanvasLine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditorToolBase_DrawCanvasLine_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelEditorToolBase_DrawCanvasLine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditorToolBase_DrawCanvasLine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelEditorToolBase_DrawCanvasLine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelEditorToolBase_DrawCanvasLine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelEditorToolBase_DrawFlatArrow_Statics
	{
		struct LevelEditorToolBase_eventDrawFlatArrow_Parms
		{
			FDummyStruct DrawPrimitivesContext;
			FVector Location;
			FVector XAxis;
			FVector YAxis;
			FLinearColor Color;
			float Length;
			int32 Width;
			UMaterialInterface* Material;
			EDepthPriorityGroup DepthPriority;
			float Thickness;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DrawPrimitivesContext;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_XAxis;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_YAxis;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Length;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Width;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DepthPriority_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DepthPriority;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Thickness;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawFlatArrow_Statics::NewProp_DrawPrimitivesContext = { "DrawPrimitivesContext", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditorToolBase_eventDrawFlatArrow_Parms, DrawPrimitivesContext), Z_Construct_UScriptStruct_FDummyStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawFlatArrow_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditorToolBase_eventDrawFlatArrow_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawFlatArrow_Statics::NewProp_XAxis = { "XAxis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditorToolBase_eventDrawFlatArrow_Parms, XAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawFlatArrow_Statics::NewProp_YAxis = { "YAxis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditorToolBase_eventDrawFlatArrow_Parms, YAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawFlatArrow_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditorToolBase_eventDrawFlatArrow_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawFlatArrow_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditorToolBase_eventDrawFlatArrow_Parms, Length), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawFlatArrow_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditorToolBase_eventDrawFlatArrow_Parms, Width), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawFlatArrow_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditorToolBase_eventDrawFlatArrow_Parms, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawFlatArrow_Statics::NewProp_DepthPriority_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawFlatArrow_Statics::NewProp_DepthPriority = { "DepthPriority", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditorToolBase_eventDrawFlatArrow_Parms, DepthPriority), Z_Construct_UEnum_EditorScriptingTools_EDepthPriorityGroup, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawFlatArrow_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditorToolBase_eventDrawFlatArrow_Parms, Thickness), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelEditorToolBase_DrawFlatArrow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawFlatArrow_Statics::NewProp_DrawPrimitivesContext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawFlatArrow_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawFlatArrow_Statics::NewProp_XAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawFlatArrow_Statics::NewProp_YAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawFlatArrow_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawFlatArrow_Statics::NewProp_Length,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawFlatArrow_Statics::NewProp_Width,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawFlatArrow_Statics::NewProp_Material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawFlatArrow_Statics::NewProp_DepthPriority_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawFlatArrow_Statics::NewProp_DepthPriority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawFlatArrow_Statics::NewProp_Thickness,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelEditorToolBase_DrawFlatArrow_Statics::Function_MetaDataParams[] = {
		{ "Category", "LevelEditingViewport|DrawPrimitives" },
		{ "CPP_Default_Color", "(R=1.000000,G=1.000000,B=1.000000,A=1.000000)" },
		{ "CPP_Default_DepthPriority", "World" },
		{ "CPP_Default_Length", "1.000000" },
		{ "CPP_Default_Material", "None" },
		{ "CPP_Default_Thickness", "0.000000" },
		{ "CPP_Default_Width", "1" },
		{ "CPP_Default_XAxis", "1.000000,0.000000,0.000000" },
		{ "CPP_Default_YAxis", "0.000000,1.000000,0.000000" },
		{ "HideSelfPin", "true" },
		{ "ModuleRelativePath", "Private/EditorScriptingToolsCommon/LevelEditorToolBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelEditorToolBase_DrawFlatArrow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelEditorToolBase, nullptr, "DrawFlatArrow", nullptr, nullptr, sizeof(LevelEditorToolBase_eventDrawFlatArrow_Parms), Z_Construct_UFunction_ULevelEditorToolBase_DrawFlatArrow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditorToolBase_DrawFlatArrow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelEditorToolBase_DrawFlatArrow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditorToolBase_DrawFlatArrow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelEditorToolBase_DrawFlatArrow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelEditorToolBase_DrawFlatArrow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelEditorToolBase_DrawLine_Statics
	{
		struct LevelEditorToolBase_eventDrawLine_Parms
		{
			FDummyStruct DrawPrimitivesContext;
			FVector Start;
			FVector End;
			FLinearColor Color;
			EDepthPriorityGroup DepthPriorityGroup;
			float Thickness;
			float DepthBias;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DrawPrimitivesContext;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Start;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_End;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DepthPriorityGroup_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DepthPriorityGroup;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Thickness;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DepthBias;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawLine_Statics::NewProp_DrawPrimitivesContext = { "DrawPrimitivesContext", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditorToolBase_eventDrawLine_Parms, DrawPrimitivesContext), Z_Construct_UScriptStruct_FDummyStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawLine_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditorToolBase_eventDrawLine_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawLine_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditorToolBase_eventDrawLine_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawLine_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditorToolBase_eventDrawLine_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawLine_Statics::NewProp_DepthPriorityGroup_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawLine_Statics::NewProp_DepthPriorityGroup = { "DepthPriorityGroup", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditorToolBase_eventDrawLine_Parms, DepthPriorityGroup), Z_Construct_UEnum_EditorScriptingTools_EDepthPriorityGroup, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawLine_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditorToolBase_eventDrawLine_Parms, Thickness), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawLine_Statics::NewProp_DepthBias = { "DepthBias", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditorToolBase_eventDrawLine_Parms, DepthBias), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelEditorToolBase_DrawLine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawLine_Statics::NewProp_DrawPrimitivesContext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawLine_Statics::NewProp_Start,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawLine_Statics::NewProp_End,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawLine_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawLine_Statics::NewProp_DepthPriorityGroup_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawLine_Statics::NewProp_DepthPriorityGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawLine_Statics::NewProp_Thickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawLine_Statics::NewProp_DepthBias,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelEditorToolBase_DrawLine_Statics::Function_MetaDataParams[] = {
		{ "Category", "LevelEditingViewport|DrawPrimitives" },
		{ "CPP_Default_Color", "(R=1.000000,G=1.000000,B=1.000000,A=1.000000)" },
		{ "CPP_Default_DepthBias", "0.000000" },
		{ "CPP_Default_DepthPriorityGroup", "World" },
		{ "CPP_Default_Thickness", "0.000000" },
		{ "HideSelfPin", "true" },
		{ "ModuleRelativePath", "Private/EditorScriptingToolsCommon/LevelEditorToolBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelEditorToolBase_DrawLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelEditorToolBase, nullptr, "DrawLine", nullptr, nullptr, sizeof(LevelEditorToolBase_eventDrawLine_Parms), Z_Construct_UFunction_ULevelEditorToolBase_DrawLine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditorToolBase_DrawLine_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelEditorToolBase_DrawLine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditorToolBase_DrawLine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelEditorToolBase_DrawLine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelEditorToolBase_DrawLine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelEditorToolBase_DrawPoint_Statics
	{
		struct LevelEditorToolBase_eventDrawPoint_Parms
		{
			FDummyStruct DrawPrimitivesContext;
			FVector Position;
			FLinearColor Color;
			float PointSize;
			EDepthPriorityGroup DepthPriorityGroup;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DrawPrimitivesContext;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PointSize;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DepthPriorityGroup_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DepthPriorityGroup;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawPoint_Statics::NewProp_DrawPrimitivesContext = { "DrawPrimitivesContext", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditorToolBase_eventDrawPoint_Parms, DrawPrimitivesContext), Z_Construct_UScriptStruct_FDummyStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawPoint_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditorToolBase_eventDrawPoint_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawPoint_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditorToolBase_eventDrawPoint_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawPoint_Statics::NewProp_PointSize = { "PointSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditorToolBase_eventDrawPoint_Parms, PointSize), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawPoint_Statics::NewProp_DepthPriorityGroup_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawPoint_Statics::NewProp_DepthPriorityGroup = { "DepthPriorityGroup", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditorToolBase_eventDrawPoint_Parms, DepthPriorityGroup), Z_Construct_UEnum_EditorScriptingTools_EDepthPriorityGroup, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelEditorToolBase_DrawPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawPoint_Statics::NewProp_DrawPrimitivesContext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawPoint_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawPoint_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawPoint_Statics::NewProp_PointSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawPoint_Statics::NewProp_DepthPriorityGroup_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawPoint_Statics::NewProp_DepthPriorityGroup,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelEditorToolBase_DrawPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "LevelEditingViewport|DrawPrimitives" },
		{ "Comment", "//~ Level Viewport Primitives Drawing *****************************************************************************************************************************************/\n" },
		{ "CPP_Default_Color", "(R=1.000000,G=1.000000,B=1.000000,A=1.000000)" },
		{ "CPP_Default_DepthPriorityGroup", "World" },
		{ "CPP_Default_PointSize", "0.000000" },
		{ "HideSelfPin", "true" },
		{ "ModuleRelativePath", "Private/EditorScriptingToolsCommon/LevelEditorToolBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelEditorToolBase_DrawPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelEditorToolBase, nullptr, "DrawPoint", nullptr, nullptr, sizeof(LevelEditorToolBase_eventDrawPoint_Parms), Z_Construct_UFunction_ULevelEditorToolBase_DrawPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditorToolBase_DrawPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelEditorToolBase_DrawPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditorToolBase_DrawPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelEditorToolBase_DrawPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelEditorToolBase_DrawPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelEditorToolBase_DrawSimpleText_Statics
	{
		struct LevelEditorToolBase_eventDrawSimpleText_Parms
		{
			FDummyStruct DrawHUDContext;
			FString Text;
			FLinearColor TextColor;
			float ViewportX;
			float ViewportY;
			UFont* Font;
			float TextScale;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DrawHUDContext;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Text;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextColor;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ViewportX;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ViewportY;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Font;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TextScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawSimpleText_Statics::NewProp_DrawHUDContext = { "DrawHUDContext", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditorToolBase_eventDrawSimpleText_Parms, DrawHUDContext), Z_Construct_UScriptStruct_FDummyStruct, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelEditorToolBase_DrawSimpleText_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawSimpleText_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditorToolBase_eventDrawSimpleText_Parms, Text), METADATA_PARAMS(Z_Construct_UFunction_ULevelEditorToolBase_DrawSimpleText_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditorToolBase_DrawSimpleText_Statics::NewProp_Text_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawSimpleText_Statics::NewProp_TextColor = { "TextColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditorToolBase_eventDrawSimpleText_Parms, TextColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawSimpleText_Statics::NewProp_ViewportX = { "ViewportX", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditorToolBase_eventDrawSimpleText_Parms, ViewportX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawSimpleText_Statics::NewProp_ViewportY = { "ViewportY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditorToolBase_eventDrawSimpleText_Parms, ViewportY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawSimpleText_Statics::NewProp_Font = { "Font", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditorToolBase_eventDrawSimpleText_Parms, Font), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawSimpleText_Statics::NewProp_TextScale = { "TextScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditorToolBase_eventDrawSimpleText_Parms, TextScale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelEditorToolBase_DrawSimpleText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawSimpleText_Statics::NewProp_DrawHUDContext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawSimpleText_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawSimpleText_Statics::NewProp_TextColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawSimpleText_Statics::NewProp_ViewportX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawSimpleText_Statics::NewProp_ViewportY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawSimpleText_Statics::NewProp_Font,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawSimpleText_Statics::NewProp_TextScale,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelEditorToolBase_DrawSimpleText_Statics::Function_MetaDataParams[] = {
		{ "Category", "LevelEditingViewport|HUD" },
		{ "Comment", "/**\n\x09 * Draws a string on the HUD.\n\x09 * @param Text\x09\x09\x09\x09String to draw\n\x09 * @param TextColor\x09\x09\x09""Color to draw string\n\x09 * @param ViewportX\x09\x09\x09Screen-space X coordinate of upper left corner of the string.\n\x09 * @param ViewportY\x09\x09\x09Screen-space Y coordinate of upper left corner of the string.\n\x09 * @param Font\x09\x09\x09\x09""Font to draw text.  If NULL, default font is chosen.\n\x09 * @param TextScale\x09\x09\x09\x09Scale multiplier to control size of the text.\n\x09 */" },
		{ "CPP_Default_Font", "None" },
		{ "CPP_Default_TextScale", "1.000000" },
		{ "HideSelfPin", "true" },
		{ "ModuleRelativePath", "Private/EditorScriptingToolsCommon/LevelEditorToolBase.h" },
		{ "TextColor", "(R=0,G=0,B=0,A=1)" },
		{ "ToolTip", "Draws a string on the HUD.\n@param Text                          String to draw\n@param TextColor                     Color to draw string\n@param ViewportX                     Screen-space X coordinate of upper left corner of the string.\n@param ViewportY                     Screen-space Y coordinate of upper left corner of the string.\n@param Font                          Font to draw text.  If NULL, default font is chosen.\n@param TextScale                             Scale multiplier to control size of the text." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelEditorToolBase_DrawSimpleText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelEditorToolBase, nullptr, "DrawSimpleText", nullptr, nullptr, sizeof(LevelEditorToolBase_eventDrawSimpleText_Parms), Z_Construct_UFunction_ULevelEditorToolBase_DrawSimpleText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditorToolBase_DrawSimpleText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelEditorToolBase_DrawSimpleText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditorToolBase_DrawSimpleText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelEditorToolBase_DrawSimpleText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelEditorToolBase_DrawSimpleText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelEditorToolBase_DrawSphere_Statics
	{
		struct LevelEditorToolBase_eventDrawSphere_Parms
		{
			FDummyStruct DrawPrimitivesContext;
			FVector Center;
			float Radius;
			int32 NumSides;
			int32 NumRings;
			UMaterialInterface* Material;
			EDepthPriorityGroup DepthPriorityGroup;
			bool bDisableBackfaceCulling;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DrawPrimitivesContext;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Center;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumSides;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumRings;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DepthPriorityGroup_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DepthPriorityGroup;
		static void NewProp_bDisableBackfaceCulling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableBackfaceCulling;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawSphere_Statics::NewProp_DrawPrimitivesContext = { "DrawPrimitivesContext", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditorToolBase_eventDrawSphere_Parms, DrawPrimitivesContext), Z_Construct_UScriptStruct_FDummyStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawSphere_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditorToolBase_eventDrawSphere_Parms, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawSphere_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditorToolBase_eventDrawSphere_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawSphere_Statics::NewProp_NumSides = { "NumSides", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditorToolBase_eventDrawSphere_Parms, NumSides), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawSphere_Statics::NewProp_NumRings = { "NumRings", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditorToolBase_eventDrawSphere_Parms, NumRings), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawSphere_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditorToolBase_eventDrawSphere_Parms, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawSphere_Statics::NewProp_DepthPriorityGroup_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawSphere_Statics::NewProp_DepthPriorityGroup = { "DepthPriorityGroup", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditorToolBase_eventDrawSphere_Parms, DepthPriorityGroup), Z_Construct_UEnum_EditorScriptingTools_EDepthPriorityGroup, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULevelEditorToolBase_DrawSphere_Statics::NewProp_bDisableBackfaceCulling_SetBit(void* Obj)
	{
		((LevelEditorToolBase_eventDrawSphere_Parms*)Obj)->bDisableBackfaceCulling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawSphere_Statics::NewProp_bDisableBackfaceCulling = { "bDisableBackfaceCulling", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LevelEditorToolBase_eventDrawSphere_Parms), &Z_Construct_UFunction_ULevelEditorToolBase_DrawSphere_Statics::NewProp_bDisableBackfaceCulling_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelEditorToolBase_DrawSphere_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawSphere_Statics::NewProp_DrawPrimitivesContext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawSphere_Statics::NewProp_Center,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawSphere_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawSphere_Statics::NewProp_NumSides,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawSphere_Statics::NewProp_NumRings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawSphere_Statics::NewProp_Material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawSphere_Statics::NewProp_DepthPriorityGroup_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawSphere_Statics::NewProp_DepthPriorityGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawSphere_Statics::NewProp_bDisableBackfaceCulling,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelEditorToolBase_DrawSphere_Statics::Function_MetaDataParams[] = {
		{ "Category", "LevelEditingViewport|DrawPrimitives" },
		{ "CPP_Default_bDisableBackfaceCulling", "false" },
		{ "CPP_Default_DepthPriorityGroup", "World" },
		{ "CPP_Default_Material", "None" },
		{ "CPP_Default_NumRings", "16" },
		{ "CPP_Default_NumSides", "16" },
		{ "CPP_Default_Radius", "50.000000" },
		{ "HideSelfPin", "true" },
		{ "ModuleRelativePath", "Private/EditorScriptingToolsCommon/LevelEditorToolBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelEditorToolBase_DrawSphere_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelEditorToolBase, nullptr, "DrawSphere", nullptr, nullptr, sizeof(LevelEditorToolBase_eventDrawSphere_Parms), Z_Construct_UFunction_ULevelEditorToolBase_DrawSphere_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditorToolBase_DrawSphere_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelEditorToolBase_DrawSphere_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditorToolBase_DrawSphere_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelEditorToolBase_DrawSphere()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelEditorToolBase_DrawSphere_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelEditorToolBase_DrawSpline_Statics
	{
		struct LevelEditorToolBase_eventDrawSpline_Parms
		{
			FDummyStruct DrawPrimitivesContext;
			USplineComponent* SplineComponent;
			FLinearColor LineColor;
			EDepthPriorityGroup DepthPriorityGroup;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DrawPrimitivesContext;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SplineComponent;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LineColor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DepthPriorityGroup_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DepthPriorityGroup;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawSpline_Statics::NewProp_DrawPrimitivesContext = { "DrawPrimitivesContext", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditorToolBase_eventDrawSpline_Parms, DrawPrimitivesContext), Z_Construct_UScriptStruct_FDummyStruct, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelEditorToolBase_DrawSpline_Statics::NewProp_SplineComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawSpline_Statics::NewProp_SplineComponent = { "SplineComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditorToolBase_eventDrawSpline_Parms, SplineComponent), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULevelEditorToolBase_DrawSpline_Statics::NewProp_SplineComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditorToolBase_DrawSpline_Statics::NewProp_SplineComponent_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawSpline_Statics::NewProp_LineColor = { "LineColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditorToolBase_eventDrawSpline_Parms, LineColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawSpline_Statics::NewProp_DepthPriorityGroup_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawSpline_Statics::NewProp_DepthPriorityGroup = { "DepthPriorityGroup", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditorToolBase_eventDrawSpline_Parms, DepthPriorityGroup), Z_Construct_UEnum_EditorScriptingTools_EDepthPriorityGroup, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelEditorToolBase_DrawSpline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawSpline_Statics::NewProp_DrawPrimitivesContext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawSpline_Statics::NewProp_SplineComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawSpline_Statics::NewProp_LineColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawSpline_Statics::NewProp_DepthPriorityGroup_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawSpline_Statics::NewProp_DepthPriorityGroup,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelEditorToolBase_DrawSpline_Statics::Function_MetaDataParams[] = {
		{ "Category", "LevelEditingViewport|DrawPrimitives" },
		{ "CPP_Default_DepthPriorityGroup", "World" },
		{ "CPP_Default_LineColor", "(R=1.000000,G=1.000000,B=1.000000,A=1.000000)" },
		{ "HideSelfPin", "true" },
		{ "ModuleRelativePath", "Private/EditorScriptingToolsCommon/LevelEditorToolBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelEditorToolBase_DrawSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelEditorToolBase, nullptr, "DrawSpline", nullptr, nullptr, sizeof(LevelEditorToolBase_eventDrawSpline_Parms), Z_Construct_UFunction_ULevelEditorToolBase_DrawSpline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditorToolBase_DrawSpline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelEditorToolBase_DrawSpline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditorToolBase_DrawSpline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelEditorToolBase_DrawSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelEditorToolBase_DrawSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelEditorToolBase_DrawTriangle_Statics
	{
		struct LevelEditorToolBase_eventDrawTriangle_Parms
		{
			FDummyStruct DrawPrimitivesContext;
			FVector PointA;
			FVector PointB;
			FVector PointC;
			FLinearColor Color;
			bool bDrawLines;
			UMaterialInterface* Material;
			EDepthPriorityGroup DepthPriorityGroup;
			bool bDisableBackfaceCulling;
			bool bReceivesDecals;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DrawPrimitivesContext;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PointA;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PointB;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PointC;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
		static void NewProp_bDrawLines_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawLines;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DepthPriorityGroup_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DepthPriorityGroup;
		static void NewProp_bDisableBackfaceCulling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableBackfaceCulling;
		static void NewProp_bReceivesDecals_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReceivesDecals;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawTriangle_Statics::NewProp_DrawPrimitivesContext = { "DrawPrimitivesContext", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditorToolBase_eventDrawTriangle_Parms, DrawPrimitivesContext), Z_Construct_UScriptStruct_FDummyStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawTriangle_Statics::NewProp_PointA = { "PointA", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditorToolBase_eventDrawTriangle_Parms, PointA), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawTriangle_Statics::NewProp_PointB = { "PointB", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditorToolBase_eventDrawTriangle_Parms, PointB), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawTriangle_Statics::NewProp_PointC = { "PointC", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditorToolBase_eventDrawTriangle_Parms, PointC), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawTriangle_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditorToolBase_eventDrawTriangle_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULevelEditorToolBase_DrawTriangle_Statics::NewProp_bDrawLines_SetBit(void* Obj)
	{
		((LevelEditorToolBase_eventDrawTriangle_Parms*)Obj)->bDrawLines = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawTriangle_Statics::NewProp_bDrawLines = { "bDrawLines", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LevelEditorToolBase_eventDrawTriangle_Parms), &Z_Construct_UFunction_ULevelEditorToolBase_DrawTriangle_Statics::NewProp_bDrawLines_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawTriangle_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditorToolBase_eventDrawTriangle_Parms, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawTriangle_Statics::NewProp_DepthPriorityGroup_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawTriangle_Statics::NewProp_DepthPriorityGroup = { "DepthPriorityGroup", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditorToolBase_eventDrawTriangle_Parms, DepthPriorityGroup), Z_Construct_UEnum_EditorScriptingTools_EDepthPriorityGroup, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULevelEditorToolBase_DrawTriangle_Statics::NewProp_bDisableBackfaceCulling_SetBit(void* Obj)
	{
		((LevelEditorToolBase_eventDrawTriangle_Parms*)Obj)->bDisableBackfaceCulling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawTriangle_Statics::NewProp_bDisableBackfaceCulling = { "bDisableBackfaceCulling", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LevelEditorToolBase_eventDrawTriangle_Parms), &Z_Construct_UFunction_ULevelEditorToolBase_DrawTriangle_Statics::NewProp_bDisableBackfaceCulling_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULevelEditorToolBase_DrawTriangle_Statics::NewProp_bReceivesDecals_SetBit(void* Obj)
	{
		((LevelEditorToolBase_eventDrawTriangle_Parms*)Obj)->bReceivesDecals = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawTriangle_Statics::NewProp_bReceivesDecals = { "bReceivesDecals", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LevelEditorToolBase_eventDrawTriangle_Parms), &Z_Construct_UFunction_ULevelEditorToolBase_DrawTriangle_Statics::NewProp_bReceivesDecals_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelEditorToolBase_DrawTriangle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawTriangle_Statics::NewProp_DrawPrimitivesContext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawTriangle_Statics::NewProp_PointA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawTriangle_Statics::NewProp_PointB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawTriangle_Statics::NewProp_PointC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawTriangle_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawTriangle_Statics::NewProp_bDrawLines,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawTriangle_Statics::NewProp_Material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawTriangle_Statics::NewProp_DepthPriorityGroup_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawTriangle_Statics::NewProp_DepthPriorityGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawTriangle_Statics::NewProp_bDisableBackfaceCulling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawTriangle_Statics::NewProp_bReceivesDecals,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelEditorToolBase_DrawTriangle_Statics::Function_MetaDataParams[] = {
		{ "Category", "LevelEditingViewport|DrawPrimitives" },
		{ "CPP_Default_bDisableBackfaceCulling", "false" },
		{ "CPP_Default_bDrawLines", "false" },
		{ "CPP_Default_bReceivesDecals", "false" },
		{ "CPP_Default_Color", "(R=1.000000,G=1.000000,B=1.000000,A=1.000000)" },
		{ "CPP_Default_DepthPriorityGroup", "World" },
		{ "CPP_Default_Material", "None" },
		{ "HideSelfPin", "true" },
		{ "ModuleRelativePath", "Private/EditorScriptingToolsCommon/LevelEditorToolBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelEditorToolBase_DrawTriangle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelEditorToolBase, nullptr, "DrawTriangle", nullptr, nullptr, sizeof(LevelEditorToolBase_eventDrawTriangle_Parms), Z_Construct_UFunction_ULevelEditorToolBase_DrawTriangle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditorToolBase_DrawTriangle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelEditorToolBase_DrawTriangle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditorToolBase_DrawTriangle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelEditorToolBase_DrawTriangle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelEditorToolBase_DrawTriangle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelEditorToolBase_DrawWireBox_Statics
	{
		struct LevelEditorToolBase_eventDrawWireBox_Parms
		{
			FDummyStruct DrawPrimitivesContext;
			FTransform Transform;
			FVector Extent;
			FLinearColor Color;
			EDepthPriorityGroup DepthPriority;
			float Thickness;
			float DepthBias;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DrawPrimitivesContext;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Extent;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DepthPriority_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DepthPriority;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Thickness;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DepthBias;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawWireBox_Statics::NewProp_DrawPrimitivesContext = { "DrawPrimitivesContext", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditorToolBase_eventDrawWireBox_Parms, DrawPrimitivesContext), Z_Construct_UScriptStruct_FDummyStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawWireBox_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditorToolBase_eventDrawWireBox_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawWireBox_Statics::NewProp_Extent = { "Extent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditorToolBase_eventDrawWireBox_Parms, Extent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawWireBox_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditorToolBase_eventDrawWireBox_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawWireBox_Statics::NewProp_DepthPriority_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawWireBox_Statics::NewProp_DepthPriority = { "DepthPriority", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditorToolBase_eventDrawWireBox_Parms, DepthPriority), Z_Construct_UEnum_EditorScriptingTools_EDepthPriorityGroup, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawWireBox_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditorToolBase_eventDrawWireBox_Parms, Thickness), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawWireBox_Statics::NewProp_DepthBias = { "DepthBias", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditorToolBase_eventDrawWireBox_Parms, DepthBias), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelEditorToolBase_DrawWireBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawWireBox_Statics::NewProp_DrawPrimitivesContext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawWireBox_Statics::NewProp_Transform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawWireBox_Statics::NewProp_Extent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawWireBox_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawWireBox_Statics::NewProp_DepthPriority_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawWireBox_Statics::NewProp_DepthPriority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawWireBox_Statics::NewProp_Thickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawWireBox_Statics::NewProp_DepthBias,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelEditorToolBase_DrawWireBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "LevelEditingViewport|DrawPrimitives" },
		{ "CPP_Default_Color", "(R=1.000000,G=1.000000,B=1.000000,A=1.000000)" },
		{ "CPP_Default_DepthBias", "0.000000" },
		{ "CPP_Default_DepthPriority", "World" },
		{ "CPP_Default_Extent", "50.000000,50.000000,50.000000" },
		{ "CPP_Default_Thickness", "0.000000" },
		{ "HideSelfPin", "true" },
		{ "ModuleRelativePath", "Private/EditorScriptingToolsCommon/LevelEditorToolBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelEditorToolBase_DrawWireBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelEditorToolBase, nullptr, "DrawWireBox", nullptr, nullptr, sizeof(LevelEditorToolBase_eventDrawWireBox_Parms), Z_Construct_UFunction_ULevelEditorToolBase_DrawWireBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditorToolBase_DrawWireBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelEditorToolBase_DrawWireBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditorToolBase_DrawWireBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelEditorToolBase_DrawWireBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelEditorToolBase_DrawWireBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelEditorToolBase_DrawWireSphere_Statics
	{
		struct LevelEditorToolBase_eventDrawWireSphere_Parms
		{
			FDummyStruct DrawPrimitivesContext;
			FVector Center;
			FLinearColor Color;
			float Radius;
			int32 NumSides;
			EDepthPriorityGroup DepthPriority;
			float Thickness;
			float DepthBias;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DrawPrimitivesContext;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Center;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumSides;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DepthPriority_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DepthPriority;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Thickness;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DepthBias;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawWireSphere_Statics::NewProp_DrawPrimitivesContext = { "DrawPrimitivesContext", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditorToolBase_eventDrawWireSphere_Parms, DrawPrimitivesContext), Z_Construct_UScriptStruct_FDummyStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawWireSphere_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditorToolBase_eventDrawWireSphere_Parms, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawWireSphere_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditorToolBase_eventDrawWireSphere_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawWireSphere_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditorToolBase_eventDrawWireSphere_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawWireSphere_Statics::NewProp_NumSides = { "NumSides", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditorToolBase_eventDrawWireSphere_Parms, NumSides), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawWireSphere_Statics::NewProp_DepthPriority_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawWireSphere_Statics::NewProp_DepthPriority = { "DepthPriority", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditorToolBase_eventDrawWireSphere_Parms, DepthPriority), Z_Construct_UEnum_EditorScriptingTools_EDepthPriorityGroup, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawWireSphere_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditorToolBase_eventDrawWireSphere_Parms, Thickness), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULevelEditorToolBase_DrawWireSphere_Statics::NewProp_DepthBias = { "DepthBias", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditorToolBase_eventDrawWireSphere_Parms, DepthBias), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelEditorToolBase_DrawWireSphere_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawWireSphere_Statics::NewProp_DrawPrimitivesContext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawWireSphere_Statics::NewProp_Center,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawWireSphere_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawWireSphere_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawWireSphere_Statics::NewProp_NumSides,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawWireSphere_Statics::NewProp_DepthPriority_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawWireSphere_Statics::NewProp_DepthPriority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawWireSphere_Statics::NewProp_Thickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_DrawWireSphere_Statics::NewProp_DepthBias,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelEditorToolBase_DrawWireSphere_Statics::Function_MetaDataParams[] = {
		{ "Category", "LevelEditingViewport|DrawPrimitives" },
		{ "CPP_Default_Color", "(R=1.000000,G=1.000000,B=1.000000,A=1.000000)" },
		{ "CPP_Default_DepthBias", "0.000000" },
		{ "CPP_Default_DepthPriority", "World" },
		{ "CPP_Default_NumSides", "16" },
		{ "CPP_Default_Radius", "50.000000" },
		{ "CPP_Default_Thickness", "0.000000" },
		{ "HideSelfPin", "true" },
		{ "ModuleRelativePath", "Private/EditorScriptingToolsCommon/LevelEditorToolBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelEditorToolBase_DrawWireSphere_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelEditorToolBase, nullptr, "DrawWireSphere", nullptr, nullptr, sizeof(LevelEditorToolBase_eventDrawWireSphere_Parms), Z_Construct_UFunction_ULevelEditorToolBase_DrawWireSphere_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditorToolBase_DrawWireSphere_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelEditorToolBase_DrawWireSphere_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditorToolBase_DrawWireSphere_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelEditorToolBase_DrawWireSphere()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelEditorToolBase_DrawWireSphere_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelEditorToolBase_GetCanvasDPIScale_Statics
	{
		struct LevelEditorToolBase_eventGetCanvasDPIScale_Parms
		{
			FDummyStruct DrawHUDContext;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DrawHUDContext;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelEditorToolBase_GetCanvasDPIScale_Statics::NewProp_DrawHUDContext = { "DrawHUDContext", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditorToolBase_eventGetCanvasDPIScale_Parms, DrawHUDContext), Z_Construct_UScriptStruct_FDummyStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULevelEditorToolBase_GetCanvasDPIScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelEditorToolBase_eventGetCanvasDPIScale_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelEditorToolBase_GetCanvasDPIScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_GetCanvasDPIScale_Statics::NewProp_DrawHUDContext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorToolBase_GetCanvasDPIScale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelEditorToolBase_GetCanvasDPIScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "LevelEditingViewport|HUD" },
		{ "Comment", "/** Returns the DPI scale factor of the native window */" },
		{ "HideSelfPin", "true" },
		{ "ModuleRelativePath", "Private/EditorScriptingToolsCommon/LevelEditorToolBase.h" },
		{ "ToolTip", "Returns the DPI scale factor of the native window" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelEditorToolBase_GetCanvasDPIScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelEditorToolBase, nullptr, "GetCanvasDPIScale", nullptr, nullptr, sizeof(LevelEditorToolBase_eventGetCanvasDPIScale_Parms), Z_Construct_UFunction_ULevelEditorToolBase_GetCanvasDPIScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditorToolBase_GetCanvasDPIScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelEditorToolBase_GetCanvasDPIScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditorToolBase_GetCanvasDPIScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelEditorToolBase_GetCanvasDPIScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelEditorToolBase_GetCanvasDPIScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULevelEditorToolBase_NoRegister()
	{
		return ULevelEditorToolBase::StaticClass();
	}
	struct Z_Construct_UClass_ULevelEditorToolBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelEditorToolBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorScriptingTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULevelEditorToolBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULevelEditorToolBase_DrawActorScreenSpaceBoundingBox, "DrawActorScreenSpaceBoundingBox" }, // 4188994126
		{ &Z_Construct_UFunction_ULevelEditorToolBase_DrawBox, "DrawBox" }, // 1212666019
		{ &Z_Construct_UFunction_ULevelEditorToolBase_DrawCanvasLine, "DrawCanvasLine" }, // 749766381
		{ &Z_Construct_UFunction_ULevelEditorToolBase_DrawFlatArrow, "DrawFlatArrow" }, // 2241076303
		{ &Z_Construct_UFunction_ULevelEditorToolBase_DrawLine, "DrawLine" }, // 2272102158
		{ &Z_Construct_UFunction_ULevelEditorToolBase_DrawPoint, "DrawPoint" }, // 4262488652
		{ &Z_Construct_UFunction_ULevelEditorToolBase_DrawSimpleText, "DrawSimpleText" }, // 3222271977
		{ &Z_Construct_UFunction_ULevelEditorToolBase_DrawSphere, "DrawSphere" }, // 3807556103
		{ &Z_Construct_UFunction_ULevelEditorToolBase_DrawSpline, "DrawSpline" }, // 763572035
		{ &Z_Construct_UFunction_ULevelEditorToolBase_DrawTriangle, "DrawTriangle" }, // 1156469919
		{ &Z_Construct_UFunction_ULevelEditorToolBase_DrawWireBox, "DrawWireBox" }, // 878273380
		{ &Z_Construct_UFunction_ULevelEditorToolBase_DrawWireSphere, "DrawWireSphere" }, // 2779414669
		{ &Z_Construct_UFunction_ULevelEditorToolBase_GetCanvasDPIScale, "GetCanvasDPIScale" }, // 3168822917
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorToolBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EditorScriptingToolsCommon/LevelEditorToolBase.h" },
		{ "ModuleRelativePath", "Private/EditorScriptingToolsCommon/LevelEditorToolBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelEditorToolBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelEditorToolBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULevelEditorToolBase_Statics::ClassParams = {
		&ULevelEditorToolBase::StaticClass,
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
		0x000000A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULevelEditorToolBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorToolBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelEditorToolBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULevelEditorToolBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULevelEditorToolBase, 3931995965);
	template<> EDITORSCRIPTINGTOOLS_API UClass* StaticClass<ULevelEditorToolBase>()
	{
		return ULevelEditorToolBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULevelEditorToolBase(Z_Construct_UClass_ULevelEditorToolBase, &ULevelEditorToolBase::StaticClass, TEXT("/Script/EditorScriptingTools"), TEXT("ULevelEditorToolBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelEditorToolBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
