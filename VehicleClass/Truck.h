#define _Truck_
#ifndef _Truck_
#include "Vehicle.h"
class Truck : public Vehicle
{
public:
	Truck(double gas, int wheelsAmount, enum engineType, bool typeTrailer, );



private:
	bool typeTrailer;

};

#endif // !_Truck_