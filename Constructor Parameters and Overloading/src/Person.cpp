/*
 * Person.cpp
 *
 *  Created on: Jul 18, 2016
 *      Author: alevin
 */

#include "Person.h"
#include <sstream>

Person::Person() {
	// TODO Auto-generated constructor stub

	name = "undefined";
	age = 0;

}

Person::Person(string newName){
	name = newName;
	age = 0;
}

string Person::toString(){

	stringstream ss;

	ss<<"Name: ";
	ss<< name;
	ss<< "x; age: ";
	ss<< age;

	return ss.str();


}

