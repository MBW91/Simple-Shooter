#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "ShooterAIController.generated.h"

UCLASS()
class SIMPLESHOOTER_API AShooterAIController : public AAIController
{
	GENERATED_BODY()

private:
	/*UPROPERTY(EditAnywhere)
	float AcceptanceRadius = 200.f;*/
	UPROPERTY(EditAnywhere)
	class UBehaviorTree* AIBehavior;

	APawn* PlayerPawn;

public:
	virtual void Tick(float DeltaTime) override;

protected:
	virtual void BeginPlay() override;
};