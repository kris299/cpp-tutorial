#include <iostream>
using namespace std;

#define N 4


class Sphere {
	public:
		// dummy contructor. needed for allocating dynamic array of object
		Sphere() {}

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
	// initializing pointer to array of N objects using the dummy constructor
	Sphere* mysphere_array = new Sphere[N];

	// looping over array of objects. calling parameterised contructor.
	for (int i=0; i<N; ++i){

		mysphere_array[i] = Sphere(i*i);
	}

	// looping over array of objects. printing value of radius
	for (int i=0; i<N; ++i){
		cout << "radius of sphere is: " << mysphere_array[i].radius << endl;

	}
	
	// delete array
	delete [] mysphere_array;
	return 0;
}



