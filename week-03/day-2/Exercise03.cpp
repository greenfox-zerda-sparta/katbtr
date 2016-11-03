#include <string>
#include <iostream>

using namespace std;

enum CarType {VOLVO, TOYOTA, LAND_ROVER, TESLA};

struct Car {
  CarType type;
  double km;
  double gas;
};

// Write a function that takes a Car as an argument and prints all it's stats
// If the car is a Tesla it should not print it's gas level

void showCar(Car stats) {
  if (stats.type == TESLA) {
    cout << stats.type << " " << stats.km << endl;
  } else {
  cout << stats.type << " " << stats.km << " " << stats.gas << endl;
  }
}

int main() {

  Car muciCar = {TESLA, 30000, 0};
  Car buciCar = {VOLVO, 250000, 40};

  showCar(muciCar);
  showCar(buciCar);

//string CarTypes[5] = {"VOLVO", "TOYOTA", "LAND_ROVER", "TESLA"};
//cout CarTypes[VOLVO];

  return 0;
}
