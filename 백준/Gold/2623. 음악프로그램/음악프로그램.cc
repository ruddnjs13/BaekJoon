#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main()
{
	int n, m, a, b;

	cin >> n >> m;

	vector<vector<int>> graph(n + 1);
	vector<int> v = vector<int>(n+1, 0);

	vector<int> answer;

	int before;

	for (int i = 0; i < m; i++)
	{

		cin >> a;
		
		for (int j = 0; j < a; j++)
		{
			cin >> b;

			if (j != 0)
			{
				graph[before].push_back(b);
				v[b]++;
			}

			before = b;
		}
	}

	priority_queue<int,vector<int>,greater<int>> q;

	for (int i = 1; i < v.size(); i++)
	{
		if (v[i] == 0)
			q.push(i);
	}

	while (q.empty() == false)
	{
		int node = q.top();
		q.pop();

		answer.push_back(node);

		for (auto i : graph[node])
		{
			v[i]--;
			if (v[i] == 0)
				q.push(i);
		}
	}

	bool flag = false;

	for (auto i : v)
	{
		if (i > 0)
		{
			flag = true;
		}
	}

	if (flag)
		cout << "0";
	else
	{
		for (auto i : answer)
			cout << i << '\n';
	}
}
