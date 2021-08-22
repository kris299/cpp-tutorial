#include <iostream>
using namespace std;


// Lets say we want a function that discretizes a linear space and store that 
// discretization in a 1D-array. This function needs to take the start and end 
// values of that space and the size of the desired array, where the data should be 
// stored. The storage has to be allocated, so it will be visible outside of 
// the function. Then the allocated storage may be by looping over it populated as
// desired. Finally, the pointer to that allocated storage should be returned.

 

float *return_array(float start, float end, int size)
{
	cout << endl;
	cout << "Allocating buffer for the size of " << size << " floats "
	       "inside of the function!" << endl << endl; 

	float * p_array = (float* ) malloc(sizeof(float)*size);

	cout << "Address of the beginning of the allocated buffer: " 
		<< p_array << endl << endl;	

	// populating the array with the desired values
	for (int i; i < size; ++i)
	{
		p_array[i] = start + (end-start)/(size-1) *i ;
		//cout << p_array[i] << endl;
	}
	return p_array;
}


int main()
{
	int size = 11;
	int start = -0.5;
	int end = 3.5;	
	
	float *p_array = return_array(start, end, size);

	cout << "Address of returned pointer: " << p_array << endl << endl;

	for (int i=0; i <size; ++i)
	{
		cout << " Value stored at p_array[" << i << "]: "
		       	<< p_array[i] << endl;	
	}
	return 0;
}
