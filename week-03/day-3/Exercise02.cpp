#include <iostream>
#include <string>

using namespace std;

//Implement a stack data-structure that stores doubles in C++, and several functions that operate on
//stacks Each stack should have size property that stores how many elements are in the stack. The length
//of the inner array should be independent form the size, to optimize on reallocation, this case it does
//not need to reallocate each time on push.

struct Stack {
  double* store;
  int size;
  int length;
};

//Construct
//It should dynamically allocate the Stack instance
//It should set the size
//It should dynamically allocate the double array
//The length of the allocated array should be independent from the size, to optimize on the reallocation
//of the array
//It should allocate at least a double length array then the size
//The length of the array should be always some power of two and at least 16 (16, 32, 64, 128, ...)

Stack* stack_construct(double input[], int size) {
  Stack* new_stack = new Stack;
  new_stack->store = new double[size];
  new_stack->length = 16;
  while (new_stack->length == size) {
    new_stack->length *= 2;
  }
  for (int i = 0; i < size; i++) {
    new_stack->store[i] = input[i];
  }
  new_stack->size = size;
  return new_stack;
}

//Push
//It should push the value to the end of the stack
//It should increment the size by 1
//If the size exceeds the 80% of the current allocated length of the array it should reallocate the size
//of the array to it's double

void stack_push(Stack& stack, double value) {
  double* new_store = new double[stack.size + 1];
  for (int i = 0; i < stack.size ; i++) {
      new_store[i] = stack.store[i];
      new_store[stack.size] = value;
  }
  delete[] stack.store;
  stack.store = new_store;
  stack.size++;
  if (stack.size == 0.8 * stack.length) {
    stack.length *= 2;
  }
}

//Pop
//It should return the value that was pushed the last time
//It should decrement the size by 1
//It should not resize the array

double stack_pop(Stack& stack) {
  double last_value = stack.store[stack.size - 1];
  double* new_store = new double[stack.size - 1];
  for (int i = 0; i < stack.size - 1; i++) {
        new_store[i] = stack.store[i];
  }
  delete[] stack.store;
  stack.store = new_store;
  return last_value;
}

int main() {

  double array[5] = {1.2, 2.3, 3.4, 4.5, 5.6};
  double value = 6.7;

  Stack* my_stack = stack_construct(array, 5);
  cout << "Initial size of stack: " << my_stack->size << " Initial length of stack: " << my_stack->length << endl;
  stack_push(*my_stack, value);
  cout << endl << "Size of stack after pushing: " << my_stack->size << " Length of stack after pushing: " << my_stack->length << endl << "Elements in stack after pushing: " << endl;;
  for (int i = 0; i < 5 + 1; i++) {
    cout << my_stack->store[i] << " ";
  }
  stack_pop(*my_stack);
  cout << endl << "Size of stack after popping: " << my_stack->size << " Length of stack after popping: " << my_stack->length << endl << "Elements in stack after popping: " << endl;;
  for (int i = 0; i < 5; i++) {
    cout << my_stack->store[i] << " ";
  }

  return 0;
}
