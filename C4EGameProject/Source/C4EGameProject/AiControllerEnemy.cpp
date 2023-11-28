#include "AiControllerEnemy.h"

#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"


AAiControllerEnemy::AAiControllerEnemy()
{
	BehaviorTreeComponent = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("Behavior tree component"));
	BlackboardComponent = CreateDefaultSubobject<UBlackboardComponent>(TEXT("Blackboard Component"));

}


void AAiControllerEnemy::BeginPlay()
{
	Super::BeginPlay();
	if(IsValid(BehaviorTree))
	{
		RunBehaviorTree(BehaviorTree.Get());
		BehaviorTreeComponent->StartTree(*BehaviorTree.Get());
	}
	
}

void AAiControllerEnemy::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
	if(IsValid(Blackboard) && IsValid(BehaviorTree))
	{
		Blackboard->InitializeBlackboard(*BehaviorTree.Get()->BlackboardAsset.Get());
	}
}



