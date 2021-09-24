#include <iostream>
using namespace std;

class Square
{
	public:
		void setvalues(double x, double y)
		{
			length = x;
			width = y;
		}

		// Overloading "+" operator to add to Square objects

		Square operator+(const Square& b)
		{
			Square square;
			square.length = this->length + b.length;
			square.width = this->width+ b.width;
			return square;
		}

		double length;
		double width;

	protected:
};

int main() {

	Square sq1;
	Square sq2;
	Square sq3;

	sq1.setvalues(1,2);
	sq2.setvalues(2,3);

	cout << "length of square1: " << sq1.length << endl;
	cout << "width of square1: " << sq1.width << endl;
	cout << "length of square2: " << sq2.length << endl;
	cout << "width of square2: " << sq2.width << endl << endl;

	sq3 = sq1 + sq2;

	cout << "with: square3 = square1 + square2" << endl;	
	cout << "length of square3: " << sq3.length << endl;
	cout << "width of square3: " << sq3.width << endl;
	return 0;
}

