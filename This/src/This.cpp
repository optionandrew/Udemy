//============================================================================
// Name        : This.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Person.h"
using namespace std;

int main() {

	Person person1;
	Person person2("Bob", 42);
	Person person3("Andrew",34);
	cout<<person1.toString()<< ": memory location: "<<&person1 << endl;
	cout<<person2.toString()<< ": memory location: "<<&person2 << endl;
	cout<<person3.toString()<< ": memory location: "<<&person3 << endl;

	return 0;
}
