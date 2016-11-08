#include "Pirate.h"
#include <iostream>
#include <string>

using namespace std;

Pirate::Pirate() {
  this->counter = 0;
};
void Pirate::drink_rum() {
  this->counter +=1;
};
string Pirate::hows_going_mate() {
  if (this->counter >= 5) {
    return "Arrrr!";
  } else {
    return "Nothin'";
  }
};
