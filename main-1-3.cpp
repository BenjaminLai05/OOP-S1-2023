#include <iostream>
#include <string>
#include <thread>  // for std::this_thread::sleep_for
#include <chrono>  // for std::chrono::seconds
#include "ParkingLot.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

int main() {
    ParkingLot lot(10);
    std::string vehicleType;
    int id = 1;
  
    // Park 5 Cars
    for(int i = 0; i < 5; ++i) {
        lot.parkVehicle(new Car(id++));
    }
  
    // Park 3 Buses
    for(int i = 0; i < 3; ++i) {
        lot.parkVehicle(new Bus(id++));
    }

    // Park 2 Motorbikes
    for(int i = 0; i < 2; ++i) {
        lot.parkVehicle(new Motorbike(id++));
    }
  
    // Sleep for a few seconds to simulate some time passing. 
    // This makes it more likely that some vehicles will overstay the 15-second limit.
    std::this_thread::sleep_for(std::chrono::seconds(20));

    // Count vehicles that overstayed 15 seconds
    int overstayed = lot.countOverstayingVehicles(15);

    std::cout << "Number of vehicles that overstayed more than 15 seconds: " << overstayed << std::endl;

    return 0;
}
