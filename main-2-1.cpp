#include <iostream>

extern void hexDigits(int *numbers,int length);

int main() {

    int* array = new int[10];

    for (int i = 0; i < 10; i++) {
        std::cout << "Add a number: ";
        std::cin >> array[i];
    }

    hexDigits(array, 10);
}