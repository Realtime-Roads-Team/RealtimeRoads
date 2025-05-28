#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HoudiniPublicAPI.h"
#include "HoudiniPublicAPIBlueprintLib.h"
#include "HoudiniPublicAPIAssetWrapper.h"
#include "HoudiniAsset.h"
#include "HapiContainer.generated.h"

UCLASS(Blueprintable)
class REALTIMEROADSSYSTEMS_API UHapiContainer : public UObject
{
    GENERATED_BODY()

public:
    UHapiContainer(const FObjectInitializer& ObjectInitializer);

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Debug Tools")
    int32 CubesToSpawn;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Debug Tools")
    UHoudiniAsset* TestHDA;

#if WITH_EDITOR
    UFUNCTION(CallInEditor, Category = "Debug Tools")
    void StartHapi();

    UFUNCTION(CallInEditor, Category = "Debug Tools")
    void TestInput();

    UFUNCTION(BlueprintCallable, Category = "HAPI")
    bool IsHapiServerRunning() const;
#endif

protected:
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
    void SetInitialParameterValues(UHoudiniPublicAPIAssetWrapper* InWrapper);

    UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
    void SetInputs(UHoudiniPublicAPIAssetWrapper* InWrapper);

    UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
    void PrintOutputs(UHoudiniPublicAPIAssetWrapper* InWrapper);

    UPROPERTY(BlueprintReadWrite)
    UHoudiniPublicAPIAssetWrapper* AssetWrapper;

private:
    UHoudiniPublicAPI* const API = UHoudiniPublicAPIBlueprintLib::GetAPI();
};
