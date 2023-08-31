#pragma once
#include <ctime>

class Vehicle {
public:
    Vehicle(int id);
    int getID() const;
    virtual int getParkingDuration() const;
protected:
    std::time_t timeOfEntry;
    int ID;
};
