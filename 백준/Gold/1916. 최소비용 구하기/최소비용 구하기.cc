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

	vector<int> dist(n+1, INF);
	vector<vector<pair<int, int>>>  v(n + 1);

	for (int i = 0; i < m; i++)
	{
		cin >> a >> b >> c;
		v[a].push_back({ b,c });
	}

	cin >> start >> end;

	priority_queue < pair<int, int>, vector < pair<int, int>>, greater<pair<int, int>>> pq;

	dist[start] = 0;

	pq.push({ 0,start });

	while (!pq.empty())
	{
		auto [distance, node] = pq.top();
		pq.pop();

		if (distance > dist[node]) continue;

		for (auto& [neighbor, weight] : v[node])
		{
			if (distance + weight < dist[neighbor])
			{
				dist[neighbor] = distance + weight;
				pq.push({ dist[neighbor], neighbor});
			}
		}
	}

	cout << dist[end];
    
    return 0;
}