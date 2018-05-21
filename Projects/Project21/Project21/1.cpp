#include<iostream>
#include<fstream>
#include<ctime> // this is used for "srand(time(null))"
#include <cstdlib>

#if 0
int upload()
{
	std::srand(std::time(NULL)); // This Is what is used to generate random numbers
	std::ofstream myfile("output.txt"); // opens file from output.txt 
	for (int i = 0; i < 30; ++i) { // Array saying to pick list 30 
		int n = rand() % 50 + 1; //stating they rand
		n -= 25;			// and ranging from -25 - 25
		myfile << n << '\n'; // ending saying n is equal to all the elements in my file...:/
	}
}
#endif
