#include <iostream>
using namespace std;

int even(int array[], int size) {

  int counter = 0;

  for (int i = 0; i < size; i++) {

    if (array[i] % 2 == 0) {
      counter++;
    }
  }

  return counter;
};

int main(){
  int numbers[] = {4, 5, 6, 2, 3, 8, 6, 5};
  // create a function that takes an array and it's length as an agrument
  // and returns a number that states how many even numbers are in the array

  int size = sizeof(numbers) / sizeof(int);
  cout << even(numbers, size);

return 0;
}
