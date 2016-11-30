#include <iostream>
#include <vector>
#include "print.h"

using namespace std;

void print_vector(vector<int> &vvv) {
    unsigned long size = vvv.size();
    for (unsigned long i = 0; i < size; i++) {
        cout << vvv[i];
    }
    cout << endl;
}
/*
void print_string(string str) {
    unsigned long size = str.size();
    for (unsigned int i = 0; i < size; i++) {
        cout << str[i];
    }
    cout << endl;
}
*/