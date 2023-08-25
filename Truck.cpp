#include "Truck.h"
#include <string>


Truck::Truck() {
   code = 0;
   name = "";
} 

Truck::Truck(int temp_b_code, std::string temp_b_name) {
   temp_b_code = code;
   temp_b_name = name;
} 

std::string Truck::get_brand_name() {
   return name;
} 
int Truck::get_brand_code() {
   return code;
}

void Truck::set_name(std::string x) {
   name = x;
}

void Truck::set_code(int y) {
   code = y;
}
Truck::~Truck() {
   
}; // destructor