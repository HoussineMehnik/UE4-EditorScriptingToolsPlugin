//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

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
