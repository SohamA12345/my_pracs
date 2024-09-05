using namespace std;

#include <iostream>
#include "Airplane.h"

int main() {
  Airplane plane(15000, 100);

  cout << "Initial weightL " << plane.get_weight() << " kg" << endl;
  cout << "Initial fuel: " << plane.get_fuel() << "%" << endl;
  cout << "Initial number of passengers: " << plane.get_numPassengers() << endl;

  plane.fly(65, 120);

  cout << "Fuel post flight: " << plane.get_fuel() << "%" << endl;
  cout << "Number of flights post flight: " << plane.get_numberOfFlights() << endl;
  cout << "Number of passengers post reduction: " << plane.get_numPassengers() << endl;

  plane.reducePassengers(10);
  cout << "Number of passengers after reduction: " << plane.get_numPassengers() << endl;

  plane.refuel();
  cout << "Fuel after refueling: " << plane.get_fuel() << "%" << endl;

  return 0;
}