#include <bits/stdc++.h>
using namespace std;
#define s(x) scanf("%d", &x) 

int main() {

	int i, n, mn, mx;
	freopen("output.txt", "w", stdout); 
	srand(time(NULL)); 
	for (i = 0; i<30; i++)
	{
		n = rand() % 50 + 1;
		n = n - 25;
		cout << n << endl;
	}
	fclose(stdout); 
	return 0;
}