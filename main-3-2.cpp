#include <iostream> 

extern int median_array(int array[], int n);

int main() {

    int array[7] = {7,4,3,2,5,6,1}; 
    
    std::cout << median_array(array, 7);
    
    return 0;

}