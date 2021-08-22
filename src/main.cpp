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

		system("clear");	// clears the terminal window
		cout << "Welcome to this c++ Tutrial" << endl;
		cout << endl;
		cout << "Enter:" << endl;
		cout << " <1> to learn about the \"Hello World\" programm!" << endl; 
		cout << " <2> to learn about compiling c++ code" << endl;
		cout << " <3> to learn about Data types in c++" << endl;
		cout << " <4> to learn about conditional statements" << endl;
		cout << " <5> to learn about loops" << endl;
		cout << " <6> to learn about input and output in c++" << endl;
		cout << " <7> to learn about pointer in c++" << endl;
		cout << " <8> to learn about functions in c++" << endl;
		cout << " <9> to learn about arrays in c++" << endl;
		//cout << " <> add your own stuff" << endl;
		cout << endl;
		cout << " <10> to look//edit the source code" << endl;
		cout << " <11> to invoke \"make cpp-tutorial\" to compile changes!"
		       	<< endl;
		cout << " <12> restart program" << endl;
 		cout << " <0> to quit program" << endl;
		cout << endl;
		cout << " >> ";

		while (!(cin >> main)){
		
			cout << "input must a integer" << endl;
			cin.clear();
			cin.ignore(INT_MAX, '\n');
		}

		cin.clear();
		cin.ignore(INT_MAX, '\n');
		
		string switch_array[]={
			"",
		       	"", 
			"",
			"",
			"",
			""};

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
				switch_array[1]= "array_argument_example";
				switch_array[2]= "array_returning_example";
					/*"while_loop_example", 
					"for_loop_example",
					"nested_loop_example",
					"break_continue_example"};*/
				switch_template(3, switch_array, "functions");
				break;

			case 9:
				switch_array[0]= "1D-array_example";
				switch_template(1, switch_array, "arrays");
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
