// Fill out your copyright notice in the Description page of Project Settings.


#include "MyFigure.h"

AMyFigure::AMyFigure()
{
	this->size = 1.0;
	this->angle = 360.0;
}

void AMyFigure::setSize(float _size, TEnumAsByte<EOutcomePins>& Outcome)
{
	if (_size < 0 || _size > 1)
	{
		Outcome = EOutcomePins::Failure;
		return;
	}
	this->size = _size;
	Outcome = EOutcomePins::Success;
}

void AMyFigure::setAngle(float _angle, TEnumAsByte<EOutcomePins>& Outcome)
{
	if (_angle < 0 || _angle > 360)
	{
		Outcome = EOutcomePins::Failure;
		return;
	}
	this->angle = _angle;
	Outcome = EOutcomePins::Success;
}

void AMyFigure::getPerimeter(float& _perimeter)
{
	_perimeter = 2.0 * pi * size / 360.0;
}

void AMyFigure::getSquare(float& _square)
{
	_square = pi * size * size * angle / 360.0;
}
