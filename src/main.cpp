#include <iostream>
#include <string>
#include <climits>

using namespace std;


#define mydef "this is my def"

#include "functions.h"
 
//main function

int main()
{
	int main;
	while (main != 0){

		print_main_menu();

		while (!(cin >> main)){
		
			cout << "input must a integer" << endl;
			cin.clear();
			cin.ignore(INT_MAX, '\n');
		}

		cin.clear();
		cin.ignore(INT_MAX, '\n');
		
		string switch_array[]={
			"","",
		       	"","", 
			"","",
			"","",
			"","",
			"",""};

		switch (main){

			case 0:
				break;

			case 1:
				hello_world_tutorial();
				break;

			case 2:
				compiling();
				break;
			case 3:
				datatypes();
				break;
			case 4:
				conditional_statements();
				break;
			case 5:
				loops();
				break;
			case 6: 
				input_and_output();
				break;

			case 7:
				pointer();
				break;

			case 8:


				//menu_template("functions");
				
				switch_array[0]= "function_basics_example";
				switch_array[1]= "array_as_argument_example";
				switch_array[2]= "array_returning_example";
					/*"while_loop_example", 
					"for_loop_example",
					"nested_loop_example",
					"break_continue_example"};*/
				switch_template(3, switch_array, "functions");
				break;

			case 9:
				switch_array[0]= "1D-array_example";
				switch_array[1]= "2D-array_example";
				switch_array[2]= "3D-array_example";
				switch_array[3]= "reading_array_from_file_example";
				switch_template(4, switch_array, "arrays");
				break;

			case 20:
			/*	switch_array[0]= "data_struct_example";
				//main_menu_2();
				switch_array[1]="class_example";
				switch_array[2]="";
				switch_array[3]="";
				switch_array[4]="";
				switch_template(2, switch_array, "advanced c++");*/

				main_menu_2();
				break;

			

			//case x:

				// add your own code here
				//break;

			case 10:
				system("vim main.cpp");
				break;

			case 11:
				system("make cpp-tutorial");
				cout << endl;
				cout << "Done. Press Enter to continue" << endl;
				cin.get();
				break;

			case 12:
				system("./cpp-tutorial");
				main = 0;
				break;

			default:				
				cout << "Not available!" << endl;
				cout << "Press Enter key to continue" << endl;
				cin.get();
				break;
		}

	}
	system("clear");
	return 0;	
}
