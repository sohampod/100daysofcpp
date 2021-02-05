#include <iostream>
#include <bitset>
using namespace std;
 
// Function to find XOR of two numbers without using XOR operator
int findBits(int x, int y)
{
    return (x | y) - (x & y);
}
 
// Find XOR of two numbers without using XOR operator
int main()
{
    int x = 65;
    int y = 80;
 
    cout << "First number in binary is " << bitset<8>(x) << endl;
    cout << "Second number in binary is " << bitset<8>(y) << endl;
 
    cout << "\nXOR is " << bitset<8>(findBits(x, y));
 
    return 0;
}
