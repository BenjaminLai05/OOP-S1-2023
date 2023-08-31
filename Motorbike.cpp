#include "Motorbike.h"

Motorbike::Motorbike(int id) : Vehicle(id) {}

int Motorbike::getParkingDuration(int seconds) {
    motorbikeTime = static_cast<int>(0.85 * seconds);
    return motorbikeTime;
}
