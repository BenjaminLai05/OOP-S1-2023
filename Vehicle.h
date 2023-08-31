#ifndef VEHICLE_H
#define VEHICLE_H

#include <ctime>

class Vehicle {
 private:
  std::time_t timeOfEntry;
  int ID;

 public:
  int setID();
  void getID();
  virtual int getParkingDuration(int seconds);
};

#endif
