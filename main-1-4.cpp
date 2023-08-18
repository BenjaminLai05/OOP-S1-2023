#include <iostream>
#include "Person.h"

extern PersonList shallowCopyPersonList(PersonList x);
extern PersonList createPersonList(int n);

int main() {
    PersonList pl = createPersonList(10);
    PersonList copy = shallowCopyPersonList(pl);

    return 0;
}
