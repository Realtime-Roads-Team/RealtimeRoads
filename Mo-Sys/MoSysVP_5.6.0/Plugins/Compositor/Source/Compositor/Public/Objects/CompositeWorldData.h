// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/AssetUserData.h"
#include "CompositeWorldData.generated.h"

class UComposite;
class ACompositePlanarReflection;

/**
 * Asset user data added to the world settings which keeps track of the Composite used in the world.
 */
UCLASS()
class COMPOSITOR_API UCompositeWorldData : public UAssetUserData
{
	GENERATED_BODY()
	
public:
	UCompositeWorldData();

private:
	/** Is the world composite applied to the view. */
	UPROPERTY(Category = "CompositeWorldData", EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	bool bIsWorldCompositeEnabled;

	/** Visualize the composite meshes by projecting a world aligned grid. */
	UPROPERTY(Category = "Debug", EditAnywhere, BlueprintReadWrite, Transient, meta = (AllowPrivateAccess = "true"))
	bool bDebugVisualizeCompositeMeshes;

	/** Output the shadows to the RGB for debugging. */
	UPROPERTY(Category = "Debug", EditAnywhere, BlueprintReadWrite, Transient, meta = (AllowPrivateAccess = "true"))
	bool bDebugVisualizeShadows;

	/** Output alpha in rgb for debugging. */
	UPROPERTY(Category = "Debug", EditAnywhere, BlueprintReadWrite, Transient, meta = (AllowPrivateAccess = "true"))
	bool bDebugVisualizeAlphaInRgb;

	/**
	* Is camera motion blur enabled in the scene.
	* This is disabled by default to minimize artifacts on the composite mask in the scene.
	* Only enable this when you are not keying.
	* This only disables motion blur caused by the movement of the camera, object based motion blur will still work when this is disabled.
	*/
	UPROPERTY(Category = "SceneView", EditAnywhere, BlueprintReadWrite, Transient, meta = (AllowPrivateAccess = "true"))
	bool bEnableCameraMotionBlur;
	
	/** The composite stored for this world, this is instanced so the user can adjust the variables easily per world while still able to have global settings using the parent asset. */
	UPROPERTY(Category = "CompositeWorldData", EditInstanceOnly, Export, Instanced, BlueprintReadOnly, NoClear, meta = (AllowPrivateAccess = "true"))
	UComposite* WorldComposite;

	/** The planar reflection active for the composite. */
	UPROPERTY(Category = "PlanarReflectionWorldData", EditAnywhere)
	ACompositePlanarReflection* CompositePlanarReflection;
	
public:	
	/** Is the world composite applied to the view. */
	FORCEINLINE bool GetIsWorldCompositeEnabled() const { return bIsWorldCompositeEnabled; };

	/** Mo-Sys added Set if the world composite applied to the view. */
	FORCEINLINE void SetIsWorldCompositeEnabled(bool IsWorldCompositeEnabled) { bIsWorldCompositeEnabled = IsWorldCompositeEnabled; };

	/** Visualize the composite meshes by projecting a world aligned grid. */
	FORCEINLINE bool GetDebugVisualizeCompositeMeshes() const { return bDebugVisualizeCompositeMeshes; }

	/** Output the shadows to the RGB for debugging. */
	FORCEINLINE bool GetDebugVisualizeShadows() const { return bDebugVisualizeShadows; }

	/** Output alpha in rgb for debugging. */
	FORCEINLINE bool GetDebugVisualizeAlphaInRgb() const { return bDebugVisualizeAlphaInRgb; }

	/** Is camera motion blur enabled in the scene. */
	FORCEINLINE bool GetEnableCameraMotionBlur() const { return bEnableCameraMotionBlur; }

	/** The composite stored for this world. */
	FORCEINLINE UComposite* GetWorldComposite() const { return WorldComposite; }

	UFUNCTION(Category = "Compositor|Composite|WorldData")
	ACompositePlanarReflection* GetCompositePlanarReflection() const;

	UFUNCTION(Category = "Compositor|Composite|WorldData", BlueprintCallable)
	void SetCompositePlanarReflection(ACompositePlanarReflection* NewCompositePlanarReflection);

#if WITH_EDITOR
	virtual void PreEditChange(FProperty* PropertyAboutToChange) override;
	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& e) override;
#endif
};
