#include <iostream>

extern double weighted_average(int array[], int n);

int main() { 
    int array[6] = {10,10,10,10,10,10};

    std::cout << weighted_average(array, 6);

    return 0;


}