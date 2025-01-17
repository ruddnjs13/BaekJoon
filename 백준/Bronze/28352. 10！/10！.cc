#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long sum = 1;

	int n;

	cin >> n;
	for (int i = 1; i <= n; i++) {
		sum *= i;
	}
	cout << sum / 604800;
}