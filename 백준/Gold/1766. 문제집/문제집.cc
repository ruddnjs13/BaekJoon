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

	for (int i = 0; i < m; i++)
	{
		cin >> a >> b;

		graph[a].push_back(b);
		v[b]++;
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

		cout << node << ' ';

		for (auto i : graph[node])
		{
			v[i]--;
			if (v[i] == 0)
				q.push(i);
		}
	}
}