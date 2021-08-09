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
	int a = 5;
	int b = 3;
	int myhex = 0x4b;
	char c1 = 100; 
	char c2 = 'v';
 	cout << "a = 5" << endl;
	cout << "b = 3" << endl;
	cout << "a*b=";	
	cout << multiply(a,b) << endl;
	mychar(c1,c2);
	mystring(mystr,mystr);
	cout << endl;
	cout << myhex << endl;
	cout << mydef << endl;
	cout << "here comes fraction: a/b= ";
	cout << myfrac(a,b)<<endl;
	return 0;	
}
