
#include <iostream>
using namespace std;
 
// Driver Code
int main()
{
    int a = 5;
    char b = 'p';
     
    if (a | b)
        cout <<"true";
    else
        cout<< "false";
    
    return 0;
}


// The | (bitwise OR) in C or C++ takes two numbers as operands and does OR on every bit of two numbers. The result of OR is 1 if any of the bits is 1. 