#include "Vehicle.h"
#include "Motorcycle.h"
#include "Car.h"
#include "Truck.h"
#include "FleetOfVehicles.h"


int main()
{
	Motorcycle mortcycl(30, 2, V6, true, false);
	Motorcycle motrcyle(30, 2, V4, false, true);
	Car cr(50, 4, V8, hatchback, true);
	Car cra(50, 4, V12, pickup, true);
	Truck trk(80, 4, V12, true, false);
	Truck tark(100, 6, V16, true, true);

	FleetOfVehicles fleet;
	fleet.AddVehicle(&mortcycl);
	fleet.AddVehicle(&motrcyle);
	fleet.AddVehicle(&cr);
	fleet.AddVehicle(&cra);
	fleet.AddVehicle(&trk);
	fleet.AddVehicle(&tark);

	fleet.AllBeeBeep();
	

	return 0;
}