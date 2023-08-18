#include <iostream>
#include "Person.h"

extern PersonList createPersonList(int n);

int main() {
    int length;

    std::cout << "How many people? ";
    std::cin >> length;

    PersonList list = createPersonList(length);

    delete[] list.people; 

    return 0;
}
