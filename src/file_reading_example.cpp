#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<string> v_str;
	string filedata[5];
	string line;
	// Input files stream (ifstream) -> read mode
	
	ifstream file1;
	int ii = 0;
	// Open the desired file
	file1.open("array_example.txt");
	while(!file1.eof())
	{
	
		getline(file1, line);
		v_str.push_back(line);
		cout << ii <<" " << line << endl;
		cout << ii <<" " << v_str[ii] << endl;
		ii++;
	}

	//cout << *filedata << endl;
	//
	return 0;
}
