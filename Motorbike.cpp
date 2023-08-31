#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle {
private:
    int seconds;
    int carTime;

public:
    int getParkingDuration(int seconds);
};

#endif
