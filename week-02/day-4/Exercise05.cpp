#include <iostream>

using namespace std;

int isNegArray(int array[], int size) {

  int set;

  for(int i=0; i < size; i++) {

    if (array[i] < 0) {

    set = 1;

    break;

    }
  }

  return set;

}

int main() {
  int numbers[] = {6, 5, -3, 4, -1, 8, 7};

  // Write a function that decides if an array includes at least one negative number or not

      int x = sizeof(numbers)/sizeof(numbers[0]);

      if(isNegArray(numbers, x) == 1) {

        cout << "There is at least one negative number in the array." << endl;
      } else {

        cout << "There is no negative number in the array." << endl;
      }

  return 0;
}
