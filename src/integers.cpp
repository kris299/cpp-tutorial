#include <iostream>
#include <string>
using namespace std;

#include "functions.h"

int integers()
{
	int integers = -1;
	while(integers != 0)
	{
		system("clear");	// clears the terminal window	
		cout << "integers are one of the basic c++ data types" << endl;
		cout << endl;
		cout << "Enter:" << endl;
		cout << endl;
		cout << " <1> to show the code of an example using intergers" << endl;
		cout << " <2> to run the example";
		cout << endl;

		integers = user_int_input(integers);

		switch(integers)
		{
			case 1:
				integer_example();
				break;
			case 2:
				//run the example
				break;	
			default:
				break;
		}
	}
	return 0;
}
