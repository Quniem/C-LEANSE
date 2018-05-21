#include<iostream>
#include<fstream>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main()
{
	int i, n, mn, mx;
	ofstream myfile;
	srand(time(NULL));
	myfile.open("output.txt");
	for (i = 0; i < 30; ++i) {
		n = rand() % 50 + 1;
		n -= 25;
		myfile << n << endl;
	}
	myfile.close();
	return 0;
}
