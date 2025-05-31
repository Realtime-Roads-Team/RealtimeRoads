// Copyright (c) 2025 Morgan Skillicorn. All rights reserved.

#include "RollingRoadSection.h"
#include "UObject/ConstructorHelpers.h"

ARollingRoadSection::ARollingRoadSection()
{
	PrimaryActorTick.bCanEverTick = true;

	PlaneMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlaneMesh"));
	RootComponent = PlaneMesh;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> PlaneAsset(TEXT("/Engine/BasicShapes/Plane"));

	if (PlaneAsset.Succeeded())
	{
		PlaneMesh->SetStaticMesh(PlaneAsset.Object);
		PlaneMesh->SetRelativeRotation(FRotator(0, 0, 0)); // Ensure upright
	}
}

void ARollingRoadSection::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);
	UpdateMeshScale();
}

void ARollingRoadSection::UpdateMeshScale()
{
	// The default UE plane mesh is 100x100 units
	FVector NewScale = FVector(SectionSize.X / 100.0f, SectionSize.Y / 100.0f, 1.0f);
	PlaneMesh->SetWorldScale3D(NewScale);
}

void ARollingRoadSection::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector Location = GetActorLocation();
	FRotator Rotation = GetActorRotation();
	FVector Extent(SectionSize.X / 2, SectionSize.Y / 2, 50);

	DrawDebugBox(
		GetWorld(),
		Location,
		Extent,
		Rotation.Quaternion(),
		FColor::Green,
		false,
		-1.0f,
		0,
		2.0f
	);
}
