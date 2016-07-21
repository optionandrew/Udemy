//============================================================================
// Name        : Constructor.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Person.h"
#include <iostream>
using namespace std;



int main() {

	Person person1;

	cout<< person1.toString()<<endl;

	Person person2("Dave");

	cout<< person2.toString()<<endl;

	Person person3("Andrew", 34);

	cout<<person3.toString()<<endl;

	return 0;
}
