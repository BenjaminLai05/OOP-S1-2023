#include <iostream>

int *readNumbers() {
    int* array = new int[10];
    int predefinedValues[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int i = 0; i < 10; i++) {
        array[i] = predefinedValues[i];
    }

    return array;
}

void printNumbers(int *numbers, int length) {
    for (int i = 0; i < length; i++) {
        std::cout << i << " " << numbers[i] << std::endl;
    }
}
