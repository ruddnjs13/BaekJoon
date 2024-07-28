#include <iostream>
using namespace std;

int Fibo(int n) {
	if (n <= 1) {
		return 1;
	}
	else {
		return Fibo(n - 1) + Fibo(n - 2);
	}
}

int main()
{
	int n;
	cin >> n;
	if (n == 0) {
		cout << 0;
	}
	else {
		cout << Fibo(n - 1);
	}

	return 0;
}