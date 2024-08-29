#include "Car.h"

int Car::getParkingDuration() {
  return (this->timeOfEntry - time(NULL)) * 0.85;
}