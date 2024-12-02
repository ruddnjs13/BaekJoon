#include<iostream>
#include<cmath>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	double t, x, y;

	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> x >> y;
		double val = floor(sqrt(y - x));
		cout << ceil((y - x) / val) + val-1 << '\n';
	}
}