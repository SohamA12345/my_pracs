#include "Person.h"

PersonList shallowCopyPersonList(PersonList pl) {
  PersonList pl_copy;

  pl_copy = pl;

  return pl_copy;
}