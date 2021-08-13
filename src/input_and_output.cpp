#include "header.h"

int input_and_output()
{
	int input_and_output = -1;

	while(input_and_output!=0)
	{
		system("clear");
		cout << "This is a collection of input and output functionality in c++."
			<<endl;

		cout << endl;
		cout << "Enter" << endl;
		cout << endl;
		cout << " <1> to learn about terminal output"<< endl;
		cout << " <2> to learn about terminal input" << endl;
		cout << " <3> to learn about reading textfiles" << endl;
		cout << " <4> to learn about writing to textfiles" << endl;
		cout << endl;
		cout << " <0> to go back" << endl;
		
		input_and_output = user_int_input(input_and_output);
		
		switch (input_and_output)
		{
			case 1:
				cout << "option 1";
				//terminal_output();
				break;
			case 2:
				//terminal_input();
				break;
			case 3:
				//reading_textfiles();
				break;
			case 4:
				//writing_to_textfiles();
				break;
			default:
				break;
		}
	}
	return 0;
}
