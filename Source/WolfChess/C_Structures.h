// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "C_Structures.generated.h"

/**
 * 
 */

USTRUCT(BlueprintType)
struct FCustomStruct
{

	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 nb;
};

UCLASS()
class WOLFCHESS_API UC_Structures : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
};
