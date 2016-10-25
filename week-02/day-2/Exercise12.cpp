#include <iostream>
#include <string>

using namespace std;

inline int sum(int summo[], int l) {

  int x = 0;

  for (int i = 0; i < l; i++) {

    x += summo[i];

  }

  return x;

	}

int main() {
  int numbers[] = {4, 5, 6, 7, 8, 9, 10};
  // write your own sum function
  // it should take an array and it's length

    cout << sum(numbers, sizeof(numbers)/sizeof(int)) << endl;

  return 0;
}
