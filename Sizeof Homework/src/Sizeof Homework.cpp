
//============================================================================
// Name        : Sizeof.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {


		int table[10][10] = { 0 };

		for (int i = 0; i <sizeof(table)/sizeof(int); i++) {
			for (int j = 0; j <= 9; j++) {
				table[i][j] = (i+1) * (j+1);

				cout << table[i][j] << " " << flush;
			}
			cout << endl;

		}
return 0;
}





