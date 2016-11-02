#include <iostream>

using namespace std;

/**
 * Please create a program that asks for a count when it starts.
 * It should ask for a number count times, then it shoud print the average of the nubmers.
 * It should delete any dynamically allocated resource before the program exits.
 */

int main() {

  int count = 0;
  float sum = 0;
  int* pointer = nullptr;
  float average = 0;
  cout << "From how many numbers would you like to calculate the average?" << endl;
  cin >> count;
  pointer = new int[count];
  for (int i = 0; i < count; i++) {
    cout << "Please enter number " << i+1 << endl;
    cin >> pointer[i];
  }
  for (int j = 0; j < count; j++) {
    sum = sum + pointer[j];
  }
  average = sum / count;
  cout << "The average is " << average;
  delete[] pointer;

  return 0;
}
