#ifndef _CAR_
#define _CAR_

#include "Vehicle.h"
#include "FormFactor.h"

using enum FormFactor;
class Car : public Vehicle
{
public:
	Car(double gas, int wheelsAmount, EngineType engineType, FormFactor formFactor, bool spareTire);

	void BeeBeep() override;
	void Refuel() override;
	void StartEngine() override;


private:
	FormFactor formFactor;
	bool spareTire;

};

#endif // !_CAR_