#ifndef TRUCK_H
#define TRUCK_H


#include <iostream>
#include <string>
class Truck {
   private:

   int code;
   std::string name;

   public:
   Truck();
   Truck(int temp_b_code, std::string temp_b_name);
   std::string get_brand_name();
   int get_brand_code();
   ~Truck();
   void set_name(std::string x);
   void set_code(int y);
};

#endif