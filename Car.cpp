#include "Car.h"

using namespace std;

int Car::getParkingDuration() {
  return (time(NULL) - this->timeOfEntry) * 0.9;
}

Car::Car() : Vehicle() {}
Car::Car(int ID) : Vehicle(ID) {}