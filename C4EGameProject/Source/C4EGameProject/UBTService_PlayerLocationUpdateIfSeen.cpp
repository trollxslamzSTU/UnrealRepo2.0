// Fill out your copyright notice in the Description page of Project Settings.


#include "UBTService_PlayerLocationUpdateIfSeen.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Kismet/GameplayStatics.h"

UUBTService_PlayerLocationUpdateIfSeen::UUBTService_PlayerLocationUpdateIfSeen()
{
}

void UUBTService_PlayerLocationUpdateIfSeen::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory,
	float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

	APawn* PPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);

	if(PPawn == nullptr || OwnerComp.GetAIOwner() == nullptr) return;

	if(OwnerComp.GetAIOwner()->LineOfSightTo(PPawn))
	{
		OwnerComp.GetBlackboardComponent()->SetValueAsObject(GetSelectedBlackboardKey(), PPawn);
	}
	else
	{
		OwnerComp.GetBlackboardComponent()->ClearValue(GetSelectedBlackboardKey());
	}
}
