#include "C4EAIController.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISenseConfig_Sight.h"


AC4EAIController::AC4EAIController()
{
	_AIPerception = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("Perception"));

	_AISense_Sight = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("SenseSight"));
	_AISense_Sight->DetectionByAffiliation.bDetectEnemies = true;
	_AISense_Sight->DetectionByAffiliation.bDetectFriendlies = false;
	_AISense_Sight->DetectionByAffiliation.bDetectNeutrals = false;

	_AIPerception->ConfigureSense(*_AISense_Sight);
	_AIPerception->SetDominantSense(UAISenseConfig_Sight::StaticClass());

	AAIController::SetGenericTeamId(FGenericTeamId(1));
}

ETeamAttitude::Type AC4EAIController::GetTeamAttitudeTowards(const AActor& Other) const
{
	FGenericTeamId TeamId(FGenericTeamId::GetTeamIdentifier(&Other));
	if(TeamId == FGenericTeamId(1))
	{
		return ETeamAttitude::Friendly;
	}
	if(TeamId == FGenericTeamId(2))
	{
		return ETeamAttitude::Hostile;
	}
	return ETeamAttitude::Friendly;
	
	
}
void AC4EAIController::Handle_TargetPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus)
{
	switch (Stimulus.Type)
	{
	case 0:
		return;

	default:
		return;
	}
}

void AC4EAIController::BeginPlay()
{
	Super::BeginPlay();
	_AIPerception->OnTargetPerceptionUpdated.AddUniqueDynamic(this, &AC4EAIController::Handle_TargetPerceptionUpdated);
}




