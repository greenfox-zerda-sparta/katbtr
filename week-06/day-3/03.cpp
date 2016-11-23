#include <iostream>
#include <string>

using namespace std;

template<class T>
void print_array(T tArray[], int size) {
    for (int i = 0; i < size; i++) {
        cout << tArray[i] << " ";
    }
    cout << endl;
}

int main() {
	// create a function template which takes in an array, and the size of it
	// print all the elements of the array

    int  IntArray[5] = {100, 200, 400, 500, 1000};
    string StringArray[5] = {"alma", "barack", "citrom", "dinnye", "eper"};

    print_array(IntArray, 5);
    print_array(StringArray, 5);

  return 0;
}