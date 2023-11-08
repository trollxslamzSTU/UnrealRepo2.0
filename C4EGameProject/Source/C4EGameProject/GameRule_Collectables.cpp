#include "GameRule_Collectables.h"
#include "Collectable.h"
#include "GameRule_Score.h"
#include "Kismet/GameplayStatics.h"

UGameRule_Collectables::UGameRule_Collectables()
{
	_AmountRemaining = 0;
	
}

void UGameRule_Collectables::Init()
{
	if(_Collectables.Num() == 0)
	{
		TArray<AActor*> outActors;
		UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACollectable::StaticClass(), outActors);
		for(AActor* actor : outActors)
		{
			_Collectables.Add(Cast<ACollectable>(actor));
		}
	}

	_AmountRemaining = _Collectables.Num();
	if(GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Black,
			FString::Printf(TEXT("Gamerule_Collectables: Found %d Collectables in world"), _AmountRemaining));
	}
	
	for(ACollectable* collect : _Collectables)
	{
		collect->OnCollected.AddDynamic(this, &UGameRule_Collectables::Handle_Collected);
	}
	
	Super::Init();
}

void UGameRule_Collectables::Handle_Collected(ACollectable* subject, AController* causer, int PointsToAward)
{
	_AmountRemaining--;
	BroadcastGameRulePointsScored(causer, PointsToAward);

	if(_AmountRemaining == 0)
	{
		BroadcastGameRuleCompleted();
	}
}
