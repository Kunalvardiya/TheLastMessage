// THE LAST MESSAGE - M1 framework tests.

#include "Misc/AutomationTest.h"

#if WITH_DEV_AUTOMATION_TESTS

#include "Camera/CameraComponent.h"
#include "../Core/TLMGameMode.h"
#include "../Core/TLMPlayerCharacter.h"
#include "../Core/TLMPlayerController.h"

/** Verifies the three framework classes load and have valid defaults. */
IMPLEMENT_SIMPLE_AUTOMATION_TEST(
	FTLMFrameworkClassDefaultsTest,
	"TheLastMessage.Framework.ClassDefaults",
	EAutomationTestFlags::EditorContext | EAutomationTestFlags::ProductFilter)

bool FTLMFrameworkClassDefaultsTest::RunTest(const FString& Parameters)
{
	const ATLMGameMode* GameMode = GetDefault<ATLMGameMode>();
	if (!TestNotNull(TEXT("ATLMGameMode default object"), GameMode))
	{
		return false;
	}
	TestTrue(TEXT("GameMode has a default pawn class"), GameMode->DefaultPawnClass != nullptr);
	TestTrue(TEXT("GameMode has a player controller class"), GameMode->PlayerControllerClass != nullptr);
	TestTrue(TEXT("GameMode pawn class derives from ATLMPlayerCharacter"),
		GameMode->DefaultPawnClass && GameMode->DefaultPawnClass->IsChildOf(ATLMPlayerCharacter::StaticClass()));
	TestTrue(TEXT("GameMode controller class derives from ATLMPlayerController"),
		GameMode->PlayerControllerClass && GameMode->PlayerControllerClass->IsChildOf(ATLMPlayerController::StaticClass()));

	const ATLMPlayerCharacter* Character = GetDefault<ATLMPlayerCharacter>();
	if (TestNotNull(TEXT("ATLMPlayerCharacter default object"), Character))
	{
		const UCameraComponent* Camera = Character->GetFirstPersonCamera();
		if (TestNotNull(TEXT("Character has a first-person camera"), Camera))
		{
			TestTrue(TEXT("Camera uses pawn control rotation"), Camera->bUsePawnControlRotation);
		}
	}

	TestNotNull(TEXT("ATLMPlayerController default object"), GetDefault<ATLMPlayerController>());

	return true;
}

#endif // WITH_DEV_AUTOMATION_TESTS
