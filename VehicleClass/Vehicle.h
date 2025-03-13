#pragma once
#include "EngineType.h"
#include <iostream>
#include <Windows.h>

using enum EngineType;
class Vehicle
{
public:
	Vehicle(double gas, int wheelsAmount, enum engineType);
	virtual ~Vehicle() = default;
	
	virtual void Beep();
	virtual void Refuel();
	virtual void StartEngine();

private:
	double gas;
	int wheelsAmount;
	enum engineType;
};