#include <iostream>

extern int count_evens(int number);

int main() {
    
    int number;

    std::cout << "Input Number: ";
    std::cin >> number;

    int result = count_evens(number);

    std::cout << "The number of evens from 1 to " << number << " is: " << result << ".";
    
    return 0;
}