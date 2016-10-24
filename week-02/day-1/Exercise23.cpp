//============================================================================
// Name        : Exercise23.cpp
// Author      : katbtr
// Version     :
// Copyright   : Your copyright notice
// Description : Week-02 Day-1 Exercise23
//============================================================================

#include <iostream>
#include <string>

using namespace std;

int main() {
	int ad = 6;

	// print the numbers till ad from 0

	cout << "while" << endl;

	int a = 0;

	while (a <= ad) {

		cout << a << endl;

		a++;

	}

	cout << "do+while" << endl;

	int b = 0;

	do {

		cout << b << endl;
		b++;

	} while ( b <= ad );


	cout << "for" << endl;
	for ( int c = 0; c <= ad; c++ ) {

		cout << c << endl;
	}

	return 0;
}
