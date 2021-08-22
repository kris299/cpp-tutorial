#include <iostream>
#include <climits>
#include <vector>

using namespace std;



int user_int_input(int the_int)
{
	while(!(cin >> the_int)){

		cout << " >> input must be an integer" << endl;
		cout << " >> ";
		cin.clear();
		cin.ignore(INT_MAX, '\n');
	}
	cin.clear();
	cin.ignore(INT_MAX, '\n');
	return the_int;
}

string user_str_input(string the_str)
{
	while(!(cin >> the_str)){
		cout << " >> input must be a string" << endl;
		cout << " >> ";
		cin.clear();
		cin.ignore(INT_MAX, '\n');
	}
	cin.clear();
	cin.ignore(INT_MAX, '\n');
	return the_str;
}

