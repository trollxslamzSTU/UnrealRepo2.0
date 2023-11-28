#include "AiControllerEnemy.h"

#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISenseConfig_Sight.h"


AAiControllerEnemy::AAiControllerEnemy()
{
	BehaviorTreeComponent = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("Behavior tree component"));
	BlackboardComponent = CreateDefaultSubobject<UBlackboardComponent>(TEXT("Blackboard Component"));

	_AIPerception = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("Perception"));
	_AISense_Sight = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("SenseSight"));
	_AISense_Sight->DetectionByAffiliation.bDetectEnemies = true;
	_AISense_Sight->DetectionByAffiliation.bDetectFriendlies = false;
	_AISense_Sight->DetectionByAffiliation.bDetectNeutrals = false;

	_AIPerception->ConfigureSense(*_AISense_Sight);
	_AIPerception->SetDominantSense(UAISenseConfig_Sight::StaticClass());

	AAIController::SetGenericTeamId(FGenericTeamId(1));

}



ETeamAttitude::Type AAiControllerEnemy::GetTeamAttitudeTowards(const AActor& Other) const
{
	if (APawn const* OtherPawn = Cast<APawn>(&Other))
	{
		if (auto const TeamAgent = Cast<IGenericTeamAgentInterface>(OtherPawn->GetController()))
		{
			if (TeamAgent->GetGenericTeamId() == FGenericTeamId(0)
				|| TeamAgent->GetGenericTeamId() == FGenericTeamId(1)) 
			{
				return ETeamAttitude::Friendly;
			}
			if (TeamAgent->GetGenericTeamId() == FGenericTeamId(2))
			{
				return ETeamAttitude::Hostile;
			}
		}
	}
	return ETeamAttitude::Neutral;
}

void AAiControllerEnemy::BeginPlay()
{
	Super::BeginPlay();
	_AIPerception->OnTargetPerceptionUpdated.AddUniqueDynamic(this, &AAiControllerEnemy::Handle_TargetPerceptionUpdated);
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


void AAiControllerEnemy::Handle_TargetPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus)
{
	switch (Stimulus.Type)
	{
	case 0:
	
	default:
	 return;
	}
}


