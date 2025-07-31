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

    int v, e, k;
    cin >> v >> e >> k;

    vector<vector<pair<int, int>>> nodes(v + 1);
    vector<int> dist(v + 1, INF);

    for (int i = 0; i < e; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        nodes[a].push_back({b, c});
    }

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;

    dist[k] = 0;
    pq.push({0, k});  // 거리, 노드 순

    while (!pq.empty())
    {
        auto [distance, node] = pq.top();
        pq.pop();

        if (distance > dist[node]) continue;

        for (auto &[neighbor, weight] : nodes[node])
        {
            if (dist[neighbor] > distance + weight)
            {
                dist[neighbor] = distance + weight;
                pq.push({dist[neighbor], neighbor});
            }
        }
    }

    for (int i = 1; i <= v; i++)
    {
        if (dist[i] == INF)
            cout << "INF\n";
        else
            cout << dist[i] << '\n';
    }
}
