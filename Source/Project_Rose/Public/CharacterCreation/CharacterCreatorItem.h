// Copyright Raphael "Rpahel" Coimbra 2025. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CharacterCreatorItem.generated.h"

/**
 *
 */
USTRUCT()
struct PROJECT_ROSE_API FCharacterCreatorItem : public FTableRowBase
{
	GENERATED_BODY()

public:
	FORCEINLINE const FText& GetLocalizedName() const
	{
		return LocalizedName;
	}

private:
	UPROPERTY(EditAnywhere)
	FText LocalizedName = FText::GetEmpty();
};
