
#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "AiControllerEnemy.generated.h"

class UBehaviorTreeComponent;

UCLASS(Abstract)
class C4EGAMEPROJECT_API AAiControllerEnemy : public AAIController
{
	GENERATED_BODY()

public:
	AAiControllerEnemy();

protected:
	virtual void BeginPlay() override;

	virtual void OnPossess(APawn* InPawn) override;

private:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = true))
	TObjectPtr<UBehaviorTree> BehaviorTree;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = true))
	TObjectPtr<UBehaviorTreeComponent> BehaviorTreeComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = true))
	TObjectPtr<UBlackboardComponent> BlackboardComponent;
};
