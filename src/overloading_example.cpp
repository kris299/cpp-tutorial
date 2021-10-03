#include <iostream>
using namespace std;


//Its possible to give functions or operator the same name (overloading)
//The overloaded functions need to have different arguments, so the compiler
//can identify which function should be called.
class Printing
{
	public:
		// first declaration of a function named "print"
		void print(int i)
		{
			cout << "print int: " << i << endl;
		}

		// second declaration of a function named "print"
		void print(double i)
		{
			cout << "print float: " << i << endl;
		}
		
		// third declatation of a function named "print"
		void print(char const *i)
		{
			cout << "print character: " << i << endl;
		}
};

int main()
{
	Printing pt;
	// calling print with int argument
	pt.print(10);

	// calling print with float argument
	pt.print(10.1);

	// calling print with char argument
	pt.print ("10.2");
	return 0;
}

