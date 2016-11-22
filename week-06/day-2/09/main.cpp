#include <iostream>
#include <string>
#include "Stack.h"

using namespace std;

// Duplicate the Stack class from the previous exercies.
// Rewrite it so, that the push and pop methods don't throw integers.
// Define an enum for te two types of exceptions.
// Adapt the interpretException method to except an argument from that enum type.
// Adapt the main function so that the try and catch blocks except an exception of that enum type.

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
    catch (Stack::error_type type) {
        cout << stack->interpretException(type) << endl;
    }

    cout << "Pushing a 6th element in stack:" << endl;
    try {
        stack->push(*stack, 8);
        stack->print_stack();
    }
    catch (Stack::error_type type) {
        cout << stack->interpretException(type) << endl;
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
    catch (Stack::error_type type) {
        cout << stack->interpretException(type) << endl;
    }

    delete stack;
    return 0;
}