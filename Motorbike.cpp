#include "Motorbike.h"

Motorbike::Motorbike() {
   motorbikeTime = 0;
}
int Motorbike::getParkingDuration(int seconds) {
    motorbikeTime = 0.85 * seconds;
    return motorbikeTime;
}
