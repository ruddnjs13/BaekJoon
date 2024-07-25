#include <iostream>
using namespace std;

int Jegob(int n) {
	if (n == 0) {
		return 1;
	}
	else
	{
		return 2 * Jegob(n - 1);
	}
}

int main() 
{
	int n;
	cin >> n;
	cout << Jegob(n);
}