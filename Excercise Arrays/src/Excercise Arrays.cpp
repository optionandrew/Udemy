//============================================================================
// Name        : Excercise.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <math.h>
using namespace std;

int main() {

	int array1[12];

	for(int i=0;i<12;i++){

		array1[i]= 12*(i+1);
		cout<<"Array index: "<<i<<": "<<array1[i]<<endl;
	}


	return 0;
}
