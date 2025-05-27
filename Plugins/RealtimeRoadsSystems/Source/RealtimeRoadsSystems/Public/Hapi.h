// Copyright (c) 2025 Morgan Skillicorn. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HoudiniPublicAPI.h"
#include "HoudiniPublicAPIBlueprintLib.h"
#include "HoudiniPublicAPIAssetWrapper.h"
#include "Hapi.generated.h"

class UHoudiniAsset;
class UHoudiniPublicAPIAssetWrapper;

UCLASS()
class REALTIMEROADSSYSTEMS_API AHapi : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AHapi();

#if WITH_EDITOR
	UFUNCTION(CallInEditor, Category = "Debug Tools")
	void SpawnHDA();
#endif

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "Houdini")
	UHoudiniAsset* HoudiniAsset;

	UPROPERTY(EditAnywhere, Category = "Houdini")
	int count = 100;

	UPROPERTY()
	UHoudiniPublicAPIAssetWrapper* AssetWrapper;

	UFUNCTION()
	void SetInitialParameters(UHoudiniPublicAPIAssetWrapper* Wrapper);

	UFUNCTION()
	void SetInputs(UHoudiniPublicAPIAssetWrapper* Wrapper);

	UFUNCTION()
	void PrintOutputs(UHoudiniPublicAPIAssetWrapper* Wrapper);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
