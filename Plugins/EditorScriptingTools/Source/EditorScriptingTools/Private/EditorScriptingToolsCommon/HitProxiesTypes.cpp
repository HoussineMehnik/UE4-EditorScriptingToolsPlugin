//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#include "HitProxiesTypes.h"
#include "EngineUtils.h"
#include "ComponentVisualizer.h"


IMPLEMENT_HIT_PROXY(HIndexedHitProxy, HHitProxy);
IMPLEMENT_HIT_PROXY(HIndexedComponentVisProxy, HComponentVisProxy);


EHitProxyType FHitProxyWrapper::GetType() const
{
	if (HasValidProxy())
	{
		if (HitProxy->IsA(HIndexedHitProxy::StaticGetType())) return EHitProxyType::CustomIndex;
		else if (HitProxy->IsA(HActor::StaticGetType())) return EHitProxyType::Actor;
		else if (HitProxy->IsA(HComponentVisProxy::StaticGetType())) return EHitProxyType::ComponentVisualizer;

		else return EHitProxyType::Undefined;
	}

	return EHitProxyType::Invalid;
}



bool FHitProxyHandle::IsValid() const
{
	return ProxyWrapperWeakPtr.IsValid() && ProxyWrapperWeakPtr.Pin()->HasValidProxy();
}

void FHitProxyHandle::Invalidate()
{
	ProxyWrapperWeakPtr = nullptr;
}

EHitProxyType FHitProxyHandle::GetHitProxyType() const
{
	const FHitProxyWrapper* ProxyWrapper = Get();
	return ProxyWrapper != nullptr ? ProxyWrapper->GetType() : EHitProxyType::Invalid;
}

FHitProxyWrapper* FHitProxyHandle::Get() const
{
	return IsValid() ? ProxyWrapperWeakPtr.Pin().Get() : nullptr;
}
