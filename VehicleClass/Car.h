#define _CAR_
#ifndef _CAR_

#include "Vehicle.h"

class Car : public Vehicle
{
public:
	Car(double gas, int wheelsAmount, enum engineType, enum formFactor, bool spareTire);



private:
	enum formFactor;
	bool spareTire;

};

#endif // !_CAR_