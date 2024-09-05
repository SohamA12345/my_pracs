#ifndef HELICOPTER_H
#define HELICOPTER_H

using namespace std;

#include <string>
#include "AirVehicle.h"

class Helicopter : public AirVehicle {
private:
  string name;
public:
  Helicopter();
  Helicopter(int w, string n);

  void fly(int headwind, int minutes);

  string get_name();
  void set_name(string n);

  ~Helicopter();
};

#endif