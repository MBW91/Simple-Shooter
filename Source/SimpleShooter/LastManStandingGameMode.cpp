#include "LastManStandingGameMode.h"

void ALastManStandingGameMode::PawnKilled(APawn* KilledPawn)
{
	Super::PawnKilled(KilledPawn);

	UE_LOG(LogTemp, Warning, TEXT("A Pawn was killed!"));
}