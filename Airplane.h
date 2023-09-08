#ifndef AIRPLANE_H
#define AIRPLANE_H
#include "AirVehicle.h"

class Airplane : public AirVehicle {

protected:
    int numPassengers;

public:
    Airplane();
    Airplane(int w, int p);
    int get_numPassengers();
    void set_numPassengers(int numPassengers);
    void reducePassengers(int x);
    void fly(int headwind, int minutes);

};

#endif