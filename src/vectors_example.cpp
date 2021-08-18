#include <iostream>
#include <vector>
using namespace std;

#include "functions.h"

int main()
{
	string str1 = "";
	string str2 = "";
	cout << "Hello" << endl;
	cout << "The string data type allows the user to define arbitrary sign "
		"strings" << endl;
	cout << endl;
	cout << "As an example, please enter two strings of your choice" << endl;
	cout << "The first: ";
	str1 = user_str_input(str1);
	cout << endl;
	cout << "The second: ";
	str2 = user_str_input(str2);
	cout << endl;


	cout << "You entered for the first string: " << str1 << endl;
	cout << "You entered for the second string: " << str2 << endl;
	cout << endl;
	cout << "Adding both together resuts in: "<< str1 + str2 << endl;
	return 0;

}
