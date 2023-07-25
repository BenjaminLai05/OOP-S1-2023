#include <iostream>
using namespace std;

extern int array_sum(int array[], int n);

int main() {
  int array[5] = {1, 2, 3, 4, 5};

  cout << "Sum of array elements: " << array_sum(array, 5);
}
