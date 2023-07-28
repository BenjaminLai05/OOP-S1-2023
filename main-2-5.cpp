#include <iostream> 

extern bool is_descending(int array[], int n);

int main() {
    int array[5] = {1,2,3,2,1};
    int result = is_descending(array, 5);

    if (result == 1) {
        std::cout << "true";
    }
        else{
        std::cout << "false";
    }
    return 0;
}