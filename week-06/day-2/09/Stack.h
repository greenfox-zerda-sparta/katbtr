#ifndef W6D2E9_STACK_H
#define W6D2E9_STACK_H


class Stack {
private:
    int* stack_array;
    unsigned int new_size = 0;

public:
    Stack();
    ~Stack();
    enum error_type {push_error, pop_error};
    void print_stack();
    void push(Stack& stack, int value) throw(Stack::error_type);
    int pop(Stack& stack) throw(Stack::error_type);
    std::string interpretException(error_type type);
};


#endif //W6D2E9_STACK_H
