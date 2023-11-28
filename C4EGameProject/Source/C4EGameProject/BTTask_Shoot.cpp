#include "BTTask_Shoot.h"

#include "AIController.h"
#include "C4ECharacterAI.h"

UBTTask_Shoot::UBTTask_Shoot()
{
}

EBTNodeResult::Type UBTTask_Shoot::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);
	
	AC4ECharacterAI* AIChar = Cast<AC4ECharacterAI>(OwnerComp.GetAIOwner()->GetPawn());
	
	if(OwnerComp.GetAIOwner() == nullptr)
	{
		return EBTNodeResult::Failed;
	}
	if (AIChar == nullptr)
	{
		return EBTNodeResult::Failed;
	}
	AIChar->Shoot();

	return EBTNodeResult::Succeeded;
	
}
