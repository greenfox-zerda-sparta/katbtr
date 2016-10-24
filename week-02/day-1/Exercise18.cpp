//============================================================================
// Name        : Exercise18.cpp
// Author      : katbtr
// Version     :
// Copyright   : Your copyright notice
// Description : Week-02 Day-1 Exercise18
//============================================================================

#include <iostream>
#include <string>

using namespace std;

int main() {
	string x = "monkey";
	// if the string is longer than 4 characters***
	// print 'Long!' otherwise print 'Short!'

	int y = x.length();

	if ( y > 4) {

		cout << "Long!";

	} else {

		cout << "Short!";
	}

	return 0;
}
