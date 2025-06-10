// Copyright Epic Games, Inc. All Rights Reserved.

#include "Subsystems/CompositorSubsystem.h"

#include "Engine/Engine.h" // GEngine

#include "CameraCalibrationSubsystem.h"
#include "Actors/CompositeMesh.h"
#include "Assets/Composite.h"
#include "Assets/CompositeKeyer.h"
#include "Components/SoftMaskCaptureComponent.h"
#include "Objects/CompositeWorldData.h"
#include "Objects/CompositeColorGrade.h"
#include "Objects/CompositeViewExtension.h"
#include "CompositeTypes.h"
#include "IDisplayCluster.h"

#include "GameFramework/GameModeBase.h"
#include "MoviePipelineGamemode.h"
#include "GameFramework/WorldSettings.h"
#include "Kismet/KismetMaterialLibrary.h"
#include "Kismet/KismetRenderingLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "MediaSource.h"
#include "MediaPlayer.h"
#include "MediaTexture.h"
#include "LensComponent.h"
#include "Cluster/IDisplayClusterClusterManager.h"
#include "Engine/TextureRenderTarget2D.h"
#include "Materials/MaterialInstanceDynamic.h"

#include "Materials/MaterialInterface.h"
#include "Materials/MaterialParameterCollection.h"

#include "Engine/Texture2D.h"


#if WITH_EDITOR
#include "Editor.h"
#include "Editor/EditorEngine.h"
// Mo-Sys changed
#include "SEditorViewport.h"
#endif

DEFINE_LOG_CATEGORY(LogCompositor);

bool UCompositorSubsystem::ShouldCreateSubsystem(UObject* Outer) const
{
	const FModuleManager& ModuleManager = FModuleManager::Get();
	const bool bUsingNDisplay = ModuleManager.IsModuleLoaded(FName("DisplayCluster"));
	if (bUsingNDisplay)
	{		
		const EDisplayClusterNodeRole DisplayClusterNodeRole = IDisplayCluster::Get().GetClusterMgr()->GetClusterRole();
		
		// If nDisplay is running and the engine is part of the cluster we don't create the compositor subsystem.
		if (DisplayClusterNodeRole != EDisplayClusterNodeRole::None)
		{
			UE_LOG(LogCompositor, Log, TEXT("Compositor Subsystem is not created because it is part of an nDisplay Cluster."));
			return false;
		}
	}	
	
	return Super::ShouldCreateSubsystem(Outer);
}

void UCompositorSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	UE_LOG(LogCompositor, Log, TEXT("Initializing Compositor Subsystem"));

	MediaInputDefaultFallbackTexture = Cast<UTexture2D>(FSoftObjectPath(TEXT("/Compositor/MediaFramework/T_Compositor_MediaInputFallback.T_Compositor_MediaInputFallback")).TryLoad());
	PlanarReflectionTexture = Cast<UTextureRenderTarget2D>(FSoftObjectPath(TEXT("/Compositor/CompositePlanarReflection/RT_CompositePlanarReflection.RT_CompositePlanarReflection")).TryLoad());

	MediaInputPlayer = Cast<UMediaPlayer>(FSoftObjectPath(TEXT("/Compositor/MediaFramework/MP_Compositor_MediaInput.MP_Compositor_MediaInput")).TryLoad());
	check(IsValid(MediaInputPlayer))
	MediaInputTexture = Cast<UMediaTexture>(FSoftObjectPath(TEXT("/Compositor/MediaFramework/MT_Compositor_MediaInput.MT_Compositor_MediaInput")).TryLoad());
	check(IsValid(MediaInputTexture))

	MediaInputKeyedRenderTarget = Cast<UTextureRenderTarget2D>(FSoftObjectPath(TEXT("/Compositor/CompositeKeyer/RT_MediaInputKeyed.RT_MediaInputKeyed")).TryLoad());
	UKismetRenderingLibrary::ClearRenderTarget2D(this, MediaInputKeyedRenderTarget, FLinearColor(0, 0, 0, 0));
	MediaInputCompositeKeyerDisabledFallbackMaterial = Cast<UMaterialInterface>(FSoftObjectPath(TEXT("/Compositor/CompositeKeyer/M_CompositeKeyerDisabledFallback.M_CompositeKeyerDisabledFallback")).TryLoad());
	MediaInputCompositeKeyerDisabledFallbackMID = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, MediaInputCompositeKeyerDisabledFallbackMaterial, FName("MediaKeyerDisabledFallbackMID"), EMIDCreationFlags::Transient);
	
	DefaultUndistortTexture = Cast<UTexture2D>(FSoftObjectPath(TEXT("/Compositor/LensData/T_DefaultUndistort.T_DefaultUndistort")).TryLoad());
	MediaInputUndistortedTexture = Cast<UTextureRenderTarget2D>(FSoftObjectPath(TEXT("/Compositor/LensData/RT_Compositor_MediaInputUndistorted.RT_Compositor_MediaInputUndistorted")).TryLoad());
	UKismetRenderingLibrary::ClearRenderTarget2D(this, MediaInputUndistortedTexture, FLinearColor(0, 0, 0, 0));
	MediaInputUndistortMaterial = Cast<UMaterialInterface>(FSoftObjectPath(TEXT("/Compositor/LensData/M_MediaInputUndistort.M_MediaInputUndistort")).TryLoad());
	MediaInputUndistortMID = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, MediaInputUndistortMaterial, FName("MediaInputUndistortMID"), EMIDCreationFlags::Transient);

	CompositorMaterialParameterCollection = Cast<UMaterialParameterCollection>(FSoftObjectPath(TEXT("/Compositor/Materials/ParameterCollections/MPC_Compositor")).TryLoad());

	// Mo-Sys changed
	CompositeWorldData = FindOrAddCompositeWorldData();

	UWorld* World = GetWorld();
	check(IsValid(World))
	if (IsValid(World))
	{
		World->OnBeginPostProcessSettings.AddUObject(this, &UCompositorSubsystem::ComputeCompositePostProcess);
		World->InsertPostProcessVolume(&CompositePostProcessVolume);

		AWorldSettings* WorldSetting = GetWorld()->GetWorldSettings();
		if (IsValid(WorldSetting) && !SoftMaskCaptureComponent)
		{
			UE_LOG(LogCompositor, Log, TEXT("Registering soft mask component."));
			SoftMaskCaptureComponent = NewObject<USoftMaskCaptureComponent>(WorldSetting, NAME_None, RF_Transient);
			SoftMaskCaptureComponent->RegisterComponent();
		}

		World->OnWorldBeginPlay.RemoveAll(this);
		World->OnWorldBeginPlay.AddUObject(this, &UCompositorSubsystem::OnWorldBeginPlayCallback);
	}

	// Mo-Sys Change - https://mo-sys.atlassian.net/browse/MVP-4419
	// Always force reopen the media source so it also shows up correct after switching levels.
	//TryPlayMediaInputSource(true);

	if (!HasAnyFlags(RF_ClassDefaultObject))
	{
		UE_LOG(LogCompositor, Log, TEXT("Initializing Scene View Extention"));
		CompositeViewExtension = FSceneViewExtensions::NewExtension<FCompositeViewExtension>(this);
	}

	ClearReflectionCaptureRenderTarget();

#if WITH_EDITOR
	bIsModifyViewportClientViewRegistered = false;
	FEditorDelegates::EndPIE.AddUObject(this, &UCompositorSubsystem::OnEndPIE);
#endif
}

void UCompositorSubsystem::Deinitialize()
{
	UE_LOG(LogCompositor, Log, TEXT("Deinitializing Compositor Subsystem"));

	if (SoftMaskCaptureComponent)
	{
		UE_LOG(LogCompositor, Log, TEXT("Unregistering soft mask component."));
		SoftMaskCaptureComponent->UnregisterComponent();
		SoftMaskCaptureComponent->DestroyComponent();
	}

	UWorld* World = GetWorld();
	check(IsValid(World));
	if (IsValid(World))
	{
		World->OnBeginPostProcessSettings.RemoveAll(this);
		World->RemovePostProcessVolume(&CompositePostProcessVolume);
		World->OnWorldBeginPlay.RemoveAll(this);
	}

	OnCompositeWorldDataAdded.Clear();
	OnCompositeWorldDataRemoved.Clear();
	OnCompositeUpdateInterfaceRegistered.Clear();
	OnCompositeUpdateInterfaceUnregistered.Clear();

#if WITH_EDITOR
	RegisterModifyViewportClientView(false);
	FEditorDelegates::EndPIE.RemoveAll(this);
#endif

	Super::Deinitialize();
}

void UCompositorSubsystem::OnWorldBeginPlayCallback()
{
	UE_LOG(LogCompositor, Log, TEXT("UCompositorSubsystem::OnWorldBeginPlayCallback"));
	if (CompositorMaterialParameterCollection)
	{
		AMoviePipelineGameMode* MoviePipelineGameMode = Cast<AMoviePipelineGameMode>(UGameplayStatics::GetGameMode(this));
		UKismetMaterialLibrary::SetScalarParameterValue(this, CompositorMaterialParameterCollection, FName("IsMovieRenderQueueEnabled"), MoviePipelineGameMode ? 1.F : 0.F);
	}
	CompositePostProcessVolume.InitializeMaterials(AfterTonemappingMaterialDynamic);
	DistortionUndistortionTexturesSet = false;

	TryPlayMediaInputSource(false);
}

void UCompositorSubsystem::UpdateLensData()
{
	if (GEngine)
	{		
		CurrentUndistortTexture = DefaultUndistortTexture;
		CameraFovWithoutOverscan = 90;
		CameraOverscanFactor = 1.F;
		
#if WITH_EDITORONLY_DATA
		UCameraComponent* EditorCameraComponent = nullptr;
		// Mo-Sys changed
		FLevelEditorViewportClient* LevelEditorViewportClient = GetLevelEditorViewportClient();		
		if (LevelEditorViewportClient)
		{
			EditorCameraComponent = LevelEditorViewportClient->GetCameraComponentForView();
		}
		
		if (GEditor && (GEditor->bIsSimulatingInEditor || !GEditor->IsPlayingSessionInEditor()) && (!GEditor->IsPlaySessionRequestQueued() || GEditor->IsSimulateInEditorQueued()))
		{
			if (IsValid(EditorCameraComponent))
			{
				CameraFovWithoutOverscan = EditorCameraComponent->FieldOfView;
			}
			else if (LevelEditorViewportClient)
			{
				CameraFovWithoutOverscan = LevelEditorViewportClient->FOVAngle;

				// FoV can sometimes be invalid in the editor when going between play modes, just make sure it is not lower than 5.
				if (CameraFovWithoutOverscan < 5.F)
				{
					CameraFovWithoutOverscan = 5.F;
				}
			}
		}
#endif

		const APlayerCameraManager* PlayerCameraManager = UGameplayStatics::GetPlayerCameraManager(this, 0);
		if (IsValid(PlayerCameraManager))
		{
			CameraFovWithoutOverscan = PlayerCameraManager->GetFOVAngle();
		}
		
		UCameraCalibrationSubsystem* CameraCalibrationSubsystem = GEngine->GetEngineSubsystem<UCameraCalibrationSubsystem>();
		if (IsValid(CameraCalibrationSubsystem))
		{
			const APlayerController* PlayerController = UGameplayStatics::GetPlayerController(this, 0);
			if (IsValid(PlayerController))
			{
				const AActor* ViewTarget = PlayerController->GetViewTarget();
				if (IsValid(ViewTarget))
				{
					UCineCameraComponent* CineCameraComponent = Cast<UCineCameraComponent>(ViewTarget->GetComponentByClass(UCineCameraComponent::StaticClass()));
					ULensComponent* LensComponent = Cast<ULensComponent>(ViewTarget->GetComponentByClass(ULensComponent::StaticClass()));
					if (IsValid(CineCameraComponent) && IsValid(LensComponent))
					{
					
						const ULensDistortionModelHandlerBase* DistortionModelHandlerBase = LensComponent->GetLensDistortionHandler();
						if (IsValid(DistortionModelHandlerBase))
						{
							// The lens distortion component does not have a public function to check if the distortion is applied (4.27) so we just check of the distort MID is on the camera.
							const TArray<FWeightedBlendable> WeightedBlendables = CineCameraComponent->PostProcessSettings.WeightedBlendables.Array;
							bool bIsDistortionApplied = false;
							for (int32 i = 0, count = WeightedBlendables.Num(); i < count; ++i)
							{
								if (WeightedBlendables[i].Object == DistortionModelHandlerBase->GetDistortionMID())
								{
									if (WeightedBlendables[i].Weight == 1.F)
									{
										bIsDistortionApplied = true;
										break;
									}
								}
							}
						
							if (bIsDistortionApplied)
							{							
								CurrentUndistortTexture = DistortionModelHandlerBase->GetUndistortionDisplacementMap();
								CurrentDistortTexture = DistortionModelHandlerBase->GetDistortionDisplacementMap();
								CameraOverscanFactor = DistortionModelHandlerBase->GetOverscanFactor();
								/**
								 * \file "Subsystems/CompositorSubsystem.h"
								 * \todo This is wrong for our lens distortion?
								 */
								float FocalLenth = CineCameraComponent->CurrentFocalLength;
								// Overrides the focal length with the original focal length in case it is adjusted for overscan.
								CameraFovWithoutOverscan = FMath::RadiansToDegrees(2.0f * FMath::Atan(CineCameraComponent->Filmback.SensorWidth / (2.0f * FocalLenth)));
								
								CompositePostProcessVolume.SetDistortionUndistortion(DistortionModelHandlerBase->GetDistortionDisplacementMap(), DistortionModelHandlerBase->GetUndistortionDisplacementMap(), AfterTonemappingMaterialDynamic);
								DistortionUndistortionTexturesSet = true;
							}							
						}
					}
				}
			}
			else
			{
				// Mo-Sys added
				// Not in PIE (there is no PlayerController)
				// Duplicate of above for ease of diff
				/**
				 * \file "Subsystems/CompositorSubsystem.h"
				 * \todo Should not find actors on Tick!
				 * \todo Should use MoSysTags::TAG_CAMERA but would need to include from VP Pro module
				 */
				TArray<AActor*>Actors;
				UGameplayStatics::GetAllActorsWithTag(this, "MoSysCamera", Actors);
				/**
				 * \file "Subsystems/CompositorSubsystem.h"
				 * \todo assuming one camera...
				 */
				if (Actors.Num() > 0)
				{
					UCineCameraComponent* CineCameraComponent = Cast<UCineCameraComponent>(Actors[0]->GetComponentByClass(UCineCameraComponent::StaticClass()));
					ULensComponent* LensComponent = Cast<ULensComponent>(Actors[0]->GetComponentByClass(ULensComponent::StaticClass()));
					if (IsValid(CineCameraComponent) && IsValid(LensComponent))
					{
						const ULensDistortionModelHandlerBase* DistortionModelHandlerBase = LensComponent->GetLensDistortionHandler();
						if (IsValid(DistortionModelHandlerBase))
						{
							// The lens distortion component does not have a public function to check if the distortion is applied (4.27) so we just check of the distort MID is on the camera.
							const TArray<FWeightedBlendable> WeightedBlendables = CineCameraComponent->PostProcessSettings.WeightedBlendables.Array;
							bool bIsDistortionApplied = false;
							for (int32 i = 0, count = WeightedBlendables.Num(); i < count; ++i)
							{
								if (WeightedBlendables[i].Object == DistortionModelHandlerBase->GetDistortionMID())
								{
									if (WeightedBlendables[i].Weight == 1.F)
									{
										bIsDistortionApplied = true;
										break;
									}
								}
							}

							if (bIsDistortionApplied)
							{
								CurrentUndistortTexture = DistortionModelHandlerBase->GetUndistortionDisplacementMap();
								CameraOverscanFactor = DistortionModelHandlerBase->GetOverscanFactor();
								/**
								 * \file "Subsystems/CompositorSubsystem.h"
								 * \todo This is wrong for our lens distortion?
								 */
								float FocalLenth = CineCameraComponent->CurrentFocalLength;
								// Overrides the focal length with the original focal length in case it is adjusted for overscan.
								CameraFovWithoutOverscan = FMath::RadiansToDegrees(2.0f * FMath::Atan(CineCameraComponent->Filmback.SensorWidth / (2.0f * FocalLenth)));
							}
						}
					}
				}
			}
		}
		

		if (CompositorMaterialParameterCollection)
		{
			UKismetMaterialLibrary::SetScalarParameterValue(this, CompositorMaterialParameterCollection, "CameraFovWithoutOverscan", CameraFovWithoutOverscan);
			UKismetMaterialLibrary::SetScalarParameterValue(this, CompositorMaterialParameterCollection, "CameraOverscanFactor", CameraOverscanFactor);
		}

		if (MediaInputUndistortMID)
		{
			MediaInputUndistortMID->SetTextureParameterValue("UndistortTexture", CurrentUndistortTexture);
			UKismetRenderingLibrary::DrawMaterialToRenderTarget(this, MediaInputUndistortedTexture, MediaInputUndistortMID);
		}
	}
}

void UCompositorSubsystem::RegisterCompositeUpdateInterface(TScriptInterface<ICompositeUpdateInterface> CompositeUpdateInterface)
{
	UObject* InterfaceObject = CompositeUpdateInterface.GetObject();

	if (!IsValid(InterfaceObject))
	{
		return;
	}

	AActor* Actor = Cast<AActor>(InterfaceObject);
	// This check makes sure if the interface object is an Actor to not include preview actors to the list (drag/drop into the scene we create temporary actors).
	if (Actor && Actor->HasAnyFlags(RF_Transient))
	{
		return;
	}

	const int32 Index = CompositeUpdateInterfaceArray.AddUnique(CompositeUpdateInterface);
	if (Index >= 0)
	{
		// Always do an update for newly registered interfaces if a composite is already active.
		UComposite* WorldComposite = GetWorldComposite();
		if (IsValid(WorldComposite))
		{
			CompositeUpdateInterface->OnCompositeUpdate(*WorldComposite);
		}

		OnCompositeUpdateInterfaceRegistered.Broadcast(CompositeUpdateInterface);
	}
}

void UCompositorSubsystem::UnregisterCompositeUpdateInterface(TScriptInterface<ICompositeUpdateInterface> CompositeUpdateInterface)
{
	const int32 Index = CompositeUpdateInterfaceArray.Remove(CompositeUpdateInterface);
	if (Index >= 0)
	{
		OnCompositeUpdateInterfaceUnregistered.Broadcast(CompositeUpdateInterface);
	}
}

void UCompositorSubsystem::Tick(float DeltaTime)
{
	const UWorld* World = GetWorld();
	const UComposite* WorldComposite = GetWorldComposite();

	if (IsValid(World) && IsValid(CompositeWorldData) && IsValid(WorldComposite))
	{
#if WITH_EDITOR
		if (!bIsModifyViewportClientViewRegistered)
		{
			// Mo-Sys modified
			RegisterModifyViewportClientView(true);
		}

		// Call TryPlayMediaInputSource when coming back from PIE. This does not work in the EndPIE event itself...
		if (bPieJustEnded)
		{
			bPieJustEnded = false;
			TryPlayMediaInputSource(true);
		}

#endif // WITH_EDITOR

		// Update the media input related render target's size so it matches the media input texture size. 

		const FIntPoint MediaTextureSize = GetMediaInputTextureSize();

		if (IsValid(MediaInputKeyedRenderTarget))
		{
			// Only update if the texture does not have the same size already.
			if (MediaTextureSize.X != MediaInputKeyedRenderTarget->SizeX || MediaTextureSize.Y != MediaInputKeyedRenderTarget->SizeY)
			{
				MediaInputKeyedRenderTarget->ResizeTarget(MediaTextureSize.X, MediaTextureSize.Y);
			}
		}
		if (IsValid(MediaInputUndistortedTexture))
		{
			// Only update if the texture does not have the same size already.
			if (MediaTextureSize.X != MediaInputUndistortedTexture->SizeX || MediaTextureSize.Y != MediaInputUndistortedTexture->SizeY)
			{
				MediaInputUndistortedTexture->ResizeTarget(MediaTextureSize.X, MediaTextureSize.Y);
			}
		}

		UCompositeKeyer* CompositeKeyer = WorldComposite->GetMediaInputKeyer();
		UTexture* ActiveMediaTexture;
		if (bShowMediaInputDefaultFallbackTexture)
		{
			ActiveMediaTexture = MediaInputDefaultFallbackTexture;
		}
		else
		{
			ActiveMediaTexture = MediaInputTexture;
		}

		if (CompositorMaterialParameterCollection)
		{
			if (IsValid(CompositeKeyer) && CompositeKeyer->GetIsKeyerEnabled())
			{
				CompositeKeyer->UpdateCompositeKeyer(this);
				CompositeKeyer->GetCompositeKeyerMID()->SetTextureParameterValue("Compositor_MediaInputTexture", ActiveMediaTexture);
				UKismetMaterialLibrary::SetScalarParameterValue(this, CompositorMaterialParameterCollection, FName("IsKeyerEnabled"), true);
			}
			else
			{
				MediaInputCompositeKeyerDisabledFallbackMID->SetTextureParameterValue("Compositor_MediaInputTexture", ActiveMediaTexture);
				UKismetRenderingLibrary::DrawMaterialToRenderTarget(this, MediaInputKeyedRenderTarget, MediaInputCompositeKeyerDisabledFallbackMID);
				UKismetMaterialLibrary::SetScalarParameterValue(this, CompositorMaterialParameterCollection, FName("IsKeyerEnabled"), false);
			}			
		}
	}

	UpdateLensData();
}

// Make sure the tick function is only called for the subsystem
bool UCompositorSubsystem::IsTickable() const
{
	if (GetWorld())
	{
#if WITH_EDITOR
		if (GEditor)
		{
			FWorldContext* WorldContext = GEditor->GetPIEWorldContext();
			if (WorldContext)
			{
				return WorldContext->World() == GetWorld();
			}
			return GEditor->GetEditorWorldContext(false).World() == GetWorld();
		}
#endif
		return true;
	}
	return false;
}

ETickableTickType UCompositorSubsystem::GetTickableTickType() const
{
	return HasAnyFlags(RF_ClassDefaultObject) || !GetWorld() || GetWorld()->IsNetMode(NM_DedicatedServer) ? ETickableTickType::Never : ETickableTickType::Conditional;
}

void UCompositorSubsystem::OnCompositeUpdate_Internal()
{
	UComposite* WorldComposite = GetWorldComposite();
	
	if (!IsValid(WorldComposite))
	{
		UE_LOG(LogCompositor, Error, TEXT("Can't do a composite update since the World Composite is null."));
		return;
	}
	
	for (TScriptInterface<ICompositeUpdateInterface> CompositeUpdateInterface : CompositeUpdateInterfaceArray)
	{
		CompositeUpdateInterface->OnCompositeUpdate(*WorldComposite);
	}
}

void UCompositorSubsystem::ComputeCompositePostProcess(FVector ViewLocation, FSceneView* SceneView)
{
	const UComposite* WorldComposite = GetWorldComposite();
	
	if (IsValid(CompositeWorldData) && IsValid(WorldComposite) && CompositorMaterialParameterCollection)
	{
		UKismetMaterialLibrary::SetScalarParameterValue(this, CompositorMaterialParameterCollection, FName("EnableSoftMask"), WorldComposite->GetEnableSoftMask());		
		const float ShadowsOffset = WorldComposite->GetShadowsOffset();
		UKismetMaterialLibrary::SetScalarParameterValue(this, CompositorMaterialParameterCollection, FName("ShadowsBlackLevel"), WorldComposite->GetShadowsBlackLevel() + ShadowsOffset);
		UKismetMaterialLibrary::SetScalarParameterValue(this, CompositorMaterialParameterCollection, FName("ShadowsWhiteLevel"), WorldComposite->GetShadowsWhiteLevel() + ShadowsOffset);
		UKismetMaterialLibrary::SetScalarParameterValue(this, CompositorMaterialParameterCollection, FName("ShadowsGamma"), WorldComposite->GetShadowsGamma());
		UKismetMaterialLibrary::SetVectorParameterValue(this, CompositorMaterialParameterCollection, FName("ShadowsTint"), WorldComposite->GetShadowsTint());

		UKismetMaterialLibrary::SetScalarParameterValue(this, CompositorMaterialParameterCollection, FName("EnablePlanarReflection"), WorldComposite->GetEnablePlanarReflection());
		UKismetMaterialLibrary::SetVectorParameterValue(this, CompositorMaterialParameterCollection, FName("PlanarReflectionColor"), WorldComposite->GetPlanarReflectionColor());
		UKismetMaterialLibrary::SetScalarParameterValue(this, CompositorMaterialParameterCollection, FName("PlanarReflectionDistortionIntensity"), WorldComposite->GetPlanarReflectionDistortionIntensity());
		UKismetMaterialLibrary::SetScalarParameterValue(this, CompositorMaterialParameterCollection, FName("PlanarReflectionDistortionOffset"), WorldComposite->GetPlanarReflectionDistortionOffset());

		UKismetMaterialLibrary::SetScalarParameterValue(this, CompositorMaterialParameterCollection, FName("MediaBlendNone"), WorldComposite->GetMediaBlend() == EMediaBlend::None ? 1.F : 0.F);
		UKismetMaterialLibrary::SetScalarParameterValue(this, CompositorMaterialParameterCollection, FName("MediaBlendPreToneCurve"), WorldComposite->GetMediaBlend() == EMediaBlend::PreToneCurve ? 1.F : 0.F);
		UKismetMaterialLibrary::SetScalarParameterValue(this, CompositorMaterialParameterCollection, FName("BrightnessMaskGamma"), WorldComposite->GetBrightnessMaskGamma());

		const EOutputAlpha OutputAlpha = WorldComposite->GetOutputAlpha();
		UKismetMaterialLibrary::SetScalarParameterValue(this, CompositorMaterialParameterCollection, FName("OutputAlphaInvertedOpacity"), OutputAlpha == EOutputAlpha::InvertedOpacity ? 1.F : 0.F);
		UKismetMaterialLibrary::SetScalarParameterValue(this, CompositorMaterialParameterCollection, FName("OutputAlphaWhite"), OutputAlpha == EOutputAlpha::White ? 1.F : 0.F);

		const bool bOutputAlphaOverride = (OutputAlpha == EOutputAlpha::White || OutputAlpha == EOutputAlpha::Black) && !CompositeWorldData->GetDebugVisualizeCompositeMeshes() && !CompositeWorldData->GetDebugVisualizeShadows();
		UKismetMaterialLibrary::SetScalarParameterValue(this, CompositorMaterialParameterCollection, FName("OutputAlphaOverride"), bOutputAlphaOverride ? 1.F : 0.F);

		UKismetMaterialLibrary::SetScalarParameterValue(this, CompositorMaterialParameterCollection, FName("OutputRgbEncodingSrgb"), WorldComposite->GetOutputRgbEncoding() == EOutputRgbEncoding::Srgb ? 1.F : 0.F);

		UCompositeColorGrade* CompositeColorGrade = WorldComposite->GetCompositeColorGrade();
		if (CompositeColorGrade)
		{
			const FColorGradePerRangeSettings ColorGradeScene = CompositeColorGrade->ColorGradeScene;
			UKismetMaterialLibrary::SetVectorParameterValue(this, CompositorMaterialParameterCollection, FName("ColorGradeSceneSaturation"), FLinearColor(ColorGradeScene.Saturation));
			UKismetMaterialLibrary::SetVectorParameterValue(this, CompositorMaterialParameterCollection, FName("ColorGradeSceneContrast"), FLinearColor(ColorGradeScene.Contrast));
			UKismetMaterialLibrary::SetVectorParameterValue(this, CompositorMaterialParameterCollection, FName("ColorGradeSceneGamma"), FLinearColor(ColorGradeScene.Gamma));
			UKismetMaterialLibrary::SetVectorParameterValue(this, CompositorMaterialParameterCollection, FName("ColorGradeSceneGain"), FLinearColor(ColorGradeScene.Gain));
			UKismetMaterialLibrary::SetVectorParameterValue(this, CompositorMaterialParameterCollection, FName("ColorGradeSceneOffset"), FLinearColor(ColorGradeScene.Offset));
			
			const FColorGradePerRangeSettings ColorGradeMedia = CompositeColorGrade->ColorGradeMedia;
			UKismetMaterialLibrary::SetVectorParameterValue(this, CompositorMaterialParameterCollection, FName("ColorGradeMediaSaturation"), FLinearColor(ColorGradeMedia.Saturation));
			UKismetMaterialLibrary::SetVectorParameterValue(this, CompositorMaterialParameterCollection, FName("ColorGradeMediaContrast"), FLinearColor(ColorGradeMedia.Contrast));
			UKismetMaterialLibrary::SetVectorParameterValue(this, CompositorMaterialParameterCollection, FName("ColorGradeMediaGamma"), FLinearColor(ColorGradeMedia.Gamma));
			UKismetMaterialLibrary::SetVectorParameterValue(this, CompositorMaterialParameterCollection, FName("ColorGradeMediaGain"), FLinearColor(ColorGradeMedia.Gain));
			UKismetMaterialLibrary::SetVectorParameterValue(this, CompositorMaterialParameterCollection, FName("ColorGradeMediaOffset"), FLinearColor(ColorGradeMedia.Offset));
			
			const FColorGradePerRangeSettings ColorGradeCombined = CompositeColorGrade->ColorGradeCombined;
			UKismetMaterialLibrary::SetVectorParameterValue(this, CompositorMaterialParameterCollection, FName("ColorGradeCombinedSaturation"), FLinearColor(ColorGradeCombined.Saturation));
			UKismetMaterialLibrary::SetVectorParameterValue(this, CompositorMaterialParameterCollection, FName("ColorGradeCombinedContrast"), FLinearColor(ColorGradeCombined.Contrast));
			UKismetMaterialLibrary::SetVectorParameterValue(this, CompositorMaterialParameterCollection, FName("ColorGradeCombinedGamma"), FLinearColor(ColorGradeCombined.Gamma));
			UKismetMaterialLibrary::SetVectorParameterValue(this, CompositorMaterialParameterCollection, FName("ColorGradeCombinedGain"), FLinearColor(ColorGradeCombined.Gain));
			UKismetMaterialLibrary::SetVectorParameterValue(this, CompositorMaterialParameterCollection, FName("ColorGradeCombinedOffset"), FLinearColor(ColorGradeCombined.Offset));
		}				
	}

	bool bIsEnabled = false;
	
	if (IsValid(CompositeWorldData))
	{
		bIsEnabled = CompositeWorldData->GetIsWorldCompositeEnabled();
		CompositePostProcessVolume.SetDebugVisualizeCompositeMeshes(CompositeWorldData->GetDebugVisualizeCompositeMeshes());
		CompositePostProcessVolume.SetDebugVisualizeShadows(CompositeWorldData->GetDebugVisualizeShadows());

		if (CompositorMaterialParameterCollection)
		{
			UKismetMaterialLibrary::SetScalarParameterValue(this, CompositorMaterialParameterCollection, FName("OutputAlphaInRgb"), CompositeWorldData->GetDebugVisualizeAlphaInRgb());
			
			// ---- Mo-Sys changed ----
#if WITH_EDITOR
			bool bOutputMoSysGMInRgb = false;
			if (SceneView)
			{
				/**
				 * \file "Subsystems/CompositorSubsystem.h"
				 * \todo would need to include mosys files into compositor but this would be a *much* better way
				 */
				//FMoSysViewportClient* MoSysClient = Cast<FMoSysViewportClient>(SceneView->Drawer);
				FLevelEditorViewportClient* Client = static_cast<FLevelEditorViewportClient*>(SceneView->Drawer);
				if (Client)
				{
					const AActor* ViewActor = SceneView->ViewActor;
					TWeakObjectPtr<AActor> ActorLock = Client->GetActiveActorLock();
					if (ActorLock.IsValid())
					{
						if (ActorLock->ActorHasTag("MoSysCamera"))
						{
							TSharedPtr<SEditorViewport> EditorViewport = Client->GetEditorViewportWidget();
							if (EditorViewport.IsValid())
							{
								FName LayoutName = EditorViewport->GetTag();
								if (LayoutName.ToString().Contains("Key"))
								{
									bOutputMoSysGMInRgb = true;
								}
							}
						}
					}
				}
			}
			UKismetMaterialLibrary::SetScalarParameterValue(this, CompositorMaterialParameterCollection, FName("OutputMoSysGMInRgb"), bOutputMoSysGMInRgb);
#endif
			// ---- end Mo-Sys ----
		}
	}

	// Compositing is always off for scene captures, at least, for now.
	// if we do allow compositing for scene captures we need to somehow filter the composite planar reflection.
	// Compositing is also disabled when the user is visualizing a buffer.
	if (SceneView->Family->EngineShowFlags.PostProcessing == 0 || SceneView->Family->ViewMode != EViewModeIndex::VMI_Lit || SceneView->bIsSceneCapture)
	{
		bIsEnabled = false;
	}

	CompositePostProcessVolume.SetIsEnabled(bIsEnabled);
}

void UCompositorSubsystem::ClearReflectionCaptureRenderTarget()
{
	if (PlanarReflectionTexture)
	{
		UKismetRenderingLibrary::ClearRenderTarget2D(this, PlanarReflectionTexture);
	}
}

#if WITH_EDITOR
void UCompositorSubsystem::OnEndPIE(const bool bIsSimulating)
{
	bPieJustEnded = true;
}

void UCompositorSubsystem::RegisterModifyViewportClientView(bool bRegister)
{
	// Mo-Sys changed
	// There are no ViewModifiers on the GameViewportClient so we only do this for level editor viewports
	FLevelEditorViewportClient* LevelEditorViewportClient = GetLevelEditorViewportClient();
	if (LevelEditorViewportClient)
	{
		// Always unregister.
		LevelEditorViewportClient->ViewModifiers.RemoveAll(this);
		bIsModifyViewportClientViewRegistered = false;

		if (bRegister)
		{
			LevelEditorViewportClient->ViewModifiers.AddUObject(this, &UCompositorSubsystem::ModifyViewportClientView);
			bIsModifyViewportClientViewRegistered = true;
		}
	}
}

/**
 * \file "Subsystems/CompositorSubsystem.h"
 * \todo Check with devs why changing aspect ratio through ViewModifiers is not allowed, issue UE-121623 on JIRA.
 */
void UCompositorSubsystem::ModifyViewportClientView(FEditorViewportViewModifierParams& EditorViewportViewModifierParams)
{
	if (IsValid(MediaInputTexture))
	{
		EditorViewportViewModifierParams.ViewInfo.bConstrainAspectRatio = true;
		EditorViewportViewModifierParams.ViewInfo.AspectRatio = MediaInputTexture->GetWidth() / MediaInputTexture->GetHeight();
	}
}
#endif // WITH_EDITOR

UCompositeWorldData* UCompositorSubsystem::FindOrAddCompositeWorldData()
{
	if (!GetCompositeWorldData()) //GetCompositeWorldData stores the result in CompositeWorldData.
	{
		AWorldSettings* WorldSetting = GetWorld()->GetWorldSettings();
		if (IsValid(WorldSetting))
		{
			CompositeWorldData = NewObject<UCompositeWorldData>(WorldSetting, FName("CompositeWorldData"));
			WorldSetting->AddAssetUserData(CompositeWorldData);
			OnCompositeUpdate_Internal();
			OnCompositeWorldDataAdded.Broadcast();
		}
	}

	return CompositeWorldData;
}

UCompositeWorldData* UCompositorSubsystem::GetCompositeWorldData()
{
	if (CompositeWorldData == nullptr)
	{
		AWorldSettings* WorldSetting = GetWorld()->GetWorldSettings();
		if (IsValid(WorldSetting))
		{
			CompositeWorldData = CastChecked<UCompositeWorldData>(WorldSetting->GetAssetUserDataOfClass(UCompositeWorldData::StaticClass()), ECastCheckedType::NullAllowed);
		}
	}

	return CompositeWorldData;
}

void UCompositorSubsystem::RemoveCompositeWorldData()
{
	AWorldSettings* WorldSetting = GetWorld()->GetWorldSettings();
	if (IsValid(WorldSetting))
	{
		// Only remove when it is there so we only fire OnCompositeWorldDataRemoved when we remove the asset user data.
		if (WorldSetting->GetAssetUserDataOfClass(UCompositeWorldData::StaticClass()))
		{
			WorldSetting->RemoveUserDataOfClass(UCompositeWorldData::StaticClass());
			CompositeWorldData = nullptr;
			OnCompositeWorldDataRemoved.Broadcast();
		}
	}
}

USoftMaskCaptureComponent* UCompositorSubsystem::GetSoftMaskCaptureComponent() const
{
	if (IsValid(SoftMaskCaptureComponent))
	{
		return SoftMaskCaptureComponent;
	}

	return nullptr;
}

bool UCompositorSubsystem::TryPlayMediaInputSource(bool bForceReopen)
{
	UE_LOG(LogCompositor, Log, TEXT("Trying to play media input source."));

	bShowMediaInputDefaultFallbackTexture = false;
	bool bSuccessfullyStartedPlaying = false;

	UMediaSource* MediaInputSource = nullptr;
	const UComposite* WorldComposite = GetWorldComposite();
	if (IsValid(WorldComposite))
	{
		MediaInputSource = WorldComposite->GetMediaInputSource();
	}

	// Mo-Sys Changed - https://mo-sys.atlassian.net/browse/MVP-4419
	if (!IsValid(MediaInputSource))
	{
		return bSuccessfullyStartedPlaying;
	}

	// If the media input source is valid but the media texture has a different media player assigned we will reassign the correct player.
	// This can happen when switching from driving the compositor media texture by a level sequencer to using the global input.
	if (MediaInputTexture->GetMediaPlayer() != MediaInputPlayer)
	{
		MediaInputTexture->SetMediaPlayer(MediaInputPlayer);
	}

	if (bForceReopen)
	{
		bSuccessfullyStartedPlaying = MediaInputPlayer->OpenSource(MediaInputSource);
	}
	else
	{
		bSuccessfullyStartedPlaying = MediaInputPlayer->Play();
	}

	bShowMediaInputDefaultFallbackTexture = !bSuccessfullyStartedPlaying;

	if (bShowMediaInputDefaultFallbackTexture)
	{
		MediaInputPlayer->Close();
	}

	return bSuccessfullyStartedPlaying;
}

FViewport* UCompositorSubsystem::GetCompositeViewport() const
{
	FViewport* CompositeViewport = nullptr;

	// It is important to check the active world first, even in editor, just so play mode works as expected.
	const UWorld* World = GetWorld();
	if (IsValid(World)
#if WITH_EDITOR
	&& GEditor && !GEditor->IsSimulateInEditorInProgress() // Skip this if we are in simulation mode.
#endif
	)
	{
		if (World->WorldType == EWorldType::Game || World->WorldType == EWorldType::PIE)
		{
			const UGameViewportClient* GameViewportClient = World->GetGameViewport();
			if (IsValid(GameViewportClient))
			{
				CompositeViewport = GameViewportClient->Viewport;

				if (CompositeViewport)
				{
					return CompositeViewport;
				}
			}
		}
	}

#if WITH_EDITOR
	if (GEditor)
	{
		for (FLevelEditorViewportClient* LevelVC : GEditor->GetLevelViewportClients())
		{
			if (LevelVC && LevelVC->IsPerspective())
			{
				CompositeViewport = LevelVC->Viewport;
				break;
			}
		}
	}
#endif

	return CompositeViewport;
}

// Mo-Sys changed
FLevelEditorViewportClient* UCompositorSubsystem::GetLevelEditorViewportClient() const
{
	FLevelEditorViewportClient* Client = nullptr;

	// It is important to check the active world first, even in editor, just so play mode works as expected.
	const UWorld* World = GetWorld();
	if (IsValid(World)
#if WITH_EDITOR
		&& GEditor && !GEditor->IsSimulateInEditorInProgress() // Skip this if we are in simulation mode.
#endif
		)
	{
		if (World->WorldType == EWorldType::Game || World->WorldType == EWorldType::PIE)
		{
			return nullptr; // In PIE so there is no valid level editor viewport client
		}
	}

#if WITH_EDITOR
	if (GEditor)
	{
		for (FLevelEditorViewportClient* LevelVC : GEditor->GetLevelViewportClients())
		{
			if (LevelVC && LevelVC->IsPerspective())
			{
				Client = LevelVC;
				break;
			}
		}
	}
#endif

	return Client;
}

UComposite* UCompositorSubsystem::GetWorldComposite() const
{
	if (IsValid(CompositeWorldData))
	{
		return CompositeWorldData->GetWorldComposite();
	}

	return nullptr;
}

FIntPoint UCompositorSubsystem::GetMediaInputTextureSize() const
{
	if (IsValid(MediaInputTexture) && !bShowMediaInputDefaultFallbackTexture)
	{
		return FIntPoint(MediaInputTexture->GetWidth(), MediaInputTexture->GetHeight());
	}
	else
	{
		return FIntPoint(1920, 1080);
	}
}

FIntPoint UCompositorSubsystem::GetViewportSize() const
{
	FIntPoint ViewportSize = FIntPoint(2, 2);
	FViewport* Viewport = GetCompositeViewport();

	if (Viewport)
	{
		ViewportSize = Viewport->GetRenderTargetTextureSizeXY();
	}

	return ViewportSize;
}

// Mo-Sys changed
void UCompositorSubsystem::SetMediaInputDefaultFallbackTexture(bool bSet)
{
	bShowMediaInputDefaultFallbackTexture = bSet;
}

void UCompositorSubsystem::SetIsWorldCompositeEnabled(bool IsWorldCompositeEnabled)
{
	if (GetCompositeWorldData() != nullptr)
	{
		GetCompositeWorldData()->SetIsWorldCompositeEnabled(IsWorldCompositeEnabled);
	}
}
