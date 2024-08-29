#include "Motorbike.h"

using namespace std;

int Motorbike::getParkingDuration() {
  return (time(NULL) - this->timeOfEntry) * 0.75;
}

Motorbike::Motorbike() : Vehicle() {}
Motorbike::Motorbike(int ID) : Vehicle(ID) {}