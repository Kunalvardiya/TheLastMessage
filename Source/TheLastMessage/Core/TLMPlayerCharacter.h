// THE LAST MESSAGE - M1 framework skeleton.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "TLMPlayerCharacter.generated.h"

class UCameraComponent;
class UInputAction;
struct FInputActionValue;

/**
 * First-person player character (Alex).
 * M1 scope: walking and looking only. Jump, crouch, sprint and gamepad support are
 * intentionally absent because they are undecided in the GDD.
 * Input actions are assigned in the Blueprint subclass defaults.
 */
UCLASS()
class THELASTMESSAGE_API ATLMPlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	ATLMPlayerCharacter();

	UCameraComponent* GetFirstPersonCamera() const { return FirstPersonCamera; }

protected:
	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;

	void Move(const FInputActionValue& Value);
	void Look(const FInputActionValue& Value);

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	TObjectPtr<UCameraComponent> FirstPersonCamera;

	/** Axis2D action: X = right, Y = forward. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Input")
	TObjectPtr<UInputAction> MoveAction;

	/** Axis2D action: X = yaw, Y = pitch. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Input")
	TObjectPtr<UInputAction> LookAction;
};
