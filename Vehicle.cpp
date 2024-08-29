#include "Vehicle.h"

using namespace std;

Vehicle::Vehicle(int ID) : ID(ID), timeOfEntry(time(NULL)){}

Vehicle::Vehicle() : Vehicle(0)
{
}

Vehicle::~Vehicle()
{
}

int Vehicle::getID() {return ID;}

int Vehicle::getParkingDuration() {
  return 0;
}