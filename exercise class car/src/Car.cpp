/*
 * Car.cpp
 *
 *  Created on: Jul 18, 2016
 *      Author: Andrew Levin
 */

#include <iostream>
#include "Car.h"

using namespace std;

void Car::setFast() {
	fast = true;
}

void Car::setSlow() {
	fast = false;
}

void Car::engineSound() {
	if (fast) {
		cout << "Vroom!!!!" << endl;

	} else {
		cout << "putter putter" << endl;
	}

}
