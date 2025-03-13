#include "Vehicle.h"

Vehicle::Vehicle(double gas, int wheelsAmount, EngineType engineType)
{
	this->gas = gas;
	this->wheelsAmount = wheelsAmount;
	this->engineType = engineType;
}
