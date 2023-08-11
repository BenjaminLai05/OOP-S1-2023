#include <iostream>

void print_matrix(int array[10][10]) {

   int count = 0;
   for (int i = 0; i < 10; i++) {
      for (int j = 0; j < 10; j++) {
         std::cout << array[i][j] << " ";
         count++;
      }
   if (count == 10) {
      std::cout << "\n";
      count = 0;
   }
   }
}