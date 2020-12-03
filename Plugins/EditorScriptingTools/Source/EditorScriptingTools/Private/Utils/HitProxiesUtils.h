//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#pragma once

#include "CoreMinimal.h"

class HHitProxy;
struct FHitProxyWrapper;

namespace HitProxiesUtils
{
	TSharedPtr<FHitProxyWrapper> CreateProxyWrapperFromHitProxy(HHitProxy* HitProxy);
};