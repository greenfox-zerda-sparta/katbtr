//============================================================================
// Name        : Exercise26.cpp
// Author      : katbtr
// Version     :
// Copyright   : Your copyright notice
// Description : Week-02 Day-1 Exercise26
//============================================================================

#include <iostream>
#include <string>

using namespace std;

int main() {
	// Write a program that prints the numbers from 1 to 100.
	// But for multiples of three print "Fizz" instead of the number
	// and for the multiples of five print "Buzz".
	// For numbers which are multiples of both three and five print "FizzBuzz".

	cout << "while" << endl;

			int a = 1;

			while (a <= 100) {

				if (a %3 == 0 && a %5 == 0) {

					cout << "FizzBuzz ";

				} else if (a %3 == 0) {

					cout << "Fizz ";

				} else if (a %5 == 0) {

					cout << "Buzz ";

				} else {

				cout << a << " ";

				a++;

				}

			}


	return 0;
}
