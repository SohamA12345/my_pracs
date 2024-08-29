#include "Car.h"

using namespace std;

Car::Car() : Vehicle() {}
Car::Car(int ID) : Vehicle(ID) {}

int Car::getParkingDuration() {
  return (time(NULL) - this->timeOfEntry) * 0.9;
}