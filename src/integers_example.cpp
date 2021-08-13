#include "header.h"

int integer_example()
{
	int a = 5;
	int b = 3;
	int myhex = 0x4b;
	cout << "a = ";
	cout << a << endl;
	cout << "b = ";
	cout << b << endl;
	cout << "0x4b =";
	cout << myhex << endl;
	cout << "a*b = ";	
	cout << multiply(a,b) << endl;
	cout << "a/b = ";
	cout << myfrac(a,b) << endl;
	cout << endl;
	cout << "Hit \"Enter\" to procede" << endl;
	cin.get();
	//system("pause");
	return 0;
}
