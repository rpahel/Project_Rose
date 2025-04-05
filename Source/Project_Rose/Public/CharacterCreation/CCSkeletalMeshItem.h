// Copyright Raphael "Rpahel" Coimbra 2025. All rights reserved.

#pragma once

#include "CharacterCreatorItem.h"
#include "CCSkeletalMeshItem.generated.h"

UENUM()
enum class ECCSkMCategory
{
	NONE = 0 UMETA(Hidden),
	BODY = 1 UMETA(DisplayName = "Body")
};

/**
 *
 */
USTRUCT(BlueprintType)
struct PROJECT_ROSE_API FCCSkeletalMeshItem : public FCharacterCreatorItem
{
	GENERATED_BODY()

public:
	FORCEINLINE ECCSkMCategory GetCategory() const
	{
		return Category;
	}

	FORCEINLINE const TSoftObjectPtr<USkeletalMesh>& GetMesh() const
	{
		return Mesh;
	}

private:
	UPROPERTY(EditAnywhere, Category = "Character Creation Item")
	ECCSkMCategory Category = ECCSkMCategory::NONE;

	UPROPERTY(EditAnywhere, Category = "Character Creation Item", meta = (DisplayAfter = "LocalizedName"))
	TSoftObjectPtr<USkeletalMesh> Mesh;
};
