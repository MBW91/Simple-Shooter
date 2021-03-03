#pragma once

#include "CoreMinimal.h"
#include "SimpleShooterGameModeBase.h"
#include "LastManStandingGameMode.generated.h"

UCLASS()
class SIMPLESHOOTER_API ALastManStandingGameMode : public ASimpleShooterGameModeBase
{
	GENERATED_BODY()

private:
	void EndGame(bool bIsPlayerWinner);

public:
	virtual void PawnKilled(APawn* KilledPawn) override;
};