// C/C++ program to assign value to y according
// to value of x

#include <iostream>
using namespace std;

// Driver Code
int main()
{
	int a = 5;
	int b = 10;
	int x = 1;
	int y;

	if (x & 1) //The & (bitwise AND) in C or C++ takes two numbers as operands and does AND on every bit of two numbers. The result of AND is 1 only if both bits are 1. 
		y = b;
	else
		y = a;
	cout << "Value assigned to 'y' is " << y << endl;
	return 0;
}
