#include "header.h"

int pointer() 
{
	int pointer = -1;
	while(pointer != 0)
	{
		system("clear");


		cout << "Here the basics of pointers are explained." << endl;
		cout << endl;
		cout << "Enter:" << endl << endl;
		//cout << "to do" << endl;
		cout << " <1> to display some infos on pointer (to do)" << endl;
		cout << " <2> to show/edit source code of pointer example" << endl;
		cout << " <3> to run the example" << endl;
		cout << " <4> to compile the changes" << endl;
		cout << " <10> to view the source code" << endl;
		cout << " <0> to go back" << endl;
		cout << endl;
		cout << " >> ";

		pointer = user_int_input(pointer);

		switch (pointer)
		{
			case 1: 
				to_do();
				//pointer_infos();
				break;
			case 2:
				system("clear");
				system("vim pointer_example.cpp");
				break;
			case 3:
				system("./pointer_example");
				break;
			case 4:
				system("make pointer_example");
				break;
			case 10: 
				system("clear");
				system("vim pointer.cpp");
				break;
			default:
				break;

		}
	}
	return 0;
}

