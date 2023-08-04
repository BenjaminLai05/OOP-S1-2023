#include <cmath>
#include <iostream>

void print_binary_str(std::string decimal_number) {
  int num = std::stoi(decimal_number);
  int arraySize;

  if (num & (num - 1) == 0) {
    arraySize = (int)ceil(log2(num) + 1);
  } else {
    arraySize = (int)ceil(log2(num));
  }

  int* array = new int[arraySize];

  for (int i = arraySize - 1; i >= 0; i--) {
    if (num >= pow(2, i)) {
      array[i] = 1;
      num -= pow(2, i);
    } else {
      array[i] = 0;
    }
  }

  for (int i = arraySize - 1; i >= 0; i--) {
    std::cout << array[i];
  }
  std::cout << std::endl;

  delete[] array;
}
