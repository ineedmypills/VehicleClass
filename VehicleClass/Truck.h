#ifndef _Truck_
#define _Truck_

#include "Vehicle.h"
class Truck : public Vehicle
{
public:
	Truck(double gas, int wheelsAmount, EngineType engineType, bool isTrailer, bool isBed);

	void BeeBeep() override;
	void Refuel() override;
	void StartEngine() override;

private:
	bool isTrailer;
	bool isBed;

};

#endif // !_Truck_