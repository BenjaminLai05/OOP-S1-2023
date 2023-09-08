#ifndef HELICOPTER_H
#define HELICOPTER_H
#include <string>
#include "AirVehicle.h"

class Helicopter : public AirVehicle {

protected:
    std::string name;

public:
    Helicopter();
    Helicopter(int w, std::string n);
    std::string get_name();
    void set_name(std::string name);
    void fly(int headwind, int minutes);

};

#endif





