#include "header.h"

void main_menu_2()
{
	int menu2 = -1;
	while (menu2 !=0)
	{
			
		system("clear");	// clears the terminal window
		cout << "Welcome to this c++ Tutrial" << endl;
		cout << endl;
		cout << "Enter:" << endl;
		cout << " <1> to learn about data structures" << endl; 
		cout << " <2> to learn about objects" << endl;
		/*cout << " <3> to learn about Data types in c++" << endl;
		cout << " <4> to learn about conditional statements" << endl;
		cout << " <5> to learn about loops" << endl;
		cout << " <6> to learn about input and output in c++" << endl;
		cout << " <7> to learn about pointer in c++" << endl;
		cout << " <8> to learn about functions in c++" << endl;
		cout << " <9> to learn about arrays in c++" << endl;
		//cout << " <> add your own stuff" << endl;
		cout << endl;*/
		cout << " <10> to look//edit the source code" << endl;
		/*cout << " <11> to invoke \"make cpp-tutorial\" to compile changes!"
			<< endl;
		cout << " <12> restart program" << endl;*/
		cout << " <0> to go back" << endl;
		cout << endl;
		cout << " >> ";
		
		menu2 = user_int_input(menu2);

		
		string switch_array[]={
			"",
		       	"", 
			"",
			"",
			"",
			""};

		switch (menu2)
		{
			case 0:
				break;

			case 1:
				switch_array[0]= "data_structures_example";

				switch_template(1, switch_array, "data structures");
				break;

			case 2:
				switch_array[0]= "classes_example";
				switch_array[1]= "friend_function_example";
				switch_array[2]= "copy_constructors_example";
				switch_array[3]= "this_pointers_example";
				switch_array[4]= "pointers_to_classes_example";
				switch_template(5, switch_array, "objects");
				break;
			

			case 10:
				system("vim main_menu_2.cpp");
		}
	}
}

