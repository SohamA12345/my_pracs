using namespace std;

#include "AirVehicle.h"
#include "iostream"

int main() {
  AirVehicle av(1000);

  cout << "Initial weight: " << av.get_weight() << " units" << endl;
  cout << "Initial fuel: " << av.get_fuel() << "%" << endl;
  cout << "Initial number of flights: " << av.get_numberOfFlights() << endl;

  av.fly(20, 60);

  cout << "After flight, number of flights: " << av.get_numberOfFlights() << endl;

  av.refuel();

  cout << "After flight, fuel: " << av.get_fuel() << "%" << endl;

  return 0;
}