/*
 * Person.cpp
 *
 *  Created on: Jul 18, 2016
 *      Author: alevin
 */

#include "Person.h"
using namespace std;

Person::Person() {
	// TODO Auto-generated constructor stub
	name = "George";

}

string Person::toString() {
	return "Person's name is: " + name;
}

string Person::getName(){
	return name;
}

void Person::setName(string newName) {
	name = newName;
}
