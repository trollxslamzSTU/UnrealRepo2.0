﻿#pragma once

#include "CoreMinimal.h"
#include "GameRule.h"
#include "UObject/Object.h"
#include "GameRule_Targets.generated.h"

class UTarget;

UCLASS(ClassGroup=(Custom), meta = (BlueprintSpawnableComponent))
class C4EGAMEPROJECT_API UGameRule_Targets : public UGameRule
{
	GENERATED_BODY()

public:
	UGameRule_Targets();

	virtual void Init() override;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TObjectPtr<UTarget>> _Targets;

	int _AmountRemaining;

	UFUNCTION()
	void Handle_TargetDestroyed(AActor* target, AController* causer, int points);
	
};
