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

PersonList deepCopyPersonList(PersonList x) {
    PersonList copy;
    copy.numPeople = x.numPeople;
    copy.people = new Person[x.numPeople];

    for (int i = 0; i < x.numPeople; i++) {
        copy.people[i].name = x.people[i].name;
        copy.people[i].age = x.people[i].age;
    }
    
    return copy;

}
