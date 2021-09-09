#include <iostream>
using namespace std;


// defining a class
class Length
{
	public:
		float length;

		//Simple constructor
		Length (float len)
		{
			cout << "I construct" << endl;
			length = len;
		}

		//copy constructor
		//with the copy constructor its possible to create deep copys of a object.
		Length (const Length &len)
		{

			cout << "I copy" << endl;
			length = len.length;
		}


		//destructor
		~Length()
		{
			cout << "I destroy" << endl;
		}
};



int main()
{

	Length mylen(5.3);
	Length mycopy = mylen;
	cout << "Length is: " << mylen.length << endl;
	cout << "The copy is: " << mycopy.length << endl;
	return 0;
}	
