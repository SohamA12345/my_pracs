class AirVehicle
{
public:
  AirVehicle();
  AirVehicle(int w);

  int weight;
  float fuel;
  int numberOfFlights;

  void refuel();
  virtual void fly(int headwind, int minutes);

  int get_weight();
  float get_fuel();
  int get_numberOfFlights();

  int set_weight(int weight);
  float set_fuel(int fuel);
  int set_numberOfFlights(int numberOfFlights);

  ~AirVehicle();
};