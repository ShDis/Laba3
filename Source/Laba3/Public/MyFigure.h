// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyPoint.h"
#include "MyFigure.generated.h"

UENUM(BlueprintType)
enum EOutcomePins
{
	Failure,
	Success
};

/**
 *
 */
UCLASS()
class LABA3_API AMyFigure : public AMyPoint
{
	GENERATED_BODY()


public:

	AMyFigure();

	UFUNCTION(BlueprintCallable, meta = (ExpandEnumAsExecs = "Outcome"), Category = "Laba3 Nodes")
		void setSize(float _size, TEnumAsByte<EOutcomePins>& Outcome);

	UFUNCTION(BlueprintCallable, meta = (ExpandEnumAsExecs = "Outcome"), Category = "Laba3 Nodes")
		void setAngle(float _angle, TEnumAsByte<EOutcomePins>& Outcome);

	virtual void getPerimeter(float& _perimeter);
	virtual void getSquare(float& _square);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float angle; // 0 - 360
	UPROPERTY(EditAnywhere, BlueprintReadWrite);
		float size; // 0 - 1
};

