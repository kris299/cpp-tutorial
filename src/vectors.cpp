#include "header.h"

int vectors()
{
	int vectors = -1;
	string vectors_str = "vectors";
	string vectors_example = "vectors_example";

	while(vectors != 0)
	{
		//vector_str = "vectors";
		menu_template(vectors_str);
		//cin.get();
		vectors = user_int_input(vectors);
		switch_template(vectors, vectors_str);
	}
	return 0;
}

