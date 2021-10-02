//==========================================================================//
// Copyright Elhoussine Mehnik (ue4resources@gmail.com). All Rights Reserved.
//================== http://unrealengineresources.com/ =====================//

#include "HitProxiesUtils.h"
#include "HitProxiesTypes.h"
#include "EngineUtils.h"

#define LOCTEXT_NAMESPACE "HitProxiesUtils"

namespace HitProxiesUtils
{
	TSharedPtr<FHitProxyWrapper> CreateProxyWrapperFromHitProxy(HHitProxy* HitProxy)
	{
		if (HitProxy)
		{
			return MakeShared<FHitProxyWrapper>(HitProxy);
		}

		return nullptr;
	}
}

#undef LOCTEXT_NAMESPACE 