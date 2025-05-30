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

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RealtimeRoadsHapi")
    int32 CubesToSpawn;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RealtimeRoadsHapi")
    UHoudiniAsset* TestHDA;

#if WITH_EDITOR
    UFUNCTION(CallInEditor, Category = "RealtimeRoadsHapi")
    FString StartHapi();

    UFUNCTION(CallInEditor, Category = "RealtimeRoadsHapi")
    void TestInput();

    UFUNCTION(BlueprintCallable, Category = "RealtimeRoadsHapi")
    bool IsHapiServerRunning() const;
#endif

protected:
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "RealtimeRoadsHapi")
    void SetInitialParameterValues(UHoudiniPublicAPIAssetWrapper* InWrapper);

    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "RealtimeRoadsHapi")
    void SetInputs(UHoudiniPublicAPIAssetWrapper* InWrapper);

    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "RealtimeRoadsHapi")
    void PrintOutputs(UHoudiniPublicAPIAssetWrapper* InWrapper);

    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "RealtimeRoadsHapi")
    void BakeOutputsToScene(UHoudiniPublicAPIAssetWrapper* InWrapper);

    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "RealtimeRoadsHapi")
    void BakeOutputsToFile(UHoudiniPublicAPIAssetWrapper* InWrapper);

    UPROPERTY(BlueprintReadWrite, Category = "RealtimeRoadsHapi")
    UHoudiniPublicAPIAssetWrapper* AssetWrapper;

private:
    UHoudiniPublicAPI* const API = UHoudiniPublicAPIBlueprintLib::GetAPI();
};
