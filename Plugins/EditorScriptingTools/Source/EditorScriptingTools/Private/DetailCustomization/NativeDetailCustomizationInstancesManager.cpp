//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#include "NativeDetailCustomizationInstancesManager.h"
#include "Misc/ScopeLock.h"
#include "NativeDetailCustomizationInstance.h"


FNativeDetailCustomizationInstancesManager::FNativeDetailCustomizationInstancesManager()
{

}

FNativeDetailCustomizationInstancesManager::~FNativeDetailCustomizationInstancesManager()
{
	
}

TSharedRef<FNativeDetailCustomizationInstancesManager> FNativeDetailCustomizationInstancesManager::Get()
{
	static TSharedRef<FNativeDetailCustomizationInstancesManager> Manager = MakeShareable( new FNativeDetailCustomizationInstancesManager() );
	return Manager;
}

void FNativeDetailCustomizationInstancesManager::OnPostEditorTick(float DeltaSeconds)
{
	if (Mutex.TryLock())
	{
		ForceRefreshPendingLayouts();
		Mutex.Unlock();
	}
}

void FNativeDetailCustomizationInstancesManager::AddToLayoutsToRefresh(const TSharedPtr<FNativeDetailCustomizationInstance>& LayoutToRefresh)
{
	FScopeLock Lock(&Mutex);
	PendingDetailsToRefreshWeakPtrs.Add(LayoutToRefresh);
}

void FNativeDetailCustomizationInstancesManager::ForceRefreshPendingLayouts()
{
	if (PendingDetailsToRefreshWeakPtrs.Num() > 0)
	{
		for (TWeakPtr<FNativeDetailCustomizationInstance>& CustomizationInstancePtr : PendingDetailsToRefreshWeakPtrs)
		{
			if (CustomizationInstancePtr.IsValid())
			{
				CustomizationInstancePtr.Pin()->ForceRefreshDetails();
			}
		}
		PendingDetailsToRefreshWeakPtrs.Empty();
	}
}
