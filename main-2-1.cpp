#include <iostream>
#include <string>

extern void print_binary_str(std::string decimal_number);

int main() {
    std::string str = "789";
    print_binary_str(str);

}