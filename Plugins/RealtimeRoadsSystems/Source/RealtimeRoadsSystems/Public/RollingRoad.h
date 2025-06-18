// Copyright (c) 2025 Morgan Skillicorn. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DrawDebugHelpers.h"
#include "RollingRoadSection.h"
#include "RollingRoad.generated.h"

UCLASS()
class REALTIMEROADSSYSTEMS_API ARollingRoad : public AActor
{
	GENERATED_BODY()
	
public:	
	ARollingRoad();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	/** Allows ticking in editor viewport without Play mode */
	virtual bool ShouldTickIfViewportsOnly() const override;

	/** Spawns the initial row of chunks */
	UFUNCTION(CallInEditor, Category = "RollingRoad")
	void GenerateInitialChunks();

	/** Clears all spawned chunks */
	UFUNCTION(CallInEditor, Category = "RollingRoad")
	void ClearExistingChunks();

	/** Step forward one editor tick manually */
	UFUNCTION(CallInEditor, Category = "RollingRoad")
	void StepChunksEditor();

	/** Update logic for editor/runtime chunk management */
	UFUNCTION(CallInEditor, Category = "RollingRoad")
	void UpdateChunksEditor(float DeltaTime);


public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RollingRoad")
	FVector2D ChunkSize = FVector2D(1000.f, 1000.f);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RollingRoad")
	int32 FrontCullingDistance = 10000;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RollingRoad")
	int32 RearCullingDistance = 10000;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RollingRoad")
	int32 NumChunks = 10;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RollingRoad")
	FVector MovementDirection = FVector(1, 0, 0);

	/** Speed in km/h, exposed to editor */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RollingRoad")
	float ChunkSpeedKmph = 60.0f;

	/** Computed speed in cm/s (Unreal units) */
	float GetChunkSpeedCms() const;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RollingRoad")
	TSubclassOf<ARollingRoadSection> ChunkClass;

	/** Currently spawned chunk actors */
	UPROPERTY(VisibleAnywhere, Category = "RollingRoad")
	TArray<ARollingRoadSection*> SpawnedChunks;
};
