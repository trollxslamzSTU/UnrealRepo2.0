#pragma once

#include "CoreMinimal.h"
#include "Target.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FTargetDestroyedSignature, AActor*, target, AController*,
                                               delegateInstigator, int, points);

class UHealthComponent;

UCLASS(ClassGroup=(Custom), meta = (BlueprintSpawnableComponent))
class C4EGAMEPROJECT_API UTarget : public UActorComponent
{
	GENERATED_BODY()

public:
	UTarget();

	UPROPERTY(BlueprintAssignable)
	FTargetDestroyedSignature OnTargetDestroyed;

	
protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TObjectPtr<UHealthComponent> _HealthComp;

	
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int PointsToAward;
private:
	UFUNCTION()
	void Handle_Dead(AController* causer);

	
};
