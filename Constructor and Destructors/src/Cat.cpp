/*
 * Cat.cpp
 *
 *  Created on: Jul 18, 2016
 *      Author: alevin
 */

#include "Cat.h"
#include <iostream>

using namespace std;

Cat::Cat(){
	cout << "Cat created."<<endl;
	happy = true;
}

Cat::~Cat(){
	cout<<"Cat destroyed."<<endl;
}

void Cat::speak(){

	if(happy){
		cout<< "Meoooow!" <<endl;
	}
	else {
		cout<< "Ssssss!" <<endl;
	}

}

