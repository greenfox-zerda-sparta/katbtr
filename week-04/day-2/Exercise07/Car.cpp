#include "Car.h"
#include <iostream>
#include <string>

using namespace std;

Car::Car(string type, int km) {
  this->type = type;
  this->km = km;
};
void Car::run(int run) {
  this->km = this->km + run;
};
int Car::get_km() {
  return this->km;
};
