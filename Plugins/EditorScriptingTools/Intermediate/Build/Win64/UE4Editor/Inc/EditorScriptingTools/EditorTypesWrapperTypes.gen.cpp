// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorScriptingTools/Private/EditorScriptingToolsCommon/EditorTypesWrapperTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorTypesWrapperTypes() {}
// Cross Module References
	EDITORSCRIPTINGTOOLS_API UEnum* Z_Construct_UEnum_EditorScriptingTools_EEditorAppReturnType();
	UPackage* Z_Construct_UPackage__Script_EditorScriptingTools();
	EDITORSCRIPTINGTOOLS_API UEnum* Z_Construct_UEnum_EditorScriptingTools_EEditModeAction();
	EDITORSCRIPTINGTOOLS_API UEnum* Z_Construct_UEnum_EditorScriptingTools_EInputKeyEventType();
	EDITORSCRIPTINGTOOLS_API UEnum* Z_Construct_UEnum_EditorScriptingTools_EHitProxyPriorityType();
	EDITORSCRIPTINGTOOLS_API UEnum* Z_Construct_UEnum_EditorScriptingTools_EDepthPriorityGroup();
	EDITORSCRIPTINGTOOLS_API UEnum* Z_Construct_UEnum_EditorScriptingTools_ELevelEditingViewportType();
	EDITORSCRIPTINGTOOLS_API UEnum* Z_Construct_UEnum_EditorScriptingTools_ETransformGizmoAxisList();
	EDITORSCRIPTINGTOOLS_API UEnum* Z_Construct_UEnum_EditorScriptingTools_ETransformGizmoMode();
	EDITORSCRIPTINGTOOLS_API UEnum* Z_Construct_UEnum_EditorScriptingTools_ELevelMapChangeType();
	EDITORSCRIPTINGTOOLS_API UEnum* Z_Construct_UEnum_EditorScriptingTools_EDetailsViewPropertyChangeType();
	EDITORSCRIPTINGTOOLS_API UEnum* Z_Construct_UEnum_EditorScriptingTools_EDetailsViewNameAreaSettings();
	EDITORSCRIPTINGTOOLS_API UEnum* Z_Construct_UEnum_EditorScriptingTools_EDetailPropertyLocation();
	EDITORSCRIPTINGTOOLS_API UEnum* Z_Construct_UEnum_EditorScriptingTools_EDetailCategoryPriority();
	EDITORSCRIPTINGTOOLS_API UEnum* Z_Construct_UEnum_EditorScriptingTools_EBuiltinEditorModes();
	EDITORSCRIPTINGTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FSelectionFrustumVolume();
	EDITORSCRIPTINGTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FActorHitProxyInfo();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	EDITORSCRIPTINGTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FIndexedComponentVisProxyInfo();
	EDITORSCRIPTINGTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FComponentVisualizerHitProxyInfo();
	EDITORSCRIPTINGTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FComponentPropertyPathHandle();
	EDITORSCRIPTINGTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FActorComponentWrapper();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	EDITORSCRIPTINGTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FLevelEditingViewportClick();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EInputEvent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_ELevelViewportType();
	EDITORSCRIPTINGTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FLevelEditingViewportCursorLocation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	EDITORSCRIPTINGTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FLevelEditingViewportCameraTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	static UEnum* EEditorAppReturnType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_EditorScriptingTools_EEditorAppReturnType, Z_Construct_UPackage__Script_EditorScriptingTools(), TEXT("EEditorAppReturnType"));
		}
		return Singleton;
	}
	template<> EDITORSCRIPTINGTOOLS_API UEnum* StaticEnum<EEditorAppReturnType>()
	{
		return EEditorAppReturnType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEditorAppReturnType(EEditorAppReturnType_StaticEnum, TEXT("/Script/EditorScriptingTools"), TEXT("EEditorAppReturnType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_EditorScriptingTools_EEditorAppReturnType_Hash() { return 3154140108U; }
	UEnum* Z_Construct_UEnum_EditorScriptingTools_EEditorAppReturnType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_EditorScriptingTools();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEditorAppReturnType"), 0, Get_Z_Construct_UEnum_EditorScriptingTools_EEditorAppReturnType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEditorAppReturnType::No", (int64)EEditorAppReturnType::No },
				{ "EEditorAppReturnType::Yes", (int64)EEditorAppReturnType::Yes },
				{ "EEditorAppReturnType::YesAll", (int64)EEditorAppReturnType::YesAll },
				{ "EEditorAppReturnType::NoAll", (int64)EEditorAppReturnType::NoAll },
				{ "EEditorAppReturnType::Cancel", (int64)EEditorAppReturnType::Cancel },
				{ "EEditorAppReturnType::Ok", (int64)EEditorAppReturnType::Ok },
				{ "EEditorAppReturnType::Retry", (int64)EEditorAppReturnType::Retry },
				{ "EEditorAppReturnType::Continue", (int64)EEditorAppReturnType::Continue },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Cancel.Name", "EEditorAppReturnType::Cancel" },
				{ "Comment", "/**\n* Enumerates message dialog return types.\n*/" },
				{ "Continue.Name", "EEditorAppReturnType::Continue" },
				{ "ModuleRelativePath", "Private/EditorScriptingToolsCommon/EditorTypesWrapperTypes.h" },
				{ "No.Name", "EEditorAppReturnType::No" },
				{ "NoAll.Name", "EEditorAppReturnType::NoAll" },
				{ "Ok.Name", "EEditorAppReturnType::Ok" },
				{ "Retry.Name", "EEditorAppReturnType::Retry" },
				{ "ToolTip", "Enumerates message dialog return types." },
				{ "Yes.Name", "EEditorAppReturnType::Yes" },
				{ "YesAll.Name", "EEditorAppReturnType::YesAll" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_EditorScriptingTools,
				nullptr,
				"EEditorAppReturnType",
				"EEditorAppReturnType",
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
	static UEnum* EEditModeAction_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_EditorScriptingTools_EEditModeAction, Z_Construct_UPackage__Script_EditorScriptingTools(), TEXT("EEditModeAction"));
		}
		return Singleton;
	}
	template<> EDITORSCRIPTINGTOOLS_API UEnum* StaticEnum<EEditModeAction>()
	{
		return EEditModeAction_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEditModeAction(EEditModeAction_StaticEnum, TEXT("/Script/EditorScriptingTools"), TEXT("EEditModeAction"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_EditorScriptingTools_EEditModeAction_Hash() { return 1368324891U; }
	UEnum* Z_Construct_UEnum_EditorScriptingTools_EEditModeAction()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_EditorScriptingTools();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEditModeAction"), 0, Get_Z_Construct_UEnum_EditorScriptingTools_EEditModeAction_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEditModeAction::Skip", (int64)EEditModeAction::Skip },
				{ "EEditModeAction::Process", (int64)EEditModeAction::Process },
				{ "EEditModeAction::Halt", (int64)EEditModeAction::Halt },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** Outcomes when determining whether it's possible to perform an action on the edit modes*/" },
				{ "Halt.Name", "EEditModeAction::Halt" },
				{ "Halt.ToolTip", "Stop evaluating other modes (early out)" },
				{ "ModuleRelativePath", "Private/EditorScriptingToolsCommon/EditorTypesWrapperTypes.h" },
				{ "Process.Name", "EEditModeAction::Process" },
				{ "Process.ToolTip", "Can process this action" },
				{ "Skip.Hidden", "" },
				{ "Skip.HiddenToolTip", "Can't process this action" },
				{ "Skip.Name", "EEditModeAction::Skip" },
				{ "ToolTip", "Outcomes when determining whether it's possible to perform an action on the edit modes" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_EditorScriptingTools,
				nullptr,
				"EEditModeAction",
				"EEditModeAction",
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
	static UEnum* EInputKeyEventType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_EditorScriptingTools_EInputKeyEventType, Z_Construct_UPackage__Script_EditorScriptingTools(), TEXT("EInputKeyEventType"));
		}
		return Singleton;
	}
	template<> EDITORSCRIPTINGTOOLS_API UEnum* StaticEnum<EInputKeyEventType>()
	{
		return EInputKeyEventType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EInputKeyEventType(EInputKeyEventType_StaticEnum, TEXT("/Script/EditorScriptingTools"), TEXT("EInputKeyEventType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_EditorScriptingTools_EInputKeyEventType_Hash() { return 3842983129U; }
	UEnum* Z_Construct_UEnum_EditorScriptingTools_EInputKeyEventType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_EditorScriptingTools();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EInputKeyEventType"), 0, Get_Z_Construct_UEnum_EditorScriptingTools_EInputKeyEventType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EInputKeyEventType::Pressed", (int64)EInputKeyEventType::Pressed },
				{ "EInputKeyEventType::Released", (int64)EInputKeyEventType::Released },
				{ "EInputKeyEventType::Repeat", (int64)EInputKeyEventType::Repeat },
				{ "EInputKeyEventType::DoubleClick", (int64)EInputKeyEventType::DoubleClick },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "//\n//\x09""EInputEvent\n//\n" },
				{ "DoubleClick.Name", "EInputKeyEventType::DoubleClick" },
				{ "ModuleRelativePath", "Private/EditorScriptingToolsCommon/EditorTypesWrapperTypes.h" },
				{ "Pressed.Name", "EInputKeyEventType::Pressed" },
				{ "Released.Name", "EInputKeyEventType::Released" },
				{ "Repeat.Name", "EInputKeyEventType::Repeat" },
				{ "ToolTip", "EInputEvent" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_EditorScriptingTools,
				nullptr,
				"EInputKeyEventType",
				"EInputKeyEventType",
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
	static UEnum* EHitProxyPriorityType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_EditorScriptingTools_EHitProxyPriorityType, Z_Construct_UPackage__Script_EditorScriptingTools(), TEXT("EHitProxyPriorityType"));
		}
		return Singleton;
	}
	template<> EDITORSCRIPTINGTOOLS_API UEnum* StaticEnum<EHitProxyPriorityType>()
	{
		return EHitProxyPriorityType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHitProxyPriorityType(EHitProxyPriorityType_StaticEnum, TEXT("/Script/EditorScriptingTools"), TEXT("EHitProxyPriorityType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_EditorScriptingTools_EHitProxyPriorityType_Hash() { return 776740992U; }
	UEnum* Z_Construct_UEnum_EditorScriptingTools_EHitProxyPriorityType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_EditorScriptingTools();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHitProxyPriorityType"), 0, Get_Z_Construct_UEnum_EditorScriptingTools_EHitProxyPriorityType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHitProxyPriorityType::World", (int64)EHitProxyPriorityType::World },
				{ "EHitProxyPriorityType::Wireframe", (int64)EHitProxyPriorityType::Wireframe },
				{ "EHitProxyPriorityType::Foreground", (int64)EHitProxyPriorityType::Foreground },
				{ "EHitProxyPriorityType::UI", (int64)EHitProxyPriorityType::UI },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Foreground.Name", "EHitProxyPriorityType::Foreground" },
				{ "ModuleRelativePath", "Private/EditorScriptingToolsCommon/EditorTypesWrapperTypes.h" },
				{ "UI.Name", "EHitProxyPriorityType::UI" },
				{ "Wireframe.Name", "EHitProxyPriorityType::Wireframe" },
				{ "World.Name", "EHitProxyPriorityType::World" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_EditorScriptingTools,
				nullptr,
				"EHitProxyPriorityType",
				"EHitProxyPriorityType",
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
	static UEnum* EDepthPriorityGroup_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_EditorScriptingTools_EDepthPriorityGroup, Z_Construct_UPackage__Script_EditorScriptingTools(), TEXT("EDepthPriorityGroup"));
		}
		return Singleton;
	}
	template<> EDITORSCRIPTINGTOOLS_API UEnum* StaticEnum<EDepthPriorityGroup>()
	{
		return EDepthPriorityGroup_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDepthPriorityGroup(EDepthPriorityGroup_StaticEnum, TEXT("/Script/EditorScriptingTools"), TEXT("EDepthPriorityGroup"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_EditorScriptingTools_EDepthPriorityGroup_Hash() { return 3854121243U; }
	UEnum* Z_Construct_UEnum_EditorScriptingTools_EDepthPriorityGroup()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_EditorScriptingTools();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDepthPriorityGroup"), 0, Get_Z_Construct_UEnum_EditorScriptingTools_EDepthPriorityGroup_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDepthPriorityGroup::World", (int64)EDepthPriorityGroup::World },
				{ "EDepthPriorityGroup::Foreground", (int64)EDepthPriorityGroup::Foreground },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n * A priority for sorting scene elements by depth.\n * Elements with higher priority occlude elements with lower priority, disregarding distance.\n */" },
				{ "Foreground.DisplayName", "Foreground" },
				{ "Foreground.Name", "EDepthPriorityGroup::Foreground" },
				{ "Foreground.ToolTip", "Foreground scene DPG." },
				{ "ModuleRelativePath", "Private/EditorScriptingToolsCommon/EditorTypesWrapperTypes.h" },
				{ "ToolTip", "A priority for sorting scene elements by depth.\nElements with higher priority occlude elements with lower priority, disregarding distance." },
				{ "World.DisplayName", "World" },
				{ "World.Name", "EDepthPriorityGroup::World" },
				{ "World.ToolTip", "World scene DPG." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_EditorScriptingTools,
				nullptr,
				"EDepthPriorityGroup",
				"EDepthPriorityGroup",
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
	static UEnum* ELevelEditingViewportType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_EditorScriptingTools_ELevelEditingViewportType, Z_Construct_UPackage__Script_EditorScriptingTools(), TEXT("ELevelEditingViewportType"));
		}
		return Singleton;
	}
	template<> EDITORSCRIPTINGTOOLS_API UEnum* StaticEnum<ELevelEditingViewportType>()
	{
		return ELevelEditingViewportType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELevelEditingViewportType(ELevelEditingViewportType_StaticEnum, TEXT("/Script/EditorScriptingTools"), TEXT("ELevelEditingViewportType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_EditorScriptingTools_ELevelEditingViewportType_Hash() { return 2135219713U; }
	UEnum* Z_Construct_UEnum_EditorScriptingTools_ELevelEditingViewportType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_EditorScriptingTools();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELevelEditingViewportType"), 0, Get_Z_Construct_UEnum_EditorScriptingTools_ELevelEditingViewportType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELevelEditingViewportType::Top", (int64)ELevelEditingViewportType::Top },
				{ "ELevelEditingViewportType::Front", (int64)ELevelEditingViewportType::Front },
				{ "ELevelEditingViewportType::Left", (int64)ELevelEditingViewportType::Left },
				{ "ELevelEditingViewportType::Perspective", (int64)ELevelEditingViewportType::Perspective },
				{ "ELevelEditingViewportType::Bottom", (int64)ELevelEditingViewportType::Bottom },
				{ "ELevelEditingViewportType::Back", (int64)ELevelEditingViewportType::Back },
				{ "ELevelEditingViewportType::Right", (int64)ELevelEditingViewportType::Right },
				{ "ELevelEditingViewportType::Invalid", (int64)ELevelEditingViewportType::Invalid },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Back.Comment", "/** LVT_OrthoNegativeXZ */" },
				{ "Back.Name", "ELevelEditingViewportType::Back" },
				{ "Back.ToolTip", "LVT_OrthoNegativeXZ" },
				{ "BlueprintType", "true" },
				{ "Bottom.Comment", "/** LVT_OrthoNegativeXY */" },
				{ "Bottom.Name", "ELevelEditingViewportType::Bottom" },
				{ "Bottom.ToolTip", "LVT_OrthoNegativeXY" },
				{ "Front.Comment", "/** LVT_OrthoXZ*/" },
				{ "Front.Name", "ELevelEditingViewportType::Front" },
				{ "Front.ToolTip", "LVT_OrthoXZ" },
				{ "Invalid.Comment", "//\n" },
				{ "Invalid.Name", "ELevelEditingViewportType::Invalid" },
				{ "Left.Comment", "/** LVT_OrthoYZ */" },
				{ "Left.Name", "ELevelEditingViewportType::Left" },
				{ "Left.ToolTip", "LVT_OrthoYZ" },
				{ "ModuleRelativePath", "Private/EditorScriptingToolsCommon/EditorTypesWrapperTypes.h" },
				{ "Perspective.Comment", "/** LVT_Perspective */" },
				{ "Perspective.Name", "ELevelEditingViewportType::Perspective" },
				{ "Perspective.ToolTip", "LVT_Perspective" },
				{ "Right.Comment", "/** LVT_OrthoNegativeYZ */" },
				{ "Right.Name", "ELevelEditingViewportType::Right" },
				{ "Right.ToolTip", "LVT_OrthoNegativeYZ" },
				{ "Top.Comment", "/** LVT_OrthoXY */" },
				{ "Top.Name", "ELevelEditingViewportType::Top" },
				{ "Top.ToolTip", "LVT_OrthoXY" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_EditorScriptingTools,
				nullptr,
				"ELevelEditingViewportType",
				"ELevelEditingViewportType",
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
	static UEnum* ETransformGizmoAxisList_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_EditorScriptingTools_ETransformGizmoAxisList, Z_Construct_UPackage__Script_EditorScriptingTools(), TEXT("ETransformGizmoAxisList"));
		}
		return Singleton;
	}
	template<> EDITORSCRIPTINGTOOLS_API UEnum* StaticEnum<ETransformGizmoAxisList::Type>()
	{
		return ETransformGizmoAxisList_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETransformGizmoAxisList(ETransformGizmoAxisList_StaticEnum, TEXT("/Script/EditorScriptingTools"), TEXT("ETransformGizmoAxisList"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_EditorScriptingTools_ETransformGizmoAxisList_Hash() { return 756464224U; }
	UEnum* Z_Construct_UEnum_EditorScriptingTools_ETransformGizmoAxisList()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_EditorScriptingTools();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETransformGizmoAxisList"), 0, Get_Z_Construct_UEnum_EditorScriptingTools_ETransformGizmoAxisList_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETransformGizmoAxisList::None", (int64)ETransformGizmoAxisList::None },
				{ "ETransformGizmoAxisList::X", (int64)ETransformGizmoAxisList::X },
				{ "ETransformGizmoAxisList::Y", (int64)ETransformGizmoAxisList::Y },
				{ "ETransformGizmoAxisList::Z", (int64)ETransformGizmoAxisList::Z },
				{ "ETransformGizmoAxisList::Screen", (int64)ETransformGizmoAxisList::Screen },
				{ "ETransformGizmoAxisList::XY", (int64)ETransformGizmoAxisList::XY },
				{ "ETransformGizmoAxisList::XZ", (int64)ETransformGizmoAxisList::XZ },
				{ "ETransformGizmoAxisList::YZ", (int64)ETransformGizmoAxisList::YZ },
				{ "ETransformGizmoAxisList::XYZ", (int64)ETransformGizmoAxisList::XYZ },
				{ "ETransformGizmoAxisList::All", (int64)ETransformGizmoAxisList::All },
				{ "ETransformGizmoAxisList::ZRotation", (int64)ETransformGizmoAxisList::ZRotation },
				{ "ETransformGizmoAxisList::Rotate2D", (int64)ETransformGizmoAxisList::Rotate2D },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "All.Name", "ETransformGizmoAxisList::All" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Private/EditorScriptingToolsCommon/EditorTypesWrapperTypes.h" },
				{ "None.Name", "ETransformGizmoAxisList::None" },
				{ "Rotate2D.Comment", "// alias over Screen since it isn't used when the 2d translate rotate widget is being used\n" },
				{ "Rotate2D.Name", "ETransformGizmoAxisList::Rotate2D" },
				{ "Rotate2D.ToolTip", "alias over Screen since it isn't used when the 2d translate rotate widget is being used" },
				{ "Screen.Name", "ETransformGizmoAxisList::Screen" },
				{ "X.Name", "ETransformGizmoAxisList::X" },
				{ "XY.Name", "ETransformGizmoAxisList::XY" },
				{ "XYZ.Name", "ETransformGizmoAxisList::XYZ" },
				{ "XZ.Name", "ETransformGizmoAxisList::XZ" },
				{ "Y.Name", "ETransformGizmoAxisList::Y" },
				{ "YZ.Name", "ETransformGizmoAxisList::YZ" },
				{ "Z.Name", "ETransformGizmoAxisList::Z" },
				{ "ZRotation.Comment", "//alias over Axis YZ since it isn't used when the z-rotation widget is being used\n" },
				{ "ZRotation.Name", "ETransformGizmoAxisList::ZRotation" },
				{ "ZRotation.ToolTip", "alias over Axis YZ since it isn't used when the z-rotation widget is being used" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_EditorScriptingTools,
				nullptr,
				"ETransformGizmoAxisList",
				"ETransformGizmoAxisList::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ETransformGizmoMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_EditorScriptingTools_ETransformGizmoMode, Z_Construct_UPackage__Script_EditorScriptingTools(), TEXT("ETransformGizmoMode"));
		}
		return Singleton;
	}
	template<> EDITORSCRIPTINGTOOLS_API UEnum* StaticEnum<ETransformGizmoMode::Type>()
	{
		return ETransformGizmoMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETransformGizmoMode(ETransformGizmoMode_StaticEnum, TEXT("/Script/EditorScriptingTools"), TEXT("ETransformGizmoMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_EditorScriptingTools_ETransformGizmoMode_Hash() { return 3994872332U; }
	UEnum* Z_Construct_UEnum_EditorScriptingTools_ETransformGizmoMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_EditorScriptingTools();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETransformGizmoMode"), 0, Get_Z_Construct_UEnum_EditorScriptingTools_ETransformGizmoMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETransformGizmoMode::WM_None", (int64)ETransformGizmoMode::WM_None },
				{ "ETransformGizmoMode::WM_Translate", (int64)ETransformGizmoMode::WM_Translate },
				{ "ETransformGizmoMode::WM_TranslateRotateZ", (int64)ETransformGizmoMode::WM_TranslateRotateZ },
				{ "ETransformGizmoMode::WM_2D", (int64)ETransformGizmoMode::WM_2D },
				{ "ETransformGizmoMode::WM_Rotate", (int64)ETransformGizmoMode::WM_Rotate },
				{ "ETransformGizmoMode::WM_Scale", (int64)ETransformGizmoMode::WM_Scale },
				{ "ETransformGizmoMode::WM_Max", (int64)ETransformGizmoMode::WM_Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Private/EditorScriptingToolsCommon/EditorTypesWrapperTypes.h" },
				{ "WM_2D.Name", "ETransformGizmoMode::WM_2D" },
				{ "WM_2D.ToolTip", "2D" },
				{ "WM_Max.Hidden", "" },
				{ "WM_Max.Name", "ETransformGizmoMode::WM_Max" },
				{ "WM_None.Name", "ETransformGizmoMode::WM_None" },
				{ "WM_None.ToolTip", "None" },
				{ "WM_Rotate.Name", "ETransformGizmoMode::WM_Rotate" },
				{ "WM_Rotate.ToolTip", "Rotate" },
				{ "WM_Scale.Name", "ETransformGizmoMode::WM_Scale" },
				{ "WM_Scale.ToolTip", "Scale" },
				{ "WM_Translate.Name", "ETransformGizmoMode::WM_Translate" },
				{ "WM_Translate.ToolTip", "Translate" },
				{ "WM_TranslateRotateZ.Name", "ETransformGizmoMode::WM_TranslateRotateZ" },
				{ "WM_TranslateRotateZ.ToolTip", "TranslateRotateZ" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_EditorScriptingTools,
				nullptr,
				"ETransformGizmoMode",
				"ETransformGizmoMode::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ELevelMapChangeType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_EditorScriptingTools_ELevelMapChangeType, Z_Construct_UPackage__Script_EditorScriptingTools(), TEXT("ELevelMapChangeType"));
		}
		return Singleton;
	}
	template<> EDITORSCRIPTINGTOOLS_API UEnum* StaticEnum<ELevelMapChangeType>()
	{
		return ELevelMapChangeType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELevelMapChangeType(ELevelMapChangeType_StaticEnum, TEXT("/Script/EditorScriptingTools"), TEXT("ELevelMapChangeType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_EditorScriptingTools_ELevelMapChangeType_Hash() { return 1918170786U; }
	UEnum* Z_Construct_UEnum_EditorScriptingTools_ELevelMapChangeType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_EditorScriptingTools();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELevelMapChangeType"), 0, Get_Z_Construct_UEnum_EditorScriptingTools_ELevelMapChangeType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELevelMapChangeType::LoadMap", (int64)ELevelMapChangeType::LoadMap },
				{ "ELevelMapChangeType::SaveMap", (int64)ELevelMapChangeType::SaveMap },
				{ "ELevelMapChangeType::NewMap", (int64)ELevelMapChangeType::NewMap },
				{ "ELevelMapChangeType::TearDownWorld", (int64)ELevelMapChangeType::TearDownWorld },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "LoadMap.Name", "ELevelMapChangeType::LoadMap" },
				{ "LoadMap.ToolTip", "Map has just been loaded" },
				{ "ModuleRelativePath", "Private/EditorScriptingToolsCommon/EditorTypesWrapperTypes.h" },
				{ "NewMap.Name", "ELevelMapChangeType::NewMap" },
				{ "NewMap.ToolTip", "A new map is loaded" },
				{ "SaveMap.Name", "ELevelMapChangeType::SaveMap" },
				{ "SaveMap.ToolTip", "Map is about to be saved" },
				{ "TearDownWorld.Name", "ELevelMapChangeType::TearDownWorld" },
				{ "TearDownWorld.ToolTip", "The world is about to be torn down" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_EditorScriptingTools,
				nullptr,
				"ELevelMapChangeType",
				"ELevelMapChangeType",
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
	static UEnum* EDetailsViewPropertyChangeType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_EditorScriptingTools_EDetailsViewPropertyChangeType, Z_Construct_UPackage__Script_EditorScriptingTools(), TEXT("EDetailsViewPropertyChangeType"));
		}
		return Singleton;
	}
	template<> EDITORSCRIPTINGTOOLS_API UEnum* StaticEnum<EDetailsViewPropertyChangeType::Type>()
	{
		return EDetailsViewPropertyChangeType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDetailsViewPropertyChangeType(EDetailsViewPropertyChangeType_StaticEnum, TEXT("/Script/EditorScriptingTools"), TEXT("EDetailsViewPropertyChangeType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_EditorScriptingTools_EDetailsViewPropertyChangeType_Hash() { return 2981394099U; }
	UEnum* Z_Construct_UEnum_EditorScriptingTools_EDetailsViewPropertyChangeType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_EditorScriptingTools();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDetailsViewPropertyChangeType"), 0, Get_Z_Construct_UEnum_EditorScriptingTools_EDetailsViewPropertyChangeType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDetailsViewPropertyChangeType::None", (int64)EDetailsViewPropertyChangeType::None },
				{ "EDetailsViewPropertyChangeType::Unspecified", (int64)EDetailsViewPropertyChangeType::Unspecified },
				{ "EDetailsViewPropertyChangeType::ArrayAdd", (int64)EDetailsViewPropertyChangeType::ArrayAdd },
				{ "EDetailsViewPropertyChangeType::ArrayRemove", (int64)EDetailsViewPropertyChangeType::ArrayRemove },
				{ "EDetailsViewPropertyChangeType::ArrayClear", (int64)EDetailsViewPropertyChangeType::ArrayClear },
				{ "EDetailsViewPropertyChangeType::ValueSet", (int64)EDetailsViewPropertyChangeType::ValueSet },
				{ "EDetailsViewPropertyChangeType::Duplicate", (int64)EDetailsViewPropertyChangeType::Duplicate },
				{ "EDetailsViewPropertyChangeType::Interactive", (int64)EDetailsViewPropertyChangeType::Interactive },
				{ "EDetailsViewPropertyChangeType::Redirected", (int64)EDetailsViewPropertyChangeType::Redirected },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ArrayAdd.Name", "EDetailsViewPropertyChangeType::ArrayAdd" },
				{ "ArrayAdd.ToolTip", "Array Add ." },
				{ "ArrayClear.Name", "EDetailsViewPropertyChangeType::ArrayClear" },
				{ "ArrayClear.ToolTip", "Array Clear ." },
				{ "ArrayRemove.Name", "EDetailsViewPropertyChangeType::ArrayRemove" },
				{ "ArrayRemove.ToolTip", "Array Remove ." },
				{ "BlueprintType", "true" },
				{ "Duplicate.Name", "EDetailsViewPropertyChangeType::Duplicate" },
				{ "Duplicate.ToolTip", "Duplicate ." },
				{ "Interactive.Name", "EDetailsViewPropertyChangeType::Interactive" },
				{ "Interactive.ToolTip", "Interactive, e.g. dragging a slider. Will be followed by a ValueSet when finished." },
				{ "ModuleRelativePath", "Private/EditorScriptingToolsCommon/EditorTypesWrapperTypes.h" },
				{ "None.Hidden", "" },
				{ "None.Name", "EDetailsViewPropertyChangeType::None" },
				{ "Redirected.Name", "EDetailsViewPropertyChangeType::Redirected" },
				{ "Redirected.ToolTip", "Redirected.  Used when property references are updated due to content hot-reloading, or an asset being replaced during asset deletion (aka, asset consolidation) ." },
				{ "Unspecified.Name", "EDetailsViewPropertyChangeType::Unspecified" },
				{ "Unspecified.ToolTip", "default value.  Add new enums to add new functionality ." },
				{ "ValueSet.Name", "EDetailsViewPropertyChangeType::ValueSet" },
				{ "ValueSet.ToolTip", "Value Set ." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_EditorScriptingTools,
				nullptr,
				"EDetailsViewPropertyChangeType",
				"EDetailsViewPropertyChangeType::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EDetailsViewNameAreaSettings_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_EditorScriptingTools_EDetailsViewNameAreaSettings, Z_Construct_UPackage__Script_EditorScriptingTools(), TEXT("EDetailsViewNameAreaSettings"));
		}
		return Singleton;
	}
	template<> EDITORSCRIPTINGTOOLS_API UEnum* StaticEnum<EDetailsViewNameAreaSettings>()
	{
		return EDetailsViewNameAreaSettings_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDetailsViewNameAreaSettings(EDetailsViewNameAreaSettings_StaticEnum, TEXT("/Script/EditorScriptingTools"), TEXT("EDetailsViewNameAreaSettings"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_EditorScriptingTools_EDetailsViewNameAreaSettings_Hash() { return 796161128U; }
	UEnum* Z_Construct_UEnum_EditorScriptingTools_EDetailsViewNameAreaSettings()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_EditorScriptingTools();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDetailsViewNameAreaSettings"), 0, Get_Z_Construct_UEnum_EditorScriptingTools_EDetailsViewNameAreaSettings_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDetailsViewNameAreaSettings::HideNameArea", (int64)EDetailsViewNameAreaSettings::HideNameArea },
				{ "EDetailsViewNameAreaSettings::ObjectsUseNameArea", (int64)EDetailsViewNameAreaSettings::ObjectsUseNameArea },
				{ "EDetailsViewNameAreaSettings::ActorsUseNameArea", (int64)EDetailsViewNameAreaSettings::ActorsUseNameArea },
				{ "EDetailsViewNameAreaSettings::ComponentsAndActorsUseNameArea", (int64)EDetailsViewNameAreaSettings::ComponentsAndActorsUseNameArea },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ActorsUseNameArea.Name", "EDetailsViewNameAreaSettings::ActorsUseNameArea" },
				{ "ActorsUseNameArea.ToolTip", "Only Actors use name area." },
				{ "ComponentsAndActorsUseNameArea.Name", "EDetailsViewNameAreaSettings::ComponentsAndActorsUseNameArea" },
				{ "ComponentsAndActorsUseNameArea.ToolTip", "Components and actors use the name area. Components will display their actor owner as the name." },
				{ "HideNameArea.Name", "EDetailsViewNameAreaSettings::HideNameArea" },
				{ "HideNameArea.ToolTip", "The name area should never be displayed." },
				{ "ModuleRelativePath", "Private/EditorScriptingToolsCommon/EditorTypesWrapperTypes.h" },
				{ "ObjectsUseNameArea.Name", "EDetailsViewNameAreaSettings::ObjectsUseNameArea" },
				{ "ObjectsUseNameArea.ToolTip", "All object types use name area." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_EditorScriptingTools,
				nullptr,
				"EDetailsViewNameAreaSettings",
				"EDetailsViewNameAreaSettings",
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
	static UEnum* EDetailPropertyLocation_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_EditorScriptingTools_EDetailPropertyLocation, Z_Construct_UPackage__Script_EditorScriptingTools(), TEXT("EDetailPropertyLocation"));
		}
		return Singleton;
	}
	template<> EDITORSCRIPTINGTOOLS_API UEnum* StaticEnum<EDetailPropertyLocation>()
	{
		return EDetailPropertyLocation_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDetailPropertyLocation(EDetailPropertyLocation_StaticEnum, TEXT("/Script/EditorScriptingTools"), TEXT("EDetailPropertyLocation"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_EditorScriptingTools_EDetailPropertyLocation_Hash() { return 4144323534U; }
	UEnum* Z_Construct_UEnum_EditorScriptingTools_EDetailPropertyLocation()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_EditorScriptingTools();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDetailPropertyLocation"), 0, Get_Z_Construct_UEnum_EditorScriptingTools_EDetailPropertyLocation_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDetailPropertyLocation::Common", (int64)EDetailPropertyLocation::Common },
				{ "EDetailPropertyLocation::Advanced", (int64)EDetailPropertyLocation::Advanced },
				{ "EDetailPropertyLocation::Default", (int64)EDetailPropertyLocation::Default },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Advanced.Name", "EDetailPropertyLocation::Advanced" },
				{ "Advanced.ToolTip", "The property appears in the advanced area of a category(collapsed by default)." },
				{ "BlueprintType", "true" },
				{ "Common.Name", "EDetailPropertyLocation::Common" },
				{ "Common.ToolTip", "The property appears in the simple area of a category (displayed by default)." },
				{ "Default.Name", "EDetailPropertyLocation::Default" },
				{ "Default.ToolTip", "The property appears in the default way specified in the UPROPERTY class flag." },
				{ "ModuleRelativePath", "Private/EditorScriptingToolsCommon/EditorTypesWrapperTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_EditorScriptingTools,
				nullptr,
				"EDetailPropertyLocation",
				"EDetailPropertyLocation",
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
	static UEnum* EDetailCategoryPriority_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_EditorScriptingTools_EDetailCategoryPriority, Z_Construct_UPackage__Script_EditorScriptingTools(), TEXT("EDetailCategoryPriority"));
		}
		return Singleton;
	}
	template<> EDITORSCRIPTINGTOOLS_API UEnum* StaticEnum<EDetailCategoryPriority>()
	{
		return EDetailCategoryPriority_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDetailCategoryPriority(EDetailCategoryPriority_StaticEnum, TEXT("/Script/EditorScriptingTools"), TEXT("EDetailCategoryPriority"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_EditorScriptingTools_EDetailCategoryPriority_Hash() { return 3818392750U; }
	UEnum* Z_Construct_UEnum_EditorScriptingTools_EDetailCategoryPriority()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_EditorScriptingTools();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDetailCategoryPriority"), 0, Get_Z_Construct_UEnum_EditorScriptingTools_EDetailCategoryPriority_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDetailCategoryPriority::Variable", (int64)EDetailCategoryPriority::Variable },
				{ "EDetailCategoryPriority::Transform", (int64)EDetailCategoryPriority::Transform },
				{ "EDetailCategoryPriority::Important", (int64)EDetailCategoryPriority::Important },
				{ "EDetailCategoryPriority::TypeSpecific", (int64)EDetailCategoryPriority::TypeSpecific },
				{ "EDetailCategoryPriority::Default", (int64)EDetailCategoryPriority::Default },
				{ "EDetailCategoryPriority::Uncommon", (int64)EDetailCategoryPriority::Uncommon },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Default.Name", "EDetailCategoryPriority::Default" },
				{ "Important.Name", "EDetailCategoryPriority::Important" },
				{ "ModuleRelativePath", "Private/EditorScriptingToolsCommon/EditorTypesWrapperTypes.h" },
				{ "Transform.Name", "EDetailCategoryPriority::Transform" },
				{ "TypeSpecific.Name", "EDetailCategoryPriority::TypeSpecific" },
				{ "Uncommon.Comment", "// Lowest sort priority\n" },
				{ "Uncommon.Name", "EDetailCategoryPriority::Uncommon" },
				{ "Uncommon.ToolTip", "Lowest sort priority" },
				{ "Variable.Comment", "// Highest sort priority\n" },
				{ "Variable.Name", "EDetailCategoryPriority::Variable" },
				{ "Variable.ToolTip", "Highest sort priority" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_EditorScriptingTools,
				nullptr,
				"EDetailCategoryPriority",
				"EDetailCategoryPriority",
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
	static UEnum* EBuiltinEditorModes_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_EditorScriptingTools_EBuiltinEditorModes, Z_Construct_UPackage__Script_EditorScriptingTools(), TEXT("EBuiltinEditorModes"));
		}
		return Singleton;
	}
	template<> EDITORSCRIPTINGTOOLS_API UEnum* StaticEnum<EBuiltinEditorModes>()
	{
		return EBuiltinEditorModes_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBuiltinEditorModes(EBuiltinEditorModes_StaticEnum, TEXT("/Script/EditorScriptingTools"), TEXT("EBuiltinEditorModes"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_EditorScriptingTools_EBuiltinEditorModes_Hash() { return 3022460340U; }
	UEnum* Z_Construct_UEnum_EditorScriptingTools_EBuiltinEditorModes()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_EditorScriptingTools();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBuiltinEditorModes"), 0, Get_Z_Construct_UEnum_EditorScriptingTools_EBuiltinEditorModes_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBuiltinEditorModes::None", (int64)EBuiltinEditorModes::None },
				{ "EBuiltinEditorModes::Default", (int64)EBuiltinEditorModes::Default },
				{ "EBuiltinEditorModes::Placement", (int64)EBuiltinEditorModes::Placement },
				{ "EBuiltinEditorModes::InterpEdit", (int64)EBuiltinEditorModes::InterpEdit },
				{ "EBuiltinEditorModes::MeshPaint", (int64)EBuiltinEditorModes::MeshPaint },
				{ "EBuiltinEditorModes::Landscape", (int64)EBuiltinEditorModes::Landscape },
				{ "EBuiltinEditorModes::Foliage", (int64)EBuiltinEditorModes::Foliage },
				{ "EBuiltinEditorModes::Level", (int64)EBuiltinEditorModes::Level },
				{ "EBuiltinEditorModes::StreamingLevel", (int64)EBuiltinEditorModes::StreamingLevel },
				{ "EBuiltinEditorModes::Physics", (int64)EBuiltinEditorModes::Physics },
				{ "EBuiltinEditorModes::ActorPicker", (int64)EBuiltinEditorModes::ActorPicker },
				{ "EBuiltinEditorModes::SceneDepthPicker", (int64)EBuiltinEditorModes::SceneDepthPicker },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ActorPicker.Name", "EBuiltinEditorModes::ActorPicker" },
				{ "ActorPicker.ToolTip", "Actor picker mode, used to interactively pick actors in the viewport" },
				{ "BlueprintType", "true" },
				{ "Default.Name", "EBuiltinEditorModes::Default" },
				{ "Default.ToolTip", "Camera movement, actor placement." },
				{ "Foliage.Name", "EBuiltinEditorModes::Foliage" },
				{ "Foliage.ToolTip", "Foliage painting" },
				{ "InterpEdit.Name", "EBuiltinEditorModes::InterpEdit" },
				{ "InterpEdit.ToolTip", "Interpolation editing." },
				{ "Landscape.Name", "EBuiltinEditorModes::Landscape" },
				{ "Landscape.ToolTip", "Landscape editing" },
				{ "Level.Name", "EBuiltinEditorModes::Level" },
				{ "Level.ToolTip", "Level editing mode" },
				{ "MeshPaint.Name", "EBuiltinEditorModes::MeshPaint" },
				{ "MeshPaint.ToolTip", "Mesh paint tool" },
				{ "ModuleRelativePath", "Private/EditorScriptingToolsCommon/EditorTypesWrapperTypes.h" },
				{ "None.Name", "EBuiltinEditorModes::None" },
				{ "None.ToolTip", "Gameplay, editor disabled." },
				{ "Physics.Name", "EBuiltinEditorModes::Physics" },
				{ "Physics.ToolTip", "Physics manipulation mode ( available only when simulating in viewport" },
				{ "Placement.Name", "EBuiltinEditorModes::Placement" },
				{ "Placement.ToolTip", "Placement mode" },
				{ "SceneDepthPicker.Name", "EBuiltinEditorModes::SceneDepthPicker" },
				{ "SceneDepthPicker.ToolTip", "Actor picker mode, used to interactively pick actors in the viewport" },
				{ "StreamingLevel.Name", "EBuiltinEditorModes::StreamingLevel" },
				{ "StreamingLevel.ToolTip", "Streaming level editing mode" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_EditorScriptingTools,
				nullptr,
				"EBuiltinEditorModes",
				"EBuiltinEditorModes",
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
class UScriptStruct* FSelectionFrustumVolume::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EDITORSCRIPTINGTOOLS_API uint32 Get_Z_Construct_UScriptStruct_FSelectionFrustumVolume_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSelectionFrustumVolume, Z_Construct_UPackage__Script_EditorScriptingTools(), TEXT("SelectionFrustumVolume"), sizeof(FSelectionFrustumVolume), Get_Z_Construct_UScriptStruct_FSelectionFrustumVolume_Hash());
	}
	return Singleton;
}
template<> EDITORSCRIPTINGTOOLS_API UScriptStruct* StaticStruct<FSelectionFrustumVolume>()
{
	return FSelectionFrustumVolume::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSelectionFrustumVolume(FSelectionFrustumVolume::StaticStruct, TEXT("/Script/EditorScriptingTools"), TEXT("SelectionFrustumVolume"), false, nullptr, nullptr);
static struct FScriptStruct_EditorScriptingTools_StaticRegisterNativesFSelectionFrustumVolume
{
	FScriptStruct_EditorScriptingTools_StaticRegisterNativesFSelectionFrustumVolume()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SelectionFrustumVolume")),new UScriptStruct::TCppStructOps<FSelectionFrustumVolume>);
	}
} ScriptStruct_EditorScriptingTools_StaticRegisterNativesFSelectionFrustumVolume;
	struct Z_Construct_UScriptStruct_FSelectionFrustumVolume_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSelectionFrustumVolume_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/EditorScriptingToolsCommon/EditorTypesWrapperTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSelectionFrustumVolume_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSelectionFrustumVolume>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSelectionFrustumVolume_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EditorScriptingTools,
		nullptr,
		&NewStructOps,
		"SelectionFrustumVolume",
		sizeof(FSelectionFrustumVolume),
		alignof(FSelectionFrustumVolume),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSelectionFrustumVolume_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSelectionFrustumVolume_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSelectionFrustumVolume()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSelectionFrustumVolume_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EditorScriptingTools();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SelectionFrustumVolume"), sizeof(FSelectionFrustumVolume), Get_Z_Construct_UScriptStruct_FSelectionFrustumVolume_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSelectionFrustumVolume_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSelectionFrustumVolume_Hash() { return 4098157935U; }
class UScriptStruct* FActorHitProxyInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EDITORSCRIPTINGTOOLS_API uint32 Get_Z_Construct_UScriptStruct_FActorHitProxyInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorHitProxyInfo, Z_Construct_UPackage__Script_EditorScriptingTools(), TEXT("ActorHitProxyInfo"), sizeof(FActorHitProxyInfo), Get_Z_Construct_UScriptStruct_FActorHitProxyInfo_Hash());
	}
	return Singleton;
}
template<> EDITORSCRIPTINGTOOLS_API UScriptStruct* StaticStruct<FActorHitProxyInfo>()
{
	return FActorHitProxyInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FActorHitProxyInfo(FActorHitProxyInfo::StaticStruct, TEXT("/Script/EditorScriptingTools"), TEXT("ActorHitProxyInfo"), false, nullptr, nullptr);
static struct FScriptStruct_EditorScriptingTools_StaticRegisterNativesFActorHitProxyInfo
{
	FScriptStruct_EditorScriptingTools_StaticRegisterNativesFActorHitProxyInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ActorHitProxyInfo")),new UScriptStruct::TCppStructOps<FActorHitProxyInfo>);
	}
} ScriptStruct_EditorScriptingTools_StaticRegisterNativesFActorHitProxyInfo;
	struct Z_Construct_UScriptStruct_FActorHitProxyInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimitiveComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PrimitiveComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaterialIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorHitProxyInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/EditorScriptingToolsCommon/EditorTypesWrapperTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActorHitProxyInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorHitProxyInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorHitProxyInfo_Statics::NewProp_Actor_MetaData[] = {
		{ "Category", "ActorHitProxyInfo" },
		{ "ModuleRelativePath", "Private/EditorScriptingToolsCommon/EditorTypesWrapperTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FActorHitProxyInfo_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActorHitProxyInfo, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorHitProxyInfo_Statics::NewProp_Actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorHitProxyInfo_Statics::NewProp_Actor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorHitProxyInfo_Statics::NewProp_PrimitiveComponent_MetaData[] = {
		{ "Category", "ActorHitProxyInfo" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/EditorScriptingToolsCommon/EditorTypesWrapperTypes.h" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FActorHitProxyInfo_Statics::NewProp_PrimitiveComponent = { "PrimitiveComponent", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActorHitProxyInfo, PrimitiveComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorHitProxyInfo_Statics::NewProp_PrimitiveComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorHitProxyInfo_Statics::NewProp_PrimitiveComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorHitProxyInfo_Statics::NewProp_SectionIndex_MetaData[] = {
		{ "Category", "ActorHitProxyInfo" },
		{ "ModuleRelativePath", "Private/EditorScriptingToolsCommon/EditorTypesWrapperTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FActorHitProxyInfo_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActorHitProxyInfo, SectionIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FActorHitProxyInfo_Statics::NewProp_SectionIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorHitProxyInfo_Statics::NewProp_SectionIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorHitProxyInfo_Statics::NewProp_MaterialIndex_MetaData[] = {
		{ "Category", "ActorHitProxyInfo" },
		{ "ModuleRelativePath", "Private/EditorScriptingToolsCommon/EditorTypesWrapperTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FActorHitProxyInfo_Statics::NewProp_MaterialIndex = { "MaterialIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActorHitProxyInfo, MaterialIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FActorHitProxyInfo_Statics::NewProp_MaterialIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorHitProxyInfo_Statics::NewProp_MaterialIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActorHitProxyInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorHitProxyInfo_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorHitProxyInfo_Statics::NewProp_PrimitiveComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorHitProxyInfo_Statics::NewProp_SectionIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorHitProxyInfo_Statics::NewProp_MaterialIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorHitProxyInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EditorScriptingTools,
		nullptr,
		&NewStructOps,
		"ActorHitProxyInfo",
		sizeof(FActorHitProxyInfo),
		alignof(FActorHitProxyInfo),
		Z_Construct_UScriptStruct_FActorHitProxyInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorHitProxyInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActorHitProxyInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorHitProxyInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActorHitProxyInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FActorHitProxyInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EditorScriptingTools();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ActorHitProxyInfo"), sizeof(FActorHitProxyInfo), Get_Z_Construct_UScriptStruct_FActorHitProxyInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FActorHitProxyInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FActorHitProxyInfo_Hash() { return 224117060U; }

static_assert(std::is_polymorphic<FIndexedComponentVisProxyInfo>() == std::is_polymorphic<FComponentVisualizerHitProxyInfo>(), "USTRUCT FIndexedComponentVisProxyInfo cannot be polymorphic unless super FComponentVisualizerHitProxyInfo is polymorphic");

class UScriptStruct* FIndexedComponentVisProxyInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EDITORSCRIPTINGTOOLS_API uint32 Get_Z_Construct_UScriptStruct_FIndexedComponentVisProxyInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FIndexedComponentVisProxyInfo, Z_Construct_UPackage__Script_EditorScriptingTools(), TEXT("IndexedComponentVisProxyInfo"), sizeof(FIndexedComponentVisProxyInfo), Get_Z_Construct_UScriptStruct_FIndexedComponentVisProxyInfo_Hash());
	}
	return Singleton;
}
template<> EDITORSCRIPTINGTOOLS_API UScriptStruct* StaticStruct<FIndexedComponentVisProxyInfo>()
{
	return FIndexedComponentVisProxyInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FIndexedComponentVisProxyInfo(FIndexedComponentVisProxyInfo::StaticStruct, TEXT("/Script/EditorScriptingTools"), TEXT("IndexedComponentVisProxyInfo"), false, nullptr, nullptr);
static struct FScriptStruct_EditorScriptingTools_StaticRegisterNativesFIndexedComponentVisProxyInfo
{
	FScriptStruct_EditorScriptingTools_StaticRegisterNativesFIndexedComponentVisProxyInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("IndexedComponentVisProxyInfo")),new UScriptStruct::TCppStructOps<FIndexedComponentVisProxyInfo>);
	}
} ScriptStruct_EditorScriptingTools_StaticRegisterNativesFIndexedComponentVisProxyInfo;
	struct Z_Construct_UScriptStruct_FIndexedComponentVisProxyInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIndexedComponentVisProxyInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/EditorScriptingToolsCommon/EditorTypesWrapperTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FIndexedComponentVisProxyInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIndexedComponentVisProxyInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIndexedComponentVisProxyInfo_Statics::NewProp_Index_MetaData[] = {
		{ "Category", "ActorComponent" },
		{ "ModuleRelativePath", "Private/EditorScriptingToolsCommon/EditorTypesWrapperTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FIndexedComponentVisProxyInfo_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FIndexedComponentVisProxyInfo, Index), METADATA_PARAMS(Z_Construct_UScriptStruct_FIndexedComponentVisProxyInfo_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIndexedComponentVisProxyInfo_Statics::NewProp_Index_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIndexedComponentVisProxyInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIndexedComponentVisProxyInfo_Statics::NewProp_Index,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIndexedComponentVisProxyInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EditorScriptingTools,
		Z_Construct_UScriptStruct_FComponentVisualizerHitProxyInfo,
		&NewStructOps,
		"IndexedComponentVisProxyInfo",
		sizeof(FIndexedComponentVisProxyInfo),
		alignof(FIndexedComponentVisProxyInfo),
		Z_Construct_UScriptStruct_FIndexedComponentVisProxyInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIndexedComponentVisProxyInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FIndexedComponentVisProxyInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIndexedComponentVisProxyInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FIndexedComponentVisProxyInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FIndexedComponentVisProxyInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EditorScriptingTools();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("IndexedComponentVisProxyInfo"), sizeof(FIndexedComponentVisProxyInfo), Get_Z_Construct_UScriptStruct_FIndexedComponentVisProxyInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FIndexedComponentVisProxyInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FIndexedComponentVisProxyInfo_Hash() { return 1599277702U; }
class UScriptStruct* FComponentVisualizerHitProxyInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EDITORSCRIPTINGTOOLS_API uint32 Get_Z_Construct_UScriptStruct_FComponentVisualizerHitProxyInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FComponentVisualizerHitProxyInfo, Z_Construct_UPackage__Script_EditorScriptingTools(), TEXT("ComponentVisualizerHitProxyInfo"), sizeof(FComponentVisualizerHitProxyInfo), Get_Z_Construct_UScriptStruct_FComponentVisualizerHitProxyInfo_Hash());
	}
	return Singleton;
}
template<> EDITORSCRIPTINGTOOLS_API UScriptStruct* StaticStruct<FComponentVisualizerHitProxyInfo>()
{
	return FComponentVisualizerHitProxyInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FComponentVisualizerHitProxyInfo(FComponentVisualizerHitProxyInfo::StaticStruct, TEXT("/Script/EditorScriptingTools"), TEXT("ComponentVisualizerHitProxyInfo"), false, nullptr, nullptr);
static struct FScriptStruct_EditorScriptingTools_StaticRegisterNativesFComponentVisualizerHitProxyInfo
{
	FScriptStruct_EditorScriptingTools_StaticRegisterNativesFComponentVisualizerHitProxyInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ComponentVisualizerHitProxyInfo")),new UScriptStruct::TCppStructOps<FComponentVisualizerHitProxyInfo>);
	}
} ScriptStruct_EditorScriptingTools_StaticRegisterNativesFComponentVisualizerHitProxyInfo;
	struct Z_Construct_UScriptStruct_FComponentVisualizerHitProxyInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentPropertyPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ComponentPropertyPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponentVisualizerHitProxyInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/EditorScriptingToolsCommon/EditorTypesWrapperTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FComponentVisualizerHitProxyInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComponentVisualizerHitProxyInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponentVisualizerHitProxyInfo_Statics::NewProp_ComponentPropertyPath_MetaData[] = {
		{ "Category", "ActorComponent" },
		{ "ModuleRelativePath", "Private/EditorScriptingToolsCommon/EditorTypesWrapperTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComponentVisualizerHitProxyInfo_Statics::NewProp_ComponentPropertyPath = { "ComponentPropertyPath", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FComponentVisualizerHitProxyInfo, ComponentPropertyPath), Z_Construct_UScriptStruct_FComponentPropertyPathHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FComponentVisualizerHitProxyInfo_Statics::NewProp_ComponentPropertyPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentVisualizerHitProxyInfo_Statics::NewProp_ComponentPropertyPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FComponentVisualizerHitProxyInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentVisualizerHitProxyInfo_Statics::NewProp_ComponentPropertyPath,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComponentVisualizerHitProxyInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EditorScriptingTools,
		nullptr,
		&NewStructOps,
		"ComponentVisualizerHitProxyInfo",
		sizeof(FComponentVisualizerHitProxyInfo),
		alignof(FComponentVisualizerHitProxyInfo),
		Z_Construct_UScriptStruct_FComponentVisualizerHitProxyInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentVisualizerHitProxyInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FComponentVisualizerHitProxyInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentVisualizerHitProxyInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FComponentVisualizerHitProxyInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FComponentVisualizerHitProxyInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EditorScriptingTools();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ComponentVisualizerHitProxyInfo"), sizeof(FComponentVisualizerHitProxyInfo), Get_Z_Construct_UScriptStruct_FComponentVisualizerHitProxyInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FComponentVisualizerHitProxyInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FComponentVisualizerHitProxyInfo_Hash() { return 2238486688U; }
class UScriptStruct* FComponentPropertyPathHandle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EDITORSCRIPTINGTOOLS_API uint32 Get_Z_Construct_UScriptStruct_FComponentPropertyPathHandle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FComponentPropertyPathHandle, Z_Construct_UPackage__Script_EditorScriptingTools(), TEXT("ComponentPropertyPathHandle"), sizeof(FComponentPropertyPathHandle), Get_Z_Construct_UScriptStruct_FComponentPropertyPathHandle_Hash());
	}
	return Singleton;
}
template<> EDITORSCRIPTINGTOOLS_API UScriptStruct* StaticStruct<FComponentPropertyPathHandle>()
{
	return FComponentPropertyPathHandle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FComponentPropertyPathHandle(FComponentPropertyPathHandle::StaticStruct, TEXT("/Script/EditorScriptingTools"), TEXT("ComponentPropertyPathHandle"), false, nullptr, nullptr);
static struct FScriptStruct_EditorScriptingTools_StaticRegisterNativesFComponentPropertyPathHandle
{
	FScriptStruct_EditorScriptingTools_StaticRegisterNativesFComponentPropertyPathHandle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ComponentPropertyPathHandle")),new UScriptStruct::TCppStructOps<FComponentPropertyPathHandle>);
	}
} ScriptStruct_EditorScriptingTools_StaticRegisterNativesFComponentPropertyPathHandle;
	struct Z_Construct_UScriptStruct_FComponentPropertyPathHandle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponentPropertyPathHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Describes a chain of properties from the parent actor of a given component, to the component itself.\n */" },
		{ "ModuleRelativePath", "Private/EditorScriptingToolsCommon/EditorTypesWrapperTypes.h" },
		{ "ToolTip", "Describes a chain of properties from the parent actor of a given component, to the component itself." },
	};
#endif
	void* Z_Construct_UScriptStruct_FComponentPropertyPathHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComponentPropertyPathHandle>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComponentPropertyPathHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EditorScriptingTools,
		nullptr,
		&NewStructOps,
		"ComponentPropertyPathHandle",
		sizeof(FComponentPropertyPathHandle),
		alignof(FComponentPropertyPathHandle),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FComponentPropertyPathHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentPropertyPathHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FComponentPropertyPathHandle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FComponentPropertyPathHandle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EditorScriptingTools();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ComponentPropertyPathHandle"), sizeof(FComponentPropertyPathHandle), Get_Z_Construct_UScriptStruct_FComponentPropertyPathHandle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FComponentPropertyPathHandle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FComponentPropertyPathHandle_Hash() { return 1862857581U; }
class UScriptStruct* FActorComponentWrapper::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EDITORSCRIPTINGTOOLS_API uint32 Get_Z_Construct_UScriptStruct_FActorComponentWrapper_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorComponentWrapper, Z_Construct_UPackage__Script_EditorScriptingTools(), TEXT("ActorComponentWrapper"), sizeof(FActorComponentWrapper), Get_Z_Construct_UScriptStruct_FActorComponentWrapper_Hash());
	}
	return Singleton;
}
template<> EDITORSCRIPTINGTOOLS_API UScriptStruct* StaticStruct<FActorComponentWrapper>()
{
	return FActorComponentWrapper::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FActorComponentWrapper(FActorComponentWrapper::StaticStruct, TEXT("/Script/EditorScriptingTools"), TEXT("ActorComponentWrapper"), false, nullptr, nullptr);
static struct FScriptStruct_EditorScriptingTools_StaticRegisterNativesFActorComponentWrapper
{
	FScriptStruct_EditorScriptingTools_StaticRegisterNativesFActorComponentWrapper()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ActorComponentWrapper")),new UScriptStruct::TCppStructOps<FActorComponentWrapper>);
	}
} ScriptStruct_EditorScriptingTools_StaticRegisterNativesFActorComponentWrapper;
	struct Z_Construct_UScriptStruct_FActorComponentWrapper_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorComponentWrapper_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/EditorScriptingToolsCommon/EditorTypesWrapperTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActorComponentWrapper_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorComponentWrapper>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorComponentWrapper_Statics::NewProp_ActorComponent_MetaData[] = {
		{ "Category", "ActorComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/EditorScriptingToolsCommon/EditorTypesWrapperTypes.h" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FActorComponentWrapper_Statics::NewProp_ActorComponent = { "ActorComponent", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActorComponentWrapper, ActorComponent), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorComponentWrapper_Statics::NewProp_ActorComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorComponentWrapper_Statics::NewProp_ActorComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActorComponentWrapper_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorComponentWrapper_Statics::NewProp_ActorComponent,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorComponentWrapper_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EditorScriptingTools,
		nullptr,
		&NewStructOps,
		"ActorComponentWrapper",
		sizeof(FActorComponentWrapper),
		alignof(FActorComponentWrapper),
		Z_Construct_UScriptStruct_FActorComponentWrapper_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorComponentWrapper_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActorComponentWrapper_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorComponentWrapper_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActorComponentWrapper()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FActorComponentWrapper_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EditorScriptingTools();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ActorComponentWrapper"), sizeof(FActorComponentWrapper), Get_Z_Construct_UScriptStruct_FActorComponentWrapper_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FActorComponentWrapper_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FActorComponentWrapper_Hash() { return 526871692U; }
class UScriptStruct* FLevelEditingViewportClick::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EDITORSCRIPTINGTOOLS_API uint32 Get_Z_Construct_UScriptStruct_FLevelEditingViewportClick_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelEditingViewportClick, Z_Construct_UPackage__Script_EditorScriptingTools(), TEXT("LevelEditingViewportClick"), sizeof(FLevelEditingViewportClick), Get_Z_Construct_UScriptStruct_FLevelEditingViewportClick_Hash());
	}
	return Singleton;
}
template<> EDITORSCRIPTINGTOOLS_API UScriptStruct* StaticStruct<FLevelEditingViewportClick>()
{
	return FLevelEditingViewportClick::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLevelEditingViewportClick(FLevelEditingViewportClick::StaticStruct, TEXT("/Script/EditorScriptingTools"), TEXT("LevelEditingViewportClick"), false, nullptr, nullptr);
static struct FScriptStruct_EditorScriptingTools_StaticRegisterNativesFLevelEditingViewportClick
{
	FScriptStruct_EditorScriptingTools_StaticRegisterNativesFLevelEditingViewportClick()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LevelEditingViewportClick")),new UScriptStruct::TCppStructOps<FLevelEditingViewportClick>);
	}
} ScriptStruct_EditorScriptingTools_StaticRegisterNativesFLevelEditingViewportClick;
	struct Z_Construct_UScriptStruct_FLevelEditingViewportClick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Event_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Event;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CursorPos_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CursorPos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewportType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ViewportType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bControlDown_MetaData[];
#endif
		static void NewProp_bControlDown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bControlDown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShiftDown_MetaData[];
#endif
		static void NewProp_bShiftDown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShiftDown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAltDown_MetaData[];
#endif
		static void NewProp_bAltDown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAltDown;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelEditingViewportClick_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/EditorScriptingToolsCommon/EditorTypesWrapperTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLevelEditingViewportClick_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelEditingViewportClick>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelEditingViewportClick_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "ViewportClick" },
		{ "ModuleRelativePath", "Private/EditorScriptingToolsCommon/EditorTypesWrapperTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLevelEditingViewportClick_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelEditingViewportClick, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelEditingViewportClick_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelEditingViewportClick_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelEditingViewportClick_Statics::NewProp_Event_MetaData[] = {
		{ "Category", "ViewportClick" },
		{ "ModuleRelativePath", "Private/EditorScriptingToolsCommon/EditorTypesWrapperTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLevelEditingViewportClick_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelEditingViewportClick, Event), Z_Construct_UEnum_Engine_EInputEvent, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelEditingViewportClick_Statics::NewProp_Event_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelEditingViewportClick_Statics::NewProp_Event_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelEditingViewportClick_Statics::NewProp_CursorPos_MetaData[] = {
		{ "Category", "ViewportClick" },
		{ "ModuleRelativePath", "Private/EditorScriptingToolsCommon/EditorTypesWrapperTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLevelEditingViewportClick_Statics::NewProp_CursorPos = { "CursorPos", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelEditingViewportClick, CursorPos), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelEditingViewportClick_Statics::NewProp_CursorPos_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelEditingViewportClick_Statics::NewProp_CursorPos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelEditingViewportClick_Statics::NewProp_ViewportType_MetaData[] = {
		{ "Category", "ViewportClick" },
		{ "ModuleRelativePath", "Private/EditorScriptingToolsCommon/EditorTypesWrapperTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLevelEditingViewportClick_Statics::NewProp_ViewportType = { "ViewportType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelEditingViewportClick, ViewportType), Z_Construct_UEnum_UnrealEd_ELevelViewportType, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelEditingViewportClick_Statics::NewProp_ViewportType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelEditingViewportClick_Statics::NewProp_ViewportType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelEditingViewportClick_Statics::NewProp_bControlDown_MetaData[] = {
		{ "Category", "ViewportClick" },
		{ "ModuleRelativePath", "Private/EditorScriptingToolsCommon/EditorTypesWrapperTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLevelEditingViewportClick_Statics::NewProp_bControlDown_SetBit(void* Obj)
	{
		((FLevelEditingViewportClick*)Obj)->bControlDown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLevelEditingViewportClick_Statics::NewProp_bControlDown = { "bControlDown", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLevelEditingViewportClick), &Z_Construct_UScriptStruct_FLevelEditingViewportClick_Statics::NewProp_bControlDown_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelEditingViewportClick_Statics::NewProp_bControlDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelEditingViewportClick_Statics::NewProp_bControlDown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelEditingViewportClick_Statics::NewProp_bShiftDown_MetaData[] = {
		{ "Category", "ViewportClick" },
		{ "ModuleRelativePath", "Private/EditorScriptingToolsCommon/EditorTypesWrapperTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLevelEditingViewportClick_Statics::NewProp_bShiftDown_SetBit(void* Obj)
	{
		((FLevelEditingViewportClick*)Obj)->bShiftDown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLevelEditingViewportClick_Statics::NewProp_bShiftDown = { "bShiftDown", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLevelEditingViewportClick), &Z_Construct_UScriptStruct_FLevelEditingViewportClick_Statics::NewProp_bShiftDown_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelEditingViewportClick_Statics::NewProp_bShiftDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelEditingViewportClick_Statics::NewProp_bShiftDown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelEditingViewportClick_Statics::NewProp_bAltDown_MetaData[] = {
		{ "Category", "ViewportClick" },
		{ "ModuleRelativePath", "Private/EditorScriptingToolsCommon/EditorTypesWrapperTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLevelEditingViewportClick_Statics::NewProp_bAltDown_SetBit(void* Obj)
	{
		((FLevelEditingViewportClick*)Obj)->bAltDown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLevelEditingViewportClick_Statics::NewProp_bAltDown = { "bAltDown", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLevelEditingViewportClick), &Z_Construct_UScriptStruct_FLevelEditingViewportClick_Statics::NewProp_bAltDown_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelEditingViewportClick_Statics::NewProp_bAltDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelEditingViewportClick_Statics::NewProp_bAltDown_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLevelEditingViewportClick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelEditingViewportClick_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelEditingViewportClick_Statics::NewProp_Event,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelEditingViewportClick_Statics::NewProp_CursorPos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelEditingViewportClick_Statics::NewProp_ViewportType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelEditingViewportClick_Statics::NewProp_bControlDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelEditingViewportClick_Statics::NewProp_bShiftDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelEditingViewportClick_Statics::NewProp_bAltDown,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelEditingViewportClick_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EditorScriptingTools,
		nullptr,
		&NewStructOps,
		"LevelEditingViewportClick",
		sizeof(FLevelEditingViewportClick),
		alignof(FLevelEditingViewportClick),
		Z_Construct_UScriptStruct_FLevelEditingViewportClick_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelEditingViewportClick_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelEditingViewportClick_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelEditingViewportClick_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLevelEditingViewportClick()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLevelEditingViewportClick_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EditorScriptingTools();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LevelEditingViewportClick"), sizeof(FLevelEditingViewportClick), Get_Z_Construct_UScriptStruct_FLevelEditingViewportClick_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLevelEditingViewportClick_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLevelEditingViewportClick_Hash() { return 2688616998U; }
class UScriptStruct* FLevelEditingViewportCursorLocation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EDITORSCRIPTINGTOOLS_API uint32 Get_Z_Construct_UScriptStruct_FLevelEditingViewportCursorLocation_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelEditingViewportCursorLocation, Z_Construct_UPackage__Script_EditorScriptingTools(), TEXT("LevelEditingViewportCursorLocation"), sizeof(FLevelEditingViewportCursorLocation), Get_Z_Construct_UScriptStruct_FLevelEditingViewportCursorLocation_Hash());
	}
	return Singleton;
}
template<> EDITORSCRIPTINGTOOLS_API UScriptStruct* StaticStruct<FLevelEditingViewportCursorLocation>()
{
	return FLevelEditingViewportCursorLocation::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLevelEditingViewportCursorLocation(FLevelEditingViewportCursorLocation::StaticStruct, TEXT("/Script/EditorScriptingTools"), TEXT("LevelEditingViewportCursorLocation"), false, nullptr, nullptr);
static struct FScriptStruct_EditorScriptingTools_StaticRegisterNativesFLevelEditingViewportCursorLocation
{
	FScriptStruct_EditorScriptingTools_StaticRegisterNativesFLevelEditingViewportCursorLocation()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LevelEditingViewportCursorLocation")),new UScriptStruct::TCppStructOps<FLevelEditingViewportCursorLocation>);
	}
} ScriptStruct_EditorScriptingTools_StaticRegisterNativesFLevelEditingViewportCursorLocation;
	struct Z_Construct_UScriptStruct_FLevelEditingViewportCursorLocation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CursorPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CursorPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewportType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ViewportType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelEditingViewportCursorLocation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/EditorScriptingToolsCommon/EditorTypesWrapperTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLevelEditingViewportCursorLocation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelEditingViewportCursorLocation>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelEditingViewportCursorLocation_Statics::NewProp_WorldLocation_MetaData[] = {
		{ "Category", "ViewportCursor" },
		{ "ModuleRelativePath", "Private/EditorScriptingToolsCommon/EditorTypesWrapperTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLevelEditingViewportCursorLocation_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelEditingViewportCursorLocation, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelEditingViewportCursorLocation_Statics::NewProp_WorldLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelEditingViewportCursorLocation_Statics::NewProp_WorldLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelEditingViewportCursorLocation_Statics::NewProp_WorldDirection_MetaData[] = {
		{ "Category", "ViewportCursor" },
		{ "ModuleRelativePath", "Private/EditorScriptingToolsCommon/EditorTypesWrapperTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLevelEditingViewportCursorLocation_Statics::NewProp_WorldDirection = { "WorldDirection", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelEditingViewportCursorLocation, WorldDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelEditingViewportCursorLocation_Statics::NewProp_WorldDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelEditingViewportCursorLocation_Statics::NewProp_WorldDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelEditingViewportCursorLocation_Statics::NewProp_CursorPosition_MetaData[] = {
		{ "Category", "ViewportCursor" },
		{ "ModuleRelativePath", "Private/EditorScriptingToolsCommon/EditorTypesWrapperTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLevelEditingViewportCursorLocation_Statics::NewProp_CursorPosition = { "CursorPosition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelEditingViewportCursorLocation, CursorPosition), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelEditingViewportCursorLocation_Statics::NewProp_CursorPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelEditingViewportCursorLocation_Statics::NewProp_CursorPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelEditingViewportCursorLocation_Statics::NewProp_ViewportType_MetaData[] = {
		{ "Category", "ViewportCursor" },
		{ "ModuleRelativePath", "Private/EditorScriptingToolsCommon/EditorTypesWrapperTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLevelEditingViewportCursorLocation_Statics::NewProp_ViewportType = { "ViewportType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelEditingViewportCursorLocation, ViewportType), Z_Construct_UEnum_UnrealEd_ELevelViewportType, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelEditingViewportCursorLocation_Statics::NewProp_ViewportType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelEditingViewportCursorLocation_Statics::NewProp_ViewportType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLevelEditingViewportCursorLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelEditingViewportCursorLocation_Statics::NewProp_WorldLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelEditingViewportCursorLocation_Statics::NewProp_WorldDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelEditingViewportCursorLocation_Statics::NewProp_CursorPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelEditingViewportCursorLocation_Statics::NewProp_ViewportType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelEditingViewportCursorLocation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EditorScriptingTools,
		nullptr,
		&NewStructOps,
		"LevelEditingViewportCursorLocation",
		sizeof(FLevelEditingViewportCursorLocation),
		alignof(FLevelEditingViewportCursorLocation),
		Z_Construct_UScriptStruct_FLevelEditingViewportCursorLocation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelEditingViewportCursorLocation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelEditingViewportCursorLocation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelEditingViewportCursorLocation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLevelEditingViewportCursorLocation()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLevelEditingViewportCursorLocation_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EditorScriptingTools();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LevelEditingViewportCursorLocation"), sizeof(FLevelEditingViewportCursorLocation), Get_Z_Construct_UScriptStruct_FLevelEditingViewportCursorLocation_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLevelEditingViewportCursorLocation_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLevelEditingViewportCursorLocation_Hash() { return 1301459365U; }
class UScriptStruct* FLevelEditingViewportCameraTransform::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EDITORSCRIPTINGTOOLS_API uint32 Get_Z_Construct_UScriptStruct_FLevelEditingViewportCameraTransform_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelEditingViewportCameraTransform, Z_Construct_UPackage__Script_EditorScriptingTools(), TEXT("LevelEditingViewportCameraTransform"), sizeof(FLevelEditingViewportCameraTransform), Get_Z_Construct_UScriptStruct_FLevelEditingViewportCameraTransform_Hash());
	}
	return Singleton;
}
template<> EDITORSCRIPTINGTOOLS_API UScriptStruct* StaticStruct<FLevelEditingViewportCameraTransform>()
{
	return FLevelEditingViewportCameraTransform::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLevelEditingViewportCameraTransform(FLevelEditingViewportCameraTransform::StaticStruct, TEXT("/Script/EditorScriptingTools"), TEXT("LevelEditingViewportCameraTransform"), false, nullptr, nullptr);
static struct FScriptStruct_EditorScriptingTools_StaticRegisterNativesFLevelEditingViewportCameraTransform
{
	FScriptStruct_EditorScriptingTools_StaticRegisterNativesFLevelEditingViewportCameraTransform()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LevelEditingViewportCameraTransform")),new UScriptStruct::TCppStructOps<FLevelEditingViewportCameraTransform>);
	}
} ScriptStruct_EditorScriptingTools_StaticRegisterNativesFLevelEditingViewportCameraTransform;
	struct Z_Construct_UScriptStruct_FLevelEditingViewportCameraTransform_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ViewLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ViewRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DesiredLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DesiredLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookAt_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LookAt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrthoZoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OrthoZoom;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelEditingViewportCameraTransform_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/EditorScriptingToolsCommon/EditorTypesWrapperTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLevelEditingViewportCameraTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelEditingViewportCameraTransform>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelEditingViewportCameraTransform_Statics::NewProp_ViewLocation_MetaData[] = {
		{ "Category", "ViewportClick" },
		{ "Comment", "/** Current viewport Position. */" },
		{ "ModuleRelativePath", "Private/EditorScriptingToolsCommon/EditorTypesWrapperTypes.h" },
		{ "ToolTip", "Current viewport Position." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLevelEditingViewportCameraTransform_Statics::NewProp_ViewLocation = { "ViewLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelEditingViewportCameraTransform, ViewLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelEditingViewportCameraTransform_Statics::NewProp_ViewLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelEditingViewportCameraTransform_Statics::NewProp_ViewLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelEditingViewportCameraTransform_Statics::NewProp_ViewRotation_MetaData[] = {
		{ "Category", "ViewportClick" },
		{ "Comment", "/** Current Viewport orientation; valid only for perspective projections. */" },
		{ "ModuleRelativePath", "Private/EditorScriptingToolsCommon/EditorTypesWrapperTypes.h" },
		{ "ToolTip", "Current Viewport orientation; valid only for perspective projections." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLevelEditingViewportCameraTransform_Statics::NewProp_ViewRotation = { "ViewRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelEditingViewportCameraTransform, ViewRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelEditingViewportCameraTransform_Statics::NewProp_ViewRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelEditingViewportCameraTransform_Statics::NewProp_ViewRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelEditingViewportCameraTransform_Statics::NewProp_DesiredLocation_MetaData[] = {
		{ "Category", "ViewportClick" },
		{ "Comment", "/** Desired viewport location when animating between two locations */" },
		{ "ModuleRelativePath", "Private/EditorScriptingToolsCommon/EditorTypesWrapperTypes.h" },
		{ "ToolTip", "Desired viewport location when animating between two locations" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLevelEditingViewportCameraTransform_Statics::NewProp_DesiredLocation = { "DesiredLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelEditingViewportCameraTransform, DesiredLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelEditingViewportCameraTransform_Statics::NewProp_DesiredLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelEditingViewportCameraTransform_Statics::NewProp_DesiredLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelEditingViewportCameraTransform_Statics::NewProp_LookAt_MetaData[] = {
		{ "Category", "ViewportClick" },
		{ "Comment", "/** When orbiting, the point we are looking at */" },
		{ "ModuleRelativePath", "Private/EditorScriptingToolsCommon/EditorTypesWrapperTypes.h" },
		{ "ToolTip", "When orbiting, the point we are looking at" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLevelEditingViewportCameraTransform_Statics::NewProp_LookAt = { "LookAt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelEditingViewportCameraTransform, LookAt), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelEditingViewportCameraTransform_Statics::NewProp_LookAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelEditingViewportCameraTransform_Statics::NewProp_LookAt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelEditingViewportCameraTransform_Statics::NewProp_StartLocation_MetaData[] = {
		{ "Category", "ViewportClick" },
		{ "Comment", "/** Viewport start location when animating to another location */" },
		{ "ModuleRelativePath", "Private/EditorScriptingToolsCommon/EditorTypesWrapperTypes.h" },
		{ "ToolTip", "Viewport start location when animating to another location" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLevelEditingViewportCameraTransform_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelEditingViewportCameraTransform, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelEditingViewportCameraTransform_Statics::NewProp_StartLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelEditingViewportCameraTransform_Statics::NewProp_StartLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelEditingViewportCameraTransform_Statics::NewProp_OrthoZoom_MetaData[] = {
		{ "Category", "ViewportClick" },
		{ "Comment", "/** Ortho zoom amount */" },
		{ "ModuleRelativePath", "Private/EditorScriptingToolsCommon/EditorTypesWrapperTypes.h" },
		{ "ToolTip", "Ortho zoom amount" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLevelEditingViewportCameraTransform_Statics::NewProp_OrthoZoom = { "OrthoZoom", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelEditingViewportCameraTransform, OrthoZoom), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelEditingViewportCameraTransform_Statics::NewProp_OrthoZoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelEditingViewportCameraTransform_Statics::NewProp_OrthoZoom_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLevelEditingViewportCameraTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelEditingViewportCameraTransform_Statics::NewProp_ViewLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelEditingViewportCameraTransform_Statics::NewProp_ViewRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelEditingViewportCameraTransform_Statics::NewProp_DesiredLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelEditingViewportCameraTransform_Statics::NewProp_LookAt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelEditingViewportCameraTransform_Statics::NewProp_StartLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelEditingViewportCameraTransform_Statics::NewProp_OrthoZoom,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelEditingViewportCameraTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EditorScriptingTools,
		nullptr,
		&NewStructOps,
		"LevelEditingViewportCameraTransform",
		sizeof(FLevelEditingViewportCameraTransform),
		alignof(FLevelEditingViewportCameraTransform),
		Z_Construct_UScriptStruct_FLevelEditingViewportCameraTransform_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelEditingViewportCameraTransform_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelEditingViewportCameraTransform_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelEditingViewportCameraTransform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLevelEditingViewportCameraTransform()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLevelEditingViewportCameraTransform_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EditorScriptingTools();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LevelEditingViewportCameraTransform"), sizeof(FLevelEditingViewportCameraTransform), Get_Z_Construct_UScriptStruct_FLevelEditingViewportCameraTransform_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLevelEditingViewportCameraTransform_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLevelEditingViewportCameraTransform_Hash() { return 936549986U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
