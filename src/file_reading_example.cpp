#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	//declaring a vector of strings, where the lines of a text can be stored
	vector<string> v_str;
	//declaring a string, where the ifstream can be stored line-wise.
	string line;

	// Input files stream (ifstream) -> read mode
	// creating the ifstream object with name file1
	ifstream file1;

	// Open the desired file
	file1.open("array_example.txt");

	//reading from istream until the end of the opened file 
	int ii = 0;
	while(!file1.eof())
	{
		//storing the ifstream line by line in a string
		getline(file1, line);

		//append this string to the vector of strings
		v_str.push_back(line);

		//printing out the stored string from the vector
		cout << "Line-number: " << ii << ":  File content : " 
			<< v_str[ii] << endl;
		ii++;
	}

	return 0;
}
