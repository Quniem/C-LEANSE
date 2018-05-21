// ConsoleApplication12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
// ConsoleApplication11.cpp : Defines the entry point for the console application.
//Katelyn M. Johnson 04-13-18-2017
// Brief description: This program is a program for users' to be able to compute subject and individual student averages and highest- Lowest grade score for a class.
//The class grading system is based c++ programing and the technique i applied to the program were ; Arrays', cout&ci inputs', Switch statements, case and so much more.
// In the program it is simply directed for the user to understand as well as easy to use for computing grades and averages.

#include "stdafx.h"
#include <iostream>

using namespace std;

// Display: for display there will be several options including an exit that will cout out a program that leads to The computing systems for the subject/ students' average,lowest/highest grade and so on ask to be given in the project.

int main()
{
	{
	int choice;
	bool gameOn = true;
	while (gameOn != false) {
		cout << "___Operations___\n";
		cout << " 1 - Subject Average.\n";
		cout << " 2 - Subject Lowest Grade.\n";
		cout << " 3 - Student Average.\n";
		cout << " 4 - Student Highest Grade.\n";
		cout << " 5 - Student Highest Grade.\n";
		cout << " 6 - Student Lowest Grade.\n";
		cout << " 7 - Exit.\n ";
		cout << " Enter your choice and press return: ";

		cin >> choice;

		switch (choice)
		{
		case 1:
			cout << " Subjects' Average." << endl;
			cout << " Read and follow given directions below." << endl;

			{int n, i;
			float num[100], sum = 0.0, average;

			cout << "In order to find the average of the individual subjects Type in the number 7 for several grades given.... " << endl;
			cout << " Then enter each grade 1-7 to find the course average" << endl;
			cin >> n;

			while (n > 100 || n <= 0)
			{
				cout << "Error! Please range of (1 to 100)." << endl;
				cout << "try Harder to understand the Directions: ";
				cin >> n;
			}

			for (i = 0; i < n; ++i)
			{
				cout << i + 1 << " Grade: ";
				cin >> num[i];
				sum += num[i];
			}

			average = sum / n;
			cout << " Overall Courses Average together = " << average;
			}


			// rest of code here
			break;
		case 2:	cout << " Subject' Highest Grade." << endl;
			cout << " Please follow direction given in order to recieve the largest grade. " << endl;

			{
				int i, n;
				float arr[100];

				cout << "enter 7: " << endl;
				cout << " Enter all 7 grades in order to obtain the largest grade in the subject." << endl;
				cin >> n;
				cout << endl;

				// Store number entered by the user
				for (i = 0; i < n; ++i)
				{
					cout << "Enter Grade " << i + 1 << " : ";
					cin >> arr[i];
				}

				// Loop to store largest number to arr[0]
				for (i = 1; i < n; ++i)
				{
					// Change < to > if you want to find the smallest element
					if (arr[0] < arr[i])
						arr[0] = arr[i];
				}
				cout << "Best Grade! = " << arr[0];
			}


			// rest of code here
			break;
		case 3:
			cout << "Subjects' Lowest Grade" << endl;
			cout << "Pay attention to given directions in order to calculate the subjects Lowest grade.!" << endl;
			{
				int i, n;
				float arr[100];

				cout << "enter 7 for 7 %s': " << endl;
				cout << " Enter all 7 grades in order to obtain the Lowest grade in the subject." << endl;
				cin >> n;
				cout << endl;

				// Store number entered by the user
				for (i = 0; i < n; ++i)
				{
					cout << "Enter Grade % " << i + 1 << " : ";
					cin >> arr[i];
				}

				// Loop to store largest number to arr[0]
				for (i = 1; i < n; ++i)
				{
					// Change < to > if you want to find the smallest element
					if (arr[0] > arr[i])
						arr[0] = arr[i];
				}
				cout << "Worst Grade! = " << arr[0];
			}


			// rest of code here
			break;
		case 4:
			cout << "Student Averages' " << endl;
			cout << "In order to find the Overall classes average follow the follwing directions " << endl;

			//array for average
			{
				int n, i;
				float num[300], sum = 0.0, average;

				cout << "In order to find the avaerage of all 3 classes put the number 3 Then put the Individual Averages of all classes " << endl;
				cout << " 1. being Math , 2. Being Reading , and 3. Being Writing" << endl;
				cin >> n;

				while (n > 100 || n <= 0)
				{
					cout << "Error! number should in range of (1 to 100)." << endl;
					cout << "Enter the number again: ";
					cin >> n;
				}

				for (i = 0; i < n; ++i)
				{
					cout << i + 1 << " Subject average ";
					cin >> num[i];
					sum += num[i];
				}

				average = sum / n;
				cout << " Overall Courses Average together = " << average;

			}

			// rest of code here
			break;
		case 5:
			cout << " Students' Highest Grade." << endl;
			cout << " Please follow direction given in order to recieve the largest grade. " << endl;

			{
				int i, n;
				float arr[100];

				cout << "enter 7: " << endl;
				cout << " Enter all 7 grades in order to obtain the largest grade for the students'." << endl;
				cin >> n;
				cout << endl;

				// Store number entered by the user
				for (i = 0; i < n; ++i)
				{
					cout << "Enter Grade " << i + 1 << " : ";
					cin >> arr[i];
				}

				// Loop to store largest number to arr[0]
				for (i = 1; i < n; ++i)
				{
					// Change < to > if you want to find the smallest element
					if (arr[0] < arr[i])
						arr[0] = arr[i];
				}
				cout << "Best Grade! = " << arr[0];
			}

			// rest of code here
			break;
		case 6:
			cout << " Student Lowest Grade" << endl;
			cout << "Pay attention to given directions in order to calculate the students Lowest grade.!" << endl;
			{
				int i, n;
				float arr[100];

				cout << "enter 7 for 7 %s': " << endl;
				cout << " Enter all 7 grades in order to obtain the Lowest grade in the for the students." << endl;
				cin >> n;
				cout << endl;

				// Store number entered by the user
				for (i = 0; i < n; ++i)
				{
					cout << "Enter Grade % " << i + 1 << " : ";
					cin >> arr[i];
				}

				// Loop to store largest number to arr[0]
				for (i = 1; i < n; ++i)
				{
					// Change < to > if you want to find the smallest element
					if (arr[0] > arr[i])
						arr[0] = arr[i];
				}
				cout << "Worst Grade for students! = " << arr[0];
			}
			// rest of code here
			break;
		case 7:
			cout << "End of Program.\n";
			gameOn = false;
			break;

		default:
			cout << "???try again??. \n";
			cout << "Choose again.\n";
			cin >> choice;
			break;
		}

	}
}
return 0;

}



