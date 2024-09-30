#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	int n, x;
	cin >> n >> x;

	int* inputs = new int[n];

	for (int i = 0; i < n; i++)
		cin >> inputs[i];

	int currentIdx = 0;

	while (true)
	{
		if (inputs[currentIdx] < x)
		{
			cout << currentIdx + 1;
			break;
		}
		currentIdx++;
		currentIdx %= n;
		x++;
	}
}