// Copyright (c) 2025 Morgan Skillicorn. All rights reserved.


#include "RollingRoad.h"


// Sets default values
ARollingRoad::ARollingRoad()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ARollingRoad::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARollingRoad::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

