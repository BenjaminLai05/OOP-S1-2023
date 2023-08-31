#include "Bus.h"

Bus::Bus() {
   busTime = 0;
}


int Bus::getParkingDuration(int seconds) {
    busTime = 0.75 * seconds;
    return busTime;
}
