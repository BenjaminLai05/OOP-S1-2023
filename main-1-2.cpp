#include <iostream>
#include "Person.h"

extern PersonList createPersonList(int n);

int main() {
    int length;

    std::cout << "How many people? ";
    std::cin >> length;

    PersonList list = createPersonList(length);

    for (int i = 0; i < length; i++) {
        std::cout << list.people[i].name << " " << list.people[i].age << std::endl; 
    }

    delete[] list.people; 

    return 0;
}
