//============================================================================
// Name        : Data.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Cat.h"

using namespace std;

int main() {
	Cat tabby;
	tabby.makeHappy();
	tabby.speak();

	Cat bob;
	bob.makeSad();
	bob.speak();


	return 0;
}
