#include "Person.h"

Person* createPersonArray(int n) {
  Person* array_of_persons = new Person[n];

  for (int i = 0; i < n; i++)
  {
    array_of_persons[i].age = 0;
    array_of_persons[i].name = "John Doe";
  }

  return array_of_persons;
}