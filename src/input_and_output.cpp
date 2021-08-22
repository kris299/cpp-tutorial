#include "header.h"

int input_and_output()
{
	int input_and_output = -1;

	while(input_and_output!=0)
	{
		system("clear");
		cout << "This is a collection of input and "
			"output functionality in c++."
			<<endl;

		cout << endl;
		cout << "Enter" << endl;
		cout << endl;
		cout << " <1> to learn about <iostream>" << endl;
		cout << " <2> to learn about <iomanip>" << endl;
		cout << " <3> to learn about reading textfiles" << endl;
		cout << " <4> to learn about writing to textfiles" << endl;
		cout << endl;
		cout << " <10> to view edit code of this side" << endl;
		cout << " <0> to go back" << endl;
		cout << endl;
		cout << " >> ";
		
		input_and_output = user_int_input(input_and_output);
		
		switch (input_and_output)
		{
			case 1:
				system("clear");
				example_template("iostream_example");
				/*cout << "Not yet implemented ..." << endl;
				cout << endl;
				cout << "Hit Enter to continue" << endl;
				cin.get();
				//terminal_output();*/
				break;
			case 2:
				//terminal_input();
				system("clear");
				example_template("iomanip_example");
				/*cout << "Not yet implemented ..." << endl;
				cout << endl;
				cout << "Hit Enter to continue" << endl;
				cin.get();*/
				break;
			case 3:
				//reading_textfiles();
				system("clear");
				cout << "Not yet implemented ..." << endl;
				cout << endl;
				cout << "Hit Enter to continue" << endl;
				cin.get();
				break;
			case 4:
				//writing_to_textfiles();
				system("clear");
				cout << "Not yet implemented ..." << endl;
				cout << endl;
				cout << "Hit Enter to continue" << endl;
				cin.get();
				break;
			case 10:
				system("vim input_and_output.cpp");
			default:
				break;
		}
	}
	return 0;
}
