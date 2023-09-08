#include "AirVehicle.h"
#include <iostream>

int main() {
    AirVehicle av(100);
    std::cout << av.get_numberOfFlights() << std::endl;
    return 0;
}
