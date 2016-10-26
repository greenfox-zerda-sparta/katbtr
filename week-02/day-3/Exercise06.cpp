#include <iostream>

using namespace std;

int main() {
  int high_number = 6655;
  int low_number = 2;

  int *high_number_pointer = &high_number;
  int *other_high_number_pointer;
  // The "other_high_number_pointer" should point to the same memory address
  // without using the "&" operator.

  other_high_number_pointer = high_number_pointer;

  cout << "High number pointer: " << high_number_pointer << endl;
  cout << "Other high number pointer: " << other_high_number_pointer << endl;

  return 0;
}
