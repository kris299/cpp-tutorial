#include <iostream>
using namespace std;

int main()
{
	//declaring a char with variablename my_char.
	char char1;
	char char2;

	//initializing char1 and char2 with single quotes.
	char1 = 't';
	char2 = '3';

	cout << "Value of char1: " << char1 << endl;
	cout << "Value of char2: " << char2 << endl;
	cout << "The ACSII number of char1 is: " << int(char1) << endl;
	cout << "The ACSII number of char2 is: " << int(char2) << endl;
	cout << "Therefore the sum of: char1 + char2 = " << char1+char2 << endl;

	//To store strings its possible to use an array of chars.
	char char_array[] = "This is my char array";
	cout << endl << "char_array is a array of chars. Its content is: \n"
	       	<< char_array << endl << endl;

	//looping over the array of chars
	cout << "looping of the array of chars: " << endl;
	for(char ii : char_array)
	{
		cout << ii;

		// linebreak at whitespace
		if (ii == ' '){
			cout << endl;
		}

	}


	//declaring a pointer to a char
	char * p_char;
	char char3 = 'c';

	// storing the address of char1 in that pointer
	p_char = &char3;
	cout << endl << endl << "#### pointers and chars ####" << endl << endl;
	cout << "char1 has the address: " << (void *) &char3 << endl;
	cout << "char pointer with address: " << *p_char
	   	<< "points to: " << p_char << endl;

	/*
	char const * p_char;

	p_char = "cav2";
*/

	return 0;
}
