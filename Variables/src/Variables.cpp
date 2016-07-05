//============================================================================
// Name        : Variables.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int numberCats = 5;
	int numberDogs =7;
	int numberPets = numberCats + numberDogs;
	cout<< "Number of cats: " << numberCats<< endl;
	cout<< "Number of dogs: " <<numberDogs<<endl;
	cout<<"Total number of pets: "<<numberCats+numberDogs<<endl;
	cout<<numberPets<<endl;

	cout<< "New dog acquired!"<<endl;

	numberDogs = numberDogs + 1;

	cout<<"New number of dogs: "<< numberDogs<<endl;





	return 0;
}
