#pragma once
#include <vector>
#include "Vehicle.h"

class ParkingLot {
public:
    ParkingLot(int capacity);
    void parkVehicle(Vehicle* vehicle);
    void unparkVehicle(int id);
    int getCount() const;
    int countOverstayVehicles(int maxParkingDuration) const;
private:
    int maxCapacity;
    int count;
    std::vector<Vehicle*> vehicles;
};
