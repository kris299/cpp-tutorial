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
		cout << " <2> to learn about Data types in c++" << endl;
		cout << " <3> to learn about conditional statements" << endl;
		cout << " <4> to learn about loops" << endl;
		cout << " <5> to learn about input and output in c++" << endl;
		//cout << " <6> add your own stuff" << endl;
		cout << endl;
		cout << " <9> to look//edit the source code" << endl;
		cout << " <10> invoke make to complile changes!" << endl;
		cout << " <11> restart program" << endl;
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

		switch (main){

			case 1:
				hello_world_tutorial();
				break;

			case 2:
				datatypes();
				break;
			case 3:
				conditional_statements();
				break;
			case 4:
				loops();
				break;
			case 5: 
				input_and_output();
				break;

			case 6:
				// add your own code here
				break;

			case 9:
				system("vim main.cpp");
				break;

			case 10:
				system("make cpp-tutorial");
				cout << endl;
				cout << "Done. Press Enter to continue" << endl;
				cin.get();
				break;

			case 11:
				system("./cpp-tutorial");
				main = 0;
				break;

			default:				
				cout << "Not available!" << endl;
				cout << "Press Enter key to continue" << endl;
				cin.get();
				break;
		}

		/*if (main == 1){
			
			helloworld();
		}
		if (main == 2){

			datatypes();
		}
		
		cin.clear();
		string mystr = "Hello";
		integers();
		char c1 = 100; 
		char c2 = 'v';
		mychar(c1,c2);
		mystringfunc();
		mystring(mystr,mystr);
		cout << endl;
		cout << mydef << endl;
		cout << "here comes fraction: a/b= " << endl;
		*/
	}
	system("clear");
	return 0;	
}
