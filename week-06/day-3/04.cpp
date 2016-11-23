#include <iostream>
#include <string>

using namespace std;

template<class T>
void descends_array(T* tArray, int size) {
    for(int i = 0; i < size - 1; i++) {
        for(int j = i + 1; j < size; j++) {
            if(tArray[i] < tArray[j]) {
                T temp = tArray[i];
                tArray[i] = tArray[j];
                tArray[j] = temp;
            }
        }
    }
    for (int i = 0; i < size; i++) {
        cout << tArray[i] << " ";
    }
    cout << endl;
}


int main() {
    // create a function template that takes an array and sort it in a descending order

    int  IntArray[5] = {100, 200, 300, 500, 1000};
    float FloatArray[5] = {1.2, 2.3, 3.4, 4.5, 5.6};

    descends_array(IntArray, 5);
    descends_array(FloatArray, 5);

    return 0;
}

