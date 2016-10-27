#include <iostream>

using namespace std;

void fillLength(int array[], int size);

int main() {
  int array[10];

  // write a function that takes an array and a length and it fills the array
  // with numbers from zero till the length

  int x = sizeof(array)/sizeof(array[0]);

  fillLength(array, x);

  for(int i = 0; i < x; i++) {

      cout << array[i] << " ";
  }

  return 0;
}

void fillLength(int array[], int size){

  for(int i=0; i < size; i++) {

    array[i] = i;

  }
}
