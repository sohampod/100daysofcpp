// C++ Program to swap two numbers
// without using temporary variable
#include <bits/stdc++.h>
using namespace std;

int main()
{//NOTE - for this code to work in a generalised sense, y !- 0 to prevent zero division 
	int x = 10, y = 5;

	// Code to swap 'x' and 'y' 
	x = x * y; // x now becomes 15
	y = x / y; // y becomes 10
	x = x / y; // x becomes 5
	cout << "After Swapping: x =" << x << ", y=" << y;
}


