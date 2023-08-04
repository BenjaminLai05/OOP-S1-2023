#include <iostream>

extern bool is_palindrome(int integers[], int length);
extern int sum_array_elements(int integers[], int length);
extern int sum_if_palindrome(int integers[], int length);

int main() {
    int array[] = {1, 2, 3, 2, 1};
    int length = sizeof(array)/sizeof(array[0]);

    int result = sum_if_palindrome(array, length);

    if(result == -1){
        std::cout << "Invalid";
    } else if (result == -2){
        std::cout << "Array is not a palindrome\n";
    } else {
        std::cout << "Sum of elements is: " << result << "\n";
    }

    return 0;
}