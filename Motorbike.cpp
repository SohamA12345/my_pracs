#include "Motorbike.h"

using namespace std;

Motorbike::Motorbike() : Vehicle() {}
Motorbike::Motorbike(int ID) : Vehicle(ID) {}

int Motorbike::getParkingDuration() {
  return (time(NULL) - this->timeOfEntry) * 0.75;
}