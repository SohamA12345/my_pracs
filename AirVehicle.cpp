using namespace std;

#include "AirVehicle.h"

AirVehicle::AirVehicle() : weight(0), fuel(0), numberOfFlights(0) {}

AirVehicle::AirVehicle(int w) : weight(w), fuel(100), numberOfFlights(0) {}

void AirVehicle::fly(int headwind, int minutes) {numberOfFlights++;}
void AirVehicle::refuel() {this->fuel = 100;}

void AirVehicle::set_weight(int w) {this->weight = w;}
void AirVehicle::set_fuel(float f) {this->fuel = f;}
void AirVehicle::set_numberOfFlights(int n) {this->numberOfFlights = n;}

int AirVehicle::get_weight() {return weight;}
float AirVehicle::get_fuel() {return fuel;}
int AirVehicle::get_numberOfFlights() {return numberOfFlights;}

AirVehicle::~AirVehicle() {}