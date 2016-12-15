#include <iostream>
#include <cstdint>
#include <string>
#include <cstdlib>
#include "Color.h"

using namespace std;

int main() {

    Color red("#FF0000");
    red.print_color();
    Color blue("#0000FF");
    blue.print_color();
    Color new_color = red.blend(blue);
    new_color.print_color();

}