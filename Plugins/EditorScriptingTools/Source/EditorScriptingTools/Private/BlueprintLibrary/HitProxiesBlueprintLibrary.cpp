//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#include "HitProxiesBlueprintLibrary.h"
#include "EngineUtils.h"
#include "ComponentVisualizer.h"


#define LOCTEXT_NAMESPACE "HitProxiesBlueprintLibrary"

UHitProxiesBlueprintLibrary::UHitProxiesBlueprintLibrary()
{

}


bool UHitProxiesBlueprintLibrary::IsValid(UPARAM(ref) FHitProxyHandle& Handle)
{
	return Handle.IsValid();
}

EHitProxyType UHitProxiesBlueprintLibrary::GetHitProxyType(UPARAM(ref) FHitProxyHandle& Handle)
{
	return Handle.GetHitProxyType();
}

bool UHitProxiesBlueprintLibrary::GetIndexedHitProxyInfo(UPARAM(ref) FHitProxyHandle& Handle, int32& OutIndex)
{
	if (Handle.GetHitProxyType()== EHitProxyType::CustomIndex)
	{
		HIndexedHitProxy* IndexedHitProxy = static_cast<HIndexedHitProxy*>(Handle.Get()->HitProxy);
		OutIndex = IndexedHitProxy->Index;
		return true;
	}
	OutIndex = INDEX_NONE;
	return false;
}

bool UHitProxiesBlueprintLibrary::GetActorHitProxyInfo(UPARAM(ref) FHitProxyHandle& Handle, FActorHitProxyInfo& OutActorHitProxyInfo)
{
	if (Handle.GetHitProxyType() == EHitProxyType::Actor)
	{
		if (HActor* ActorHitProxy = static_cast<HActor*>(Handle.Get()->HitProxy))
		{
			OutActorHitProxyInfo.Set(ActorHitProxy->Actor, ActorHitProxy->PrimComponent, ActorHitProxy->SectionIndex, ActorHitProxy->MaterialIndex);
			return true;
		}
	}

	OutActorHitProxyInfo.Clear();
	return false;
}

bool UHitProxiesBlueprintLibrary::GetComponentVisualizerHitProxyInfo(UPARAM(ref) FHitProxyHandle& Handle, FActorComponentWrapper& OutComponentInfo)
{
	if (Handle.GetHitProxyType() == EHitProxyType::ComponentVisualizer)
	{
		HComponentVisProxy* ComponentVisProxy = static_cast<HComponentVisProxy*>(Handle.Get()->HitProxy);
		OutComponentInfo.SetComponent(ComponentVisProxy->Component.Get());
		return ComponentVisProxy->Component.IsValid();
	}

	OutComponentInfo.ClearComponent();
	return false;
}

#undef LOCTEXT_NAMESPACE