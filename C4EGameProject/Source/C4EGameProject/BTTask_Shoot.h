#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BTTask_Shoot.generated.h"


UCLASS()
class C4EGAMEPROJECT_API UBTTask_Shoot : public UBTTask_BlackboardBase
{
	GENERATED_BODY()

public:
	UBTTask_Shoot();
	
private:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
};
