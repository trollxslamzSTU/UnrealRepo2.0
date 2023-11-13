#include "GameRule_Collectables.h"
#include "Collectable.h"
#include "Kismet/GameplayStatics.h"

UGameRule_Collectables::UGameRule_Collectables()
{
	_AmountRemaining = 0;
	
}

void UGameRule_Collectables::Init()
{
	Super::Init();
	OnRegisterCollectable.BindDynamic(this, UGameRule_Collectables::Handle_RegisterCollectable);
}

void UGameRule_Collectables::Handle_Collected(ACollectable* subject, AController* causer, int PointsToAward)
{
	_AmountRemaining--;
	subject->OnCollected.RemoveDynamic(this, &UGameRule_Collectables::Handle_Collected);
	BroadcastGameRulePointsScored(causer, PointsToAward);
	
	if(_AmountRemaining == 0)
	{
		BroadcastGameRuleCompleted();
	}
}

void UGameRule_Collectables::Handle_RegisterCollectable(ACollectable* collectable)
{
	collectable->OnCollected.AddUniqueDynamic(this, &UGameRule_Collectables::Handle_Collected);
	_AmountRemaining++;
}
