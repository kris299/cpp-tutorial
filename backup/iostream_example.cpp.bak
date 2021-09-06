// The basic output and input streams are provided by the standart library <iostream>

#include <iostream>
#include <climits>
using namespace std;

int user_int_input(int the_int);

int main()
{
	string str1;
	cout << "The \"cout\" object prints out the standart output stream." << endl;
	cout << "For example: " << endl;
	cout << "cout << \"Hello World!\" << endl;" << endl;
	cout << "prints out the following: " << endl;
	cout << "Hello World!" << endl;

	cout << "\"cin\" asks the user for an input, that can be stored in a suitable"
		"variable. It is good practice to capture the input in a conditional"
	       	"statement, to prevent input missmatch. Furthermore its good practice"
		"to clear the input stream, to avoid unwanted behavior" << endl;
	
	cout << endl << "Example: Enter a Number: " << endl;
	int int1 = -1;
	int1 = user_int_input(int1);
	cout << endl << "You entered: " << int1 << endl;
	cout << endl << "To read entire lines from the inputstream, the <iostream>"
	       " library provides the getline(inputstream, my_string) function"
	       << endl << "Lets try, enter a line of your choice:" << endl << endl;
	getline(cin, str1);

	cout << endl << "You entered: " << endl << str1 << endl;

	return 0;
}

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

