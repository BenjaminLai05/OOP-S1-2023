#include "Vehicle.h"
#include <ctime>

Vehicle::Vehicle(int id) : ID(id) {
    timeOfEntry = std::time(nullptr);
}

int Vehicle::getID() const {
    return ID;
}

int Vehicle::getParkingDuration() const {
    return std::difftime(std::time(nullptr), timeOfEntry);
}
