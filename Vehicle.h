#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <ctime>

class Vehicle {
   private:
   std::time_t timeOfEntry; // Represents the time that the vehicle enters the parking lot.
   int ID; 

   public: 
   int setID(); 
   void getID();
   virtual int getParkingDuration(int seconds);
};

class Car : public Vehicle {
private:
int seconds;
int carTime;
public:
int getParkingDuration(int seconds);
};

class Bus : public Vehicle {
private:
int seconds;
int busTime;
public:
int getParkingDuration(int seconds);
};

class Motorbike : public Vehicle {
private:
int seconds;
int motorbikeTime;

public:
int getParkingDuration(int seconds);

};

#endif