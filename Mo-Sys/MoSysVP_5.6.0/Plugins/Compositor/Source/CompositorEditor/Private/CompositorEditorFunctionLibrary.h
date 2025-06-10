#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"

#include "CompositorEditorFunctionLibrary.generated.h"


// Mo-Sys added
UCLASS()
class UCompositorEditorFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	/** Get the editor or game world depending on if we are in PIE */
	UFUNCTION(BlueprintCallable, Category = "Compositor Helpers")
	static UWorld* GetCurrentWorld();
};
