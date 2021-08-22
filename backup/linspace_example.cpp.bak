#include <iostream>
using namespace std;

float function(float x)
{
	return (x-1)*(x-1)- 1;
}

float *executor(float *x_array,float *y_array, int size)
{
	for(int i;i<size;++i)
	{
		y_array[i]=function(x_array[i]);
	}
	return y_array;
}

float *linspace(float start,float end,float *array,int size,bool verbose=false)
{
	//static int array[size];
	
	for(int i; i < size; ++i)
	{
		array[i]= start + (end-start)/(size-1) * i;
		if (verbose == true)
		{
			cout << array[i] << endl;
		}

	}

	return array;
}


int main()
{
	float * p_x_array,*p_y_array;
	int size = 1001;
	float start = -2;
	float end = 2;
	float x_array[size];
	float y_array[size];
	p_x_array = linspace(start,end,x_array,size,true);
	p_y_array = executor(x_array,y_array,size);
	for(int i=0;i<1001;++i)
		{
			cout <<  y_array[i] << endl; 
		}	
	return 0;
}
