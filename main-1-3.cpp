#include "Person.h"
#include <iostream>

extern PersonList deepCopyPersonList(PersonList pl);

int main() {
  PersonList array_of_people1;

  array_of_people1.numPeople = 5;
  array_of_people1.people = new Person[5];

  for (int i = 0; i < 5; i++) {
    array_of_people1.people[i].age = 2;
    array_of_people1.people[i].name = "Soham";
  }

  PersonList array_of_people = deepCopyPersonList(array_of_people1);

  std::cout << array_of_people.numPeople << std::endl;

  for (int i = 0; i < 5; i++)
  {
    std::cout << array_of_people.people[i].name << std::endl;
    std::cout << array_of_people.people[i].age << std::endl;
  }

  delete [] array_of_people1.people;
  delete [] array_of_people.people;

  return 0;
}