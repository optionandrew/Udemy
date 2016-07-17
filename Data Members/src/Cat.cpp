/*
 * Cat.cpp
 *
 *  Created on: Jul 18, 2016
 *      Author: Andrew Levin
 */

#include <iostream>
#include "Cat.h"

using namespace std;

void Cat::speak() {
	if (happy) {

		cout << "Meowwww" << endl;
	} else {
		cout << "scrreeech!" << endl;
	}
}

void Cat::makeHappy() {
	happy = true;
}
void Cat::makeSad() {
	happy = false;
}




