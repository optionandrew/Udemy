//============================================================================
// Name        : Constructor.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Cat.h"
using namespace std;

int main() {
	cout << "Starting program ..." << endl;

	{
		Cat bob;
		bob.speak();
	} //makes cat only exist in the scope of these curly brackets deallocates memory on destructor.

	cout << "Ending program ..." << endl;
	return 0;
}
