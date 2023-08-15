#include <iostream>

int length;

int *readNumbers() {
    std::cout << "Size for Array: ";
    std::cin >> length;

    int *arrayOne = new int[length];

    for (int i = 0; i < length; i++) {
      std::cout << "Add a number: ";
      std::cin >> arrayOne[i];
    }
    return arrayOne;
}

int *reverseArray(int *numbers1, int length) {
    int *reversedArray = new int[length];
    for (int i = 0; i < length; i++) {
        reversedArray[i] = numbers1[length - 1 - i];
    }
    return reversedArray;
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