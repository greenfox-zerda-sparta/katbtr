#include <iostream>
#include <string>

using namespace std;

template<class T>
void add_to_third(T tArray[]) {
     tArray[2] += tArray[0];
}

int main() {
    // create a function template that takes fix long array
    // and add the 1st element of it to the third

    int  IntArray[5] = {100, 200, 400, 500, 1000};
    string StringArray[5] = {"alma", "barack", "citrom", "dinnye", "eper"};

    add_to_third(IntArray);
    add_to_third(StringArray);

    cout << "Int: " << IntArray[2] << " String: " << StringArray[2];

    return 0;
}