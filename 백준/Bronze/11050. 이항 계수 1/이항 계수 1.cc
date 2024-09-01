#include<iostream>

using namespace std;

int Sum(int k) {
	int sum = 1;
	for (int i = 1; i <= k; i++) {
		sum *= i;
	}
	return sum;
}
int Sum2(int n, int k) {
	int sum = 1;
	for (int i = 0; i < k; i++) {
		sum *= n - i;
	}
	return sum;
}

int main()
{
	int n, k;
	cin >> n >> k;

	cout <<  Sum2(n,k) / Sum(k);
}