#include "CompositorEditorFunctionLibrary.h"

#include "Editor.h"
#include "Subsystems/UnrealEditorSubsystem.h"

UWorld* UCompositorEditorFunctionLibrary::GetCurrentWorld()
{
    UWorld* World = nullptr;
    if (!GEditor)
    {
        return nullptr;
    }
    UUnrealEditorSubsystem* UnrealEditorSubsystem = GEditor->GetEditorSubsystem<UUnrealEditorSubsystem>();
    if (UnrealEditorSubsystem)
    {
        World = UnrealEditorSubsystem->GetGameWorld();
        if (!World)
        {
            World = UnrealEditorSubsystem->GetEditorWorld();
        }
    }

    return World;
}
