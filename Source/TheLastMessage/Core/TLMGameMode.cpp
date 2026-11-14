// THE LAST MESSAGE - M1 framework skeleton.

#include "TLMGameMode.h"
#include "TLMPlayerCharacter.h"
#include "TLMPlayerController.h"

ATLMGameMode::ATLMGameMode()
{
	DefaultPawnClass = ATLMPlayerCharacter::StaticClass();
	PlayerControllerClass = ATLMPlayerController::StaticClass();
}
