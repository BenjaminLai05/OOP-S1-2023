#include <iostream>

void print_scaled(int array[3][3], int scale) {
  int scaledArray[3][3];

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      scaledArray[i][j] = array[i][j] * scale;
    }
  }
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      std::cout << scaledArray[i][j] << " ";
    }
  }
}