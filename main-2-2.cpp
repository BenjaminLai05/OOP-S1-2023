#include <iostream>

extern int bin_to_int(int binary_digits[], int number_of_digits);

int main() {
   int digitNum;

   std::cout << "How many digits in your binary number? ";
   std::cin >> digitNum;

   int array[digitNum];

   for (int i = 0; i < digitNum; i++) {
      std::cout << "Enter Binary Number: ";
      std::cin >> array[i];
   }

   std::cout << bin_to_int(array, digitNum) << "\n";

}