#include "header.h"

void hello_world_tutorial()
{
	int hello_world_tutorial = -1;

	while (hello_world_tutorial != 0) 
	{

		system("clear");

		cout << "This is the \"Hello World!\" Tutorial!" << endl;
		cout << endl;
		cout << "Enter:" << endl;
		cout << " <1> to show and modify the code"
		        " of the Hello World program" << endl;
		cout << " <2> to run the \"Hello World!\" programm" << endl;
		cout << " <3> compile your changes" << endl;
		cout << " <4> backup user modified version" << endl;
		cout << " <5> restore Hello world" << endl;
		cout << " <6> restore modified version" << endl;
		cout << endl;
		cout << " <9> to look at the source code of this very part" << endl;
		cout << " <0> to go back" << endl;
		cout << endl;
		cout << " >> ";
		
		hello_world_tutorial = user_int_input(hello_world_tutorial);
		
		switch(hello_world_tutorial)
		{
			case 1:
				system("clear");
				system("vim hello_world.cpp");
				// read and print helloworld.cpp
				// cin.get();
				break;

			case 2:
				system("clear");
			//	helloworld();
				system("./hello-world");
				cin.get();
				break;

			case 3:
				system("clear");
				system("g++ -v hello_world.cpp -o hello-world");
				cin.get();
				break;


			case 4:
				system("clear");
				system("cp -v hello_world.cpp ../user_modified/"
						"hello_world_mod.cpp");
				cin.get();
				break;

			case 5:
				system("clear");
				system("cp -v ../backup/hello_world.cpp.bak "
					       	"hello_world.cpp");
				cin.get();
				break;
				
			case 6: 
				system("clear");
				system("cp -v ../modified/hello_world_mod.cpp "
					       	"hello_world.cpp");
				cin.get();
				break;

			case 9:
				system("clear");
				system("vim hello_world_tutorial.cpp");
				break;
			default:
				break;
		}
	}
}
			

