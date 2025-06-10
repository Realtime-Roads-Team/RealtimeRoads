// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Interfaces/CompositeUpdateInterface.h"
#include "Objects/CompositePostProcessVolume.h"

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"

#include "UnrealClient.h" // FViewport
#include "Engine/Scene.h" // FPostProcessSettings

#if WITH_EDITOR
#include "EditorViewportClient.h"
#endif

#include "CompositorSubsystem.generated.h"

class ACompositeMesh;
class UCompositeWorldData;
class FCompositeViewExtension;
class UTextureRenderTarget2D;
class UMediaPlayer;
class UMediaTexture;
class UMaterialInterface;
class UMaterialInstanceDynamic;
class USoftMaskCaptureComponent;
class UMaterialParameterCollection;
class UWorld;

DECLARE_LOG_CATEGORY_EXTERN(LogCompositor, Log, All);

/**
 * The subsystem for managing the world composite data.
 */
UCLASS()
class COMPOSITOR_API UCompositorSubsystem : public UWorldSubsystem, public FTickableGameObject
{
	GENERATED_BODY()
	
public:
	DECLARE_MULTICAST_DELEGATE(FOnCompositeWorldDataAdded);
	FOnCompositeWorldDataAdded OnCompositeWorldDataAdded;

	DECLARE_MULTICAST_DELEGATE(FOnCompositeWorldDataRemoved)
	FOnCompositeWorldDataRemoved OnCompositeWorldDataRemoved;

	DECLARE_MULTICAST_DELEGATE_OneParam(FOnCompositeUpdateInterfaceRegistered, TScriptInterface<ICompositeUpdateInterface>);
	FOnCompositeUpdateInterfaceRegistered OnCompositeUpdateInterfaceRegistered;

	DECLARE_MULTICAST_DELEGATE_OneParam(FOnCompositeUpdateInterfaceUnregistered, TScriptInterface<ICompositeUpdateInterface>);
	FOnCompositeUpdateInterfaceUnregistered OnCompositeUpdateInterfaceUnregistered;
	
	/** Override to control if the Subsystem should be created at all.
	* For example you could only have your system created on servers.
	* It's important to note that if using this is becomes very important to null check whenever getting the Subsystem.
	*
	* Note: This function is called on the CDO prior to instances being created!
	*
	*/
	virtual bool ShouldCreateSubsystem(UObject* Outer) const override;

	/** Implement this for initialization of instances of the system */
	virtual void Initialize(FSubsystemCollectionBase& Collection);

	/** Implement this for deinitialization of instances of the system */
	virtual void Deinitialize();

private:
	/** Called right after begin play of all actors has been executed. */
	void OnWorldBeginPlayCallback();

	UFUNCTION()
	void UpdateLensData();

public:
	UFUNCTION(Category = "Compositor|Subsystem", BlueprintCallable)
	void RegisterCompositeUpdateInterface(TScriptInterface<ICompositeUpdateInterface> CompositeUpdateInterface);

	UFUNCTION(Category = "Compositor|Subsystem", BlueprintCallable)
	void UnregisterCompositeUpdateInterface(TScriptInterface<ICompositeUpdateInterface> CompositeUpdateInterface);

	//~ Begin FTickableGameObject Interface
	/** return the stat id to use for this tickable **/
	virtual void Tick(float DeltaTime) override;
	virtual bool IsTickable() const override;
	virtual ETickableTickType GetTickableTickType() const override;
	TStatId GetStatId() const override { RETURN_QUICK_DECLARE_CYCLE_STAT(UAutoDestroySubsystem, STATGROUP_Tickables); }
	virtual bool IsTickableInEditor() const override { return true; }
	//~ End FTickableGameObject Interface

	/** Called by a Composite asset when it has changed and it is part of the current world. */
	UFUNCTION()
	void OnCompositeUpdate_Internal();

	UFUNCTION(Category = "Compositor|Subsystem", BlueprintCallable)
	bool TryPlayMediaInputSource(bool bForceReopen = false);

	// Returns the current Composite used in the world.
	UFUNCTION(Category = Compositor, BlueprintPure)
	UComposite* GetWorldComposite() const;

	UFUNCTION(Category = Compositor, BlueprintPure)
	FIntPoint GetMediaInputTextureSize() const;

	UFUNCTION(Category = Compositor, BlueprintPure) 
	FIntPoint GetViewportSize() const;

	/** Get the viewport in which the composite takes place. */
	FViewport* GetCompositeViewport() const;

	// Mo-Sys changed
	/** Get the current level editor viewport client or nullptr if in PIE */
	class FLevelEditorViewportClient* GetLevelEditorViewportClient() const;

	// Mo-Sys changed
	UFUNCTION(Category = "Compositor|Subsystem", BlueprintCallable)
	void SetMediaInputDefaultFallbackTexture(bool bSet);

	// Mo-Sys added
	UFUNCTION(Category = "Compositor|Subsystem", BlueprintCallable)
	void SetIsWorldCompositeEnabled(bool IsWorldCompositeEnabled);

private:
	UPROPERTY(Category = "Media Input", VisibleAnywhere, BlueprintReadOnly, AdvancedDisplay, meta = (AllowPrivateAccess = "true"))
	bool bShowMediaInputDefaultFallbackTexture;

	UPROPERTY(Category = "Media Input", VisibleAnywhere, BlueprintReadOnly, AdvancedDisplay, meta = (AllowPrivateAccess = "true"))
	UTexture* MediaInputDefaultFallbackTexture;

	/** The media player used to play the media input source. */
	UPROPERTY(Category = "Media Input", VisibleAnywhere, BlueprintReadOnly, AdvancedDisplay, meta = (AllowPrivateAccess = "true"))
	UMediaPlayer* MediaInputPlayer;

	/** The media texture used by the media input player. */
	UPROPERTY(Category = "Media Input", VisibleAnywhere, BlueprintReadOnly, AdvancedDisplay, meta = (AllowPrivateAccess = "true"))
	UMediaTexture* MediaInputTexture;

	UPROPERTY(Transient)
	USoftMaskCaptureComponent* SoftMaskCaptureComponent;

	/** The render target the CompositeKeyer is drawing to. */
	UPROPERTY(Category = "Media CompositeKeyer", VisibleAnywhere, BlueprintReadOnly, AdvancedDisplay, meta = (AllowPrivateAccess = "true"))
	UTextureRenderTarget2D* MediaInputKeyedRenderTarget;

	/** The fallback for not having a CompositeKeyer. */
	UPROPERTY(Category = "Media CompositeKeyer", VisibleAnywhere, BlueprintReadOnly, AdvancedDisplay, meta = (AllowPrivateAccess = "true"))
	UMaterialInterface* MediaInputCompositeKeyerDisabledFallbackMaterial;

	/** The default MID for when there is no keyer avaialble. */
	UPROPERTY(Category = "Media CompositeKeyer", VisibleAnywhere, BlueprintReadOnly, AdvancedDisplay, meta = (AllowPrivateAccess = "true"))
	UMaterialInstanceDynamic* MediaInputCompositeKeyerDisabledFallbackMID;

	/** The default undistort texture used, is just black so doesn't do anything. */
	UPROPERTY(Category = "Lens Data", VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	float CameraFovWithoutOverscan;

	/** The overscan factor used by the live link lens distortion. */
	UPROPERTY(Category = "Lens Data", VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	float CameraOverscanFactor;

	/** The default undistort texture used, is just black so doesn't do anything. */
	UPROPERTY(Category = "Lens Data", VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	UTexture2D* DefaultUndistortTexture;

	/** The undistort texture coming from live link. */
	UPROPERTY(Category = "Lens Data", VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	UTexture* CurrentUndistortTexture;

	/** The distort texture coming from live link. (?) */
	UPROPERTY(Category = "Lens Data", VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	UTexture* CurrentDistortTexture;
	
	/** The render target the lens undistort is drawing to. */
	UPROPERTY(Category = "Lens Data", VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	UTextureRenderTarget2D* MediaInputUndistortedTexture;

	/** The fallback for not having lens data. */
	UPROPERTY(Category = "Lens Data", VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	UMaterialInterface* MediaInputUndistortMaterial;

	/** The compositor dynamic post processing material injected after the tone mapper. */
	UPROPERTY(Category = "Lens Data", VisibleAnywhere, BlueprintReadOnly, Transient, meta = (AllowPrivateAccess = "true"))
	UMaterialInstanceDynamic* MediaInputUndistortMID;

	/** The render target of the active composite planar reflection. */
	UPROPERTY(Category = "Lens Data", VisibleAnywhere, BlueprintReadOnly, AdvancedDisplay, meta = (AllowPrivateAccess = "true"))
	UTextureRenderTarget2D* CompositePlanarReflectionRenderTarget;

	/** All the Composite Update Interfaces registered in the world. */
	UPROPERTY(Category = "Compositor|Subsystem", VisibleAnywhere, BlueprintReadOnly, Transient, meta = (AllowPrivateAccess = "true"))
	TArray<TScriptInterface<ICompositeUpdateInterface>> CompositeUpdateInterfaceArray;

	/** The Compositor World Settings Asset User Data which contains the Composite used in this world. */
	UPROPERTY(Transient)
	UCompositeWorldData* CompositeWorldData;

	/** Global material parameters for the Compositor. */
	UPROPERTY(Transient)
	UMaterialParameterCollection* CompositorMaterialParameterCollection;
	
	FCompositePostProcessVolume CompositePostProcessVolume;

	UPROPERTY(Category = "Compositor|Subsystem", VisibleAnywhere, Transient)
	UMaterialInstanceDynamic* AfterTonemappingMaterialDynamic;

	TSharedPtr<FCompositeViewExtension, ESPMode::ThreadSafe> CompositeViewExtension;

	void ComputeCompositePostProcess(FVector ViewLocation, FSceneView* SceneView);

	UPROPERTY(Transient)
	UTextureRenderTarget2D* PlanarReflectionTexture;

	void ClearReflectionCaptureRenderTarget();

	bool DistortionUndistortionTexturesSet = false;

#if WITH_EDITOR
	bool bIsModifyViewportClientViewRegistered;

	// Used to play media after coming back from PIE.
	bool bPieJustEnded;

	void OnEndPIE(const bool bIsSimulating);

	void RegisterModifyViewportClientView(bool bRegister);

	/** View modifier for level editor viewports. */
	void ModifyViewportClientView(FEditorViewportViewModifierParams& EditorViewportViewModifierParams);
#endif // WITH_EDITOR

public:
	UFUNCTION(Category = "Compositor|Subsystem", BlueprintCallable)
	UCompositeWorldData* FindOrAddCompositeWorldData();

	UFUNCTION(Category = "Compositor|Subsystem", BlueprintCallable)
	UCompositeWorldData* GetCompositeWorldData();

	UFUNCTION(Category = "Compositor|Subsystem", BlueprintCallable)
	void RemoveCompositeWorldData();

	FORCEINLINE TArray<TScriptInterface<ICompositeUpdateInterface>> GetCompositeUpdateInterfaceArray() const { return CompositeUpdateInterfaceArray; }

	FORCEINLINE UMaterialParameterCollection* GetCompositorMaterialParameterCollection() const { return CompositorMaterialParameterCollection; }

	FORCEINLINE UMediaPlayer* GetMediaInputPlayer() const { return MediaInputPlayer; }
	FORCEINLINE UMediaTexture* GetMediaInputTexture() const { return MediaInputTexture; }
	FORCEINLINE UTexture* GetMediaInputDefaultFallbackTexture() const { return MediaInputDefaultFallbackTexture; }

	UFUNCTION(Category = "Compositor|Subsystem", BlueprintPure)
	USoftMaskCaptureComponent* GetSoftMaskCaptureComponent() const;
};
