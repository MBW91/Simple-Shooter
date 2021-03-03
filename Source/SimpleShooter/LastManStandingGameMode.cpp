#include "LastManStandingGameMode.h"

void ALastManStandingGameMode::PawnKilled(APawn* KilledPawn)
{
	Super::PawnKilled(KilledPawn);

	APlayerController* PlayerController = Cast<APlayerController>(KilledPawn->GetController());
	if (PlayerController)
	{
		PlayerController->GameHasEnded(nullptr, false);
	}
}