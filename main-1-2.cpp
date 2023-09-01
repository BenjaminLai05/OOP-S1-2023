#include <iostream>
#include <string>
#include "ParkingLot.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

int main() {
    ParkingLot lot(10);
    int idCounter = 1;
    std::string vehicleType;

    while (lot.getCount() < 10) {
        std::cout << "Enter the type of vehicle you want to park (Car/Bus/Motorbike): ";
        std::cin >> vehicleType;

        if (vehicleType == "Car") {
            lot.parkVehicle(new Car(idCounter++));
        } else if (vehicleType == "Bus") {
            lot.parkVehicle(new Bus(idCounter++));
        } else if (vehicleType == "Motorbike") {
            lot.parkVehicle(new Motorbike(idCounter++));
        } else {
            std::cout << "Invalid vehicle type. Please enter again." << std::endl;
        }
    }

    int vehicleID;
    std::cout << "Enter the ID of the vehicle you want to unpark: ";
    std::cin >> vehicleID;

    lot.unparkVehicle(vehicleID);

    return 0;
}
