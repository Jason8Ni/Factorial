//implementation of header file

#include "Factorial.h"

Factorial::Factorial() : num(0) { }

Factorial::Factorial(int n) :num(n) {
	n = num;
}

int Factorial::getFactorial()
{
	int step, product;
	
	//start as 1, if n is < 1, will still return 1.	
	product = 1;
	
	//loop through and multiply
	for(step = num; step > 1; --step){
		product = product * step;
	}
	//return answer
	return product;
	
} 

