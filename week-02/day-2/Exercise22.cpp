#include <iostream>
using namespace std;

int includes(int array[5][10], int number, int line) {
  int z = 0;
  for (int i = 0; i < 10; i++) {
    if (number == array[line][i]) {
      z = 1;
    }
  }
  return z;
}

int firstIndexOf(int array[5][10], int number, int line) {
  int i;
  int z = 0;
  for (i = 0; i < 10; i++) {
    if (number == array[line][i]) {
      z = i;
    break;
    }
  }
  return z;
}

int lastIndexOf(int array[5][10], int number, int line) {
  int i;
  int z = -1;
  for (i = 9; i > -1; i--) {
    if (number == array[line][i]) {
      z = i;
    break;
    }
  }
  return z;
}

//Create a function to tell You whether a certain number is part of a 10 long array of integers.
//Create an other function to give You the first index of a given integer in an array of integers.
//Create an other functions to give You the index of the last occurrence of the given integer in
//the array.If the array does not include the given integer this function should return -1.
//Do not duplicate functionality, use the functions You've created earlier instead of duplicating.
//Create 5 arrays, each 10 long filled with integers.
//Find the first and last occurrances of the integer: 14. And Print them out. If the array does not
//include the integr You should say so in words.
//The names of the functions should be "includes", "firstIndexOf", "lastIndexOf"
//Decide what should the function return. Void? Bool? Int? Float? Char?

int main(int argc, char** argv){

  int array[5][10] = { {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
              {2, 4, 6, 8, 10, 12, 14, 16, 18, 20},
              {3, 6, 9, 12, 15, 18, 21, 24, 27, 28},
              {4, 8, 12, 14, 20, 24, 28, 14, 36, 40},
              {7, 14, 21, 28, 35, 28, 21, 14, 7, 0} };

  for (int j = 0; j < 5; j++) {
    if (includes(array,14,j) == 1) {
      cout << "array" << j << " includes 14" << endl;
    } else {
      cout << "array" << j << " doesn't include 14" << endl;
    }
    if (firstIndexOf(array,14,j) != 0) {
      cout << firstIndexOf(array,14,j) << endl;
    } else {
      cout << "array" << j << " doesn't include 14" << endl;
    }

    if (lastIndexOf(array,14,j) != -1) {
      cout << lastIndexOf(array,14,j) << endl;
    } else {
      cout << "array" << j << " doesn't include 14" << endl << endl;
    }
  }
  return 0;
}
