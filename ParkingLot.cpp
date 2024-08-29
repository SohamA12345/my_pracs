#include "ParkingLot.h"
#include <iostream>

ParkingLot::ParkingLot(int max_capacity) : max_capacity(max_capacity), vehicle_count(0), vehicles(new Vehicle* [max_capacity]) {}
ParkingLot::ParkingLot() : ParkingLot(0) {}

ParkingLot::~ParkingLot() {
  delete [] vehicles;
}

int ParkingLot::getCount() {return vehicle_count;}

void ParkingLot::parkVehicle(Vehicle* vehicle) {
  if(vehicle_count < this->max_capacity) {
    vehicles[vehicle_count] = vehicle;
    vehicle_count++;
  } else {cout << "The lot is full\n";}
}

void ParkingLot::unparkVehicle(int ID) {
  for (int i = 0; i < vehicle_count; i++) {
    if ((*vehicles[i]).getID() == ID) {
      vehicle_count--;
      delete vehicles[i];
      break;
    } else {cout << "Vehicle not in the lot\n";}
  }
}