#include "AirVehicle.h"

AirVehicle::AirVehicle() : weight(0), fuel(100), numberOfFlights(0) {}

AirVehicle::AirVehicle(int w) {
    weight = w;
    fuel = 100;
    numberOfFlights = 0;
}

void AirVehicle::refuel() {
    fuel = 100;
}

void AirVehicle::fly(int headwind, int minutes) {

    numberOfFlights++;
}

float AirVehicle::get_fuel() {
    return fuel;
}

void AirVehicle::set_fuel(float newFuel) {
    if (newFuel >= 0 && newFuel <= 100) {
        fuel = newFuel;
    }
}

int AirVehicle::get_numberOfFlights() {
    return numberOfFlights;
}

void AirVehicle::set_numberOfFlights(int newNumberOfFlights) {
    if (newNumberOfFlights >= 0) {
        numberOfFlights = newNumberOfFlights;
    }
}

int AirVehicle::get_weight() {
    return weight;
}

void AirVehicle::set_weight(int newWeight) {
    if (newWeight >= 0) {
        weight = newWeight;
    }
}
