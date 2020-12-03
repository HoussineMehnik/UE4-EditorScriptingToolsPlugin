//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ConvexVolume.h"
#include "EditorViewportClient.h"
#include "ComponentVisualizer.h"
#include "EditorTypesWrapperTypes.generated.h"

class UActorComponent;
class AActor;
class UPrimitiveComponent;


UENUM(BlueprintType)
enum class EBuiltinEditorModes : uint8
{
	None						UMETA(ToolTip = "Gameplay, editor disabled."),
	Default						UMETA(ToolTip = "Camera movement, actor placement."),
	Placement					UMETA(ToolTip = "Placement mode"),
	InterpEdit					UMETA(ToolTip = "Interpolation editing."),
	MeshPaint					UMETA(ToolTip = "Mesh paint tool"),
	Landscape					UMETA(ToolTip = "Landscape editing"),
	Foliage						UMETA(ToolTip = "Foliage painting"),
	Level						UMETA(ToolTip = "Level editing mode"),
	StreamingLevel				UMETA(ToolTip = "Streaming level editing mode"),
	Physics						UMETA(ToolTip = "Physics manipulation mode ( available only when simulating in viewport"),
	ActorPicker					UMETA(ToolTip = "Actor picker mode, used to interactively pick actors in the viewport"),
	SceneDepthPicker			UMETA(ToolTip = "Actor picker mode, used to interactively pick actors in the viewport"),
};

UENUM(BlueprintType)
enum class EDetailCategoryPriority : uint8
{
	// Highest sort priority
	Variable = 0,
	Transform,
	Important,
	TypeSpecific,
	Default,
	// Lowest sort priority
	Uncommon,
};

UENUM(BlueprintType)	
enum class EDetailPropertyLocation : uint8
{
	Common = 0		UMETA(ToolTip = "The property appears in the simple area of a category (displayed by default)."),
	Advanced		UMETA(ToolTip = "The property appears in the advanced area of a category(collapsed by default)."),
	Default			UMETA(ToolTip = "The property appears in the default way specified in the UPROPERTY class flag."),
};

UENUM()
enum class EDetailsViewNameAreaSettings : uint8
{
	HideNameArea						UMETA(ToolTip = "The name area should never be displayed."),
	ObjectsUseNameArea					UMETA(ToolTip = "All object types use name area."),
	ActorsUseNameArea					UMETA(ToolTip = "Only Actors use name area."),
	ComponentsAndActorsUseNameArea		UMETA(ToolTip = "Components and actors use the name area. Components will display their actor owner as the name."),
};

UENUM(BlueprintType)
namespace EDetailsViewPropertyChangeType
{
	enum Type
	{
		None = 0						UMETA(Hidden),
		Unspecified = 1 << 0			UMETA(ToolTip = "default value.  Add new enums to add new functionality ."),
		ArrayAdd = 1 << 1				UMETA(ToolTip = "Array Add ."),
		ArrayRemove = 1 << 2			UMETA(ToolTip = "Array Remove ."),
		ArrayClear = 1 << 3				UMETA(ToolTip = "Array Clear ."),
		ValueSet = 1 << 4				UMETA(ToolTip = "Value Set ."),
		Duplicate = 1 << 5				UMETA(ToolTip = "Duplicate ."),
		Interactive = 1 << 6			UMETA(ToolTip = "Interactive, e.g. dragging a slider. Will be followed by a ValueSet when finished."),
		Redirected = 1 << 7				UMETA(ToolTip = "Redirected.  Used when property references are updated due to content hot-reloading, or an asset being replaced during asset deletion (aka, asset consolidation) ."),
	};
}

UENUM(BlueprintType)
enum class ELevelMapChangeType : uint8
{
	LoadMap				UMETA(ToolTip = "Map has just been loaded"),
	SaveMap				UMETA(ToolTip = "Map is about to be saved"),
	NewMap				UMETA(ToolTip = "A new map is loaded"),
	TearDownWorld		UMETA(ToolTip = "The world is about to be torn down"),
};

UENUM(BlueprintType)
namespace ETransformGizmoMode
{
	enum Type
	{
		WM_None = -1				UMETA(ToolTip = "None"),
		WM_Translate = 0			UMETA(ToolTip = "Translate"),
		WM_TranslateRotateZ			UMETA(ToolTip = "TranslateRotateZ"),
		WM_2D						UMETA(ToolTip = "2D"),
		WM_Rotate					UMETA(ToolTip = "Rotate"),
		WM_Scale					UMETA(ToolTip = "Scale"),
		WM_Max						UMETA(Hidden),
	};
}


UENUM(BlueprintType)
namespace ETransformGizmoAxisList
{
	enum Type
	{
		None = 0,
		X = 1,
		Y = 2,
		Z = 4,

		Screen = 8,
		XY = X | Y,
		XZ = X | Z,
		YZ = Y | Z,
		XYZ = X | Y | Z,
		All = XYZ | Screen,

		//alias over Axis YZ since it isn't used when the z-rotation widget is being used
		ZRotation = YZ,

		// alias over Screen since it isn't used when the 2d translate rotate widget is being used
		Rotate2D = Screen,
	};
}


UENUM(BlueprintType)
enum class ELevelEditingViewportType : uint8
{
	/** LVT_OrthoXY */
	Top = 0,
	/** LVT_OrthoXZ*/
	Front,
	/** LVT_OrthoYZ */
	Left,
	/** LVT_Perspective */
	Perspective,
	/** LVT_OrthoNegativeXY */
	Bottom,
	/** LVT_OrthoNegativeXZ */
	Back,
	/** LVT_OrthoNegativeYZ */
	Right,

	//
	Invalid = 255,
};


/**
 * A priority for sorting scene elements by depth.
 * Elements with higher priority occlude elements with lower priority, disregarding distance.
 */
UENUM(BlueprintType)
enum class EDepthPriorityGroup : uint8
{
	World			UMETA(DisplayName = "World", ToolTip = "World scene DPG."),
	Foreground		UMETA(DisplayName = "Foreground", ToolTip = "Foreground scene DPG."),
};

UENUM(BlueprintType)
enum class EHitProxyPriorityType : uint8
{
	World = 0,
	Wireframe = 1,
	Foreground = 2,
	UI = 3
};

//
//	EInputEvent
//
UENUM(BlueprintType)
enum class EInputKeyEventType : uint8
{
	Pressed = 0,
	Released = 1,
	Repeat = 2,
	DoubleClick = 3,
};


/** Outcomes when determining whether it's possible to perform an action on the edit modes*/
UENUM(BlueprintType)
enum class EEditModeAction : uint8
{
	Skip = 0		UMETA(HiddenToolTip = "Can't process this action" , Hidden),
	Process			UMETA(ToolTip = "Can process this action"),
	Halt			UMETA(ToolTip = "Stop evaluating other modes (early out)"),
};


/**
* Enumerates message dialog return types.
*/
UENUM(BlueprintType)
enum class EEditorAppReturnType : uint8
{
	No = 0,
	Yes,
	YesAll,
	NoAll,
	Cancel,
	Ok,
	Retry,
	Continue,
};




USTRUCT(BlueprintType)
struct FLevelEditingViewportCameraTransform
{
	GENERATED_USTRUCT_BODY()


		/** Current viewport Position. */
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ViewportClick)
		FVector	ViewLocation;

	/** Current Viewport orientation; valid only for perspective projections. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ViewportClick)
		FRotator ViewRotation;

	/** Desired viewport location when animating between two locations */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ViewportClick)
		FVector	DesiredLocation;

	/** When orbiting, the point we are looking at */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ViewportClick)
		FVector LookAt;

	/** Viewport start location when animating to another location */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ViewportClick)
		FVector StartLocation;

	/** Ortho zoom amount */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ViewportClick)
		float OrthoZoom;

};



USTRUCT(BlueprintType)
struct FLevelEditingViewportCursorLocation
{
	GENERATED_USTRUCT_BODY()

		FLevelEditingViewportCursorLocation()
		: WorldLocation(ForceInit)
		, WorldDirection(ForceInit)
		, CursorPosition(INDEX_NONE, INDEX_NONE)
		, ViewportType(ELevelViewportType::LVT_None)
	{

	}

	FLevelEditingViewportCursorLocation(const FVector& InWorldLocation, const FVector& InWorldDirection, const FIntPoint& InCursorPosition, ELevelViewportType InViewportType)
		: WorldLocation(InWorldLocation)
		, WorldDirection(InWorldDirection)
		, CursorPosition(InCursorPosition)
		, ViewportType(InViewportType)
	{

	}

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ViewportCursor)
		FVector	WorldLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ViewportCursor)
		FVector	WorldDirection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ViewportCursor)
		FIntPoint CursorPosition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ViewportCursor)
		TEnumAsByte<ELevelViewportType>	ViewportType;
};



USTRUCT(BlueprintType)
struct FLevelEditingViewportClick
{
	GENERATED_USTRUCT_BODY()

		FLevelEditingViewportClick(
			const FKey& InKey,
			EInputEvent InEvent,
			const FIntPoint& InCursorPos,
			ELevelViewportType InViewportType,
			bool InbControlDown,
			bool InbShiftDown,
			bool InbAltDown)
		: Key(InKey)
		, Event(InEvent)
		, CursorPos(InCursorPos)
		, ViewportType(InViewportType)
		, bControlDown(InbControlDown)
		, bShiftDown(InbShiftDown)
		, bAltDown(InbAltDown)

	{

	}

	FLevelEditingViewportClick(const FViewportClick& Click) : FLevelEditingViewportClick(
		Click.GetKey(),
		Click.GetEvent(),
		Click.GetClickPos(),
		ELevelViewportType::LVT_OrthoNegativeXY,
		Click.IsControlDown(),
		Click.IsShiftDown(),
		Click.IsAltDown())
	{

	}

	FLevelEditingViewportClick()
		: Key()
		, Event(EInputEvent::IE_Released)
		, CursorPos(FIntPoint::NoneValue)
		, ViewportType(ELevelViewportType::LVT_None)
		, bControlDown(false)
		, bShiftDown(false)
		, bAltDown(false)

	{

	}

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ViewportClick)
		FKey Key;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ViewportClick)
		TEnumAsByte<EInputEvent> Event;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ViewportClick)
		FIntPoint CursorPos;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ViewportClick)
		TEnumAsByte < ELevelViewportType> ViewportType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ViewportClick)
		bool bControlDown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ViewportClick)
		bool bShiftDown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ViewportClick)
		bool bAltDown;
};

USTRUCT(BlueprintType)
struct FActorComponentWrapper
{
	GENERATED_USTRUCT_BODY()

public:
	FActorComponentWrapper() : ActorComponent(nullptr) {}
	FActorComponentWrapper(const UActorComponent* InActorComp) : ActorComponent(InActorComp) {}

	void SetComponent(const UActorComponent* InActorComp) { ActorComponent = InActorComp; }
	void ClearComponent() { ActorComponent = nullptr; }

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ActorComponent)
		const UActorComponent* ActorComponent;
};


/**
 * Describes a chain of properties from the parent actor of a given component, to the component itself.
 */
USTRUCT(BlueprintType)
struct FComponentPropertyPathHandle
{
	GENERATED_USTRUCT_BODY()

public:
	FComponentPropertyPathHandle() : PropertyPath() {}
	FComponentPropertyPathHandle(const UActorComponent* InComponent) : PropertyPath(InComponent) {}
	void operator=(const FComponentPropertyPathHandle& Other) { this->PropertyPath = Other.PropertyPath; }

	FComponentPropertyPath PropertyPath;
};

USTRUCT(BlueprintType)
struct FComponentVisualizerHitProxyInfo
{
	GENERATED_USTRUCT_BODY()

public:
	FComponentVisualizerHitProxyInfo() : ComponentPropertyPath() {}
	FComponentVisualizerHitProxyInfo(const FComponentPropertyPathHandle& InPropertyPath) : ComponentPropertyPath(InPropertyPath) {}

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ActorComponent)
		FComponentPropertyPathHandle ComponentPropertyPath;

};

USTRUCT(BlueprintType)
struct FIndexedComponentVisProxyInfo : public FComponentVisualizerHitProxyInfo
{
	GENERATED_USTRUCT_BODY()

public:
	FIndexedComponentVisProxyInfo() : FComponentVisualizerHitProxyInfo(), Index(INDEX_NONE) {	}
	FIndexedComponentVisProxyInfo(const FComponentPropertyPathHandle& InPropertyPath, int32 InIndex) : FComponentVisualizerHitProxyInfo(InPropertyPath), Index(InIndex) {	}

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ActorComponent)
		int32 Index;
};

USTRUCT(BlueprintType)
struct FActorHitProxyInfo
{
	GENERATED_USTRUCT_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ActorHitProxyInfo)
		AActor* Actor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ActorHitProxyInfo)
		const UPrimitiveComponent* PrimitiveComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ActorHitProxyInfo)
		int32 SectionIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ActorHitProxyInfo)
		int32 MaterialIndex;

	FActorHitProxyInfo(AActor* InActor, const UPrimitiveComponent* InPrimComponent, int32 InSectionIndex, int32 InMaterialIndex)
		: Actor(InActor)
		, PrimitiveComponent(InPrimComponent)
		, SectionIndex(InSectionIndex)
		, MaterialIndex(InMaterialIndex)
	{
	}

	FActorHitProxyInfo()
		:FActorHitProxyInfo(nullptr, nullptr, INDEX_NONE, INDEX_NONE)
	{
	}


	void Set(AActor* InActor, const UPrimitiveComponent* InPrimComponent, int32 InSectionIndex, int32 InMaterialIndex)
	{
		Actor = InActor;
		PrimitiveComponent = InPrimComponent;
		SectionIndex = InSectionIndex;
		MaterialIndex = InMaterialIndex;
	}

	void Clear()
	{
		Actor = nullptr;
		PrimitiveComponent = nullptr;
		SectionIndex = INDEX_NONE;
		MaterialIndex = INDEX_NONE;
	}
};


USTRUCT(BlueprintType)
struct FSelectionFrustumVolume
{
	GENERATED_USTRUCT_BODY()

public:

	FSelectionFrustumVolume(const FConvexVolume& InFrustum) : ConvexVolume(InFrustum)
	{

	}

	FSelectionFrustumVolume() : ConvexVolume()
	{

	}

	void operator=(const FSelectionFrustumVolume& Other)
	{
		this->ConvexVolume = Other.ConvexVolume;
	}

	const FConvexVolume& GetConvexVolume() const { return ConvexVolume; }

private:
	FConvexVolume ConvexVolume;
};

