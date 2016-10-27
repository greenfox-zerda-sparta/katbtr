#include <iostream>
#include <string>

using namespace std;

int sumEvenFollEven(int array[], int size) {

  int counter = 0;

  for (int i = 0; i < size - 1; i++) {

    if ( array[i] % 2 == 0 && array[i+1] % 2 == 0 ) {

      counter++;
    }
  }
  return counter;
}

int main() {
  int numbers[] = {5, 2, 6, 3, 4, 8, 5, 2, 2, 2};

  // Write a function that counts how many times is an even number is folowed by
  // another even number in an array

  int x = sizeof(numbers)/sizeof(numbers[0]);

  cout << sumEvenFollEven(numbers, x);

  return 0;
}
