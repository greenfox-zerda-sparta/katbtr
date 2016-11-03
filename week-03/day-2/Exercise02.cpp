#include <string>
#include <iostream>

using namespace std;

struct RectangularCuboid {
  double a;
  double b;
  double c;
};

// Write a function called "get_surface" that takes a RectangularCuboid
// and returns it's surface

double get_surface(RectangularCuboid surface) {
  double surf = surface.a * surface.b;
  return surf;
}

// Write a function called "get_volume" that takes a RectangularCuboid
// and returns it's volume

double get_volume(RectangularCuboid volume) {
  double vol = volume.a * volume.b * volume.c;
  return vol;
}

int main() {

  RectangularCuboid RecCub = {10, 12, 13};

  cout << get_surface(RecCub) << " " << get_volume(RecCub);

  return 0;
}
