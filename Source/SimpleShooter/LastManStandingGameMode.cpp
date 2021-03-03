#include "LastManStandingGameMode.h"
#include "EngineUtils.h"

void ALastManStandingGameMode::PawnKilled(APawn* KilledPawn)
{
	Super::PawnKilled(KilledPawn);

	APlayerController* PlayerController = Cast<APlayerController>(KilledPawn->GetController());
	if (PlayerController)
	{
		EndGame(false);
	}
}

void ALastManStandingGameMode::EndGame(bool bIsPlayerWinner)
{
	for (AController* Controller : TActorRange<AController>(GetWorld()))
	{
		bool bIsWinner = Controller->IsPlayerController() == bIsPlayerWinner;
		Controller->GameHasEnded(Controller->GetPawn(), bIsWinner);
	}
}