#include "GameRule_Collectables.h"

#include "C4EPlayerController.h"
#include "Collectable.h"
#include "Kismet/GameplayStatics.h"


UGameRule_Collectables::UGameRule_Collectables()
{
	_AmountRemaining = 0;
	
}

void UGameRule_Collectables::Init()
{
	if(_Collectables.Num() == 0)
	{
		TArray<AActor*> OutActor;
		UGameplayStatics::GetAllActorsOfClass(GetWorld(),ACollectable::StaticClass(), OutActor);
		for(AActor* thing : OutActor)
		{
			_Collectables.Add(Cast<ACollectable>(thing));
		}
	}
	
	_AmountRemaining = _Collectables.Num();

	for(ACollectable* collect : _Collectables)
	{
		collect->OnCollected.AddDynamic(this, &UGameRule_Collectables::Handle_Collected);
		AC4EPlayerController* character = Cast<AC4EPlayerController>(UGameplayStatics::GetPlayerController(GetWorld(), 0));
		character->SetInitCollectables(_AmountRemaining);
	}
	Super::Init();
	
}

void UGameRule_Collectables::Handle_Collected(ACollectable* subject, AController* causer, int PointsToAward)
{
	_AmountRemaining--;
	subject->OnCollected.RemoveDynamic(this, &UGameRule_Collectables::Handle_Collected);
	BroadcastGameRulePointsScored(causer, PointsToAward);
	AC4EPlayerController* character = Cast<AC4EPlayerController>(UGameplayStatics::GetPlayerController(GetWorld(), 0));
	character->UpdateCollectables(_AmountRemaining);
	if(_AmountRemaining == 0)
	{
		BroadcastGameRuleCompleted();
	}
}


