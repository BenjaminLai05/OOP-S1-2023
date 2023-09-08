#ifndef AIRFLEET_H
#define AIRFLEET_H
#include "AirVehicle.h"

class AirFleet {

protected:
    AirVehicle ** fleet;

public:
    AirFleet();
    AirVehicle ** get_fleet();

};

#endif