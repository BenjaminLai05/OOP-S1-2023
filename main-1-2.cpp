#include <iostream>
#include "ParkingLot.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

int main() {
    ParkingLot lot(10);
    std::string vehicleType;
    int id = 1;

    while (lot.getCount() < 10) {
        std::cout << "Enter the type of vehicle to park (Car/Bus/Motorbike): ";
        std::cin >> vehicleType;

        if (vehicleType == "Car") {
            lot.parkVehicle(new Car(id++));
        } else if (vehicleType == "Bus") {
            lot.parkVehicle(new Bus(id++));
        } else if (vehicleType == "Motorbike") {
            lot.parkVehicle(new Motorbike(id++));
        } else {
            std::cout << "Invalid vehicle type. Try again." << std::endl;
            continue;
        }
    }

    int unparkId;
    std::cout << "Enter the ID of the vehicle to unpark: ";
    std::cin >> unparkId;

    lot.unparkVehicle(unparkId);

    return 0;
}
