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
	std::cout << "��� :3";
	Beep(600, 600);
}

void Motorcycle::Refuel()
{
	std::cout << "�����-�����-����� :3";
}

void Motorcycle::StartEngine()
{
	std::cout << "������ :3";
}
