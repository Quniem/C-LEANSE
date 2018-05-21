// ConsoleApplication6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cmath>
#include <iostream>

using namespace std;


int _tmain(int argc_, _TCHAR* argv[])
{
	double x, y, z1, z2, z3,z4;
	cout << "enter the value of x \n";
	cin >> x;
	cout << "enter the value of y" << endl;
	cin >> y;
	//z1 = x*y;
	/* cout << "the multiplication of x and y is equale to: \n" << z << endl; */
	//z2 = x / y;
	/*cout << "the division of x and y is equale to: \n" << z2 << endl;*/
	//z3 = x + y;
	/*cout << "the addition of x and y is equale to :\n" << z3 << endl;*/
	z4 = x - y;
	cout << "the subtracttion of x and y is equale to: \n" << z4 << endl;
    return 0;
}

