//============================================================================
// Name        : Pointers.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void manipulate(double *pvalue){
	cout<<"2. Value of double in manipulate: " << *pvalue <<endl;
	*pvalue = 10.0;
	cout<<"3. Value of double in manipulate: " << *pvalue <<endl;

}


int main() {

	int nValue = 8;

	int *pnValue = &nValue;


	cout <<"Int value: "<<nValue<<endl;
	cout <<"Address value: "<<pnValue<<endl;

	cout <<"Int value via pointer: "<<*pnValue<<endl;

	cout<< "================="<<endl;

	double dValue = 123.4;

	cout<< "1. dValue: "<< dValue <<endl;

	manipulate(&dValue);
	cout<< "4. dValue: "<<dValue<<endl;

	return 0;
}
