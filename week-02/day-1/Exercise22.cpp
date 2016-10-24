//============================================================================
// Name        : Exercise22.cpp
// Author      : katbtr
// Version     :
// Copyright   : Your copyright notice
// Description : Week-02 Day-1 Exercise22
//============================================================================

#include <iostream>
#include <string>

using namespace std;

int main() {
	int ac = 8;
	int time = 120;
	string out = "";
	// if ac is dividable by 4
	// and time is not more than 200
	// set out to 'check'
	// if time is more than 200
	// set out to 'Time out'
	// otherwise set out to 'Run Forest Run!'

	if ( (ac %4 == 0) && ( ! (time > 200) ) ) {

		out = "check";
	}

	if ( time > 200) {

		out = "Time out";
	} else {

		out = "Run Forest Run!";
	}

	cout << out;

	return 0;
}
