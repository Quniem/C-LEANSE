// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>

using namespace std;

int main() {
	cout << "Please enter number of working hours :  ";
	int num_of_working_hours;
	cin >> num_of_working_hours;  // This will take the number entered by you and out it in num_of_working_hours variable
	float rate_of_each_hour = 7.5; // Rate of each hour
	float salary;

	if (num_of_working_hours <= 40) {
		salary = (rate_of_each_hour * 40);
	}
	else {

		salary = (rate_of_each_hour * 40) + (1.5 * rate_of_each_hour * (num_of_working_hours - 40)); // Calculates salary
	}

	cout << "The salary of the person is : " << salary;
	return 0;

}