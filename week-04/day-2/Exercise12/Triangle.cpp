#include "Triangle.h"
#include <iostream>
#include <string>

using namespace std;

Triangle::Triangle(int number) {
  this->number = number;
}

void Triangle::print_triangle() {
  for (int i = 1; i <= number; i++) {
    for (int j = number; j > i; j--) {
      cout << " " ;
    }
    for (int k = 0; k < 2*i -1; k++) {
      cout << "*";
    }
  cout << endl;
  }
}
