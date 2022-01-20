// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyGeometry.h"
#include "MyPrimitive.generated.h"

/**
 *
 */
UCLASS()
class LABA3_API AMyPrimitive : public AMyGeometry
{
	GENERATED_BODY()

public:
	AMyPrimitive(const FObjectInitializer& ObjectInitializer);

public:
	UFUNCTION(BlueprintCallable, Category = "Laba3 Nodes")
		void getLinearColor(FLinearColor& _color);

	UFUNCTION(BlueprintCallable, Category = "Laba3 Nodes")
		void getMetalic(float& _metalic);

	UFUNCTION(BlueprintCallable, Category = "Laba3 Nodes")
		void getRoughness(float& _roughness);

public:
	UPROPERTY(EditAnywhere)
		FLinearColor color;
	UPROPERTY(EditAnywhere)
		float metalic;
	UPROPERTY(EditAnywhere)
		float roughness;
};
