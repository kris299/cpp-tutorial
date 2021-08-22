#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// its possible to declare and inizialize arbitrary dimensional arrays
	// array[a][b][c][d][e][f] = {{{{{{},{},},{{}....
	// where [a] denotes the "outer" and [f] denotes the most "inner" dimension
	//
	// 3D-Exemple:
	
	int array[4][3][2] ={
		{{1,2}, {3,4}, {5,6}},
		{{7,8}, {9,10}, {11,12}},
		{{13,14}, {15,16}, {17,18}},
		{{19,20}, {21,22}, {23,24}}
	};

	for (int i=0;i<4; ++i)
	{
		for (int j=0; j<3; ++j)
		{
			cout << "{";
			for (int l=0; l<2; ++l)
			{
				cout << setw(3) << array[i][j][l] << " " ;
			}
			cout << "} ";
		}
		cout << endl;
	}
return 0;
}
