//============================================================================
// Name        : Arrays.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	cout << "Array of integers" << endl;
	cout << "===================" << endl;
	int values[3]; //creates an array of 3 items--items called elements numbered starting 0.

	values[0] = 88; //sets 1st element to 88 in the array.  0 indexes first element
	values[1] = 123;
	values[2] = 7;

	cout << values[0] << endl;
	cout << values[1] << endl;
	cout << values[2] << endl;

	cout << endl << "Array of doubles" << endl;
	cout << "===================" << endl;

	double numbers[4] = { 4.5, 2.3, 7.2, 8.1 };

	for (int i = 0; i < 4; i++) {
		cout << "Element at index " << i << ": " << numbers[i] << endl;
	}

	cout << endl << "Initializing with zero values" << endl;
	cout << "===================" << endl;

	int numberArray[8] = { };

	for (int i = 0; i < 8; i++) {
		cout << "Element at index " << i << ": " << numberArray[i] << endl;
	}

	string texts[] = { "apple", "banana", "Orange" }; //don't need to say size of array if you initialize it with values

	cout << endl << "Initializing with strings" << endl;
	cout << "===================" << endl;
	for (int i = 0; i < 8; i++) {
		cout<< "Element at index " << i << ": " << texts[i] << endl;
	}

		return 0;
	}

/* be careful!!!  you can access and write to elements of an array that don't exist.
 * As an example you can initialize an array of 3 elements but read and write to the 4th
 * which doesn't exist.  It will be garbage and c++ doesn't stop you from doing it.
 */
