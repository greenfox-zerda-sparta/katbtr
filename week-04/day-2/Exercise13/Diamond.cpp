#include "Diamond.h"
#include <iostream>
#include <string>

using namespace std;

Diamond::Diamond(int number) {
  this->number = number;
}

void Diamond::print_diamond() {
  for (int i = 1; i <= number / 2; i++) {
    for (int j = number / 2; j > i; j--) {
      cout << " " ;
    }
    for (int k = 0; k < 2 * i -1; k++) {
      cout << "*";
    }
    cout << endl;
  }
  for (int i = number / 2 - 1; i >= 1; i--) {
    for (int j = number / 2; j > i; j--) {
      cout << " " ;
    }
    for (int k = 0; k < 2 * i - 1; k++) {
      cout << "*";
    }
    cout << endl;
  }
}
