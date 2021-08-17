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
		cout << " <1> type of integers" << endl;
		cout << " <2> to run the example" << endl;
		cout << " <3> to show the code of an example using intergers" << endl;
		cout << " <10> to read/edit source code" << endl;
		cout << endl;
		cout << " <0> to go back" << endl;
		cout << endl;

		integers = user_int_input(integers);

		switch(integers)
		{
			case 0:
				integer_infos();
				break;

			case 1:
				integer_infos();
				break;

			case 2:
				system("clear");
				integer_example();
				break;
			case 3:
				system("vim integer_example.cpp");
				break;	


			case 10:
				system("vim integers.cpp");
				break;

			default:
				cout << "Not available" << endl;
				break;
		}
	}
	return 0;
}
