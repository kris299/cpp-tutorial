#include <iostream>
#include <math.h>
using namespace std;


class Sphere 
{
	public:
		// Constructor
		Sphere(float rad, float dens, float x, float y)
		{
			cout << "Constructed Sphere object" << endl;
			radius = rad;
			density = dens;
			x_coord = x;
			y_coord = y;
		}

		float volume() 
		{
			return 3.0/4.0 * M_PI * radius*radius*radius;
		}

		private:
			float radius;
			float density;
			float x_coord;
			float y_coord;
};

int main() 
{
	// Declaring two sphere objects
	Sphere sphere2 (2.2, 1.2, 0, 0.3);

	// Declaring a pointer to a sphere object (class)
	Sphere *pointer_to_sphere;

	// Save address of sphere1 in this pointer
	pointer_to_sphere = &sphere1;

	cout << "Calling member by pointer to object sphere1: " 
		<< pointer_to_sphere->volume()
	       	<< endl;
	cout << "Address of this pointer is: " << pointer_to_sphere << endl;

	return 0;
}

	

