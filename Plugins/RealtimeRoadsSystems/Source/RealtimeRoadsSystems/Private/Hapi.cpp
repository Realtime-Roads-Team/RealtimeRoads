// Copyright (c) 2025 Morgan Skillicorn. All rights reserved.

#include "Hapi.h"

// Sets default values
AHapi::AHapi()
{ 
    // You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = false;

    TestHDA = nullptr;
}

#if WITH_EDITOR
void AHapi::StartHapi()
{
    if (!API->IsSessionValid())
    {
        UE_LOG(LogTemp, Warning, TEXT("Attempting to create HAPI session."));
        API->CreateSession();
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("HAPI session already exists!"));
    }
}

void AHapi::SpawnHDA()
{
    // Load our HDA uasset
    //UHoudiniAsset* const ExampleHDA = Cast<UHoudiniAsset>(StaticLoadObject(UHoudiniAsset::StaticClass(), nullptr, TEXT("/HoudiniEngine/Examples/hda/copy_to_curve_1_0.copy_to_curve_1_0")));
    // Create an API wrapper instance for instantiating the HDA and interacting with it
    UHoudiniPublicAPIAssetWrapper* const Wrapper = API->InstantiateAsset(TestHDA, FTransform::Identity);
}

void AHapi::TestInput()
{
    UHoudiniAsset* const ExampleHDA = TestHDA;

    AssetWrapper = API->InstantiateAsset(ExampleHDA, FTransform::Identity);
    
    if (IsValid(AssetWrapper))
    {
        // Pre-instantiation is the earliest point where we can set parameter values
        AssetWrapper->GetOnPreInstantiationDelegate().AddUniqueDynamic(this, &AHapi::SetInitialParameterValues);
        // Jumping ahead a bit: we also want to configure inputs, but inputs are only available after instantiation
 //       AssetWrapper->GetOnPostInstantiationDelegate().AddUniqueDynamic(this, &AHapi::SetInputs);
        // Jumping ahead a bit: we also want to print the outputs after the node has cook and the plug-in has processed the output
 //       AssetWrapper->GetOnPostProcessingDelegate().AddUniqueDynamic(this, &AHapi::PrintOutputs);
    }
}

void AHapi::SetInitialParameterValues_Implementation(UHoudiniPublicAPIAssetWrapper* InWrapper)
{
    InWrapper->SetIntParameterValue(TEXT("test"), 5);
    // Since we are done with setting the initial values, we can unbind from the delegate
    InWrapper->GetOnPreInstantiationDelegate().RemoveDynamic(this, &AHapi::SetInitialParameterValues);
}

/*void AHapi::SetInputs(UHoudiniPublicAPIAssetWrapper* InWrapper)
{
    // Create an empty geometry input
    UHoudiniPublicAPIGeoInput* const GeoInput = Cast<UHoudiniPublicAPIGeoInput>(InWrapper->CreateEmptyInput(UHoudiniPublicAPIGeoInput::StaticClass()));
    // Load the cube static mesh asset
    UStaticMesh* const Cube = Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(), nullptr, TEXT("/Engine/BasicShapes/Cube.Cube")));
    // Set the input object array for our geometry input, in this case containing only the cube
    GeoInput->SetInputObjects({ Cube });
    // Set the input on the instantiated HDA via the wrapper
    InWrapper->SetInputAtIndex(0, GeoInput);
    // TODO: Create curve input
    // Since we are done with setting the initial values, we can unbind from the delegate
    InWrapper->GetOnPostInstantiationDelegate().RemoveDynamic(this, &ACurveInputExample::SetInputs);
}*/
#endif