#include "Car.h"

Car::Car(int id) : Vehicle(id) {}

int Car::getParkingDuration() {
    int originalDuration = Vehicle::getParkingDuration();
    return static_cast<int>(0.90 * originalDuration);
}
