// Copyright (c) 2025 Morgan Skillicorn. All rights reserved.


#include "ChunkCollection.h"


// Sets default values
AChunkCollection::AChunkCollection()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AChunkCollection::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AChunkCollection::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

