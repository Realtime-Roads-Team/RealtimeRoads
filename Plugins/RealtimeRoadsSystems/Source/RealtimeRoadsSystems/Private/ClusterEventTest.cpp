// Copyright (c) 2025 Morgan Skillicorn. All rights reserved.

#pragma once

#include "ClusterEventTest.h"

AClusterEventTest::AClusterEventTest()
{
	PrimaryActorTick.bCanEverTick = false;
}

void AClusterEventTest::BeginPlay()
{
	Super::BeginPlay();
}

void AClusterEventTest::EmitTestEvent()
{
	// This will be implemented in Blueprints using the "Send Cluster Event" node.
}
