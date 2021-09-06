#include <iostream>

using namespace std;


//the so called "this" pointer is a implicit parameter to all member functions.

class MyObject
{
	public:
		int test_int1;
		int test_int2;

		void set_test(int t1,int t2)
		{ 
			test_int1 = t1;
			test_int2 = t2;
		}

		void print_this()
		{
			cout << "this points at: " << this << endl;
			cout << "test_int1 is located at: " << &this->test_int1 << endl;
			cout << "test_int2 is located at: " << &this->test_int2 << endl;
			cout << "Value of test_int1: " << this->test_int1 << endl;
			cout << "Value of test_int2: " << this->test_int2 << endl;
		}
};


int main()
{
	MyObject myobj;

	myobj.set_test(10, 12);
	myobj.print_this();
	return 0;
}

