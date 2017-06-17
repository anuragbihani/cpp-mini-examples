#include<iostream>
int main()
{
	int val1 = 6; //copy init
	int val2(6); //direct init
	int val3{6}; // uniform init uncomment when using c++11
	std::cout<<val1<<val2<<val3;
	return 0;
}
