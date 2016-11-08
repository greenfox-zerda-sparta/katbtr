#include "Triangle.h"
#include <iostream>
#include <string>

using namespace std;

Triangle::Triangle(int number) {
  this->number = number;
}

void Triangle::print_triangle() {
  for (int i = 1; i <= number; i++) {
    for (int j = 0; j < i; j++) {
      cout << "*" ;
    }
    cout << endl;
  }
}
