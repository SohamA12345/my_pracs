#ifndef AIRVEHICLE_H
#define AIRVEHICLE_H

using namespace std;

class AirVehicle
{
public:
  int weight;
  float fuel;
  int numberOfFlights;


  AirVehicle();
  AirVehicle(int w);

  virtual void fly(int headwind, int minutes);
  void refuel();

  void set_weight(int w);
  void set_fuel(float f);
  void set_numberOfFlights(int n);

  int get_weight();
  float get_fuel();
  int get_numberOfFlights();

  ~AirVehicle();
};


#endif