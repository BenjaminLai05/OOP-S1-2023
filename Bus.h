#ifndef BUS_H
#define BUS_H

#include "Vehicle.h"

class Bus : public Vehicle {
private:
    int seconds;
    int busTime;
public:
    Bus(int id);  // add this line
    int getParkingDuration(int seconds);
};

#endif
