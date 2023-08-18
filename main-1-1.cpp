#include "Person.h"

extern Person* createPersonArray(int n);

#include <iostream>

using namespace std;
int main() { 
    int length;

    cout << "How many people? ";
    cin >> length;

    Person* people = createPersonArray(length);

    delete[] people;

    return 0;
}
