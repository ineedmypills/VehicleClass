#include "Truck.h"

Truck::Truck(double gas, int wheelsAmount, EngineType engineType, bool isTrailer, bool isBed) : Vehicle{gas, wheelsAmount, engineType}
{
	this->isTrailer;
	this->isBed;
}

void Truck::BeeBeep()
{
	Beep(600, 600);
}

void Truck::Refuel()
{
	std::cout << "���������� ���������";
}

void Truck::StartEngine()
{
	std::cout << "���������������������������!!!!!!!!!!!!!!!";
}
