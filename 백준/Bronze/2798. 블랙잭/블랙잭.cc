#include <iostream>
using namespace std;

int main() 
{
	int n, m;
	cin >> n >> m;
	int * arr = new int[n];

	int max = 0;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++) 
	{
		int num1 = arr[i];
		for (int j = i + 1; j < n; j++) 
		{
			int num2 = arr[j];
			for (int k = j + 1; k < n; k++) {
				int num3 = arr[k];
				if ((num1 + num2 + num3) > max && (num1 + num2 + num3) <= m) {
					max = num1 + num2 + num3;
				}
			}
		}
	}
	cout << max;
}