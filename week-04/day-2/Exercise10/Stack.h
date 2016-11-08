#ifndef STACK_H_
#define STACK_H_
#include <string>

using namespace std;

class Stack {
  public:
    Stack();
    void push(int element);
    int pop();
    int get_size();
    void print_stack();
  private:
    int* stack = new int(array_size);
    int array_size = 16;
    int size = 0;
};

#endif /* STACK_H_ */

// Create a `Stack` class that stores elements
// It should have a `size` method that returns number of elements it has
// It should have a `push` method that adds an element to the stack
// It should have a `pop` method that returns the last element form the stack and also deletes it from it
