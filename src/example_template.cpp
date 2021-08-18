#include "header.h"

int example_template(string example_name)
{

	int example_template = -1;

	while (example_template)
	{
		system("clear");
		cout << "Enter:" << endl;
		cout << endl;
		cout << " <1> to edit/view code of the " << example_name << endl;
		cout << " <2> to run the example" << endl;
		cout << " <3> to compile changes to that example" << endl;
		cout << " <4> to backup the modified example" << endl;
		cout << " <5> to restore the example" << endl;
		cout << " <6> to restore backuped modified version" << endl;
		cout << " <10> to look at the source code of this site" << endl;	
		cout << " <0> to go back" << endl;
		cout << endl;
		cout << " >> ";

		example_template = user_int_input(example_template);

		switch(example_template)
		{
			case 1:
				system("clear");
				system(("vim " + example_name + ".cpp").c_str());
				// read and print helloworld.cpp
				// cin.get();
				break;

			case 2:
				system("clear");
			//	helloworld();
				system(("./"+example_name).c_str());
				cin.get();
				break;

			case 3:
				system("clear");
				/*system(("g++ -v "+example_name+".cpp -o "
				   +example_name).c_str());*/
				system(("make "+example_name).c_str());
				cin.get();
				break;

			case 4:
				system("clear");
				system(("cp -v "+example_name+".cpp ../user_modified/"
						+example_name+"_mod.cpp").c_str());
				cin.get();
				break;

			case 5:
				system("clear");
				system(("cp -v ../backup/"+example_name+".cpp.bak "
					       	+example_name+".cpp").c_str());
				cin.get();
				break;
				
			case 6: 
				system("clear");
				system(("cp -v ../modified/"+example_name+"_mod.cpp "
					        +example_name+".cpp").c_str());
				cin.get();
				break;

			case 10:
				system("clear");
				system("vim example_template.cpp");
				break;

			default:
				break;
		}
	}
	return 0;
}
		
			



