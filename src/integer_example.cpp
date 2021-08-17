#include "header.h"

int integer_example()
{
	int integer_exampl = -1;
	int user_int1 = 0;
	int user_int2 = 0;
	cout << "Enter an integer to store in variable a" << endl;
	user_int1 = user_int_input(user_int1);
	cout << "Enter an integer to store in variable b" << endl;
	user_int2 = user_int_input(user_int2);
	int a = user_int1;
	int b = user_int2;
	//int myhex = 0x4b;
	cout << "a = ";
	cout << a << endl;
	cout << "b = ";
	cout << b << endl;
	//cout << "0x4b = ";
	//cout << myhex << endl;
	cout << "Multiplying both numbers:" << endl;
	cout << "a*b = ";	
	cout << multiply(a,b) << endl;
	cout << endl;
	cout << "Dividing \"a\" by \"b\". If \"b\" is not a factorial of \"a\", the\n"
		" int data type will round down to full numbers. \n \n"
		"Fractions can be handled by the data type \"floating point number\"\n"
		"or just \"float\" as shortcut." << endl;
	cout << endl;
	cout << "a/b = ";
	cout << a / b << "  <-- This is an integer" << endl;
	cout << "a/b = ";
	cout << myfrac(a,b) << "  <-- This is a floating point number" << endl;
	cout << endl;
	cout << "size of a in bytes = " << sizeof(a) << endl;
	cout << "size of float(a/b) in bytes = " << sizeof(myfrac(a,b)) << endl;
	cout << endl;
	cout << "Memory address of a = " << &a << endl;
	cout << "Memory address of b = " << &b << endl;
	cout << endl;
	/*cout << "You may enter a integer as hexadecimal by using the leading \n"
	       "input \"0x\" followed by a valid hexadecimal \n"
	       "for example, enter \"0x4b\"" << endl;*/
	cout << "Enter \"1\" to try again" << endl;
	cout << "Enter any other number to quit" << endl;
	integer_exampl = user_int_input(integer_exampl);
	if (integer_exampl == 1)
	{
		integer_example();
	}

/*	else if (integer_example == 0)
	{
			

	cin.get();
	//system("pause");*/
	return 0;
}
