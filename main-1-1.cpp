#include <iostream>
#include <vector>
#include <string>
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

int main() {
    int numOfV;
    std::cout << "How many vehicles would you like to park? ";
    std::cin >> numOfV;

    std::vector<std::string> VehicleStorage(numOfV);

    for (int i = 0; i < numOfV; ++i) {
        std::cout << "Enter type of vehicle " << i+1 << " (Car/Bus/Motorbike): ";
        std::cin >> VehicleStorage[i];
    }

    for (int i = 0; i < numOfV; ++i) {
        Vehicle* v = nullptr;

        if (VehicleStorage[i] == "Car") {
            v = new Car(i);
        }
        else if (VehicleStorage[i] == "Bus") {
            v = new Bus(i);
        }
        else if (VehicleStorage[i] == "Motorbike") {
            v = new Motorbike(i);
        }

        if (v) {
            std::cout << "Vehicle ID: " << v->getID() << ", Parking Duration: " << v->getParkingDuration() << std::endl;
            delete v;
        }
    }

    return 0;
}
