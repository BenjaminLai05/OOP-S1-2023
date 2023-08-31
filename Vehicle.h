// Vehicle.h
#ifndef VEHICLE_H
#define VEHICLE_H

#include <ctime>

class Vehicle {
private:
    std::time_t timeOfEntry;
    int ID;
public:
    Vehicle(int id);  // constructor that takes ID
    int getID() const;
    virtual int getParkingDuration();
};

#endif
