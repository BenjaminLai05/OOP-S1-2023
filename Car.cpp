#include "Car.h"

int Car::getParkingDuration(int seconds) {
    carTime = 0.90 * seconds;
    return carTime;
}
