#include <iostream>
using namespace std;

class Length
{
	public:
		float length_pub;

		// So called friend functions have full access to the class members,
		// regardless of their public private or protected status. They
		// need to be declared as friend inside the class.
		friend void print_length(Length len);

		//normal public member function
		void set_length(float pub, float priv, float prot);
	private:
		float length_priv;
	protected:
		float length_prot;
};


//definition of the memberfunction
void Length::set_length(float pub, float priv, float prot)
{
	length_pub = pub;
	length_priv = priv;
	length_prot = prot;
}

//definition of the friend function as normal function
void print_length(Length len)
{
	cout << "public length = " << len.length_pub << endl;
	cout << "private length = " << len.length_priv << endl;
	cout << "protected length = " << len.length_prot << endl;
}

int main()
{
	Length mylength;
	mylength.set_length(1,2,3);
	print_length(mylength);
	return 0;
}




