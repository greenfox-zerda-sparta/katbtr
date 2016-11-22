#ifndef W6D2E8_STACK_H
#define W6D2E8_STACK_H

class Stack {
private:
    int* stack_array;
    unsigned int new_size = 0;
public:
    Stack();
    ~Stack();
    void print_stack();
    void push(Stack& stack, int value) throw(int);
    int pop(Stack& stack) throw(int);
    std::string interpretException(int excpt);
};


#endif //W6D2E8_STACK_H
