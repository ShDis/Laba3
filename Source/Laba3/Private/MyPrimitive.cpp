// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPrimitive.h"


AMyPrimitive::AMyPrimitive()
{
	this->color = FLinearColor();
	this->metalic = 0.5;
	this->roughness = 0.5;
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

void AMyPrimitive::setLinearColor(FLinearColor _color)
{
	this->color = _color;
}

void AMyPrimitive::setMetalic(float _metalic)
{
	this->metalic = _metalic;
}

void AMyPrimitive::setRoughness(float _roughness)
{
	this->roughness = _roughness;
}
