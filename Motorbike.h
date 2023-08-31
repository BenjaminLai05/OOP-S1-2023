#ifndef MOTORBIKE_H
#define MOTORBIKE_H

#include "Vehicle.h"

class Motorbike : public Vehicle {
private:
    int motorbikeTime;

public:
    Motorbike(int id);
    int getParkingDuration(int seconds);
};

#endif
