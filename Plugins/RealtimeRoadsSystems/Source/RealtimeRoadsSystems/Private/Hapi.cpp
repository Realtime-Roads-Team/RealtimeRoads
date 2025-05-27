// Copyright (c) 2025 Morgan Skillicorn. All rights reserved.


#include "Hapi.h"


// Sets default values
AHapi::AHapi()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.

    PrimaryActorTick.bCanEverTick = false;
    HoudiniAsset = nullptr;
    AssetWrapper = nullptr;
}


// Called when the game starts or when spawned
void AHapi::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHapi::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

#if WITH_EDITOR
void AHapi::SpawnHDA()
{
    UE_LOG(LogTemp, Warning, TEXT("Spawning HDA"));

    UHoudiniPublicAPI* API = UHoudiniPublicAPIBlueprintLib::GetAPI();
    if (!API || !HoudiniAsset)
    {
        UE_LOG(LogTemp, Error, TEXT("Missing API or Houdini Asset."));
        return;
    }

    if (!API->IsSessionValid())
        API->CreateSession();

    AssetWrapper = API->InstantiateAsset(HoudiniAsset, GetActorTransform());
    if (!IsValid(AssetWrapper))
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to instantiate asset."));
        return;
    }

    UE_LOG(LogTemp, Warning, TEXT("Binding PreInstantiation"));
    AssetWrapper->GetOnPreInstantiationDelegate().AddUniqueDynamic(this, &AHapi::SetInitialParameters);

    UE_LOG(LogTemp, Warning, TEXT("Binding PostInstantiation"));
    AssetWrapper->GetOnPostInstantiationDelegate().AddUniqueDynamic(this, &AHapi::SetInputs);

    UE_LOG(LogTemp, Warning, TEXT("Binding PostProcessing"));
    AssetWrapper->GetOnPostProcessingDelegate().AddUniqueDynamic(this, &AHapi::PrintOutputs);
}
#endif

void AHapi::SetInitialParameters(UHoudiniPublicAPIAssetWrapper* Wrapper)
{
    UE_LOG(LogTemp, Log, TEXT("Setting initial parameters..."));
    Wrapper->SetIntParameterValue("copy_points", count); // Adjust based on your HDA parameter name
    // Example: AssetWrapper->SetFloatParameterValue("height", 5.0f);
}

void AHapi::SetInputs(UHoudiniPublicAPIAssetWrapper* Wrapper)
{
    UE_LOG(LogTemp, Log, TEXT("Setting inputs..."));
    // Example: Attach geometry input, if needed
}

void AHapi::PrintOutputs(UHoudiniPublicAPIAssetWrapper* Wrapper)
{
    UE_LOG(LogTemp, Log, TEXT("Post-processing outputs..."));
    Wrapper->Recook();
    // Example: Access and log output objects from wrapper
}

