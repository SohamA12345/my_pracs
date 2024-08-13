#include "Person.h"

PersonList createPersonList(int n) {
  PersonList list_of_persons;

  list_of_persons.numPeople = n;
  list_of_persons.people = new Person[n];

  for (int i = 0; i < n; i++) {
    list_of_persons.people[i].age = 1;
    list_of_persons.people[i].name = "Jane Doe";
  }

  return list_of_persons;
}