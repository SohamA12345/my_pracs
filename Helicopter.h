#include "AirVehicle.h"
#include <string>

using namespace std;

class Helicopter : public AirVehicle
{
private:
  string name;
public:
  Helicopter();
  Helicopter(int w, string n);

  void fly(int headwind, int minutes);

  string get_name();
  void set_name();

  ~Helicopter();
};