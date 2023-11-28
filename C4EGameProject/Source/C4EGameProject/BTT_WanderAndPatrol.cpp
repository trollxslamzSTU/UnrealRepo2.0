
#include "BTT_WanderAndPatrol.h"

#include "AIController.h"
#include "NavigationSystem.h"
#include "BehaviorTree/BlackboardComponent.h"

UBTT_WanderAndPatrol::UBTT_WanderAndPatrol()
{
	PatrolRadius = 1000.f;

	NodeName = TEXT("Find Patrol Location");
	
}

EBTNodeResult::Type UBTT_WanderAndPatrol::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
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

FString UBTT_WanderAndPatrol::GetStaticDescription() const
{
	return FString::Printf(TEXT("Vector: %s"), *BlackboardKey.SelectedKeyName.ToString());
}
