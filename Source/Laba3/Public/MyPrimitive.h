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
	AMyPrimitive();

public:
	UFUNCTION(BlueprintPure, meta = (CompactNodeTitle = "get linear color"), Category = "Laba3 Nodes")
		void getLinearColor(FLinearColor& _color);

	UFUNCTION(BlueprintPure, meta = (CompactNodeTitle = "get metalic"), Category = "Laba3 Nodes")
		void getMetalic(float& _metalic);

	UFUNCTION(BlueprintPure, meta = (CompactNodeTitle = "get roungness"), Category = "Laba3 Nodes")
		void getRoughness(float& _roughness);

	UFUNCTION(BlueprintCallable, Category = "Laba3 Nodes")
		void setLinearColor(FLinearColor _color);

	UFUNCTION(BlueprintCallable, Category = "Laba3 Nodes")
		void setMetalic(float _metalic);

	UFUNCTION(BlueprintCallable, Category = "Laba3 Nodes")
		void setRoughness(float _roughness);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FLinearColor color;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float metalic;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float roughness;
};
