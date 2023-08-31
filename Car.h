#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle {
private:
    int carTime;

public:
    Car(int id);
    int getParkingDuration(int seconds);
};

#endif
