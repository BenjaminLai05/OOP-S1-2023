#pragma once
#include <ctime>

class Vehicle {
public:
    Vehicle(int id);
    int getID() const;
    virtual int getParkingDuration() const;
    virtual ~Vehicle();
protected:
    std::time_t timeOfEntry;
    int ID;
};
