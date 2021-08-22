#include <iostream>
using namespace std;



// A function can not take an array directly as argument, but it
// can take a pointer pointing at that array

float array_mean(float * array, int size)
{
	float sum = 0;

	for (int i=0; i < size; ++i)
	{
		sum += array[i];
		//cout << sum << endl;
	}
	return sum/size;
}


int main()
{
	int size = 5;
	float array[size]={.1,2,3,4,5,};
	
	cout << "The array is a = {";
	for (int i = 0; i < 5; i++)
	{
		cout << array[i] << ", ";
	}
	cout << "}"<<endl;
	cout << "Passing this array to a function, that calculates the its"
		" mean value, results in: " << endl;
	//float mean;
	cout <<"mean(a) = " << array_mean(array, size) << endl;



	return 0;
}
