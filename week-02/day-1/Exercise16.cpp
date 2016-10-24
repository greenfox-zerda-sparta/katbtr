//============================================================================
// Name        : Exercise16.cpp
// Author      : katbtr
// Version     :
// Copyright   : Your copyright notice
// Description : Week-02 Day-1 Exercise16
//============================================================================

#include <iostream>
#include <string>

using namespace std;

int main() {
	int v = 426;
	// print 'Yeah!' if dividable by 4 but print 'End of program' after regardless

	v %4 == 0 && cout << "Yeah!" << endl;
	cout << "End of program";

	return 0;
}
