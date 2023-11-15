﻿#pragma once

#include "CoreMinimal.h"
#include "GameRule.h"
#include "GameRule_Collectables.generated.h"

class ACollectable;

DECLARE_DYNAMIC_DELEGATE_OneParam(FRegisterCollectableSignature, ACollectable*, collectable);


UCLASS(ClassGroup=(Custom), meta = (BlueprintSpawnableComponent))
class C4EGAMEPROJECT_API UGameRule_Collectables : public UGameRule
{
	GENERATED_BODY()

public:
	UGameRule_Collectables();
	
	static FRegisterCollectableSignature OnRegisterCollectable;
	
	virtual void Init() override;

protected:
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TObjectPtr<ACollectable>> _Collectables;

	int _AmountRemaining;

	UFUNCTION()
	void Handle_Collected(ACollectable* subject, AController* causer, int PointsToAward);

	UFUNCTION()
	void Handle_RegisterCollectable(ACollectable* collectable);
};
