#include <iostream>
#include <climits>

using namespace std;



int user_int_input(int the_int)
{
	while(!(cin >> the_int)){

		cout << "input must be an integer" << endl;
		cin.clear();
		cin.ignore(INT_MAX, '\n');
	}

	cin.clear();
	cin.ignore(INT_MAX, '\n');
	return the_int;
}



