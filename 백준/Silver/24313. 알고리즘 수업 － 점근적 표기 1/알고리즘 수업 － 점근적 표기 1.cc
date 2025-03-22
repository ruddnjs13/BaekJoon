#include<iostream>
#include<queue>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a, a1, c, n0;

	cin >> a1 >> a;
	cin >> c;
	cin >> n0;
	if ((a1 * n0 + a) <= (c * n0) && a1 <= c) {
		cout << 1;
	}
	else {
		cout << 0;
	}
}