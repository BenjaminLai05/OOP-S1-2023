#include "Bus.h"

Bus::Bus(int id) : Vehicle(id) {}

int Bus::getParkingDuration(int seconds) {
    busTime = static_cast<int>(0.75 * seconds);
    return busTime;
}
