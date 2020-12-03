//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

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