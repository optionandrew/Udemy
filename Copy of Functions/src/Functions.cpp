//============================================================================
// Name        : Functions.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void showMenu() {

	cout << "1. Search" << endl;
	cout << "2. View Record" << endl;
	cout << "3. Quit" << endl;

}

void getInput(){

	cout << "Enter selection: " << flush;

	int input;

	cin >> input;

	switch (input) {

	case 1:
		cout << "Searching..." << endl;
		break;
	case 2:
		cout << "Viewing..." << endl;
		break;
	case 3:
		cout << "Quitting..." << endl;
		break;
	default:
		cout << "Please select an item form the menu" << endl;
	}


}

int main() {

	showMenu();
	getInput();




return 0;
}
