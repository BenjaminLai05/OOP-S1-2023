#include "ParkingLot.h"
#include <iostream>

ParkingLot::ParkingLot(int maxCapacity) : maxCapacity(maxCapacity), currentCount(0) {
    vehicles = new Vehicle*[maxCapacity];
}

ParkingLot::~ParkingLot() {
    for (int i = 0; i < currentCount; ++i) {
        delete vehicles[i];
    }
    delete[] vehicles;
}

void ParkingLot::parkVehicle(Vehicle* v) {
    if (currentCount >= maxCapacity) {
        std::cout << "The lot is full" << std::endl;
        return;
    }
    vehicles[currentCount++] = v;
}

void ParkingLot::unparkVehicle(int id) {
    for (int i = 0; i < currentCount; ++i) {
        if (vehicles[i]->getID() == id) {
            delete vehicles[i];
            for (int j = i; j < currentCount - 1; ++j) {
                vehicles[j] = vehicles[j + 1];
            }
            --currentCount;
            return;
        }
    }
    std::cout << "Vehicle not in the lot" << std::endl;
}

int ParkingLot::getCount() const {
    return currentCount;
}

int ParkingLot::countOverstayVehicles(int maxParkingDuration) const {
    int count = 0;
    for (int i = 0; i < currentCount; ++i) {
        if (vehicles[i]->getParkingDuration() > maxParkingDuration) {
            ++count;
        }
    }
    return count;
}
