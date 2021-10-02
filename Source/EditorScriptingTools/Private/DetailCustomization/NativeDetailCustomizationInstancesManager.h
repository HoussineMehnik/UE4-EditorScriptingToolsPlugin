//==========================================================================//
// Copyright Elhoussine Mehnik (ue4resources@gmail.com). All Rights Reserved.
//================== http://unrealengineresources.com/ =====================//

#pragma once

#include "CoreMinimal.h"
#include "Windows/WindowsCriticalSection.h"

class FNativeDetailCustomizationInstance;

class FNativeDetailCustomizationInstancesManager
{
public:
	FNativeDetailCustomizationInstancesManager();
	~FNativeDetailCustomizationInstancesManager();

	static TSharedRef<FNativeDetailCustomizationInstancesManager> Get();

	void OnPostEditorTick(float DeltaSeconds);
	void AddToLayoutsToRefresh(const TSharedPtr<FNativeDetailCustomizationInstance>& LayoutToRefresh);

private:
	void ForceRefreshPendingLayouts();

private:
	FCriticalSection Mutex;
	TSet<TWeakPtr<FNativeDetailCustomizationInstance>> PendingDetailsToRefreshWeakPtrs;
};
