// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int answer;
	cout << "How old is Mico ?"<<endl;
	cin >> answer;
	if (answer==34)
	{
		cout << "you're right , Mico is 34" << endl;
	}
	else if (answer > 34)
	{
		cout << "Your Guess Is pretty high try again" <<endl;
	}
	else if (answer<34)
	{
		cout << "your Guess is Pretty low try again" << endl;
	}
	else
	{
		cout << "youre wrong try to guess again" << endl;
	} 
	while (answer != 34);
	system("pause");
	return 0;
}
//end function main