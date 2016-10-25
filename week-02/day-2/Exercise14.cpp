#include <iostream>
#include <string>

using namespace std;

inline int minimal(int minu[], int l) {

	int minimum = minu[0];

  for (int i = 0; i < l; i++) {

    if (minu[i] < minimum) {

    	minimum = minu[i];
    }

  }

  return minimum;

  }

int main() {
  int numbers[] = {7, 5, 8, -1, 2};
  // Write a function that takes ana array and its length returns the minimal element
  // in the array (your own min function)

  cout << minimal(numbers, sizeof(numbers)/sizeof(int)) << endl;

  return 0;
}
