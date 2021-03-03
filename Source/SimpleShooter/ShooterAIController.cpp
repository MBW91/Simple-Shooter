#include "ShooterAIController.h"
#include "kismet/GameplayStatics.h"

void AShooterAIController::BeginPlay()
{
	Super::BeginPlay();

	PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
	SetFocus(PlayerPawn);
	MoveToActor(PlayerPawn, 200.f);
}

void AShooterAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	MoveToActor(PlayerPawn, 200.f);
}