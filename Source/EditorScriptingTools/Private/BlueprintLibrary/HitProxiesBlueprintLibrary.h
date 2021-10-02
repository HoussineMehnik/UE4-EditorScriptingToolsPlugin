//==========================================================================//
// Copyright Elhoussine Mehnik (ue4resources@gmail.com). All Rights Reserved.
//================== http://unrealengineresources.com/ =====================//

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "HitProxiesTypes.h"
#include "HitProxiesBlueprintLibrary.generated.h"


UCLASS()
class UHitProxiesBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UHitProxiesBlueprintLibrary();

	UFUNCTION(BlueprintPure, Category = "EditorScripting | HitProxies")
		static bool IsValid(UPARAM(ref) FHitProxyHandle& Handle);

	UFUNCTION(BlueprintPure, Category = "EditorScripting | HitProxies")
		static EHitProxyType GetHitProxyType(UPARAM(ref) FHitProxyHandle& Handle);

	UFUNCTION(BlueprintCallable, Category = "EditorScripting | HitProxies")
		static bool GetIndexedHitProxyInfo(UPARAM(ref) FHitProxyHandle& Handle , int32& OutIndex);

	UFUNCTION(BlueprintCallable, Category = "EditorScripting | HitProxies")
		static bool GetActorHitProxyInfo(UPARAM(ref) FHitProxyHandle& Handle, FActorHitProxyInfo& OutActorHitProxyInfo);

	UFUNCTION(BlueprintCallable, Category = "EditorScripting | HitProxies")
		static bool GetComponentVisualizerHitProxyInfo(UPARAM(ref) FHitProxyHandle& Handle, FActorComponentWrapper& OutComponentInfo);
};