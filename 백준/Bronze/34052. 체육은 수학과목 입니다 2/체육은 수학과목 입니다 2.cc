#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int sum=0, n;

	for (int i = 0; i < 4; i++)
	{
		cin >> n;
		sum += n;
	}

	sum += 300;

	cout << ((sum <= 1800) ? "Yes" : "No");

}
