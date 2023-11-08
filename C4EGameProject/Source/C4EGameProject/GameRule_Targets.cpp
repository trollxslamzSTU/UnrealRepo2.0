#include "GameRule_Targets.h"

#include "Target.h"
#include "Kismet/GameplayStatics.h"

UGameRule_Targets::UGameRule_Targets()
{
	_AmountRemaining = 0;
}

void UGameRule_Targets::Init()
{
	if(_Targets.Num() == 0)
	{
		TArray<AActor*> outActors;
		UGameplayStatics::GetAllActorsWithTag(GetWorld(), FName("GameRuleTarget"), outActors);
		for(AActor* actors : outActors)
		{
			_Targets.Add(Cast<UTarget>(actors->GetComponentByClass(UTarget::StaticClass())));
		}
	}

	_AmountRemaining = _Targets.Num();
	for(UTarget* targets : _Targets)
	{
		targets->OnTargetDestroyed.AddDynamic(this, &UGameRule_Targets::Handle_TargetDestroyed);
	}
	Super::Init();
}

void UGameRule_Targets::Handle_TargetDestroyed(AActor* target, AController* causer, int points)
{
	_AmountRemaining--;
	BroadcastGameRulePointsScored(causer, points);

	if(_AmountRemaining == 0)
	{
		BroadcastGameRuleCompleted();
	}
}
