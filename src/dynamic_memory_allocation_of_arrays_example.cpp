#include <iostream>
using namespace std;


int main() {

	// declaring and initializing pointer to double
	double* p_array = NULL;

	// allocating memory for array of 20 doubles and storing the address
	// to that array in the p_array pointer
	p_array = new double[20];

	// filling the values of that array
	for (int i=0; i<20; ++i) {

		p_array[i]=i;
	}

	//printing the content of the array
	for (int i=0; i<20; ++i) {

		cout << *p_array+i << endl;
	}

	// deleting the array, freeing up the allocated memory, after its purpose
	// has been fullfilled
	delete p_array;

	return 0;
}


