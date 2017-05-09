#include "stdafx.h" 
#include <iostream>

int add(int x, int y); // needed so main knows that add() is a function declared elsewhere

int main()
{
	std::cout << "The sum of 2 and 3 is: " << add(2, 3) << std::endl;
	return 0;
}