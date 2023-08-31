#include "Motorbike.h"

int Motorbike::getParkingDuration(int seconds) {
    motorbikeTime = 0.85 * seconds;
    return motorbikeTime;
}
