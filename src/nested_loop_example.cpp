#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << "Nested loops may be used to calculate multidimensional relationships"			<< endl;
	cout << endl;
	cout << "In this example its used to print out a simple multiplication table"
		<< endl;
	cout << endl;

	for(int ii = 1; ii < 11; ++ii)
	{
		for (int jj = 1; jj < 11; ++jj)
		{
			cout << setw(3) << ii*jj << " ";
			// setw(3) is part of <iomanip> and sets minimum output length
		}

		cout << endl;

	}

	return 0;
}
