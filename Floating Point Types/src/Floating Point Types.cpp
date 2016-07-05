//============================================================================
// Name        : Floating.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<iomanip>
using namespace std;

int main() {

	float fValue = 123.456789;
	cout <<setprecision(20)<< fixed<< fValue<< endl;
	cout<<"Size of float: " << sizeof(float)<<endl;
	cout << scientific<< fValue<< endl;

	double dvalue=123.456789;
	cout<<setprecision(20)<<fixed<<dvalue<<endl;
	cout<<"Size of double: " << sizeof(double)<<endl;

	long double lvalue = 123.456789876543210;
	cout<<setprecision(20)<<fixed<<lvalue<<endl;
	cout<<"Size of long double: " << sizeof(long double)<<endl;



	return 0;
}
