#include "Car.h"

Car::Car(int id) : Vehicle(id) {}

int Car::getParkingDuration(int seconds) {
    carTime = static_cast<int>(0.90 * seconds);
    return carTime; 
}
