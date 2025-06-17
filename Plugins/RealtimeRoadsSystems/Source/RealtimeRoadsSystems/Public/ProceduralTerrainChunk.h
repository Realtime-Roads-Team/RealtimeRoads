// Copyright (c) 2025 Morgan Skillicorn. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProceduralMeshComponent.h"
#include "ProceduralTerrainChunk.generated.h"

UCLASS()
class REALTIMEROADSSYSTEMS_API AProceduralTerrainChunk : public AActor
{
    GENERATED_BODY()

public:
    AProceduralTerrainChunk();

protected:
    virtual void OnConstruction(const FTransform& Transform) override;

private:
    UPROPERTY(VisibleAnywhere)
    UProceduralMeshComponent* ProcMesh;

    void GenerateTerrainMesh();

    UPROPERTY(EditAnywhere, Category = "Terrain")
    int32 GridSize = 50;

    UPROPERTY(EditAnywhere, Category = "Terrain")
    float GridSpacing = 100.f;

    UPROPERTY(EditAnywhere, Category = "Terrain")
    float HeightMultiplier = 200.f;

    UPROPERTY(EditAnywhere, Category = "Terrain")
    float NoiseScale = 0.1f;
};
