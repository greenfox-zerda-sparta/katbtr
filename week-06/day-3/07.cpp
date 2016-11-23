#include <iostream>
#include <string>

using namespace std;

template<class T, class F>
class Example {
private:
    T a;
    F b;
public:
    Example (T a, F b);
    T get_a();
    F get_b();
    void set_a(T x);
    void set_b(F y);
};

template<class T, class F>
Example<T, F>::Example(T x, F y) {
    a = x;
    b = y;
};

template<class T, class F>
T Example<T, F>::get_a() {
    return a;
}

template<class T, class F>
F Example<T, F>::get_b() {
    return b;
}

template<class T, class F>
void Example<T, F>::set_a(T x) {
    a = x;
}

template<class T, class F>
void Example<T, F>::set_b(F y) {
    b = y;
}

int main() {
	//Create a simple class template which contains 2 item and has both a get and a set method for these!

    Example<int, float> my_example(8, 6.12);

    my_example.set_a(6);
    my_example.set_b(8.12);

    cout << my_example.get_a() << endl;
    cout << my_example.get_b() << endl;

  return 0;
}

