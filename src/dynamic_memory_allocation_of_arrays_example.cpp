#include <iostream>
using namespace std;


int main() {

	double* p_array = NULL;
	p_array = new double[20];

	for (int i=0; i<20; ++i) {

		p_array[i]=i;
	}

	for (int i=0; i<20; ++i) {

		cout << *p_array+i << endl;
	}

	delete p_array;

	return 0;
}


