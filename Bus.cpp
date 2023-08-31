#include "Bus.h"

Bus::Bus(int id) : Vehicle(id) {}

int Bus::getParkingDuration() {
    int originalDuration = Vehicle::getParkingDuration();
    return static_cast<int>(0.75 * originalDuration);
}
