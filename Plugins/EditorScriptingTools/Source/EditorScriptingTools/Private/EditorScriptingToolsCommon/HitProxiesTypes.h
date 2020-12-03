//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#pragma once

#include "CoreMinimal.h"
#include "HitProxies.h"
#include "ComponentVisualizer.h"
#include "EditorTypesWrapperTypes.h"
#include "HitProxiesTypes.generated.h"


struct HActor;

struct HIndexedHitProxy : public HHitProxy
{
	DECLARE_HIT_PROXY();

	int32							Index;
	EMouseCursor::Type				CursorType;
	bool							bAllowsTranslucentPrimitives;

	HIndexedHitProxy(int32 InIndex, EHitProxyPriorityType InPriority = EHitProxyPriorityType::World, EMouseCursor::Type InCursorType = EMouseCursor::Default, bool bTranslucentPrimitives = false)
		: HHitProxy((EHitProxyPriority)InPriority)
		, Index(InIndex)
		, CursorType(InCursorType)
		, bAllowsTranslucentPrimitives(bTranslucentPrimitives)
	{

	}

	virtual EMouseCursor::Type GetMouseCursor()
	{
		return  CursorType;
	}

	virtual bool AlwaysAllowsTranslucentPrimitives() const override
	{
		return  bAllowsTranslucentPrimitives;
	}
};


struct HIndexedComponentVisProxy : public HComponentVisProxy
{
	DECLARE_HIT_PROXY();

	int32							Index;
	EMouseCursor::Type				CursorType;
	bool							bAllowsTranslucentPrimitives;

	HIndexedComponentVisProxy(const UActorComponent* InComponent, int32 InIndex, EHitProxyPriorityType InPriority = EHitProxyPriorityType::World, EMouseCursor::Type InCursorType = EMouseCursor::Default, bool bTranslucentPrimitives = false)
		: HComponentVisProxy(InComponent, static_cast<EHitProxyPriority>(InPriority))
		, Index(InIndex)
		, CursorType(InCursorType)
		, bAllowsTranslucentPrimitives(bTranslucentPrimitives)
	{
	}

	virtual EMouseCursor::Type GetMouseCursor()
	{
		return  CursorType;
	}

	virtual bool AlwaysAllowsTranslucentPrimitives() const override
	{
		return  bAllowsTranslucentPrimitives;
	}
};


UENUM(BlueprintType)
enum class EHitProxyType : uint8
{
	//
	Undefined = 0,

	//
	CustomIndex = 1,
	Actor,
	ComponentVisualizer,



	//
	Invalid = 255
};


struct FHitProxyWrapper
{
	FHitProxyWrapper() = delete;
	FHitProxyWrapper(HHitProxy* InHitProxy) : HitProxy(InHitProxy) {}
	bool HasValidProxy() const { return HitProxy != nullptr; }
	EHitProxyType GetType() const;

	HHitProxy* HitProxy{ nullptr };
};


USTRUCT(BlueprintType, BlueprintInternalUseOnly)
struct FHitProxyHandle
{
	GENERATED_USTRUCT_BODY()

public:

	FHitProxyHandle() : ProxyWrapperWeakPtr(nullptr) {}
	FHitProxyHandle(const TSharedPtr<FHitProxyWrapper>& InProxyWrapper) : ProxyWrapperWeakPtr(InProxyWrapper) {}
	void operator =(const FHitProxyHandle& Other) { this->ProxyWrapperWeakPtr = Other.ProxyWrapperWeakPtr; }

	bool IsValid() const;
	void Invalidate();
	EHitProxyType GetHitProxyType() const;
	FHitProxyWrapper* Get() const;


private:
	TWeakPtr<FHitProxyWrapper> ProxyWrapperWeakPtr;
};


