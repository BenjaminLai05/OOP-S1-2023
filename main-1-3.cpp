#include <iostream>
#include <string>
#include <unistd.h> // for sleep function
#include "ParkingLot.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

int main() {
    ParkingLot lot(10);
    int idCounter = 1;
    std::string vehicleType;

    // Fill the parking lot with vehicles
    for (int i = 0; i < 5; ++i) {
        lot.parkVehicle(new Car(idCounter++));
    }
    for (int i = 0; i < 3; ++i) {
        lot.parkVehicle(new Bus(idCounter++));
    }
    for (int i = 0; i < 2; ++i) {
        lot.parkVehicle(new Motorbike(idCounter++));
    }

    // Sleep for 16 seconds to simulate the parking durations
    sleep(16);

    // Count and print the number of vehicles that have overstayed for more than 15 seconds
    int overstayCount = lot.countOverstayVehicles(15);
    std::cout << "Number of vehicles that have overstayed for more than 15 seconds: " << overstayCount << std::endl;

    return 0;
}
