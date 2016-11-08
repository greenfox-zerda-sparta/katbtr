#include <iostream>
#include <string>
#include "Diamond.h"

using namespace std;

int main() {
    // Create a triangle class that takes a length parameter and prints a diamond like this:
    //       *
    //      ***
    //     *****
    //    *******
    //   *********
    //  ***********
    //   *********
    //    *******
    //     *****
    //      ***
    //       *
    //
    // It should take a number as parameter that describes how many lines the diamond has

  Diamond my_diamond(8);
  my_diamond.print_diamond();

  return 0;
}
