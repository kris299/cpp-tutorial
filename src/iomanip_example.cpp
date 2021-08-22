#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << "<iomanip> allows to format strings." << endl;
	cout << endl << "For example the multiplication table 20x20 with space"
		" seperated values looks like this: " << endl << endl;

	for (int i =1; i<=20; ++i)
	{
		for (int j = 1;j<=20; ++j)
		{
			cout << j * i << " ";
		}
		cout << endl;
	}
	
	cout << endl << "not a desirable format, as you can see ..." << endl << endl;
	cout << "Hit Enter to continue ...";
	cin.get();
	cout << "passing \"setw(4)\" to cout defines a minimal character count, " 
		"filled with spaces if neccessary. It results in a cleaner look in"
		" in case of the multiplication table." << endl << endl;
	for (int i =1; i<=20; ++i)
	{
		for (int j = 1;j<=20; ++j)
		{
			cout << setw(4) << j * i;
		}
		cout << endl;
	}
	return 0;
}
