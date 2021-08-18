#include "header.h"

int menu_template(string menu)
{
	system("clear");
	cout << "Enter:" << endl <<endl;

	cout << " <1> to display some infos on " << menu << endl;
	cout << " <2> to show/edit source code of the "<< menu <<"-example" << endl;
	cout << " <3> to run the example" << endl;
	cout << " <10> to view the source code" << endl;
	cout << " <0> to go back" << endl;
	cout << endl;
	cout << " >> ";

	return 0;
}
