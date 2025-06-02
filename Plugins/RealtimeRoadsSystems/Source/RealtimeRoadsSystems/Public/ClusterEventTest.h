// Copyright (c) 2025 Morgan Skillicorn. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ClusterEventTest.generated.h"

UCLASS()
class REALTIMEROADSSYSTEMS_API AClusterEventTest : public AActor
{
	GENERATED_BODY()

public:
	AClusterEventTest();

protected:
	virtual void BeginPlay() override;

public:
	UFUNCTION(BlueprintCallable, Category = "Cluster")
	void EmitTestEvent();
};
