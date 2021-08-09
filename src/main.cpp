#include <iostream>
#include <string>
using namespace std;


#define mydef "this is my def"

#include "functions.h"
 
//main function

int main()
{
	helloworld();
	string mystr = "Hello";
	integers();
	char c1 = 100; 
	char c2 = 'v';
	mychar(c1,c2);
	mystringfunc();
	mystring(mystr,mystr);
	cout << endl;
	cout << mydef << endl;
	cout << "here comes fraction: a/b= ";
	return 0;	
}
