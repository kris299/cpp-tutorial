#include <algorithm>  // needed for replace
#include "header.h"

int switch_template(int temp, string *switch_array, string category)
{
	int switcher = -1;
	string suffix = "_example";
	string str1 ="";
	while (switcher != 0)
	{

		system("clear");
		cout << "Here basics about " << category << " are presented" << endl;
		cout << endl;
		cout << "Enter:" << endl << endl;

		for (int ii = 1; ii < temp+1; ++ii)
		{
			str1 = switch_array[ii-1].substr(0,
				       	switch_array[ii-1].length() -
					suffix.length());
			replace( str1.begin(), str1.end(), '_', ' ');
			cout << " <" << ii <<"> to learn about " 
			<< str1 << endl;
		}
		cout << " <10> to view at source of this site" << endl;
		cout << " <0> to go back" << endl;
		cout << " >> ";

		switcher = user_int_input(switcher);

		switch(switcher)
		{
			case 0:
				break;
			case 1:
				if(1 < temp+1)
					{
						example_template(switch_array[0]);
					}
				break;
			case 2:
				if(2 < temp+1)
					{
						example_template(switch_array[1]);
					}
				break;
			case 3:
				
				if(3 < temp+1)
					{
						example_template(switch_array[2]);
					}
				//system("vim");		
				break;
			
			case 4: 
				if(4 < temp+1)
					{
						example_template(switch_array[3]);
					}
				//system(("vim "+switch_array[4]+".cpp").c_str());
				break;
			case 5: 
				if(5 < temp+1)
					{
						example_template(switch_array[4]);
					}
				//system(("vim "+switch_array[4]+".cpp").c_str());
				break;
			case 6: 
				if(6 < temp+1)
					{
						example_template(switch_array[5]);
					}
				//system(("vim "+switch_array[4]+".cpp").c_str());
				break;
			case 7: 
				if(7 < temp+1)
					{
						example_template(switch_array[6]);
					}
				//system(("vim "+switch_array[4]+".cpp").c_str());
				break;
			case 8: 
				if(8 < temp+1)
					{
						example_template(switch_array[7]);
					}
				//system(("vim "+switch_array[4]+".cpp").c_str());
				break;
			case 9: 
				if(9 < temp+1)
					{
						example_template(switch_array[8]);
					}
				//system(("vim "+switch_array[4]+".cpp").c_str());
				break;
			case 10: 
				/*if(10 < temp)
					{
						example_template(switch_array[2]);
					}*/
				system("vim switch_template.cpp");
				break;
			default:
				break;
		}
	}
	/*cout << temp << endl; 
	cout << switch_array << endl; 
	cin.get();*/
	return 0;
}


