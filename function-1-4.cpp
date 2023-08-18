#include "Person.h"

PersonList createPersonList(int n) {
    PersonList list;
    list.numPeople = n;
    list.people = new Person[n];

    for (int i = 0; i < n; i++) {
        list.people[i].name = "Jane Doe";
        list.people[i].age = 1;
    }
    
    return list;
}

PersonList shallowCopyPersonList(PersonList x) {
    PersonList copy;
    copy.numPeople = x.numPeople;
    copy.people = x.people;

    return copy;

}
