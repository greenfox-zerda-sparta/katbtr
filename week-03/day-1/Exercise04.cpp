#include <iostream>

using namespace std;

int* range (int from, int to, int step) {
  int* pointer = nullptr;
  pointer = new int[((to - from) / step)];
  int j = from;
  for (int i = 0; i < (to - from) / step; i++) {
    pointer[i] = j;
    j += step;
  }
  return pointer;
}

/**
 * Create a function called "range" that creates a new array and returns a pointer to it.
 * It should fill the array with numbers based on it's paramters.
 * It should take 3 paramters:
 * int from: the first number in the array
 * int to: it will fill the array till it would reach this number (so this number is not in the array)
 * int step: the step between the numbers
 *
 * Examples:
 * range(0, 10, 2) -> {0, 2, 3, 4, 5, 6, 8} <- incorrect example!
 * range(1, -8, -3) -> {1, -2, -5}
 *
 * It should delete any dynamically allocated resource before the program exits.
 */

int main() {

  int firstNum, until, steps, arraysize;
  cout << "Please enter the first number" << endl;
  cin >> firstNum;
  cout << "Please enter last number" << endl;
  cin >> until;
  cout << "Please enter by how many steps" << endl;
  cin >> steps;

  arraysize = ((until - firstNum) / steps);
  int* array = range(firstNum, until, steps);

  for (int i = 0; i < arraysize; i++) {
    cout << array[i] << " ";
  }
  delete[] array;
  return 0;
}
