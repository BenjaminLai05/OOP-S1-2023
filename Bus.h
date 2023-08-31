#ifndef BUS_H
#define BUS_H

#include "Vehicle.h"

class Bus : public Vehicle {
private:
    int busTime;

public:
    Bus(int id);
    int getParkingDuration(int seconds);
};

#endif
