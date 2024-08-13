 #include "Person.h"

 PersonList deepCopyPersonList(PersonList pl) {
  PersonList pl_copy;
  int n = pl.numPeople;

  pl_copy.people = new Person[n];
  pl_copy.numPeople = pl.numPeople;

  for (int i = 0; i < n; i++) {
    pl_copy.people[i] = pl.people[i];
  }

  return pl_copy;
 }