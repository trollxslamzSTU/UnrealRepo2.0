#include "GameRule_Score.h"

#include "C4EPlayerController.h"


UGameRule_Score::UGameRule_Score()
{
	_PointsToWin = 200;
}

void UGameRule_Score::Init()
{
	Super::Init();
	
	
}

void UGameRule_Score::InitPC(AC4EPlayerController* pc)
{
	_PlayerController = pc;
	UE_LOG(LogTemp, Warning, TEXT("CRY part 3"));
	_PlayerController->OnScoreUpdated.AddUniqueDynamic(this, &UGameRule_Score::Handle_ScoreUpdated);
}

void UGameRule_Score::Handle_ScoreUpdated(int points)
{
	UE_LOG(LogTemp, Warning, TEXT("CRY"));
	if(points>=_PointsToWin)
	{
		BroadcastGameRuleCompleted();
	}
}







