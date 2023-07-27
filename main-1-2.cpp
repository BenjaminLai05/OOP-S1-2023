#include <iostream>
extern double array_mean(int array[], int n);

int main() {

  int array[6] = {1, 2, 3, 4, 5, 6};

  std::cout << array_mean(array, 6);
}