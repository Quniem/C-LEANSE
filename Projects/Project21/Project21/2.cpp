#include<iostream>
#include<fstream>
#include<limits>
#include<ctime> // this is used for "srand(time(null))"
#include <cstdlib>

void upload() {
	std::srand(std::time(NULL)); // This Is what is used to generate random numbers
	std::ofstream myfile("output.txt"); // opens file from output.txt 
	for (int i = 0; i < 30; ++i) { // Array saying to pick list 30 
		int n = rand() % 50 + 1; //stating they rand
		n -= 25;			// and ranging from -25 - 25
		myfile << n << '\n'; // ending saying n is equal to all the elements in my file...:/

	}
}


int main()
{
	upload();
	std::ifstream myfile("output.txt");// File with the random generated numbers
	int min = std::numeric_limits<int>::max();
	int max = std::numeric_limits<int>::min();
	double sum = 0;
	for (int i = 0; i < 30; ++i) { //for loop used to declare 30 numbers in the output file that would be used
		int n = 0;
		myfile >> n;
		if (min > n) {
			min = n;  //Line used for the Minimum.
		}
		if (max < n) {
			max = n;	//Line used for the Max
		}
		sum += n;	// Sum out of the list of number by adding everything together
	}
	sum /= 30.0; // FORMULA that is for the average takes sum and / it by 30

	
	std::cout << "max = " << max << " min = " << min << " average = " << sum << '\n';
	// Above are lines that are utilized explaining first, Maximum # in the file prints first, Min, & Average. 	

	system("PAUSE");// pause screen so that it will give time to see results.
}
