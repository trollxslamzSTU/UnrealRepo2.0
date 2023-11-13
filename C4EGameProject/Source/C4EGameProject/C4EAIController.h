#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "C4EAIController.generated.h"

struct FAIStimulus;
class UAISenseConfig_Sight;


UCLASS()
class C4EGAMEPROJECT_API AC4EAIController : public AAIController
{
	GENERATED_BODY()

public:
	AC4EAIController();

	virtual ETeamAttitude::Type GetTeamAttitudeTowards(const AActor& Other) const override;

protected:
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UAIPerceptionComponent> _AIPerception;
	TObjectPtr<UAISenseConfig_Sight> _AISense_Sight;
private:
	UFUNCTION()
	void Handle_TargetPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus);
};
