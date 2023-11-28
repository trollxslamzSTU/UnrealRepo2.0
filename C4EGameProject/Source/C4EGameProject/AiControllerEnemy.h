
#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "AiControllerEnemy.generated.h"

struct FAIStimulus;
class UAISenseConfig_Sight;
class UBehaviorTreeComponent;
class UAIPerceptionComponent;

UCLASS(Abstract)
class C4EGAMEPROJECT_API AAiControllerEnemy : public AAIController
{
	GENERATED_BODY()

public:
	AAiControllerEnemy();
	
	UFUNCTION()
	void Handle_TargetPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus);
	
	virtual ETeamAttitude::Type GetTeamAttitudeTowards(const AActor& Other) const override;
protected:
	virtual void BeginPlay() override;

	virtual void OnPossess(APawn* InPawn) override;

	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UAIPerceptionComponent> _AIPerception;
	TObjectPtr<UAISenseConfig_Sight> _AISense_Sight;

private:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = true))
	TObjectPtr<UBehaviorTree> BehaviorTree;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = true))
	TObjectPtr<UBehaviorTreeComponent> BehaviorTreeComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = true))
	TObjectPtr<UBlackboardComponent> BlackboardComponent;

	
};
