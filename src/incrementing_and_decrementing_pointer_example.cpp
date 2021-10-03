#include <iostream>
using namespace std;

int main() {

	int n = 3;
	int myarray[n] = {1,2,3};
	int *mypointer;

	// storing address of myarray in pointer
	mypointer = myarray;

	// incrementing pointer
	cout << "incrementing pointer through loop" << endl;
	for(int i=0; i<n; ++i) {

		cout << "Address of myarray[" << i << "] = " << mypointer << endl;
		cout << "Value of myarray[" << i << "] = " << *mypointer << endl;

		// incrementing pointer by sizeof(int)
		mypointer++;
	}

	// setting pointer to end of myarray
	mypointer = &myarray[n-1];

	cout << endl << "decrementing pointer" << endl;
	for (int i=n-1; i>=0; i--) {

		cout << "Address of myarray[" << i << "] = " << mypointer << endl;
		cout << "Value of myarray[" << i << "] = " << *mypointer << endl;

		// decrementing pointer by sizeof(int)
		mypointer--;
	}

	// alternatively while loop, by comparison of pointers
	
	cout << endl << "alternatively incrementing over while loop" << endl;
	mypointer = myarray;
	int i = 0;
	while(mypointer < &myarray[n]) {


		cout << "Address of myarray[" << i << "] = " << mypointer << endl;
		cout << "Value of myarray[" << i << "] = " << *mypointer << endl;

		i++;
		mypointer++;
	}
	return 0;
}
