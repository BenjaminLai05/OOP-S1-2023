#pragma once
#include "Vehicle.h"

class ParkingLot {
public:
    ParkingLot(int maxCapacity);
    ~ParkingLot();
    void parkVehicle(Vehicle* v);
    void unparkVehicle(int id);
    int getCount() const;
    int countOverstayingVehicles(int maxParkingDuration) const;
private:
    int maxCapacity;
    int currentCount;
    Vehicle** vehicles;
};
