#include <iostream>
#include <string>

using namespace std;

template<class T, class F>
void storage_size(T tArray, F fArray) {

    if (sizeof(tArray) == sizeof(fArray)) {
        cout << "Both arrays are stored in the same amount of bytes" << endl;
    } else if (sizeof(tArray) > sizeof(fArray)) {
        cout << "First array is stored in more bytes." << endl;
    } else {
        cout << "Second array is stored in more bytes." << endl;
    }

}

int main() {
    //Create a function template that takes 2 different typenames, and prints out
    //which one is stored in more bytes from then

    int  IntArray[5] = {100, 200, 300, 500, 1000};
    float FloatArray[5] = {1.2, 2.3, 3.4, 4.5, 5.6};

    storage_size(IntArray, FloatArray);

    return 0;
}