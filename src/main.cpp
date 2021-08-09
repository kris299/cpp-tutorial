#include <iostream>
#include <string>
using namespace std;


#define mydef "this is my def"


// function defs
// #################################
float myfrac(float a, float b);
int multiply(int a, int b);
char mychar(char a, char b);
string mystring(string a, string b);
//###################################

//main function######################
int main()
{
	std::cout << "HELLO World" << std::endl;
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
	
}

int multiply(int a, int b)
{
	return a*b;
}


char mychar(char a, char b)
{
	cout << "first char is:";
	cout << a << endl;
	cout << "second = " ;
	cout << b << endl;
	return a+b;
}

string mystring(string a, string b)
{
	cout << a+b;
	return b;
}

float myfrac(float a, float b)
{
	return a/b;
}

