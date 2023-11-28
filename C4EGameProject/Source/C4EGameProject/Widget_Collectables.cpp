
#include "Widget_Collectables.h"
#include "Components/TextBlock.h"


void UWidget_Collectables::NativeConstruct()
{
	Super::NativeConstruct();

	if(CollectableText)
	{
		CollectableText->SetText(FText::FromString("Collectables:0"));
	}
}

void UWidget_Collectables::UpdateCollectables(int Collectables)
{
	if(CollectableText)
	{
		CollectableText->SetText(FText::FromString(FString::Printf(TEXT("Collectables: %d"), Collectables)));
	}
}