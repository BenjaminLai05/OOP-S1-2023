#include <iostream>

extern int binary_to_int(int binary_digits[], int number_of_digits);

int main() {
    int n;
    std::cout << "Num of Binary Digits: "; 
    std::cin >> n;

    int* binary_digits = new int[n];

    for (int i = 0; i < n; i++) {
        std::cout << "Enter digit " << i << " (0 or 1): ";
        std::cin >> binary_digits[i];
    }

    int decimal = binary_to_int(binary_digits, n);
    
    std::cout << "Converted Integer: " << decimal << std::endl;

    delete[] binary_digits;

    return 0;
}
