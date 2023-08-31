#include "Bus.h"

Bus::Bus(int id) : Vehicle(id) { }  // add this constructor definition

int Bus::getParkingDuration(int seconds) {
    busTime = 0.75 * seconds;  // 25% reduction
    return busTime;
}
