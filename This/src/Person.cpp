/*
 * Person.cpp
 *
 *  Created on: Jul 18, 2016
 *      Author: alevin
 */

#include "Person.h"
#include <sstream>
#include <iostream>

using namespace std;

Person::Person() {
	// TODO Auto-generated constructor stub
	age = 0;
	name = "";

}

Person::Person(string name, int age){
	this ->name = name;
	this->age = age;


}

/* Alternatively: it knows the outter name/age is the objects in private, and that the inner
 * ones are the one passed in.
 *
 * Person::Person(string name, int age): name(name), age(age){


}
 */

string Person::toString(){
	stringstream ss;

	ss<<"Name: ";
	ss<<name;
	ss<<"; age: ";
	ss<<age;

	return ss.str();
}
