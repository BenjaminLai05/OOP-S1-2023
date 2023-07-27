#include <iostream> 

extern int min_element(int array[], int n);

main() { 
    int array[5] = {20,10,15,16,17};
    int result = min_element(array, 5);
    std::cout << result;
}