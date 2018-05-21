#include<iostream>
#include<fstream>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<limits.h>
using namespace std;

int main()
{
	int i, n, mn, mx;
	ifstream myfile;
	myfile.open("output.txt");
	mn = INT_MAX;
	mx = INT_MIN;
	double sum = 0;
	for (i = 0; i < 30; ++i) {
		myfile >> n;
		if (mn > n)
			mn = n;
		if (mx < n)
			mx = n;
		sum += n;
	}
	sum /= 30.0;
	cout << "max = " << mx << " min = " << mn << " average = " << sum << endl;
	return 0;
}
