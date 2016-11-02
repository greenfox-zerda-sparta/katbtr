#include <iostream>

using namespace std;

/**
 * Create a function called "fliter_greater_than_5" that takes a pointer to an int array, and it's size.
 * It should return a pointer to a new array that only consists the numbers that are bigger than 5.
 */

int* filter_greater_than_5(int* array, int size) {
  int* pointer = nullptr;
  int newsize = 0;
  for (int i = 0; i < size; i++) {
    if (array[i] > 5) {
      newsize++;
    }
  }
  pointer = new int[newsize];
  int j = 0;
  for (int i = 0; i < size; i++) {
    if (array[i] > 5) {
      pointer[j] = array[i];
      j++;
    }
  }
  return pointer;
}

int main() {

    int size = 12;
    int* array = new int[size];
    for (int i = 0; i < size; i++) {
      array[i] = i;
    }
    int newsize;
    for (int i = 0; i < size; i++) {
      if (array[i] > 5) {
        newsize++;
      }
    }
    int* newarray = filter_greater_than_5(array, size);
    delete[] array;
    for (int i = 0; i < newsize; i++) {
      cout << newarray[i] << " ";
    }
    delete[] newarray;

  return 0;
}
