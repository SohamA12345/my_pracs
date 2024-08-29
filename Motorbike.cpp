#include "Motorbike.h"

using namespace std;

int Motorbike::getParkingDuration() {
  return (this->timeOfEntry - time(NULL)) * 0.75;
}