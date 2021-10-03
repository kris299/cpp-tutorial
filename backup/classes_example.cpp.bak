#include <iostream>
#include <math.h>
using namespace std;

// objects are defined in classes.

// defining a class ...
class ball {

	//For members exist 3 access specifier: public, private, and protected
	
	//Public members of the class. Its data is accessable inside 
	//the program. Data and functions that shall be accessable outside the
	//class should go here.
	public:
		float radius;
		float x_speed;
		float y_speed;
		float density;

		// class member function
		float volume()
		{
			return 4.0/3.0 * M_PI * radius*radius*radius;
		}
		
		// class member function to set the x_coord and y_coord
		void set_coord(float x, float y)
		{ 
			x_coord = x;
			y_coord = y;
		}

		// another class member function
		float mass() 
		{
			return volume() * density;
		}

		// Just the declaration of a function. Its definition may be 
		// of the class.
		float kinetic_energy();
		float speed();

		// contructor spezial memberfunction of a class with the same name
		// usfull for initializing values
		ball()
		{
			cout << "ball object created" << endl;
		}
		
		// destructor removes the object from memory
		~ball()
		{
			cout << "ball object destroyed" << endl;
		}

		void set_angular(float ang)
		{
			angular_frequency = ang;
		}
	//private members go here. private is the default specifier.
	//They can only be accessed by the class and its memberfunctions.
	private:
		
		float angular_frequency;
		float angular_axis;

	// protected members go here.
	// protected members are like private members, but can also be 
	// accessed in child classes or derived classes.
	protected:

		float y_coord;
		
		float x_coord;

		// another class member function
};

// derived class of the ball class. Derived classes are useful to expand on the 
// perent class. It has access to public and protected members of the parent class.
// To make public members of the parent class public in the derived class, it 
// needs to be stated at definition.
class derived_ball: public ball
{
	public:
		// class to set values for x_speed and y_speed
		void set_velo_xy(float vx, float vy)
		{
			x_speed = vx;
			y_speed = vy;
		}

		// class to set the values for radius
		void set_radius(float rad)
		{
			radius = rad;
		}

		// class to set value for the density
		void set_density(float dens)
		{
			density = dens;
		}

		float get_density()
		{
			return density;
		}
	
		
		// class member function to set the x_coord and y_coord
		void set_coord_protected(float x, float y)
		{
			x_coord = x;
			y_coord = y;
		}

		// To return the mass. The mass() function of parent class can not be
		// called by the program in case of the derived object.
		float mass_protected() 
		{
			// parent member function volume can be accessed inside this
			// derived class.
			// But derived_ball.volume() can not be accessed from the 
			// outside
			return volume() * density;
		}
		
		float kinetic_energy_derived()
		{
			return 1.0/2.0 * mass_protected() * speed_derived();
		}
		
		float speed_derived()
		{
			return sqrt(x_speed  * x_speed + y_speed * y_speed);
		}

};

// defining a class member function outside the class.
float ball::speed() 
{
	return sqrt(x_speed  * x_speed + y_speed * y_speed);
}

// another function definition outside of its class.
float ball::kinetic_energy()
{
	return 1.0/2.0 * mass() * speed();
}

int main()
{
	// creating the ball object ball1
	ball ball1;

	// creating the derived_ball object ball2 from the derived class
	derived_ball ball2;

	//public members may be accessed directly 
	ball1.radius = 1;

	// private members can only be accessed with (public)
	// memberfunctions
	ball1.set_coord(0, 0);
	ball1.x_speed = 2;
	ball1.y_speed = 0;
	ball1.density = 1;
	ball2.set_angular(3);
	// members of derived objects are not public(?)
	// need a memberfunction to set values
	ball2.set_radius(1);

	// prectected members can be accessed with memberfunctions
	// or by derived classes
	ball2.set_coord_protected(5, 0);

	ball2.set_density(2);
	
	ball2.set_velo_xy(2.2, 1.2);
	cout << "Volume of ball1 = " << ball1.volume() << endl;
	cout << "Volume of ball2 = " << ball2.volume() << endl;
	cout << "Mass of ball1 = " << ball1.mass() <<endl;
	cout << "Mass of ball2 = " << ball2.mass_protected() <<endl;
	cout << "Speed of ball1 = " << ball1.speed() << endl;
	cout << "Speed of ball2 = " << ball2.speed_derived() << endl;
	cout << "Kinetic energy of ball1 = " << ball1.kinetic_energy() << endl;
	cout << "Kinetic Energy of ball2 = " << ball2.kinetic_energy_derived() << endl;

	return 0;
}
