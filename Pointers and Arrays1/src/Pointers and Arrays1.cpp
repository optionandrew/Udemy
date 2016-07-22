//============================================================================
// Name        : Pointers.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	string texts[] = { "one", "two", "three" };

	string *pTexts = texts;

	for (int i = 0; i < sizeof(texts) / sizeof(string); i++) {
		cout << pTexts[i] << " " << flush;
	}
	cout << endl;

	for (int i = 0; i < sizeof(texts) / sizeof(string); i++) {
		cout << *pTexts << " " << flush; //only points at the first part of the array...could say *pTexts[i] also or see below
	}
	cout << endl;
	for (int i = 0; i < sizeof(texts) / sizeof(string); i++) {
		cout << *pTexts << " " << flush;

		pTexts++;
	}

	cout << endl;

	string *pElement = &texts[0]; //start of array pointer
	string *pEnd = &texts[2]; //pointer to end of array

	do {
		cout<< *pElement<<", "<<flush;
		pElement++;

	}
	while (pElement <= pEnd);

	return 0;
}
