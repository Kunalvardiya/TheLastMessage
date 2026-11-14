// THE LAST MESSAGE - M1 framework skeleton.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "TLMGameMode.generated.h"

/**
 * Base game mode for THE LAST MESSAGE.
 * Sets the C++ pawn and controller as fallbacks. The Blueprint subclass (BP_TLMGameMode)
 * overrides them with the Blueprint versions.
 * No narrative, save or chapter logic lives here (those are later milestones).
 */
UCLASS()
class THELASTMESSAGE_API ATLMGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ATLMGameMode();
};
