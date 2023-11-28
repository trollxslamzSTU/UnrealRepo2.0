#pragma once

#include "CoreMinimal.h"
#include "GameRule.h"
#include "GameRule_Scored.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class C4EGAMEPROJECT_API UGameRule_Scored : public UGameRule
{
	GENERATED_BODY()

public:
	UGameRule_Scored();
	
	
	virtual void BeginPlay() override;
	
	UFUNCTION()
	void Handle_ScoreUpdated(int points);
	
protected:
	
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int _PointsToWin;

	bool FinishedRule;
};
