// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyPrimitive.h"
#include "MyPoint.generated.h"

/**
 * 
 */
UCLASS()
class LABA3_API AMyPoint : public AMyPrimitive
{
	GENERATED_BODY()
	
public:
	AMyPoint();

	UFUNCTION(BlueprintCallable, Category = "Laba3 Nodes")
		void getPerimeter(int& _perimeter);

	UFUNCTION(BlueprintCallable, Category = "Laba3 Nodes")
		void getSquare(int& _square);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float x;
	UPROPERTY(EditAnywhere, BlueprintReadWrite);
		float y;
};
