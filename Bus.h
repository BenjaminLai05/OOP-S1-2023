#ifndef BUS_H
#define BUS_H

#include "Vehicle.h"

class Bus : public Vehicle {
private:
    int seconds;
    int busTime;

public:
    int getParkingDuration(int seconds);
};

#endif
