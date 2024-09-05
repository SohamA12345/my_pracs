using namespace std;

#include "Helicopter.h"


Helicopter::Helicopter() : AirVehicle(), name("") {}

Helicopter::Helicopter(int w, string n) : AirVehicle(w), name(n) {}

void Helicopter::fly(int headwind, int minutes) {
  float fuelConsumptionRate = 0.18;

  if (headwind >= 40) {
    fuelConsumptionRate = 0.4;
  } 
  
  if (get_weight() > 5670) {
    fuelConsumptionRate += 0.01 * (get_weight() - 5670);
  }

  float potentialFuel = get_fuel() - (fuelConsumptionRate * minutes);

  if (potentialFuel >= 20) {
    set_fuel(potentialFuel);
    set_numberOfFlights(get_numberOfFlights() + 1);
  }
}

string Helicopter::get_name() {return name;}
void Helicopter::set_name(string n) {this->name = n;}

Helicopter::~Helicopter()
{
}