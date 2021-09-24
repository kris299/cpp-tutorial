#include <iostream>
#include <fstream>

using namespace std;


int main() {


	//declare char array to store userinput
	char myline[100];

	// creating ofstream object;
	ofstream myfile;
	
	//opening a file. By default output mode is choosen and existing content 
	//of that file is overwritten. Adding ios::app will utilize append mode
	//if the file by that name already exists
	myfile.open("textfile_writing_example.txt", ios::out | ios::app );

	cout << "What do you want to write to the file?" << endl;

	//storing user input in myline
	cin.getline(myline, 100);

	//adding content of myline to myfile
	myfile << myline << endl;
	
	cout << "hit enter to continue" << endl;
	//Always close files, after task hast finished
	myfile.close();
	system("less textfile_writing_example.txt");
	return 0;
}
