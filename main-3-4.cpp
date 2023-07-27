#include <iostream> 

extern void print_pass_fail(char grade);

int main() { 

    char grade;

    std::cout << "What is your grade? ";
    std::cin >> grade;

    print_pass_fail(grade);

}