#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <ctime>

class Vehicle {
   private:
   std::time_t timeOfEntry;
   int ID;

   public: 
   Vehicle(int id);
   int setID();
   void getID();
   virtual int getParkingDuration(int seconds);
};

#endif
