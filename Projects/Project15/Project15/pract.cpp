#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	ifstream inFile;
	inFile.open("num.txt");
	
	if (inFile.fail()) {
		cerr << "errorr Opening file" << endl;
		exit(1);

	}
	double x, y, z, a;

	inFile >> x >> y;

	cout << " num1" << x << Endl;
	cout << " num2" << y << Endl;
	return 0;
}