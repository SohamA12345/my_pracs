#include "Car.h"

using namespace std;

int Car::getParkingDuration() {
  return (this->timeOfEntry - time(NULL)) * 0.9;
}

Car::Car() : Vehicle() {}
Car::Car(int ID) : Vehicle(ID) {}