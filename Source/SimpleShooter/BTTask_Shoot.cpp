#include "BTTask_Shoot.h"
#include "AIController.h"
#include "ShooterCharacter.h"

UBTTask_Shoot::UBTTask_Shoot()
{
	NodeName = TEXT("Shoot");
}

EBTNodeResult::Type UBTTask_Shoot::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);

	AAIController* AIController = OwnerComp.GetAIOwner();
	if (!AIController) return EBTNodeResult::Type::Failed;

	AShooterCharacter* Character = Cast<AShooterCharacter>(AIController->GetPawn());
	if (!Character) return EBTNodeResult::Type::Failed;

	Character->Shoot();

	return EBTNodeResult::Type::Succeeded;
}
