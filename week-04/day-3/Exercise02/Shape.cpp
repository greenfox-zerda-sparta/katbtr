#include <iostream>
#include <string>
#include "Shape.h"
#include "Triangle.h"
#include "Square.h"

using namespace std;

Shape::Shape() {

}

string* Shape::getName() {
  return new string("Generic Shape");
}
