#ifndef MOTORBIKE_H
#define MOTORBIKE_H

#include "Vehicle.h"

class Motorbike : public Vehicle {
private:
    int seconds;
    int motorbikeTime;
public:
    Motorbike(int id);  // add this line
    int getParkingDuration(int seconds);
};

#endif
