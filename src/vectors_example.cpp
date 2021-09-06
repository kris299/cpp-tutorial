#include <vector>
#include <iostream>
using namespace std;
#include "header.h"

int main() 
{
	vector<int> my_vector = {0,1,2,3,4,5,6,7,8,9,10,11,12,13};
	int my_number = -1;
	
	cout <<	"Define a vector like this: \n"
		"vector<int> my_vector = {0,1,2,3,4,5,6,7,8,9,10,11,12,13};"
		<< endl << endl;
	cout << "Enter a number to add to this vector please: ";
	my_number = user_int_input(my_number);
	cout << endl << "Add this number to the vector like this: \n"
		"my_vector.push_back(my_number);" << endl << endl;
	my_vector.push_back(my_number);
	cout << "Lets print out the vector ..." << endl;
	for (int i : my_vector)
	{
		cout << i << " ";
		
	}
	cout << endl;
	/*
	for (int i = 0; i < (int) my_vector.size(); ++i)
	{
		cout << my_vector[i] << " ";
	}
	cout << endl;*/
	return 0;
}
