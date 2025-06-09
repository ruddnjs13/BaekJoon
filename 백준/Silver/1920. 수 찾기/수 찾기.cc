#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int binarySearch(const vector<int>& A, int key)
{
	int low = 0, high = A.size() - 1, mid = 0;

	while (low <= high)
	{
		mid = (low + high) / 2;

		if (A[mid] == key)
		{
			return 1;
		}
		else if (A[mid] > key)
			high = mid - 1;
		else if (A[mid] < key)
			low = mid + 1;
	}
	return 0;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, m, input;
	cin >> n;

	vector<int> A;

	for (int i = 0; i < n; i++)
	{
		cin >> input;
		A.push_back(input);
	}

	sort(A.begin(), A.end());

	cin >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> input;
		cout << binarySearch(A, input) << '\n';
	}
}