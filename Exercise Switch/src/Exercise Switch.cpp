//============================================================================
// Name        : Exercise.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "1. Add entry" << endl;
	cout << "2. Delete entry" << endl;
	cout << "3. View entry" << endl;
	cout << "Enter selection: " << flush;

	int selection;

	cin >> selection;

	switch (selection) {

	case 1:
		cout << "Adding entry..." << endl;
		break;

	case 2:
		cout << "Deleting entry..." << endl;
		break;

	case 3:
		cout << "Viewing entry..." << endl;
		break;

	default:
		cout << "Not recognized" << endl;

	}

	return 0;
}
