#include <iostream>
#include <math.h>
using namespace std;


//Base class
class Points 
{
	public:
		//constructor
		Points ( float x, float y)
		{
			cout << "point created" << endl;
			x_coord = x;
			y_coord = y;
		}


		float xposition()
		{
			return x_coord;
		}

		float yposition() { return y_coord;}

		protected:
			float x_coord;
			float y_coord;
};


//derived class to Points. expand it as sphere

class Sphere : public Points 
{
	public:
		//Constructing derived class
		Sphere (float x, float y, float r): Points(x,y)
		{
			cout << "constructing sphere" << endl;
			//Points(x,y);
			
			radius = r;
		}

		float volume()
		{
			return 4.0/3.0 * M_PI * radius * radius * radius;
		}

		float ret_radius() { return radius;}

	protected: 
		float radius;
};


int main()
{
	Sphere p1(2,3,1);

	cout << "x Position of sphere: " << p1.xposition() << endl;
	cout << "y Position of sphere: " << p1.yposition() << endl;
	cout << "radius of sphere: " << p1.ret_radius() << endl;
	cout << "Volume of sphere: " << p1.volume() << endl;
	return 0;
}
