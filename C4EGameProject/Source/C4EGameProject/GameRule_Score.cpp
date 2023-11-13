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

void UGameRule_Score::Init(AC4EPlayerController* pc)
{
	_PlayerController = pc;
	_PlayerController->OnScoreUpdated.AddUniqueDynamic(this, &UGameRule_Score::Handle_ScoreUpdated);
}

void UGameRule_Score::Handle_ScoreUpdated(int points)
{
	if(points>=_PointsToWin)
	{
		BroadcastGameRuleCompleted();
	}
}







