#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long n;
	cin >> n;

	cout << (((n % 3) == 0) ? "S" : (((n % 3) == 1) ? "U" : "O"));
}