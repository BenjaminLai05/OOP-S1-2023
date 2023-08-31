#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

int main() {
using namespace std;

    int numofV;
    

    cout << "Number of Vehicles: "; 
    cin >> numofV;

    std::string* VehicleStorage = new std::string[numofV];

    for (int i = 0; i < numofV; i++) {
      cout << "Vehicle To Park: ";
      cin >> VehicleStorage[i];
    }

    for (int i = 0; i < numofV; i++) {
      if (VehicleStorage[i] == "Car") {
         Car c1;
         cout << c1.getParkingDuration(100) << endl;
      }
      else if (VehicleStorage[i] =="Bus") {
         Bus b1;
         cout << b1.getParkingDuration(100) << endl;

      }
      else if (VehicleStorage[i] == "Motorbike") {
         Motorbike mb1;
         cout << mb1.getParkingDuration(100) << endl;
      }
      else {
         cout << "Unknown Vehicle Type: " << VehicleStorage[i] << endl;
      }
    }

    delete[] VehicleStorage;


    return 0;
}
