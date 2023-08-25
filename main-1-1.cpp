#include <iostream>
#include <string> 
#include "Truck.cpp"

int main() {
   Truck T1;

   std::cout << T1.get_brand_name() << T1.get_brand_code() << std::endl;

   return 0;
}