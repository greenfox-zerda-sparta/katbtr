#include <iostream>

using namespace std;

void swap(int &number1, int &number2) {

  int temp = number1;
  number1 = number2;
  number2 = temp;

}

int main() {
  int high_number = 2;
  int low_number = 6655;

  int *high_number_pointer = &high_number;
  int *low_number_pointer = &low_number;
  // Please fix the problem and swap the value of the variables,
  // without using the "high_number" and the "low_number" variables.


  cout << "High number pointer: " << high_number_pointer << " | Low number: " << low_number << endl;
  cout << "Low number pointer: " << low_number_pointer << " | High number: " << high_number << endl;

  swap(*high_number_pointer, *low_number_pointer);

  cout << "High number pointer: " << high_number_pointer << " | High number: " << high_number << endl;
  cout << "Low number pointer: " << low_number_pointer << " | Low number: " << low_number << endl;

  return 0;
}
