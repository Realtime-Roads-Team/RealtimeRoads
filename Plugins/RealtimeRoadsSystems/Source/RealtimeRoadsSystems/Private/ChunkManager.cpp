// Copyright (c) 2025 Morgan Skillicorn. All rights reserved.


#include "ChunkManager.h"


// Sets default values
AChunkManager::AChunkManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AChunkManager::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AChunkManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

