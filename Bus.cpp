#include "Bus.h"

using namespace std;

int Bus::getParkingDuration() {
  return (time(NULL) - this->timeOfEntry) * 0.85;
}

Bus::Bus() : Vehicle() {}
Bus::Bus(int ID) : Vehicle(ID) {}