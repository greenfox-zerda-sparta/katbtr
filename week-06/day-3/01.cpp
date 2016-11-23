#include <iostream>
#include <string>

using namespace std;

template<class T>
void print_first(T tArray[]) {
    cout << tArray[0] << endl;
}

int main() {

    int  IntArray[5] = {100, 200, 400, 500, 1000};
    float FloatArray[5] = {1.2, 2.3, 3.4, 4.5, 5.6};
    print_first(IntArray);
    print_first(FloatArray);

    return 0;
}
