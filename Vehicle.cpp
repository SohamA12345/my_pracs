#include "Vehicle.h"

using namespace std;

int Vehicle::getID() {return ID;}

Vehicle::Vehicle(int ID) : ID(ID)
{
}

Vehicle::Vehicle() : Vehicle(0)
{
}

Vehicle::~Vehicle()
{
}