//main

#include <iostream>
#include "Factorial.h"
using namespace std;

int main() {
		
	//create object
	Factorial test = Factorial(4);
	
	//test method
	cout << test.getFactorial() << endl;
	
	return 0;	
}

