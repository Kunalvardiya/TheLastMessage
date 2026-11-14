// THE LAST MESSAGE - M1 framework skeleton.

#include "TLMPlayerController.h"

#include "Engine/LocalPlayer.h"
#include "EnhancedInputSubsystems.h"
#include "InputMappingContext.h"

DEFINE_LOG_CATEGORY_STATIC(LogTLMController, Log, All);

ATLMPlayerController::ATLMPlayerController()
{
}

void ATLMPlayerController::BeginPlay()
{
	Super::BeginPlay();

	if (!IsLocalPlayerController())
	{
		return;
	}

	if (!DefaultMappingContext)
	{
		UE_LOG(LogTLMController, Warning, TEXT("%s has no DefaultMappingContext assigned; the player will have no input."), *GetNameSafe(this));
		return;
	}

	if (ULocalPlayer* LocalPlayer = GetLocalPlayer())
	{
		if (UEnhancedInputLocalPlayerSubsystem* InputSubsystem = LocalPlayer->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>())
		{
			InputSubsystem->AddMappingContext(DefaultMappingContext, MappingContextPriority);
		}
	}
}
