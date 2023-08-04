#include <iostream>

extern int array_min(int array[], int length); 
extern int array_max(int array[], int length);
extern int sum_min_max(int integers[], int length);

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int length = sizeof(array)/sizeof(array[0]);

    int result = sum_min_max(array, length);

    if (result == -1){
        std::cout << "Invalid array length\n";
    } else {
        std::cout << "Sum of min & max elements: " << result << std::endl;
    }

    return 0;
}