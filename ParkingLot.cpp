#include "ParkingLot.h"
#include <iostream>

ParkingLot::ParkingLot(int capacity) : maxCapacity(capacity), count(0) {}

void ParkingLot::parkVehicle(Vehicle* vehicle) {
    if (count >= maxCapacity) {
        std::cout << "The lot is full" << std::endl;
        return;
    }
    vehicles.push_back(vehicle);
    ++count;
    std::cout << "Vehicle ID: " << vehicle->getID() << " parked." << std::endl;
}

void ParkingLot::unparkVehicle(int id) {
    for (auto it = vehicles.begin(); it != vehicles.end(); ++it) {
        if ((*it)->getID() == id) {
            delete *it;
            vehicles.erase(it);
            --count;
            std::cout << "Vehicle ID: " << id << " has been unparked." << std::endl;
            return;
        }
    }
    std::cout << "Vehicle not in the lot" << std::endl;
}

int ParkingLot::getCount() const {
    return count;
}

int ParkingLot::countOverstayVehicles(int maxParkingDuration) const {
    int overstayCount = 0;
    for (const auto& vehicle : vehicles) {
        if (vehicle->getParkingDuration() > maxParkingDuration) {
            ++overstayCount;
        }
    }
    return overstayCount;
}
