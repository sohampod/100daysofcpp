
#include <iostream>
using namespace std;
 
// Driver Code
int main()
{
    int a = 5;
    int b = 5;
     
    if (a ^ b)
        cout <<"true";
    else
        cout<< "false";
    
    return 0;
}



// The | (bitwise XOR) in C or C++ takes two numbers as operands and does XOR on every bit of two numbers. The result of XOR is 1 if both of them are different. 