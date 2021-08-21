#include <iostream>
using namespace std;

#include "functions.h"
int main()
{
	int ii = -1;
	int jj = -1;
	string str1 = "";

	cout << "I ask you for two numbers. "
		"The first decides how many cycles the loop will run."
		"The second number gives you the option to break or continue the "
		"loop at that cycle." << endl;

	cout << endl << "First:" << endl;
	cout << " >> ";
	ii = user_int_input(ii);
	
	cout << endl << "Second:" << endl;
	cout << " >> ";
	jj = user_int_input(jj);

	cout << "number1 is: " << ii << endl;
	cout << "number2 is: " << jj << endl;

	for(int kk = 0 ; kk < ii; kk++)
	{

		if(kk == jj)
		{
			//cout << "The time has come ..." << endl;
			cout << "Type \"break\" to break the loop, or "
				"\"continue\" to continue the loop!" << endl;
			cout << " >> ";
					
			str1 = user_str_input(str1);
			if(str1=="break")
			{
				break;
			}
			else if(str1 == "continue")
			{
				continue;
			}
			else
			{
				cout << "Wrong input" << endl;
				kk--;
				continue;
			}

		}
		cout << kk << endl;
	}
	cout << endl;
	cout << "Hit Enter to continue ...";
	return 0;	
	
}

