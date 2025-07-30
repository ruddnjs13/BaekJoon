#include <iostream>
#include <vector>
#include <queue>
using namespace std;

const int INF = 999999999;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, m, a, b, c, start, end;

	cin >> n >> m;


	vector < pair<int, vector<int>>> dist(n + 1, { INF,vector<int>()});
	vector<vector<pair<int, int>>>  v(n + 1);

	for (int i = 0; i < m; i++)
	{
		cin >> a >> b >> c;
		v[a].push_back({ b,c });
	}

	cin >> start >> end;

	priority_queue < pair<int, int>, vector < pair<int, int>>, greater<pair<int, int>>> pq;

	dist[start] = { 0,vector<int>(1,start)};

	pq.push({ 0,start });

	while (!pq.empty())
	{
		auto [distance, node] = pq.top();
		pq.pop();

		if (distance > dist[node].first) continue;

		for (auto& [neighbor, weight] : v[node])
		{
			if (distance + weight < dist[neighbor].first)
			{
				dist[neighbor].first = distance + weight;

				dist[neighbor].second.clear();

				for (auto &i : dist[node].second)
				{
					dist[neighbor].second.push_back(i);
				}
				dist[neighbor].second.push_back(neighbor);
				pq.push({ dist[neighbor].first, neighbor});
			}
		}
	}

	cout << dist[end].first << '\n';
	cout << dist[end].second.size() << '\n';

	for (auto i : dist[end].second)
	{
		cout << i << ' ';
	}
}
