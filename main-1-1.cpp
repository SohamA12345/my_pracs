#include "Person.h"
#include <iostream>

extern Person* createPersonArray(int n);

int main() {
  Person* array_of_people;

  array_of_people = createPersonArray(5);

  for (size_t i = 0; i < 5; i++)
  {
    std::cout << array_of_people[i].age << std::endl;
    std::cout << array_of_people[i].name << std::endl;
  }

  return 0;
}