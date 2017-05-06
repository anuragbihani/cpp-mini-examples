// What- A trivial program that shows difference between initialization and definition
// How- Program creates two variables and explains differences btn 2 concepts with comments

#include "stdafx.h"
#include <iostream>

int main()
{
	//Variable definition: define variable a.
	int a;
	//assign value to a. a is the l-value since it has a memory address. 
	// -5 is the r-value
	a = -5;
	std::cout << a << std::endl;
	
	//Variable initialization: Initialize variable b
	int y = 3;
	std::cout << b << std::endl;

	//Uninitialized variable: Very bad idea
	// Visual studio will initialize the contents of the variable to 0 when ompiling in 
	// debug mode. This does not happen in release mode.
	int z;
	std::cout << z << std::endl;

	return 0;
}

