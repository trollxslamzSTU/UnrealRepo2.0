#pragma once

#include "CoreMinimal.h"
#include "GameRule.h"
#include "GameRule_Score.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class C4EGAMEPROJECT_API UGameRule_Score : public UGameRule
{
	GENERATED_BODY()

public:
	UGameRule_Score();

	virtual void Init() override;
	UFUNCTION()
	void Handle_CollectedScoring(int PointsToAward);
	UFUNCTION()
	void Handle_TargetScoring(int points);
protected:
	UFUNCTION()
	void Handle_Scoring(int points);
	
	
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int _PointsToWin;
	int _TotalPoints;
};
