#ifndef AIRPLANE_H
#define AIRPLANE_H

#include "AirVehicle.h"

class Airplane
{
private:
  int numPassengers;
public:
  void reducePassegers(int x);
  int get_numPassengers();
  void fly(int headwind, int miutes);

  Airplane(/* args */);
  ~Airplane();
};

#endif