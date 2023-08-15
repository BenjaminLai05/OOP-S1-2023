#include <iostream>

int length;

int *readNumbers() {
  // static retains its value between successive calls to the function.
  static int callCount = 0;
  callCount++;

  if (callCount == 1) {
    std::cout << "Size for Both Arrays: ";
    std::cin >> length;

    int *arrayOne = new int[length];

    for (int i = 0; i < length; i++) {
      std::cout << "Add a number: ";
      std::cin >> arrayOne[i];
    }
    return arrayOne;
  } else if (callCount == 2) {
    int *arrayTwo = new int[length];

    for (int i = 0; i < length; i++) {
      std::cout << "Add a number (Second Array): ";
      std::cin >> arrayTwo[i];
    }
    return arrayTwo;
  }

  return nullptr;
}

bool equalsArray(int *numbers1, int *numbers2, int length) {
  if (length < 1) {
    return false;
  }
  for (int i = 0; i < length; i++) {
    if (numbers1[i] != numbers2[i]) {
      return false;
    }
  }
  return true;
}