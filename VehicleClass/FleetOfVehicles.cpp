#include "FleetOfVehicles.h"

FleetOfVehicles::FleetOfVehicles()
{
}

void FleetOfVehicles::AddVehicle(Vehicle* obj)
{
	this->fleet.push_back(obj);
}

void FleetOfVehicles::AllBeeBeep() const 
{
    for (const auto& V  : fleet)
    {
        V->BeeBeep();
    }
}
