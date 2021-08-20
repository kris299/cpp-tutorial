#include "header.h"

int main()
{
	system("clear");
	int a = 13;
	int b = 7;
	int array1[5] = {1,2,3,4,5};

	// pointer to integer initialized as nullpointer; points to "nothing"
	int *ptr1 = NULL;
	int *ptr2 = NULL;


	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "with \"&a\" the address in memory of \"a\" can be accessed" << endl;
	cout << "with \"&b\" the address in memory of \"b\" can be accessed" << endl;
	cout << "\"a\" is located at address = " << &a << endl;
	cout << "\"b\" is located at address = " << &b << endl;
	cout << endl;
	cout << "with: \"int *ptr1 = NULL\", a (null-)pointer can be initialized"
	       <<endl;	

	cout << "assigning address of \"a\" to ptr1 with:" << endl;
	cout << "ptr1 = &a" << endl;
	ptr1 = &a;
	ptr1 = ptr1;
	cout << endl;
	cout << "ptr1 = " << ptr1 << endl;
	cout << endl;
	cout << "with *ptr1, the variable stored at address ptr1 points to \n"
		"can be accessed:" << endl;
	cout << endl;
	cout << "*ptr1 = " << *(ptr1) << endl;
	cout << endl;
	cout << "Hit enter to continue ... " << endl;
	cin.get();
	cout << endl;
	cout << "Its possible to perform addition on pointers" << endl;
	cout << "adding 1 to ptr1 results in:" << endl;
	ptr1 = ptr1 +1;
	cout << "ptr1 = " << ptr1 << endl;
	cout << "Adding 1 to the pointer increases its hex value by 4. \n"
		"That means 4 bytes have been added, which is the size of the \n"
	        "associated int data type." << endl;
	cout << endl;
	cout << "Calling what is stored at that address gives:" << endl;
	cout << "*ptr1 = " << *ptr1 << endl;
	cout << endl;
	cout << "pointing at some random adress in memory is usually not reasonable.\n"			"It could have uses, to check what kind of data might be stored in\n"
		"memory as part of a reverse engineering process."
		<< endl;
	cout << "Hit enter to continue ... " << endl;
	cin.get();
	cout << endl;
	cout << "Address of array1, which is initialized as \n"
	       	"\"int array1[5] = {1,2,3,4,5}\", is " << array1 << endl;
	cout << endl;  
	cout << "storing it in ptr2 ..." << endl;
	ptr2 = array1;
	cout << "ptr2 = " << ptr2 << endl;
	cout << endl;
	cout << "calling *ptr2 returns: " << *ptr2 << 
		"  ... the first value of array1" << endl;
	cout << endl;
	cout << "by incrementing successively ptr2 = ptr2 +1, each element of\n"
	       " array1 can be accessed. It follows a loop where ptr2 is incremented\n"
	       "and its address and pointed-to-value is printed." << endl;
	cout << endl;

	for(int i=0; i<10; i++)
	{
		cout <<"loop cycle " << i << " ,address of ptr2: " << ptr2 <<
			" , value at ptr2: " << *ptr2 << endl;
		ptr2++;
	}
	cout << endl;
	cout << "Hit Enter to continue!" << endl;
	cin.get();
	return 0;
}
