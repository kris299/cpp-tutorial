#include <iostream>
#include <vector>
#include <string>
#include <climits>

using namespace std;

#include "functions.h"

int datatypes()
{
	int datatypes = -1;
	while (datatypes != 0){

		//system("clear");
		cout << "Here the basics about data types are collected." << endl;
		cout << endl;
		cout << "The basic data types in c++ are integer, char, "
			"float, boolean" << endl;
		cout << endl;
		cout << "Enter " << endl;
		cout << endl;
		cout << " <1> to learn about integer" << endl;
		cout << " <2> to learn about char" << endl;
		cout << " <3> to learn about float" << endl;
		cout << " <4> to learn about boolean" << endl;
		cout << endl;
		cout << "More advanced data types are defined in the standard"
		       	"\nheaders"
			"like <string> for the string data type or <vector> for \n"
			"the vector data type" << endl;
		cout << endl;
		cout << "Enter " << endl;
		cout << endl;
		cout << " <5> to learn about strings" << endl;
		cout << " <6> to learn about vectors" << endl;
		cout << endl;
		cout << " <0> to go back" << endl;
		cout << " >> ";

		while(!(cin >> datatypes)) {
			
			cout << " >> input must a integer" << endl;
			cout << " >> ";
			cin.clear();
			cin.ignore(INT_MAX, '\n');
		}

		cin.clear();
		cin.ignore(INT_MAX, '\n');

		switch(datatypes)
		{
			case 0: 
				break;
			case 1:
				integers();
				break;
			case 2:
				chars();
				break;
			case 3:
				to_do();
				break;
			case 4:
				to_do();
				break;
			case 5:
				to_do();
				break;
			case 6:
				example_template("vectors_example");
				break;
			case 10:
				system("vim datatypes.cpp");
				break;
			default:
				break;
		}
	}
	return 0;
}
	

