// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "KATWalkPluginLibrary.generated.h"

#define KAT_PLUGIN_LIBRARY "KATWalkPluginLibrary | Plugin"

/**
 * 
 */
UCLASS()
class UKATWalkPluginLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:

	UFUNCTION(BlueprintPure, meta = (DisplayName = "KATData_UpdateDataCore", Keywords = "KATDataPlugin KATData"), Category = KAT_GET_DATA)
		static FKATDataCore UpdateDataCore(FKATDataCore data);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "KATData_Init", Keywords = "KATDataPlugin KATData"), Category = KAT_GET_DATA)
		static int Init();

};
