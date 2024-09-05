#include "AirVehicle.h"

AirVehicle::AirVehicle() : fuel(0), weight(0), numberOfFlights(0) {}

AirVehicle::~AirVehicle() {}

AirVehicle::AirVehicle(int w) : weight(w) {}

void AirVehicle::refuel() {this->fuel = 100;}
void AirVehicle::fly(int headwind, int minutes) {numberOfFlights++;}

int AirVehicle::get_weight() {return this->weight;}
float AirVehicle::get_fuel() {return this->fuel;}
int AirVehicle::get_numberOfFlights() {return this->numberOfFlights;}

int AirVehicle::set_weight(int weight) {this->weight = weight;}
float AirVehicle::set_fuel(int fuel) {this->fuel = fuel;}
int AirVehicle::set_numberOfFlights(int numberOfFlights) {this->numberOfFlights = numberOfFlights;}