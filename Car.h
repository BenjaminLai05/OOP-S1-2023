// Car.h
#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle {
private:
    int seconds;
    int carTime;
public:
    Car(int id);  // add this line
    int getParkingDuration(int seconds);
};

#endif
