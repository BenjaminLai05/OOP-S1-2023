#include "Car.h"

Car::Car() {
   carTime = 0;
}

int Car::getParkingDuration(int seconds) {
    carTime = 0.90 * seconds;
    return carTime;
}
