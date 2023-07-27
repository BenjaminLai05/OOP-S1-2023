#include <iostream> 

extern int median_array(int array[], int n);

int main() {

    int array[6] = {4,3,2,1,5,6}; 
    
    std::cout << median_array(array, 6);
    
    return 0;

}