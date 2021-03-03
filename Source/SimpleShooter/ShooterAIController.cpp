#include "ShooterAIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "kismet/GameplayStatics.h"

void AShooterAIController::BeginPlay()
{
	Super::BeginPlay();

	PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);

	if (!AIBehavior || !PlayerPawn) return;
	RunBehaviorTree(AIBehavior);
	GetBlackboardComponent()->SetValueAsVector(TEXT("PlayerLocation"), PlayerPawn->GetActorLocation());
}

void AShooterAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	/*if (PlayerPawn && LineOfSightTo(PlayerPawn))
	{
		SetFocus(PlayerPawn);
		MoveToActor(PlayerPawn, AcceptanceRadius);
	}
	else
	{
		ClearFocus(EAIFocusPriority::Gameplay);
		StopMovement();
	}*/
}