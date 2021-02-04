#include <iostream>
using namespace std;
 
// Driver Code
int main()
{
    int a = 5;
    int b = 10;
     
    if (a & b)
        cout <<"true";
    else
        cout<< "false";
    
    return 0;
}


// The & (bitwise AND) in C or C++ takes two numbers as operands and does AND on every bit of two numbers. The result of AND is 1 only if both bits are 1. 