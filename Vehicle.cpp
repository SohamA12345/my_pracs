#include "Vehicle.h"

using namespace std;

int Vehicle::getID() {return ID;}

int Vehicle::getParkingDuration() {return 0;}

Vehicle::Vehicle(int ID) : ID(ID)
{
  this->timeOfEntry;
}

Vehicle::Vehicle() : Vehicle(0)
{
}

Vehicle::~Vehicle()
{
}