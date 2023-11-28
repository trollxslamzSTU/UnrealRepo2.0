#include "GameRule_Scored.h"

#include "C4EPlayerController.h"
#include "Kismet/GameplayStatics.h"


UGameRule_Scored::UGameRule_Scored()
{
	_PointsToWin = 200;
}



void UGameRule_Scored::BeginPlay()
{
	Super::BeginPlay();

	AC4EPlayerController* character = Cast<AC4EPlayerController>(UGameplayStatics::GetPlayerController(GetWorld(), 0));
	UE_LOG(LogTemp, Warning, TEXT("CRY part 3"));
	character->OnScoreUpdated.AddUniqueDynamic(this, &UGameRule_Scored::Handle_ScoreUpdated);

	
}

void UGameRule_Scored::Handle_ScoreUpdated(int points)
{
	UE_LOG(LogTemp, Warning, TEXT("CRY"));
	if(points>=_PointsToWin && FinishedRule == false)
	{
		BroadcastGameRuleCompleted();
		FinishedRule = true;
	}
}




