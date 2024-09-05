#ifndef AIRPLANE_H
#define AIRPLANE_H

using namespace std;

#include "AirVehicle.h"

class Airplane : public AirVehicle {
private:
  int numPassengers;
public:
  Airplane();
  Airplane(int w, int p);

  void reducePassengers(int x);
  int get_numPassengers();
  void fly(int headwind, int minutes);

  ~Airplane();
};

#endif