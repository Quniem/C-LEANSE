#include < iostream> //Required for cout, and endl
#include < cmath >	// Required for sqrt()
#include stdafx.h
using namespace std ;


int main()
{
	// Declare and initialize objects.
	double x1(1), y1(5), x2(4), y2(7);
	//side1, side2, distance;

// Compute sides of a right triangle.
	double side1 = x2 - x1;
	double side2 = y2 - y1;
	double distance - sqrt(side1*side1 + side2*side2);

	cout << "The distance between the two points is"
		<< distance << endl;

	//. Exit program.

}

    return 0;
}

