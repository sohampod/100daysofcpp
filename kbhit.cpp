// C++ program to demonstrate use of kbhit() 
#include <iostream> 
#include <conio.h> 
#include<stdlib.h>
using namespace std;

int main() 
{ 
	while (!kbhit()) 
		cout << rand() ; //cout << "Press any key";
        
	return 0; 
}



// If a key has been pressed then it returns a non zero value otherwise returns zero. 