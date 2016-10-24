//============================================================================
// Name        : Exercise24.cpp
// Author      : katbtr
// Version     :
// Copyright   : Your copyright notice
// Description : Week-02 Day-1 Exercise24
//============================================================================

#include <iostream>
#include <string>

using namespace std;

int main() {
	int ae = 4;

	string text = "Gold";
	// print content of the text variable ae times

	cout << "while" << endl;

	int a = 1;

	while (a <= ae) {

		cout << text << endl;
		a++;

	}

	cout << "do+while" << endl;

	int b = 1;

	do {

			cout << text << endl;
			b++;

		} while ( b <= ae );

	cout << "for" << endl;

	for ( int c = 1; c <= ae; c++ ) {

			cout << text << endl;
		}

	return 0;
}
