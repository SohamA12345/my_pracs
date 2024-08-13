#include "Person.h"
#include <iostream>

extern PersonList createPersonList(int n);

int main() {
  PersonList array_of_people;

  array_of_people = createPersonList(5);

  std::cout << array_of_people.numPeople << std::endl;

  for (int i = 0; i < 5; i++)
  {
    std::cout << array_of_people.people[i].name << std::endl;
    std::cout << array_of_people.people[i].age << std::endl;
  }

  delete [] array_of_people.people;
  return 0;
}