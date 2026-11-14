// THE LAST MESSAGE - M1 framework skeleton.

#include "TLMPlayerCharacter.h"

#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "EnhancedInputComponent.h"
#include "InputAction.h"
#include "InputActionValue.h"

DEFINE_LOG_CATEGORY_STATIC(LogTLMCharacter, Log, All);

ATLMPlayerCharacter::ATLMPlayerCharacter()
{
	// The pawn yaws with the controller; pitch is applied to the camera only.
	bUseControllerRotationYaw = true;
	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;

	FirstPersonCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCamera->SetupAttachment(GetCapsuleComponent());
	FirstPersonCamera->SetRelativeLocation(FVector(0.f, 0.f, BaseEyeHeight));
	FirstPersonCamera->bUsePawnControlRotation = true;
}

void ATLMPlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	UEnhancedInputComponent* EnhancedInput = Cast<UEnhancedInputComponent>(PlayerInputComponent);
	if (!EnhancedInput)
	{
		UE_LOG(LogTLMCharacter, Error, TEXT("%s: input component is not an EnhancedInputComponent."), *GetNameSafe(this));
		return;
	}

	if (MoveAction)
	{
		EnhancedInput->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ATLMPlayerCharacter::Move);
	}
	else
	{
		UE_LOG(LogTLMCharacter, Warning, TEXT("%s: MoveAction is not assigned."), *GetNameSafe(this));
	}

	if (LookAction)
	{
		EnhancedInput->BindAction(LookAction, ETriggerEvent::Triggered, this, &ATLMPlayerCharacter::Look);
	}
	else
	{
		UE_LOG(LogTLMCharacter, Warning, TEXT("%s: LookAction is not assigned."), *GetNameSafe(this));
	}
}

void ATLMPlayerCharacter::Move(const FInputActionValue& Value)
{
	const FVector2D Axis = Value.Get<FVector2D>();
	if (GetController())
	{
		AddMovementInput(GetActorForwardVector(), Axis.Y);
		AddMovementInput(GetActorRightVector(), Axis.X);
	}
}

void ATLMPlayerCharacter::Look(const FInputActionValue& Value)
{
	const FVector2D Axis = Value.Get<FVector2D>();
	if (GetController())
	{
		AddControllerYawInput(Axis.X);
		AddControllerPitchInput(Axis.Y);
	}
}
