#include "Bus.h"

using namespace std;

int Bus::getParkingDuration() {
  return (this->timeOfEntry - time(NULL)) * 0.85;
}

Bus::Bus() : Vehicle() {}
Bus::Bus(int ID) : Vehicle(ID) {}