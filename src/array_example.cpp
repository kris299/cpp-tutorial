#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

int main()
{
	string array1[5] = {"Hello", "Whats", "up", "mate", "?"};
	
	
	cout <<  "&array1 = " << &array1 << "  " << typeid(&array1).name() << endl;
	cout <<  "&array1[5] = " << &array1[5] <<
	       	"  " << typeid(&array1[5]).name() << endl;
	cout <<  "&array1[4]+1 = " << &array1[4]+1 << 
		"  " << typeid(&array1[4]+1).name() << endl;
	cout <<  "array1+5 = " << array1+5 << "  " << typeid(array1+5).name() << endl;
	cout <<" array1 = " << array1  << "  "<< typeid(array1).name() <<endl;
	cout <<" array1[0] = " << array1[0]  << "  "<< typeid(array1[0]).name() <<endl;
	cout <<" &array1[0] = " << &array1[0]  << "  "<< typeid(&array1[0]).name() <<endl;
	cout << " &array1+1 = " << &array1+1  << "  "<< typeid(&array1+1).name() <<endl;
	cout << " array1 +1 = "<< array1 +1  << "  "<< typeid(array1+1).name() <<endl;
	cout << "*(&array1+1) = "<< *(&array1+1)  << "  "<< typeid(*(&array1+1)).name() <<endl;
	cout << "*(&array1+1) -array1 = " << *(&array1+1) -array1  << "  "
		<< typeid(*(&array1+1) -array1).name() <<endl;

	cout << "(&array1+1) -&array1 = " << (&array1+1) -&array1  << "  "
		<< typeid((&array1+1) -&array1).name() <<endl;
	cout << "*(&array1+1) -*&array1 = " << *(&array1+1) -*&array1  << "  "
		<< typeid((&array1+1) -&array1).name() <<endl;
	cout << "&array1[5] -&array1[0] = " << &array1[5] -&array1[0]  << "  "
		<< typeid((&array1+1) -&array1).name() <<endl;
}


