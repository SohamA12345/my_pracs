#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle {
  public:
    int getParkingDuration();
    
    Car();
    Car(int ID);
};

#endif