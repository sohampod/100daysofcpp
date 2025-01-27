// C++ program to demonstrate use of * for pointers in C++ 
#include <iostream> 
using namespace std; 

int main() 
{ 
	// A normal integer variable 
	int Var = 10; 

	// A pointer variable that holds address of var. 
	int *ptr = &Var; 

	// This line prints value at address stored in ptr. 
	// Value stored is value of variable "var" 
	std::cout << "Value of Var = "<< *ptr << std::endl; 

	// The output of this line may be different in different 
	// runs even on same machine. 
	std::cout << "Address of Var = " << ptr << std::endl; 

	// We can also use ptr as lvalue (Left hand 
	// side of assignment) 
	*ptr = 20; // Value at address is now 20 

	// This prints 20 
	std::cout << "After doing *ptr = 20, *ptr is "<< *ptr << std::endl; 

	return 0; 
} 



/* OUTPOUT
 Value of Var = 10
 Address of Var = 0x7ffd40943f9c
 After doing *ptr = 20, *ptr is 20 */