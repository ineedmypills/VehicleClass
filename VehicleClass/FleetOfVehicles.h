#ifndef _FleetOfVehicles_
#define _FleetOfVehicles_
#include "Vehicle.h"
#include<vector>
#include<memory>

class FleetOfVehicles
{
public:
	FleetOfVehicles();

	void Fleet(const Vehicle& obj);
	void AllBeeBeep() const;

private:
	std::vector <Vehicle> fleet;
};

#endif // !_FleetOfVehicles_