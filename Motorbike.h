#ifndef MOTORBIKE_H
#define MOTORBIKE_H

#include "Vehicle.h"

class Motorbike : public Vehicle {
  public:
    int getParkingDuration();
    
    Motorbike();
    Motorbike(int ID);
};

#endif