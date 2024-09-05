using namespace std;

#include "Airplane.h"

Airplane::Airplane() : AirVehicle(), numPassengers(0) {}
Airplane::Airplane(int w, int p) : AirVehicle(w), numPassengers(p) {}

void Airplane::reducePassengers(int x) {
  numPassengers -= x;

  if (numPassengers < 0) {
    numPassengers = 0;
  }
}

int Airplane::get_numPassengers() {return numPassengers;}

void Airplane::fly(int headwind, int minutes) {
  float fuelConsumptionRate = 0.25;
  
  if (headwind >= 60) {
    fuelConsumptionRate = 0.5;
  }

  fuelConsumptionRate += 0.001 * numPassengers;

  float potentialFuel = get_fuel() - (fuelConsumptionRate * minutes);

  if (potentialFuel >= 20) {
    set_fuel(potentialFuel);
    set_numberOfFlights(get_numberOfFlights() + 1);
  }
}

Airplane::~Airplane() {}