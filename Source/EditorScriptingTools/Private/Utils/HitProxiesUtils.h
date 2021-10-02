//==========================================================================//
// Copyright Elhoussine Mehnik (ue4resources@gmail.com). All Rights Reserved.
//================== http://unrealengineresources.com/ =====================//

#pragma once

#include "CoreMinimal.h"

class HHitProxy;
struct FHitProxyWrapper;

namespace HitProxiesUtils
{
	TSharedPtr<FHitProxyWrapper> CreateProxyWrapperFromHitProxy(HHitProxy* HitProxy);
};