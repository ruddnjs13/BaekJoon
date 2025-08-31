#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int n, x, m, t;
vector<vector<pair<int, int>>>  path;
vector<vector<int>> dist1; // 가는거
vector<int> dist2; // 오는거
int INF;

void FindRoute(vector<int>& dist, int start)
{
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
	dist[start] = 0;
	pq.push({ 0,start });

	while (!pq.empty())
	{
		auto [distance, node] = pq.top();
		pq.pop();

		if (distance > dist[node]) continue;

		for (auto& [neighbor, weight] : path[node])
		{
			if (dist[neighbor] > distance + weight)
			{
				dist[neighbor] = distance + weight;
				pq.push({ dist[neighbor], neighbor });
			}
		}
	}
}


int main()
{
	cin >> n >> m >> x;

	INF = 2147483647;

	path = vector<vector<pair<int, int>>>(n + 1);
	dist1 = vector<vector<int>>(n+1, vector<int>(n+1, INF));
	dist2 = vector<int>(n+1,INF);

	int a, b, c;

	for (int i = 0; i < m; i++)
	{
		cin >> a >> b >> c;
		path[a].push_back({ b,c });
	}

	for (int i = 1; i <= n; i++)
		FindRoute(dist1[i],i);

	FindRoute(dist2, x);

	int answer = 0;

	for (int i = 1; i <= n; i++)
		answer = max(dist1[i][x] + dist2[i], answer);

	cout << answer;

	return 0;
}
