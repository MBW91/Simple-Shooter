#pragma once

#include "CoreMinimal.h"
#include "SimpleShooterGameModeBase.h"
#include "LastManStandingGameMode.generated.h"

UCLASS()
class SIMPLESHOOTER_API ALastManStandingGameMode : public ASimpleShooterGameModeBase
{
	GENERATED_BODY()

public:
	virtual void PawnKilled(APawn* KilledPawn) override;
};