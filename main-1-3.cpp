#include <iostream> 

extern int num_count(int array[], int n, int number);

int main() {
     int array[6] = {1,2,3,4,5,6};

     std::cout << num_count(array, 6, 2);
}