#include <iostream>
#include "Helicopter.h"

using namespace std;

int main() {
  Helicopter helicopter(5690, "Bryant");

  cout << "Helicopter name: " << helicopter.get_name() << endl;
  cout << "Starting weight: " << helicopter.get_weight() << endl;
  cout << "Starting fuel: " << helicopter.get_fuel() << endl;
  cout << "Initial number of flights: " << helicopter.get_numberOfFlights() << endl;

  helicopter.fly(45, 10);

  cout << "Fuel post flight: " << helicopter.get_fuel() << "%" << endl;
  cout << "Number of flights post flight: " << helicopter.get_numberOfFlights() << endl;

  helicopter.refuel();
  cout << "Fuel after refueling: " << helicopter.get_fuel() << "%" << endl;

  return 0;
}
