#pragma once
#include "Vehicle.h"
class Motorcycle : public Vehicle
{
public:
	Motorcycle(double gas, int wheelsAmount, EngineType engineType, bool isTruck, bool isCrandle);
	~Motorcycle() override;

	void BeeBeep() override;
	void Refuel() override;
	void StartEngine() override;


private:
	bool isTrunk;
	bool isCradle;
};

