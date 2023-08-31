#include "Motorbike.h"

Motorbike::Motorbike(int id) : Vehicle(id) { }  // add this constructor definition

int Motorbike::getParkingDuration(int seconds) {
    motorbikeTime = 0.85 * seconds;  // 15% reduction
    return motorbikeTime;
}
