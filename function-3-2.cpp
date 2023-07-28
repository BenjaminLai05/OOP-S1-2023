#include <cmath>
#include <iostream>

int median_array(int array[], int n) {
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (array[i] > array[j]) {
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
      }
    }
  }

  int median = array[n/2];

  if (n % 2 == 0) {
    return 0;
  } else {
    return median;
  }
}
