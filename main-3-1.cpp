#include <iostream>
extern int length;
extern int *readNumbers();
extern bool equalsArray(int *numbers1, int *numbers2, int length);

int main() {
  int *arrayOne = readNumbers();
  int *arrayTwo = readNumbers();

  std::cout << equalsArray(arrayOne, arrayTwo, length);

  delete[] arrayOne;
  delete[] arrayTwo;

  return 0;
}
