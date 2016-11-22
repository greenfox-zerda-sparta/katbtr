#include <iostream>
#include "Stack.h"

using namespace std;

Stack::Stack() {
    this->stack_array = new int[5];
    this->new_size = 0;
}

void Stack::print_stack() {
    for (unsigned int i = 0; i < new_size; i++) {
        cout << stack_array[i] << " ";
    }
}

void Stack::push(Stack& stack, int value) throw(int) {
    if (stack.new_size < 5) {
        stack.stack_array[stack.new_size] = value;
        stack.new_size++;
    }
    else {
        throw 1;
    }
}

int Stack::pop(Stack& stack) throw(int) {
    if (stack.new_size > 0) {
        return stack.new_size--;
    }
    else {
        throw 2;
    }
}

std::string Stack::interpretException(int excpt) {
    switch (excpt) {
        case 1:
            return "Exception: Stack is full, pushing is not possible.";
        case 2:
            return "Exception: Stack is empty, popping is not possible.";
        default:
            return "Undefined exception.";
    }
}

Stack::~Stack() {
    delete[] stack_array;
}