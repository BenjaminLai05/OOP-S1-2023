#include "Motorbike.h"

Motorbike::Motorbike(int id) : Vehicle(id) {}

int Motorbike::getParkingDuration() {
    int originalDuration = Vehicle::getParkingDuration();
    return static_cast<int>(0.85 * originalDuration);
}
