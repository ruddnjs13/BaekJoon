#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int n, m;
vector<vector<pair<int, int>>> path;
const long long INF = 1e15;

void FindRoute(vector<long long>& dist, int start)
{
    priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<>> pq;
    dist[start] = 0;
    pq.push({ 0,start });
    while (!pq.empty())
    {
        auto [d, u] = pq.top(); pq.pop();
        if (d > dist[u]) continue;
        for (auto& [v, w] : path[u])
        {
            if (dist[v] > d + w)
            {
                dist[v] = d + w;
                pq.push({ dist[v], v });
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    path.assign(n + 1, {});

    for (int i = 0; i < m; i++)
    {
        int a, b, c; cin >> a >> b >> c;
        path[a].push_back({ b,c });
        path[b].push_back({ a,c });
    }

    int v1, v2;
    cin >> v1 >> v2;

    vector<long long> dist1(n + 1, INF), dist2(n + 1, INF), dist3(n + 1, INF);
    FindRoute(dist1, 1);
    FindRoute(dist2, v1);
    FindRoute(dist3, v2);

    long long route1 = dist1[v1] + dist2[v2] + dist3[n];
    long long route2 = dist1[v2] + dist3[v1] + dist2[n];
    long long answer = min(route1, route2);

    if (answer >= INF) cout << -1;
    else cout << answer;
}
