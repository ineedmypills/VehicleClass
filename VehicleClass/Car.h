#ifndef _CAR_
#define _CAR_

#include "Vehicle.h"
#include "FormFactor.h"

class Car : public Vehicle
{
public:
	Car(double gas, int wheelsAmount, EngineType engineType, FormFactor formFactor, bool spareTire);

	void Beep() override;
	void Refuel() override;
	void StartEngine() override;


private:
	FormFactor formFactor;
	bool spareTire;

};

#endif // !_CAR_