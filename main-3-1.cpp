#include <iostream> 

extern bool is_fanarray(int array[], int n); 

int main() {
    int array[5] = {1,2,3,2,1};
    int result = is_fanarray(array, 5);

    if (result == true) {
        std::cout << "True";
    }
    else {
        std::cout << "False";
    }
}