#include <iostream>

void two_five_nine(int array[], int n) {
  int countTwo = 0;
  int countFive = 0;
  int countNine = 0;
  for (int i = 0; i < n; i++) {
    switch (array[i]) {
      case 2:
        countTwo++;
        break;

      case 5:
        countFive++;
        break;

      case 9:
        countNine++;
        break;
    }
  }

  if (countTwo == 0 && countFive == 0 && countNine == 0) {
    std::cout << "There are no 2's, 5's or 9's";
    }
    else { 
    std::cout << "2:" << countTwo << ";5:" << countFive << ";9:" << countNine;
    }
}