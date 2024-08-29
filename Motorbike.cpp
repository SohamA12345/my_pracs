#include "Motorbike.h"

using namespace std;

int Motorbike::getParkingDuration() {
  return (this->timeOfEntry - time(NULL)) * 0.75;
}

Motorbike::Motorbike() : Vehicle() {}
Motorbike::Motorbike(int ID) : Vehicle(ID) {}