// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Effects/AFEffectApplicationRequirement.h"
#include "AFEffectAlreadyApplied.generated.h"

/**
 * If effect of the same type is already applied, it will be skipped.
 */
UCLASS(meta = (DisplayName = "Only One Of Type"))
class ABILITYFRAMEWORK_API UAFEffectAlreadyApplied : public UAFEffectApplicationRequirement
{
	GENERATED_BODY()
public:
	virtual bool CanApply(FGAEffect* EffectIn, FGAEffectProperty& InProperty,
		struct FGAEffectContainer* InContainer,
		const FGAEffectContext& InContext,
		const FGAEffectHandle& InHandle) override;


	
	
	
};
