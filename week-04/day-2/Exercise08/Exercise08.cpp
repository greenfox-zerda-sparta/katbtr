#include <iostream>
#include <string>
#include "Pirate.h"

using namespace std;

int main() {
    // create a pirate class
    // it should have 2 methods
    // drink_rum()
    // hows_goin_mate()
    // if the drink_rum was called at least 5 times:
    // hows_goin_mate should return "Arrrr!"
    // "Nothin'" otherwise

  Pirate JoeHalfEye;
  JoeHalfEye.drink_rum();
  JoeHalfEye.drink_rum();
  cout << JoeHalfEye.hows_going_mate() << endl;;
  JoeHalfEye.drink_rum();
  JoeHalfEye.drink_rum();
  JoeHalfEye.drink_rum();
  cout << JoeHalfEye.hows_going_mate();

  return 0;
}
