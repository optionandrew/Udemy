//============================================================================
// Name        : Integer.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<climits>
using namespace std;

int main() {

	int value = 767;
	cout << value << endl;
	cout << "Max int value: " << INT_MAX << endl;
	cout << "Min int value: " << INT_MIN << endl;

	long int lValue = 26265665;
	long lValue2 = 26265665;
			;
	cout << lValue<<endl;

	cout <<"Size of int: " << sizeof(int)<<endl;
	cout <<"Size of short int: " << sizeof(short int)<<endl;
	unsigned int uValue = 2342343;
	cout<<uValue<<endl;

	return 0;
}
