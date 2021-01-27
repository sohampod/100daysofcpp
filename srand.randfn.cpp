

#include <stdio.h>
#include <stdlib.h>//rand()
#include<ctime> //for srand()
#include<iostream>
using namespace std;
// Driver program
int main()
{
    // This program will create different sequence of 
    // random numbers on every program run 
 
    // Use current time as seed for random generator
    srand(time(0));
 
    for(int i = 0; i<4; i++)
        cout<<rand()<<endl;
 
    return 0;
}
