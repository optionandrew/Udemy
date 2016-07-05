//============================================================================
// Name        : If.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	string password = "hello";

	cout<<"Enter your password: "<<flush;
	string input;
	cin>>input;

  //cout<<"'"<<input<<"'"<<endl; //test line

	if(input == password){
		cout<<"Password accepted"<<endl;

	}

	if(input != password){
		cout<<"Access denied"<<endl;

	}



	return 0;
}
