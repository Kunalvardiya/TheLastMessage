// THE LAST MESSAGE - M1 framework skeleton.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TLMPlayerController.generated.h"

class UInputMappingContext;

/**
 * Player controller. Owns the Enhanced Input mapping context so that input mode
 * switching (gameplay vs UI) can be added later without touching the character.
 * The mapping context asset is assigned in the Blueprint subclass defaults,
 * so no asset paths are hard-coded in C++.
 */
UCLASS()
class THELASTMESSAGE_API ATLMPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	ATLMPlayerController();

protected:
	virtual void BeginPlay() override;

	/** Mapping context added for this local player when play begins. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Input")
	TObjectPtr<UInputMappingContext> DefaultMappingContext;

	/** Priority used when adding DefaultMappingContext. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Input")
	int32 MappingContextPriority = 0;
};
