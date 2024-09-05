#ifndef AIRFLEET_H
#define AIRFLEET_H

#include "AirVehicle.h"
class AirFleet
{
public:
  AirFleet();

  AirVehicle** fleet;
  AirVehicle** get_fleet();
  ~AirFleet();
};

#endif