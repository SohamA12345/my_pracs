#include "AirVehicle.h"
#include <string>

class Helicopter : public AirVehicle
{
private:
  string name;
public:
  Helicopter();
  Helicopter(int w, string n);
  ~Helicopter();
};