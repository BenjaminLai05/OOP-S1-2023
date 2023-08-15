#include <iostream>
extern int length;
extern int *readNumbers();
extern bool equalsArray(int *numbers1, int *numbers2, int length);
extern int *reverseArray(int *numbers1,int length);

int main() {
  int *arrayOne = readNumbers();
  int *reversedArray = reverseArray(arrayOne, length);

  std::cout << equalsArray(arrayOne, reversedArray, length);

  delete[] arrayOne;
  delete[] reversedArray;

  return 0;
}
