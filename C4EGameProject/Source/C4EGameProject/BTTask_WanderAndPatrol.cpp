
#include "BTTask_WanderAndPatrol.h"
#include "AIController.h"
#include "NavigationSystem.h"
#include "BehaviorTree/BlackboardComponent.h"

UBTTask_WanderAndPatrol::UBTTask_WanderAndPatrol()
{
	PatrolRadius = 1000.f;

	NodeName = TEXT("Find Patrol Location");
	
}

EBTNodeResult::Type UBTTask_WanderAndPatrol::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	FNavLocation Location{};

	AAIController* controller {OwnerComp.GetAIOwner()};
	const APawn* AiPawn {controller->GetPawn()};

	const FVector LocationOfPawn {AiPawn->GetActorLocation()};

	const UNavigationSystemV1* NavMeshSystem {UNavigationSystemV1::GetCurrent(GetWorld())};

	if (IsValid(NavMeshSystem) && NavMeshSystem->GetRandomPointInNavigableRadius(LocationOfPawn, PatrolRadius, Location))
	{
		controller->GetBlackboardComponent()->SetValueAsVector(BlackboardKey.SelectedKeyName, Location.Location);
	}

	FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
	return EBTNodeResult::Succeeded;
}

FString UBTTask_WanderAndPatrol::GetStaticDescription() const
{
	return FString::Printf(TEXT("Vector: %s"), *BlackboardKey.SelectedKeyName.ToString());
}
