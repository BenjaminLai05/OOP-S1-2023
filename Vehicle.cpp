#include "Vehicle.h"

Vehicle::Vehicle(int id) : ID(id), timeOfEntry(std::time(nullptr)) {}

int Vehicle::getID() {
    return ID;
}

int Vehicle::getParkingDuration() {
    return std::difftime(std::time(nullptr), timeOfEntry);
}
