#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int m, n;

	cin >> m >> n;
	for (int i = m; i <= n; i++) {
		bool isPrimeNum = true;
		if (i == 1) continue;
		for (int j = 2; j <= sqrt(i); j++) {
			if (i % j == 0) {
				isPrimeNum = false;
				break;
			}
		}
		if (isPrimeNum) {
			cout << i << '\n';
		}
	}
}