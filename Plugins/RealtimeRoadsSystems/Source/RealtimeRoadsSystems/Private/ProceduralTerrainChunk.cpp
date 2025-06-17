// Copyright (c) 2025 Morgan Skillicorn. All rights reserved.

#include "ProceduralTerrainChunk.h"

AProceduralTerrainChunk::AProceduralTerrainChunk()
{
    PrimaryActorTick.bCanEverTick = false;

    ProcMesh = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("ProceduralMesh"));
    RootComponent = ProcMesh;
}

void AProceduralTerrainChunk::OnConstruction(const FTransform& Transform)
{
    Super::OnConstruction(Transform);

    GenerateTerrainMesh();
}

void AProceduralTerrainChunk::GenerateTerrainMesh()
{
    TArray<FVector> Vertices;
    TArray<int32> Triangles;
    TArray<FVector> Normals;
    TArray<FVector2D> UVs;
    TArray<FProcMeshTangent> Tangents;

    for (int32 Y = 0; Y <= GridSize; ++Y)
    {
        for (int32 X = 0; X <= GridSize; ++X)
        {
            float WorldX = X * GridSpacing;
            float WorldY = Y * GridSpacing;

            float NoiseValue = FMath::PerlinNoise2D(FVector2D(WorldX, WorldY) * NoiseScale);

            float Height = NoiseValue * HeightMultiplier;

            Vertices.Add(FVector(WorldX, WorldY, Height));
            Normals.Add(FVector::UpVector);
            UVs.Add(FVector2D(X / (float)GridSize, Y / (float)GridSize));
            Tangents.Add(FProcMeshTangent(1.f, 0.f, 0.f));
        }
    }

    for (int32 Y = 0; Y < GridSize; ++Y)
    {
        for (int32 X = 0; X < GridSize; ++X)
        {
            int32 Index = Y * (GridSize + 1) + X;

            // Flipped winding order for correct facing
            Triangles.Add(Index);
            Triangles.Add(Index + GridSize + 1);
            Triangles.Add(Index + 1);

            Triangles.Add(Index + 1);
            Triangles.Add(Index + GridSize + 1);
            Triangles.Add(Index + GridSize + 2);
        }
    }

    ProcMesh->CreateMeshSection_LinearColor(0, Vertices, Triangles, Normals, UVs, {}, Tangents, true);
}
