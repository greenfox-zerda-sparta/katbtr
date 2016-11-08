#include <iostream>
#include <string>

using namespace std;

const double Pi = 3.14;

class Circle {
public:
  double r;

  Circle (double r) {
    this->r = r;
  }
  double get_circumference() {
    return 2 * Pi * r;
  }
  double get_area() {
    return Pi * r * r;;
  }
};

int main() {
    // Create a `Circle` class that takes it's radius as constructor parameter
    // It should have a `get_circumference` method that returns it's circumference
    // It should have a `get_area` method that returns it's area

  Circle my_circle(4.2);
  cout << my_circle.get_circumference() << " " << my_circle.get_area();

  return 0;
}
