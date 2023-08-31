#ifndef MOTORBIKE_H
#define MOTORBIKE_H

#include "Vehicle.h"

class Motorbike : public Vehicle {
private:
    int seconds;
    int motorbikeTime;

public:
    int getParkingDuration(int seconds);
};

#endif
