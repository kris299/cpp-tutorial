#include <iostream>
using namespace std;

#define N 4


class Sphere {
	public:

		// parameterised constructor. 
		Sphere(double r) {
			cout << "Constructor has been called" << endl;

			this->radius = r; 
		}

		~Sphere() {
			cout << "Destructor of Sphere called" << endl;
		}

		double radius;

};


int main() {

	// pointer-to-pointer to allocated array-of-pointer to objects
	Sphere** mysphere_array = new Sphere*[N];

	// looping over array of objects. calling parameterised contructor.
	for (int i=0; i<N; ++i){

		mysphere_array[i] =new Sphere(i+1);
	}

	// looping over array of objects. printing value of radius
	for (int i=0; i<N; ++i){
		cout << "radius of sphere is: " << mysphere_array[i]->radius << endl;
		
		//delete objects
		delete mysphere_array[i];

	}
	
	// delete the arrayofpointers
	delete [] mysphere_array;
	return 0;
}



