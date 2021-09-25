#include <iostream>
using namespace std;

//stack:
// - faster, not dynamically allocatable 
// - variables declared inside functions will go to the stack
//
//heap:
//
// - dynamically allocatable, slower that stack
// - used, if size of needed memory is not known in advance
// - allocate memory with the "new" operator
// - use "delete" operator to de-allocate memory allocated by "new"


int main() {

	double * pdouble = NULL; // pointer initialized as NULL pointer
	
	//its good practice to check, if enough memory is available
	if (!(pdouble = new double))  // allocating memory for double variable
	{
		cout << "Error: Out of memory" << endl;
		exit(1);
	}
	
	*pdouble = 245.35;

	cout << "Address of pdouble: " << pdouble << endl;
	cout << "Value of pdouble: " << *pdouble << endl;

	//delete unused user allocated memory
	delete pdouble;

	return 0;
}
