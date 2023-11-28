﻿// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BTTask_WanderAndPatrol.generated.h"


UCLASS(Abstract)
class C4EGAMEPROJECT_API UBTTask_WanderAndPatrol : public UBTTask_BlackboardBase 
{
	GENERATED_BODY()

public:
	UBTTask_WanderAndPatrol();

private:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	virtual FString GetStaticDescription() const override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	float PatrolRadius;
};