#include "Car.h"

Car::Car(double gas, int wheelsAmount, EngineType engineType, FormFactor formFactor, bool spareTire) : Vehicle{ gas, wheelsAmount, engineType }
{
	this->formFactor;
	this->spareTire;
}

void Car::BeeBeep()
{
	Beep(600, 660);
}

void Car::Refuel()
{
	std::cout << "Мафынка заправлена";
}

void Car::StartEngine()
{
	std::cout << "Первая с бустом, вторая с хрустом";
}
