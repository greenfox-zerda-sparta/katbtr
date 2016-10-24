//============================================================================
// Name        : Exercise19.cpp
// Author      : katbtr
// Version     :
// Copyright   : Your copyright notice
// Description : Week-02 Day-1 Exercise19
//============================================================================

#include <iostream>
#include <string>

using namespace std;

int main() {
	string x = "cheese";
	// Tell if the x has even or odd number of
	// characters with a True for even and
	// false False output otherwise

	if (sizeof(x) %2 == 0) {

		cout << "True";
	} else {

		cout << "False";
	}

	return 0;
}
