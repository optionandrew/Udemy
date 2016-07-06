//============================================================================
// Name        : Multidimensional.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
//two dimensional array
#include <iostream>
using namespace std;

int main() {

	string animals[2][3] = {          //first bracket is rows, second is columns
			{ "fox", "dog", "cat" }, //think of these as two stacked lists of 3 elements each
					{ "mouse", "squirrel", "parrot" } };

	for(int i =0; i<2; i++) {
		for(int j = 0; j<3; j++) {
			cout << animals[i][j]<< " " <<flush;
		}
		cout <<endl;
	}

	return 0;
}
