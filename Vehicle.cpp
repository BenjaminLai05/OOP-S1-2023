#include <iostream>
#include "Vehicle.h"

   int Vehicle::setID() {
      return 0;
   }
   void Vehicle::getID() {

   }

   int Vehicle::getParkingDuration(int seconds) {
      return 0;
   }

    int Car::getParkingDuration(int seconds) {
      carTime = .90 * seconds;
      return carTime; 
   }

    int Bus::getParkingDuration(int seconds) {
      busTime = 0.75 * seconds;
      return busTime;
   }

   int Motorbike::getParkingDuration(int seconds) {
      motorbikeTime = .85 * seconds; 
      return motorbikeTime;
   }

   



