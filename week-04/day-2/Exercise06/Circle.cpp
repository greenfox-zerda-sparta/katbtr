#include "Circle.h"
#include <iostream>
#include <string>

using namespace std;

const double Pi = 3.14;


Circle::Circle(double r) {
    this->r = r;
};
double Circle::get_circumference() {
  return 2 * Pi * this->r;
};
double Circle::get_area() {
  return Pi * this->r * this->r;
};
