#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Services/BTService_BlackboardBase.h"
#include "UBTService_PlayerLocationUpdateIfSeen.generated.h"

UCLASS()
class C4EGAMEPROJECT_API UUBTService_PlayerLocationUpdateIfSeen : public UBTService_BlackboardBase
{
	GENERATED_BODY()
public:

	UUBTService_PlayerLocationUpdateIfSeen();

	
	
protected:
	
	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
	
};
