#include "Bus.h"

int Bus::getParkingDuration(int seconds) {
    busTime = 0.75 * seconds;
    return busTime;
}
