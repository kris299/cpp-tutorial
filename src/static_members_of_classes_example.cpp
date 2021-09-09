#include <iostream>
#include <math.h>

using namespace std;

//Creating a class for points in a 2D plane
class Points 
{
	public:
		//Static variables are shared by all objects of that class
		static int pointCount;

		// cosntructor definition
		Points(float x, float y)
		{
			cout << "Created point!" << endl;
			x_coord = x;
			y_coord = y;

			// incrementing pointcound with each created object
			pointCount++;
		}

		float distance(Points p2)
		{
			return
			sqrt((p2.x_coord-x_coord) * (p2.x_coord-x_coord) +
			     (p2.y_coord-y_coord) * (p2.y_coord-y_coord) ); 
		}

		private:

		float x_coord;
		float y_coord;
};

//Initializing the static member with the scope resolution operator ::
int Points::pointCount = 0;

int main()
{
	Points point1(1,2);
	Points point2(3,5);

	// Calling the static Member by scope resolution operator
	cout << "Number of points: " << Points :: pointCount <<endl;

	cout <<  "Distance between points: " <<point1.distance(point2) << endl;

	//Calling the static member as class member
	cout << "Number of points: " << point2.pointCount << endl;

	return 0;
}
