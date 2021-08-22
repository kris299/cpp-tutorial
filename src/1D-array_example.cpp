#include <iostream>
using namespace std;

int main()
{
	// declaration of an array follows this structure:
	// type arrayname[size of array]
	//
	// Inizializing it at declaration:
	// type arrayname[size of array] = {entries, coma, separated, of, type}
	//
	// if array is inizialised at declaration its optional to define the size
	
	// example of an array of size 10 filled with integers from 0 to 9:
	
	int int_array[] = {0,1,2,3,4,5,6,7,8,9};

	//the entries i might be accessed by passing i to the array in square brakets
	for(int i = 0;i < 10; ++i)
	{
		cout << "int_array[" << i << "] = "<< int_array[i] << endl;
	}
	 
	return 0;
}
