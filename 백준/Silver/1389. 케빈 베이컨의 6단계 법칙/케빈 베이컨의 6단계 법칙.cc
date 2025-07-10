#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main()
{
	int n, m, a, b;

	cin >> n >> m;

	vector<vector<int>> v(n+1);
	vector<int> count(n + 1);

	for (int i = 0; i < m; i++)
	{
		cin >> a >> b;

		v[a].push_back(b);
		v[b].push_back(a);
	}

	for (int i = 1; i <= n; i++)
	{
		vector<bool> isVisited(n + 1);

		queue<int> q;

		int roop = 0;

		q.push(i);

		while (q.empty() == false)
		{
			roop++;
			int qSize = static_cast<int>(q.size());
			for (int j = 0; j < qSize; j++)
			{
				int front = q.front();
				isVisited[front] = true;
				q.pop();

				for (int k = 0; k < v[front].size(); k++)
				{
					int node = v[front][k];

					if (isVisited[node] == false)
					{
						isVisited[node] = true;
						q.push(node);
						count[i] += roop;
					}
				}

			}
		}
	}

	int answer = 1;

	for (int i = n; i > 0; i--)
	{
		if (count[i] <= count[answer])
		{
			answer = i;
		}
	}
	cout << answer;
}