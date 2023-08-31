// Car.cpp
#include "Car.h"

Car::Car(int id) : Vehicle(id) { }  // add this constructor definition

int Car::getParkingDuration(int seconds) {
    carTime = 0.90 * seconds;
    return carTime;
}
