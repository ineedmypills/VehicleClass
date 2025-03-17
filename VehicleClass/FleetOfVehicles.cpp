#include "FleetOfVehicles.h"

FleetOfVehicles::FleetOfVehicles()
{
}

void FleetOfVehicles::Fleet(const Vehicle& obj)
{
	fleet.push_back(obj);
}

void FleetOfVehicles::AllBeeBeep() const 
{
    for (const auto& i : fleet)
    {
        i.get()->BeeBeep();
    }
}
