#define _Truck_
#ifndef _Truck_
#include "Vehicle.h"
class Truck : public Vehicle
{
public:
	Truck(double gas, int wheelsAmount, EngineType engineType, bool isTypeTrailer, bool isBed);

	void Beep() override;
	void Refuel() override;
	void StartEngine() override;

private:
	bool isTypeTrailer;
	bool isBed;

};

#endif // !_Truck_