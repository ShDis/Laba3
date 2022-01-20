// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPrimitive.h"


AMyPrimitive::AMyPrimitive(const FObjectInitializer& ObjectInitializer)
{

}

void AMyPrimitive::getLinearColor(FLinearColor& _color) {
	_color = this->color;
}

void AMyPrimitive::getMetalic(float& _metalic)
{
	_metalic = this->metalic;
}

void AMyPrimitive::getRoughness(float& _roughness)
{
	_roughness = this->roughness;
}
