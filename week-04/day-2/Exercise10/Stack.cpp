#include "Stack.h"
#include <iostream>
#include <string>

using namespace std;

Stack::Stack() {

};
int Stack::get_size() {

  return size;
};
void Stack::push(int element) {
  stack[size] = element;
  ++size;
  if (size == array_size * 0.8) {
    array_size *= 2;
    int* new_stack = new int[array_size];
    for (int i = 0; i < size; i++) {
      new_stack[i] = stack[i];
    }
    delete[] stack;
    stack = new_stack;
  }
};

int Stack::pop() {
  int popped = stack[size - 1];
  int* new_store = new int[size - 1];
  for (int i = 0; i < size - 1; i++) {
    new_store[i] = stack[i];
  }
  delete[] stack;
  stack = new_store;
  size--;
  return popped;
};

void Stack::print_stack() {
  for (int i = 0; i < get_size(); i++) {
      cout << stack[i] << " ";
  }
  cout << endl;
};

// Create a `Stack` class that stores elements
// It should have a `size` method that returns number of elements it has
// It should have a `push` method that adds an element to the stack
// It should have a `pop` method that returns the last element form the stack and also deletes it from it
