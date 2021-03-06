#include <iostream>
#include <string>
#include "Car.h"

using namespace std;

int main() {
    // Create a class called "Car"
    // It should have a "type" property that stores the car's type in a string eg: "Mazda"
    // It should have a "km" property that stores how many kilometers it have run
    // The km and the type property should be a parmeter in the constructor
    // It should have a method called "run" that takes a number and increments the "km" property by it

  Car car1("Audi", 80000);
  car1.run(100);
  cout << car1.get_km();

  return 0;
}
