#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "MatchStateHandler.generated.h"

UINTERFACE(MinimalAPI)
class UMatchStateHandler : public UInterface
{
	GENERATED_BODY()
};


class C4EGAMEPROJECT_API IMatchStateHandler
{
	GENERATED_BODY()

	
public:
	UFUNCTION(BlueprintNativeEvent)
	void Handle_MatchStart();

	UFUNCTION(BlueprintNativeEvent)
	void Handle_End();
};
