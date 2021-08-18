#include "header.h"

int switch_template(int temp, string switch_str)
{
	switch(temp)
	{
		case 0:
			break;
		case 1:
			break;
		case 2:
			system(("vim "+switch_str+".cpp").c_str());
		case 3:
			//system("vim");		
		case 10: 
			system(("vim "+switch_str+".cpp").c_str());
			break;
	}
	return 0;
}


