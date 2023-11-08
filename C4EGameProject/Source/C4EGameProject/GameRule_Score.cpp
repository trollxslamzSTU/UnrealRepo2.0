#include "GameRule_Score.h"



UGameRule_Score::UGameRule_Score()
{
	_TotalPoints = 0;
	_PointsToWin = 200;
}

void UGameRule_Score::Init()
{
	Super::Init();
}

void UGameRule_Score::Handle_Scoring(int points)
{
}

void UGameRule_Score::Handle_CollectedScoring(int PointsToAward)
{
	
	_TotalPoints += PointsToAward;
	if(_TotalPoints>=_PointsToWin)
	{
		BroadcastGameRuleCompleted();
	}
}

void UGameRule_Score::Handle_TargetScoring(int points)
{
	_TotalPoints += points;
	if(_TotalPoints>=_PointsToWin)
	{
		BroadcastGameRuleCompleted();
	}
}





