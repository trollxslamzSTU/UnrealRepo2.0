#pragma once

#include "CoreMinimal.h"
#include "GameRule.h"
#include "GameRule_Score.generated.h"


class AC4EPlayerController;

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class C4EGAMEPROJECT_API UGameRule_Score : public UGameRule
{
	GENERATED_BODY()

public:
	UGameRule_Score();

	virtual void Init() override;
	void Init(AC4EPlayerController* pc);
	UFUNCTION()
	void Handle_ScoreUpdated(int points);
	
protected:

	TObjectPtr<AC4EPlayerController> _PlayerController;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int _PointsToWin;
};
