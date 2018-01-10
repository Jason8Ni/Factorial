//main

#include <iostream>
#include "Factorial.h"
using namespace std;

int main() {
	int x;
	cout << "Enter a integer: ";
	cin >> x;
		
	//create object
	Factorial test = Factorial(x);
	
	//test method
	cout << test.getFactorial() << endl;
	
	return 0;	
}

