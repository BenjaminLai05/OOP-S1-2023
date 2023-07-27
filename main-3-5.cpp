#include <iostream>

extern double sum_even(double array[], int n);

int main() { 
    double array[5] = {1,2,3,4,5};
    std::cout << sum_even(array, 5);
}