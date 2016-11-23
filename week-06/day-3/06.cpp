#include <iostream>
#include <string>

using namespace std;

template<class T>
float sum_of_elements(T tArray, int size) {
    float sum = 0;
    for (int i = 0; i < size; i++) {
        sum += tArray[i];
    }
    return sum;
}

template<>
float sum_of_elements<char*>(char* tArray, int size) {
    float sum = 0;
    for (int i = 0; i < size; i++) {
        sum += int(tArray[i]);
    }
    return sum - 96;
}


int main() {
  // Create a function template that takes an array, and its length and return the sum of it elements
  // Create a template specialization for char types, that it returns the sum of the characters integer position in the alphabet

    int  IntArray[5] = {100, 200, 300, 500, 1000};
    float FloatArray[5] = {1.2, 2.3, 3.4, 4.5, 5.6};
    char CharArray[5] = {'a', 'b', 'c', 'd', 'e'};

    cout << "Int: " << sum_of_elements(IntArray, 5) << " Float: " << sum_of_elements(FloatArray, 5) << " Char: " << sum_of_elements(CharArray, 5);


    return 0;
}