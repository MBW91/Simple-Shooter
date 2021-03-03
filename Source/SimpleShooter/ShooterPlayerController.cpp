#include "ShooterPlayerController.h"
#include "TimerManager.h"

void AShooterPlayerController::GameHasEnded(AActor* EndGameFocus, bool bIsWinner)
{
	Super::GameHasEnded(EndGameFocus, bIsWinner);
	UE_LOG(LogTemp, Warning, TEXT("The game has ended!"));

	GetWorldTimerManager().SetTimer(RestartTimer, this, &APlayerController::RestartLevel, RestartDelay);
}