#include <iostream>

extern int array_sum(int array[], int n);

int main() {
  int array[6] = {1, 2, 3, 4, 5, 6};

  std::cout << array_sum(array, 6);
  
  return 0;
}
