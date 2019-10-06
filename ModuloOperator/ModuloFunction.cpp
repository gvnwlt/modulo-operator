#include <iostream>
#include "ModuloFunction.h"

int mod(int dividend, int divisor)
{ 
	int count = 0; 
	int q = dividend;
	while (q >= 0)
	{
		q -= divisor; 
		count++;
	}
	//std::cout << count << std::endl; 

	return dividend - (--count * divisor); 
}