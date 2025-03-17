#include "Motorcycle.h"

Motorcycle::Motorcycle(double gas, int wheelsAmount, EngineType engineType, bool isTruck, bool isCrandle) : Vehicle(gas, wheelsAmount, engineType )
{
	this->isTrunk = isTruck;
	this->isCradle = isCrandle;
}

Motorcycle::~Motorcycle()
{
}

void Motorcycle::BeeBeep()
{
	std::cout << "Бип :3";
	Beep(600, 600);
}

void Motorcycle::Refuel()
{
	std::cout << "Глоть-глоть-глоть :3";
}

void Motorcycle::StartEngine()
{
	std::cout << "Врууум :3";
}
