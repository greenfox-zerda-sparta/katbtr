//============================================================================
// Name        : Exercise25.cpp
// Author      : katbtr
// Version     :
// Copyright   : Your copyright notice
// Description : Week-02 Day-1 Exercise25
//============================================================================

#include <iostream>
#include <string>

using namespace std;

int main() {
	// print the even numbers till 20


	cout << "while" << endl;

		int a = 2;

		while (a <= 20) {

			cout << a << endl;
			a += 2;

		}

		cout << "do+while" << endl;

		int b = 2;

		do {

				cout << b << endl;
				b += 2;

			} while ( b <= 20 );

		cout << "for" << endl;

		for ( int c = 2; c <= 20; (c += 2) ) {

				cout << c << endl;
			}


	return 0;
}
