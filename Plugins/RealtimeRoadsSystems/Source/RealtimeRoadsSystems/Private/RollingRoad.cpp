// Copyright (c) 2025 Morgan Skillicorn. All rights reserved.

#include "RollingRoad.h"
#include "Kismet/GameplayStatics.h"
#include "Editor.h"
#include "DrawDebugHelpers.h"

ARollingRoad::ARollingRoad()
{
	PrimaryActorTick.bCanEverTick = true;
}

bool ARollingRoad::ShouldTickIfViewportsOnly() const
{
	return true; // Enable Tick in editor viewport
}

void ARollingRoad::BeginPlay()
{
	Super::BeginPlay();

	if (GetWorld()->WorldType == EWorldType::Editor)
	{
		// In editor, defer to Tick
		return;
	}

	GenerateInitialChunks();
}

void ARollingRoad::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (GEditor && GetWorld() && GetWorld()->WorldType == EWorldType::Editor)
	{
		UpdateChunksEditor(DeltaTime);
		DrawDebugGizmos();
	}
	else
	{
		UpdateChunksEditor(DeltaTime);
	}
}

void ARollingRoad::GenerateInitialChunks()
{
	ClearExistingChunks();

	FVector SpawnStart = GetActorLocation() + MovementDirection * -RearCullingDistance;
	for (int i = 0; i < NumChunks; ++i)
	{
		FVector SpawnLoc = SpawnStart + i * MovementDirection * ChunkSize.X;

		FActorSpawnParameters Params;
		Params.Owner = this;
		Params.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

		ARollingRoadSection* Chunk = GetWorld()->SpawnActor<ARollingRoadSection>(ChunkClass, SpawnLoc, GetActorRotation(), Params);
		if (Chunk)
		{
			Chunk->AttachToActor(this, FAttachmentTransformRules::KeepWorldTransform);
			SpawnedChunks.Add(Chunk);
		}
	}
}

void ARollingRoad::UpdateChunksEditor(float DeltaTime)
{
	TArray<ARollingRoadSection*> ChunksToRemove;

	for (ARollingRoadSection* Chunk : SpawnedChunks)
	{
		if (!IsValid(Chunk)) continue;

		// Move chunk
		FVector NewLocation = Chunk->GetActorLocation() + MovementDirection * GetChunkSpeedCms() * DeltaTime;
		Chunk->SetActorLocation(NewLocation);

		// Cull if past front clipping distance
		float RelativeDistance = FVector::DotProduct(NewLocation - GetActorLocation(), MovementDirection);
		if (RelativeDistance > FrontCullingDistance)
		{
			ChunksToRemove.Add(Chunk);
			Chunk->Destroy();
		}
	}

	// Remove destroyed chunks and spawn replacements
	for (ARollingRoadSection* Chunk : ChunksToRemove)
	{
		SpawnedChunks.Remove(Chunk);

		FVector LastPos = SpawnedChunks.Num() > 0
			? SpawnedChunks.Last()->GetActorLocation()
			: GetActorLocation() + MovementDirection * -RearCullingDistance;

		FVector NewSpawnLoc = LastPos - MovementDirection * ChunkSize.X;

		FActorSpawnParameters Params;
		Params.Owner = this;
		Params.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

		ARollingRoadSection* NewChunk = GetWorld()->SpawnActor<ARollingRoadSection>(ChunkClass, NewSpawnLoc, GetActorRotation(), Params);
		if (NewChunk)
		{
			NewChunk->AttachToActor(this, FAttachmentTransformRules::KeepWorldTransform);
			SpawnedChunks.Add(NewChunk);
		}
	}
}

void ARollingRoad::StepChunksEditor()
{
#if WITH_EDITOR
	UpdateChunksEditor(1.0f / 60.0f);
#endif
}

void ARollingRoad::ClearExistingChunks()
{
	for (ARollingRoadSection* Chunk : SpawnedChunks)
	{
		if (IsValid(Chunk))
		{
			Chunk->Destroy();
		}
	}
	SpawnedChunks.Empty();
}

float ARollingRoad::GetChunkSpeedCms() const
{
	// Convert km/h → cm/s: (km/h * 100000) / 3600
	return (ChunkSpeedKmph * 100000.f) / 3600.f;
}

void ARollingRoad::DrawDebugGizmos()
{
	UWorld* World = GetWorld();
	if (!World) return;

	const FVector Origin = GetActorLocation();
	const FVector RearClip = Origin + MovementDirection * -RearCullingDistance;
	const FVector FrontClip = Origin + MovementDirection * FrontCullingDistance;

	// Draw origin sphere
	DrawDebugSphere(World, Origin, 50.f, 12, FColor::White, false, -1.f, 0, 2.f);

	// Draw movement direction
	DrawDebugDirectionalArrow(World, Origin, Origin + MovementDirection * 500.f, 200.f, FColor::Blue, false, -1.f, 0, 3.f);

	// Draw rear and front clipping indicators
	DrawDebugLine(World, RearClip, RearClip + FVector(0, 0, 200), FColor::Green, false, -1.f, 0, 3.f);
	DrawDebugLine(World, FrontClip, FrontClip + FVector(0, 0, 200), FColor::Red, false, -1.f, 0, 3.f);

	DrawDebugString(World, RearClip + FVector(0, 0, 220), TEXT("Rear Clip"), nullptr, FColor::Green, 0.f, true);
	DrawDebugString(World, FrontClip + FVector(0, 0, 220), TEXT("Front Clip"), nullptr, FColor::Red, 0.f, true);

	// Draw chunk bounding boxes
	for (ARollingRoadSection* Chunk : SpawnedChunks)
	{
		if (!IsValid(Chunk)) continue;

		FVector Center = Chunk->GetActorLocation();
		FVector Extent(ChunkSize.X * 0.5f, ChunkSize.Y * 0.5f, 100.f);

		DrawDebugBox(World, Center, Extent, Chunk->GetActorRotation().Quaternion(), FColor::Cyan, false, -1.f, 0, 2.f);
	}
}
