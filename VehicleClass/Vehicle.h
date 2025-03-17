#pragma once
#include "EngineType.h"
#include <iostream>
#include <Windows.h>

using enum EngineType;
class Vehicle
{
public:
	Vehicle(double gas, int wheelsAmount, EngineType engineType);
	virtual ~Vehicle() = default;
	
	virtual void BeeBeep() = 0;
	virtual void Refuel();
	virtual void StartEngine() = 0;

private:
	double gas = 0;
	int wheelsAmount;
	EngineType engineType;
};