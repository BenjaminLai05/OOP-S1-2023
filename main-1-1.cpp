#include <iostream>
using namespace std;

extern int array_sum(int array[], int n);

int main() {
  int array[6] = {1, 2, 3, 4, 5, 6};

  cout << "Sum of array elements: " << array_sum(array, 6);
}
