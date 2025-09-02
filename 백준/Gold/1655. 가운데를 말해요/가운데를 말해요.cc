#include <iostream>
#include <queue>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, inp;

	priority_queue<int, vector<int>, greater<int>> max_q;
	priority_queue<int> min_q;


	cin >> n;

	cin >> inp;

	min_q.push(inp);

	cout << inp << '\n';

	for (int j = 2; j <= n; j++)
	{
		cin >> inp;

		if (inp <= min_q.top())
		{
			min_q.push(inp);
		}
		else
		{
			max_q.push(inp);
		}

		if (min_q.size() < max_q.size())
		{
			min_q.push(max_q.top());
			max_q.pop();
		}

		while (min_q.size() - 1 > max_q.size())
		{
			max_q.push(min_q.top());
			min_q.pop();
		}

		if (j % 2 == 1)
		{
			cout << min_q.top() << '\n';
		}

		else
		{
			cout << min(min_q.top(), max_q.top()) << '\n';
		}

	}
	cout << '\n';
	return 0;
}