#include <iostream>
#include <string>
#include "Stack.h"

using namespace std;

// Create a fixed size stack. The stack can contain only 5 elements.
// You can push on the stack and pop from the stack.
// Write the push and pop methods so, that each throws an integer value if there is an error. 
// Like when the stack is empty or full. Just make sure those are different values.
// Write a method called string interpretException(int exception) that returns the error message string for the integer.
//
// Illustrate in the main function both when it works fine and when exceptions occur.

int main() {
    Stack* stack = new Stack;

    cout << "5 elements in a stack:" << endl;
    try {
        stack->push(*stack, 2);
        stack->push(*stack, 3);
        stack->push(*stack, 2);
        stack->push(*stack, 1);
        stack->push(*stack, 6);

        stack->print_stack();
        cout << endl;
    }
    catch (int excpt) {
        cout << stack->interpretException(excpt) << endl;
    }

    cout << "Pushing a 6th element in stack:" << endl;
    try {
        stack->push(*stack, 8);
        stack->print_stack();
    }
    catch (int excpt) {
        cout << stack->interpretException(excpt) << endl;
    }

    cout << "Popping from an empty stack:" << endl;
    try {
        stack->pop(*stack);
        stack->pop(*stack);
        stack->pop(*stack);
        stack->pop(*stack);
        stack->pop(*stack);
        stack->pop(*stack);
        stack->print_stack();
    }
    catch (int excp) {
        cout << stack->interpretException(excp) << endl;
    }

    delete stack;
    return 0;
}