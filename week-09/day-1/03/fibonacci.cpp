
#include "fibonacci.h"

int Fibonacci::fib_method(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    } else {
        return Fibonacci::fib_method(n - 1) + Fibonacci::fib_method(n - 2);
    }
}