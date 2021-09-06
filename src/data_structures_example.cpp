#include <iostream>
#include <cstring>
using namespace std;

// structures allows user defined data containers
//
// For example a structure, that contains personal data might contain
// first name, last name, age, address, etc.


// A address itself might be defined as a struct
struct address {
	char country[30];
	char city[20];
	char street[50];
	int streetnumber;
	char streetnumber_add[10];
	int plz;
};

struct person {
	char first_name[20];
	char last_name[20];
	int age;
	struct address addr; //using a struct inside a struct
};

// Function to print out content of the defined structure
void print_personal_data(struct person person);

int main()
{
	// declaring the defined structure
	struct person person1;

	// copying data into the structures
	strcpy ( person1.first_name, "Jim");
	strcpy ( person1.last_name, "Jonson");
	person1.age = 42;
	
	strcpy ( person1.addr.country, "Germany");
	strcpy ( person1.addr.city, "Hannover");
	strcpy ( person1.addr.street, "Nicestreet");
	strcpy ( person1.addr.streetnumber_add, "b");
	person1.addr.streetnumber = 10;
	person1.addr.plz = 28312;
	
	//printing out the content
	print_personal_data(person1);

	//pointers and structures
	
	//declaring a pointer to the person struct
	struct person *person_struct_pointer;
	
	//storing the pointer to person1 in it
	person_struct_pointer = &person1;

	//printing out the address
	cout << endl << "pointr to the initiated struct: " 
		<< person_struct_pointer << endl; 

	//To access data by pointer the "->" operator is used
	cout << "Data is accessable by pointer. For example the city: " 
		<< person_struct_pointer->addr.city
		<< endl;


	return 0;
}

void print_personal_data(struct person person)
{
	cout << "First Name: " << person.first_name << endl;
	cout << "Last Name: " << person.last_name << endl;
	cout << "Age: " << person.age << endl;
	cout << "Address: " << endl;
	cout << "Country: " << person.addr.country << endl;
	cout << "City: " << person.addr.city << endl;	
	cout << "Postal Code: " << person.addr.plz << endl;
	cout << "Street: " << person.addr.street << " "
	       << person.addr.streetnumber << " " 
	       << person.addr.streetnumber_add	<< endl;
}
