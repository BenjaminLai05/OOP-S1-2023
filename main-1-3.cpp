#include <iostream>
#include "Person.h"

extern PersonList deepCopyPersonList(PersonList x);
extern PersonList createPersonList(int n);

int main() {
    PersonList pl = createPersonList(10);
    PersonList copy = deepCopyPersonList(pl);

    return 0;
}
