#include <iostream> 

extern bool is_ascending(int array[], int n);

int main() {
    int array[5] = {1,2,3,4,5};
    int result = is_ascending(array, 5);

    if (result == 1) {
        std::cout << "true";
    }
        else{
        std::cout << "false";
    }
    return 0;
}