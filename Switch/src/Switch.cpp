//============================================================================
// Name        : Switch.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int value = 4;

	switch (value) {

	case 4:
		cout << "Value is 4." << endl;
		break;
	case 5:
		cout << "Value is 5." << endl;
		break;
	case 6:
		cout << "Value is 6." << endl;
		break;
	default:  //don't need default, if no default and no match it will do nothing
		cout << "Unrecognized value." << endl;

	}

	return 0;
}


//you need a break otherwise it runs them all
//you can't have a variable as a case, but you can use constants or const values...
//but they have to be fixed.
