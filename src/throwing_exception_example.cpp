#include <iostream>
#include <climits>
using namespace std;


double divide(double x, double y) { 
	
	if(y == 0) 
	{
		// throwing the exeption
		throw "dividing by zero is not defined!";
	}

	return x/y;
}

double user_float_input()
{
	double the_float;
	while(!(cin >> the_float)){

		cout << " >> input must be a valid float" << endl;
		cout << " >> ";
		cin.clear();
		cin.ignore(INT_MAX, '\n');
	}
	cin.clear();
	cin.ignore(INT_MAX,'\n');
	return the_float;
}

int main() {

	double d1;
	double d2;
	double result;

	cout << "Enter float as nominator" << endl;
	d1 = user_float_input();
	cout << "Enter float as denominator. Enter 0 to throw the exception" << endl;
	d2 = user_float_input();

	try {
		result = divide(d1, d2);

		cout << "nominator / denominator = " << result << endl;
	} catch(const char* message) { 
		cerr << message << endl;
	}

	return 0;
}



