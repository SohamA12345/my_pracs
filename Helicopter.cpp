#include "Helicopter.h"

using namespace std;

Helicopter::Helicopter() {}

Helicopter::~Helicopter() {}

Helicopter::Helicopter(int w, string n) : AirVehicle(w), name(n) {}

void Helicopter::fly(int headwind, int minutes) {
   if (headwind < 40) {
    this->fuel -= 0.18 * fuel;
   } else if (headwind >= 40) {
    this->fuel -= 0.004 * fuel;
   } else if (this->weight > 5670) {
    this->fuel -= (0.01 * (this->weight - 5670) * minutes);
   }
}

string Helicopter::get_name() {return this->name;}
void Helicopter::set_name() {this->name = name;}