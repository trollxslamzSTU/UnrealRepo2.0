#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Collectable.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FCollectedSignature, class ACollectable*, subject, AController*, causer,
                                               int, points);


class USphereComponent;

UCLASS(Abstract)
class C4EGAMEPROJECT_API ACollectable : public AActor
{
	GENERATED_BODY()

public:
	ACollectable();

	UPROPERTY(BlueprintAssignable)
	FCollectedSignature OnCollected;

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TObjectPtr<USphereComponent> _SphereCollision;

	virtual void BeginPlay() override;
	
	UFUNCTION(BlueprintCallable)
	void BroadcastCollected(AController* causer);

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int points;
};
