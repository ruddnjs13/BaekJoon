#include<iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long a, b, mod = 1,  min, max;

	cin >> a >> b;

	max = a;
	min = b;

	while (1) {
		if (max < min) {
			int temp = max;
			max = min;
			min = temp;
		}
		mod = max % min;
		if (mod == 0) {

			cout << (a * b) / min;
			break;
		}
		max  = min;
		min = mod;
	}
}