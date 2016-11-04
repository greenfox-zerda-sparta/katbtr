#include <iostream>
#include <string>

using namespace std;

//Implement a stack data-structure that stores doubles in C++, and several functions that operate on stacks
//Each stack should have size property that stores how many elements are in the stack.

struct Stack {
  double* store;
  int size; //number of elements
};

//Construct function
//It should dynamically allocate the Stack instance
//It should set the size
//It should dynamically allocate the double array

Stack* stack_construct(double input[], int size) {
  Stack* new_stack = new Stack;
  new_stack->store = new double[size];
  for (int i = 0; i < size; i++) {
    new_stack->store[i] = input[i];
  }
  new_stack->size = size;
  return new_stack;
}

//Function push
//It should push the value to the end of the stack
//It should increment the size by 1
//It should reallocate the array inside by the incremented size, and copy it's values

void stack_push(Stack& stack, double value) {
  double* new_store = new double[stack.size + 1];
  for (int i = 0; i < stack.size ; i++) {
      new_store[i] = stack.store[i];
      new_store[stack.size] = value;
  }
  delete[] stack.store;
  stack.store = new_store;
  stack.size++;
}

//Function pop
//It should return the value that was pushed the last time
//It should decrement the size by 1
//It should reallocate the array inside by the decremented size, and copy it's values

double stack_pop(Stack& stack) {
  double last_value = stack.store[stack.size - 1];
  double* new_store = new double[stack.size - 1];
  for (int i = 0; i < stack.size - 1; i++) {
        new_store[i] = stack.store[i];
  }
  delete[] stack.store;
  stack.store = new_store;
  stack.size--;
  return last_value;
}

//Function is empty
//It should return true if the stack is empty and false otherwise

bool is_empty2(Stack& stack) {
  bool empty = false;
  if (stack.size == 0) {
    empty = true;
  }
  return empty;
}

int main() {

  double array[5] = {1.2, 2.3, 3.4, 4.5, 5.6};
  double value1 = 6.7;

  Stack* my_stack = stack_construct(array, 5);
  cout << "Initial size of stack: " << my_stack->size << endl;
  stack_push(*my_stack, value1);
  cout << endl << "Size of stack after pushing: " << my_stack->size << endl << "Elements in stack after pushing: " << endl;;
  for (int i = 0; i < 5 + 1; i++) {
    cout << my_stack->store[i] << " ";
  }
  stack_pop(*my_stack);
  cout << endl << "Size of stack after popping: " << my_stack->size << endl << "Elements in stack after popping: " << endl;;
  for (int i = 0; i < 5; i++) {
    cout << my_stack->store[i] << " ";
  }
  cout << endl <<"Is stack empty? " << is_empty2(*my_stack) << endl;

  return 0;
}
