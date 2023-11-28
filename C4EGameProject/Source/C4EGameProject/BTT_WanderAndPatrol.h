#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BTT_WanderAndPatrol.generated.h"


UCLASS(Abstract)
class C4EGAMEPROJECT_API UBTT_WanderAndPatrol : public UBTTask_BlackboardBase
{
	GENERATED_BODY()

public:
	UBTT_WanderAndPatrol();

private:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	virtual FString GetStaticDescription() const override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	float PatrolRadius;
};
