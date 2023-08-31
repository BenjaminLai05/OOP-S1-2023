#include <iostream>
#include <vector>
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

int main() {
    std::vector<Vehicle*> vehicles;
    int nCars, nBuses, nMotorbikes;

    std::cout << "Enter the number of Cars: ";
    std::cin >> nCars;
    std::cout << "Enter the number of Buses: ";
    std::cin >> nBuses;
    std::cout << "Enter the number of Motorbikes: ";
    std::cin >> nMotorbikes;

    for(int i = 1; i <= nCars; ++i) {
        vehicles.push_back(new Car(i));
    }

    for(int i = nCars + 1; i <= nCars + nBuses; ++i) {
        vehicles.push_back(new Bus(i));
    }

    for(int i = nCars + nBuses + 1; i <= nCars + nBuses + nMotorbikes; ++i) {
        vehicles.push_back(new Motorbike(i));
    }

    for(auto v : vehicles) {
        std::cout << "Vehicle ID: " << v->getID()
                  << ", Parking Duration: " << v->getParkingDuration() << " seconds"
                  << std::endl;
        delete v;
    }

    return 0;
}
