// Copyright (c) 2025 Morgan Skillicorn. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "RollingRoadSection.generated.h"

UCLASS()
class REALTIMEROADSSYSTEMS_API ARollingRoadSection : public AActor
{
	GENERATED_BODY()
    
public:	
	ARollingRoadSection();

protected:
	virtual void OnConstruction(const FTransform& Transform) override;

public:	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Road")
	FVector2D SectionSize = FVector2D(1000.f, 1000.f); // Width x Length in Unreal units
	virtual void Tick(float DeltaTime) override;
	
private:
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* PlaneMesh;

	void UpdateMeshScale();
};
