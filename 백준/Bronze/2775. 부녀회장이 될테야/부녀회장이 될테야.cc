#include<iostream>

using namespace std;

int main()
{
	int t, k, n;
	int arr[15][15] = { 0, };

	cin >> t;

	for (int i = 0; i < 15; i++) {
		arr[0][i] = i;
	}

	for (int i = 1; i < 15; i++) {
		for (int j = 1; j < 15; j++) {
			arr[i][j] = arr[i][j - 1] + arr[i - 1][j];
		}
	}

	for (int tc = 0; tc < t; tc++) 
	{
		cin >> k >> n;
		cout << arr[k][n] << '\n';
	}
}