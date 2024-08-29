#include "Car.h"

using namespace std;

int Car::getParkingDuration() {
  return (this->timeOfEntry - time(NULL)) * 0.9;
}