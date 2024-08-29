#ifndef PARKINGLOT_H
#define PARKINGLOT_H

#include "Vehicle.h"

class ParkingLot {
  private:
    int max_capacity;
    int vehicle_count;
  public:
    Vehicle** vehicles;

    int getCount();

    ParkingLot(int max_capacity);

    ParkingLot();
    ~ParkingLot();

    void parkVehicle(Vehicle* vehicle);

    void unparkVehicle(int ID);

    int countOverstayingVehicles(int maxParkingDuration);
};

#endif