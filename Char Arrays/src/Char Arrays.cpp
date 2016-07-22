//============================================================================
// Name        : Char.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	char text[] = "hello"; //double quotes adds an extra 0 value to the end

	for (int i = 0; i < sizeof(text); i++) {
		cout << i << ". " << text[i] << endl;
	}

	int k = 0;

	while (true) {
		cout << text[k] << flush;
		k++;
		if (text[k] == 0) {
			break;
		}
	}

	return 0;
}

