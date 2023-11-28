#include "GameRule_Targets.h"

#include "C4EPlayerController.h"
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
		AC4EPlayerController* character = Cast<AC4EPlayerController>(UGameplayStatics::GetPlayerController(GetWorld(), 0));
		character->SetInitTargets(_AmountRemaining);
	}
	Super::Init();
}

void UGameRule_Targets::Handle_TargetDestroyed(AActor* target, AController* causer, int points)
{
	_AmountRemaining--;
	BroadcastGameRulePointsScored(causer, points);
	AC4EPlayerController* character = Cast<AC4EPlayerController>(UGameplayStatics::GetPlayerController(GetWorld(), 0));
	character->UpdateTargets(_AmountRemaining);
	if(_AmountRemaining == 0)
	{
		BroadcastGameRuleCompleted();
	}
}
