#ifndef VEHICLE_H
#define VEHICLE_H

#include <ctime>

using namespace std;

class Vehicle
{
  protected:
    time_t timeOfEntry;
    int ID;
  public:
    Vehicle(int ID);
    int getID();
    Vehicle();
    virtual ~Vehicle();

    virtual int getParkingDuration();
};

#endif