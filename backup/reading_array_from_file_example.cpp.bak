#include <iostream>
#include <fstream>
#include <algorithm>
#include <sstream>
using namespace std;

int main()
{
	int n, m;
	char s;
	string line;

	//initializing input file stream
	ifstream file_array;

	//feeding the text file to the ifstream
	file_array.open("array_example.txt");

	//fetching the comma separated dimensions of the array
	file_array >> n >> s >> m;
	cout << n << s << " " << m << endl;

	//declaring the array
	float matrix[n][m];
	int ii = 0;
	while(!file_array.eof())
	{
		// reading a line from the ifstream
		getline(file_array, line);
		
		// removing "," from line
		replace(line.begin(), line.end(), ',', ' ');
		float value;

		int kk = 0;

		// initializing the stringstream
		stringstream ss(line);

		//storing floats from the string stream
		while(ss >> value)
		{
			// passing it to the array
			matrix[ii][kk] = value;

			//printing the value
			cout << matrix[ii][kk] << " ";
			++kk;
		}
		cout << endl;
		ii++;
	}
	return 0;
}

