#include <bits/stdc++.h> 

using namespace std;
#define s(x) scanf("%d", &x) 
int main() {
	int i, n, mn, mx;
	freopen("output.txt", "r", stdin);
	mn = INT_MAX;
	mx = INT_MAX;

	int sum = 0;
	for (i = 0; i < 30; i++)
	{
		s(n);
		if (mn > n) {
			mn = n;
		};

		if (mx < n) {
			mx = n;
		}
		sum += n;
	}
	printf("max = %d min = %d avg = %d\n", mn, mx, sum / 30);
	return 0;
}

