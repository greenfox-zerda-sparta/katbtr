#include <iostream>
#include <string>

using namespace std;

template<class T, class F>
class Calculator {
private:
    T number1;
    F number2;
public:
    Calculator (T num1, F num2);
    double add(T num1, F num2);
    double substract(T num1, F num2);
    double multiply(T num1, F num2);
    double divide(T num1, F num2);
};

template<class T, class F>
Calculator<T, F>::Calculator(T num1, F num2) {
    number1 = num1;
    number2 = num2;
};

template<class T, class F>
double Calculator<T, F>::add(T num1, F num2) {
    return num1 + num2;
}

template<class T, class F>
double Calculator<T, F>::substract(T num1, F num2) {
    return num1 - num2;
}

template<class T, class F>
double Calculator<T, F>::multiply(T num1, F num2) {
    return num1 * num2;
}

template<class T, class F>
double Calculator<T, F>::divide(T num1, F num2) {
        if (num2 == 0) {
            throw "No division by 0";
        } else return num1 / num2;
}

int main() {
    //Create number1 class template for number1 calculator
    //it should have all the basic methods: add, subtract, multiply, divide
    //use exceptions to handle errors in special cases! (find the special cases!)

    Calculator<int, float> my_calc(12, 4.32);

    try {
        cout << "Add: " << my_calc.add(12, 4.32) << endl;
        cout << "Substract: " << my_calc.substract(12, 4.32) << endl;
        cout << "Multiply: " << my_calc.multiply(12, 4.32) << endl;
        cout << "Divide: " << my_calc.divide(12, 0.0) << endl;
    } catch(const char* error) {
        cout << "Error: " << error << endl;
    }
    return 0;
}
