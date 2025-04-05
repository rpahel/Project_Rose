// Copyright Raphael "Rpahel" Coimbra 2025. All rights reserved.

#pragma once

#include "CharacterCreatorItem.h"
#include "CCStaticMeshItem.generated.h"

UENUM()
enum class ECCSMCategory
{
	NONE		= 0 UMETA(Hidden),
	HAT			= 1 UMETA(DisplayName = "Hat"),
	HAIR		= 2 UMETA(DisplayName = "Hair"),
	FACIAL_HAIR	= 3 UMETA(DisplayName = "Facial hair")
};

/**
 *
 */
USTRUCT(BlueprintType)
struct PROJECT_ROSE_API FCCStaticMeshItem : public FCharacterCreatorItem
{
	GENERATED_BODY()

public:
	FORCEINLINE ECCSMCategory GetCategory() const
	{
		return Category;
	}

	FORCEINLINE const TSoftObjectPtr<UStaticMesh>& GetMesh() const
	{
		return Mesh;
	}

private:
	UPROPERTY(EditAnywhere, Category = "Character Creation Item")
	ECCSMCategory Category = ECCSMCategory::NONE;

	UPROPERTY(EditAnywhere, Category = "Character Creation Item", meta = (DisplayAfter = "LocalizedName"))
	TSoftObjectPtr<UStaticMesh> Mesh;
};
